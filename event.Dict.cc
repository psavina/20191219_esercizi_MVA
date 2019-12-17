// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME eventdODict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "event.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_myEvtcLcLevent(void *p = 0);
   static void *newArray_myEvtcLcLevent(Long_t size, void *p);
   static void delete_myEvtcLcLevent(void *p);
   static void deleteArray_myEvtcLcLevent(void *p);
   static void destruct_myEvtcLcLevent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::myEvt::event*)
   {
      ::myEvt::event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::myEvt::event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("myEvt::event", ::myEvt::event::Class_Version(), "event.h", 15,
                  typeid(::myEvt::event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::myEvt::event::Dictionary, isa_proxy, 4,
                  sizeof(::myEvt::event) );
      instance.SetNew(&new_myEvtcLcLevent);
      instance.SetNewArray(&newArray_myEvtcLcLevent);
      instance.SetDelete(&delete_myEvtcLcLevent);
      instance.SetDeleteArray(&deleteArray_myEvtcLcLevent);
      instance.SetDestructor(&destruct_myEvtcLcLevent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::myEvt::event*)
   {
      return GenerateInitInstanceLocal((::myEvt::event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::myEvt::event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace myEvt {
//______________________________________________________________________________
atomic_TClass_ptr event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *event::Class_Name()
{
   return "myEvt::event";
}

//______________________________________________________________________________
const char *event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::myEvt::event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::myEvt::event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::myEvt::event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::myEvt::event*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace myEvt
namespace myEvt {
//______________________________________________________________________________
void event::Streamer(TBuffer &R__b)
{
   // Stream an object of class myEvt::event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(myEvt::event::Class(),this);
   } else {
      R__b.WriteClassBuffer(myEvt::event::Class(),this);
   }
}

} // namespace myEvt
namespace ROOT {
   // Wrappers around operator new
   static void *new_myEvtcLcLevent(void *p) {
      return  p ? new(p) ::myEvt::event : new ::myEvt::event;
   }
   static void *newArray_myEvtcLcLevent(Long_t nElements, void *p) {
      return p ? new(p) ::myEvt::event[nElements] : new ::myEvt::event[nElements];
   }
   // Wrapper around operator delete
   static void delete_myEvtcLcLevent(void *p) {
      delete ((::myEvt::event*)p);
   }
   static void deleteArray_myEvtcLcLevent(void *p) {
      delete [] ((::myEvt::event*)p);
   }
   static void destruct_myEvtcLcLevent(void *p) {
      typedef ::myEvt::event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::myEvt::event

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_eventdODict_Impl() {
    static const char* headers[] = {
"event.h",
0
    };
    static const char* includePaths[] = {
"/home/psavina/Software/Root/install/include",
"/home/psavina/Dottorato/esercizi/20191219_esercizi_MVA/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "eventdODict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace myEvt{class __attribute__((annotate("$clingAutoload$event.h")))  event;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "eventdODict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "event.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"myEvt::event", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("event.Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_eventdODict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_eventdODict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_eventdODict() {
  TriggerDictionaryInitialization_eventdODict_Impl();
}
