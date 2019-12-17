#-------------------------------------------------------------
# author: Pierpaolo Savina
# date:	  19/12/2019
# version: 1.0
#-------------------------------------------------------------

SHELL := bash
SUFFIXES := .o .cc .cxx


CXXFLAGS := `root-config --cflags` -fPIC
LDFLAGS  := `root-config --ldflags`
GLIBS    := `root-config --glibs` -lTMVA

CXX := g++

EXES := $(basename $(wildcard *.cxx))
OBJS := $(patsubst %.cc, %.o, $(wildcard *.cc))

LINKDEFS := $(patsubst %.LinkDef.h, %, $(wildcard *.LinkDef.h ../include/*.LinkDef.h))
OBJS += $(addsuffix .Dict.o, $(LINKDEFS))
.PRECIOUS: $(addsuffix .Dict.h, $(LINKDEFS)) $(addsuffix .Dict.cc, $(LINKDEFS))

DEPS := $(patsubst %.o, %.P, $(OBJS)) $(addsuffix .P, $(EXES))

define cxx_compile_with_dependency_creation
  $(COMPILE.cc) -MD -o $@ $<
  @sed -e 's|.*:|$*.o:|' <$*.d >$*.P
  @sed -e 's/.*://' -e 's/\\$$//' <$*.d | fmt -1 | sed -e 's/^ *//' -e 's/$$/:/' >>$*.P
  @rm -f $*.d
endef

define cxx_link_rule
  $(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@ $(shell root-config --libs) -lTMVA
endef

%.o: %.cc
	$(call cxx_compile_with_dependency_creation)

%.o: %.cxx
	$(call cxx_compile_with_dependency_creation)

%: %.o
	$(call cxx_link_rule)

%.Dict.cc %.Dict.h: %.h %.LinkDef.h
	$(ROOTSYS)/bin/rootcint -v4 -f $@ -c -I. $() $^
.PHONY: all
all: $(EXES)

prova: prova.o $(OBJS)


.PHONY: clean
clean:
	- $(RM) -f $(OBJS) ../include/*.Dict.{h,cc} $(addsuffix .o, $(EXES)) $(DEPS)
-include $(DEPS)
