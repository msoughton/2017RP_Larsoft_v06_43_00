// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dune_DAQTriggerSim_TriggerDataProducts_dict

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
#include "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DAQTriggerSim/TriggerDataProducts/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *artcLcLPtrlEtriggersimcLcLBasicTriggergR_Dictionary();
   static void artcLcLPtrlEtriggersimcLcLBasicTriggergR_TClassManip(TClass*);
   static void *new_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p = 0);
   static void *newArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR(Long_t size, void *p);
   static void delete_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p);
   static void deleteArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p);
   static void destruct_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Ptr<triggersim::BasicTrigger>*)
   {
      ::art::Ptr<triggersim::BasicTrigger> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Ptr<triggersim::BasicTrigger>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Ptr<triggersim::BasicTrigger>", ::art::Ptr<triggersim::BasicTrigger>::Class_Version(), "canvas/Persistency/Common/Ptr.h", 110,
                  typeid(::art::Ptr<triggersim::BasicTrigger>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLPtrlEtriggersimcLcLBasicTriggergR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Ptr<triggersim::BasicTrigger>) );
      instance.SetNew(&new_artcLcLPtrlEtriggersimcLcLBasicTriggergR);
      instance.SetNewArray(&newArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR);
      instance.SetDelete(&delete_artcLcLPtrlEtriggersimcLcLBasicTriggergR);
      instance.SetDeleteArray(&deleteArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR);
      instance.SetDestructor(&destruct_artcLcLPtrlEtriggersimcLcLBasicTriggergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Ptr<triggersim::BasicTrigger>*)
   {
      return GenerateInitInstanceLocal((::art::Ptr<triggersim::BasicTrigger>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Ptr<triggersim::BasicTrigger>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLPtrlEtriggersimcLcLBasicTriggergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Ptr<triggersim::BasicTrigger>*)0x0)->GetClass();
      artcLcLPtrlEtriggersimcLcLBasicTriggergR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLPtrlEtriggersimcLcLBasicTriggergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_Dictionary();
   static void artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_TClassManip(TClass*);
   static void *new_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p = 0);
   static void *newArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(Long_t size, void *p);
   static void delete_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p);
   static void deleteArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p);
   static void destruct_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::PtrVector<triggersim::BasicTrigger>*)
   {
      ::art::PtrVector<triggersim::BasicTrigger> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::PtrVector<triggersim::BasicTrigger>));
      static ::ROOT::TGenericClassInfo 
         instance("art::PtrVector<triggersim::BasicTrigger>", ::art::PtrVector<triggersim::BasicTrigger>::Class_Version(), "canvas/Persistency/Common/PtrVector.h", 46,
                  typeid(::art::PtrVector<triggersim::BasicTrigger>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_Dictionary, isa_proxy, 4,
                  sizeof(::art::PtrVector<triggersim::BasicTrigger>) );
      instance.SetNew(&new_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR);
      instance.SetNewArray(&newArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDelete(&delete_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDeleteArray(&deleteArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDestructor(&destruct_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::PtrVector<triggersim::BasicTrigger>*)
   {
      return GenerateInitInstanceLocal((::art::PtrVector<triggersim::BasicTrigger>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::PtrVector<triggersim::BasicTrigger>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::PtrVector<triggersim::BasicTrigger>*)0x0)->GetClass();
      artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)
   {
      ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >", ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >","art::Wrapper<std::vector<art::PtrVector<triggersim::BasicTrigger> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<triggersim::BasicTrigger> >*)
   {
      ::art::Wrapper<vector<triggersim::BasicTrigger> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<triggersim::BasicTrigger> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<triggersim::BasicTrigger> >", ::art::Wrapper<vector<triggersim::BasicTrigger> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<triggersim::BasicTrigger> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<triggersim::BasicTrigger> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<triggersim::BasicTrigger> >","art::Wrapper<std::vector<triggersim::BasicTrigger> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<triggersim::BasicTrigger> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<triggersim::BasicTrigger> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<triggersim::BasicTrigger> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<triggersim::BasicTrigger> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HardwarecLcLHardwareID_Dictionary();
   static void HardwarecLcLHardwareID_TClassManip(TClass*);
   static void *new_HardwarecLcLHardwareID(void *p = 0);
   static void *newArray_HardwarecLcLHardwareID(Long_t size, void *p);
   static void delete_HardwarecLcLHardwareID(void *p);
   static void deleteArray_HardwarecLcLHardwareID(void *p);
   static void destruct_HardwarecLcLHardwareID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hardware::HardwareID*)
   {
      ::Hardware::HardwareID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Hardware::HardwareID));
      static ::ROOT::TGenericClassInfo 
         instance("Hardware::HardwareID", 11, "HardwareElements.h", 27,
                  typeid(::Hardware::HardwareID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HardwarecLcLHardwareID_Dictionary, isa_proxy, 12,
                  sizeof(::Hardware::HardwareID) );
      instance.SetNew(&new_HardwarecLcLHardwareID);
      instance.SetNewArray(&newArray_HardwarecLcLHardwareID);
      instance.SetDelete(&delete_HardwarecLcLHardwareID);
      instance.SetDeleteArray(&deleteArray_HardwarecLcLHardwareID);
      instance.SetDestructor(&destruct_HardwarecLcLHardwareID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hardware::HardwareID*)
   {
      return GenerateInitInstanceLocal((::Hardware::HardwareID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Hardware::HardwareID*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HardwarecLcLHardwareID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Hardware::HardwareID*)0x0)->GetClass();
      HardwarecLcLHardwareID_TClassManip(theClass);
   return theClass;
   }

   static void HardwarecLcLHardwareID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggersimcLcLBasicTrigger_Dictionary();
   static void triggersimcLcLBasicTrigger_TClassManip(TClass*);
   static void *new_triggersimcLcLBasicTrigger(void *p = 0);
   static void *newArray_triggersimcLcLBasicTrigger(Long_t size, void *p);
   static void delete_triggersimcLcLBasicTrigger(void *p);
   static void deleteArray_triggersimcLcLBasicTrigger(void *p);
   static void destruct_triggersimcLcLBasicTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::triggersim::BasicTrigger*)
   {
      ::triggersim::BasicTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::triggersim::BasicTrigger));
      static ::ROOT::TGenericClassInfo 
         instance("triggersim::BasicTrigger", 17, "BasicTrigger.h", 29,
                  typeid(::triggersim::BasicTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggersimcLcLBasicTrigger_Dictionary, isa_proxy, 12,
                  sizeof(::triggersim::BasicTrigger) );
      instance.SetNew(&new_triggersimcLcLBasicTrigger);
      instance.SetNewArray(&newArray_triggersimcLcLBasicTrigger);
      instance.SetDelete(&delete_triggersimcLcLBasicTrigger);
      instance.SetDeleteArray(&deleteArray_triggersimcLcLBasicTrigger);
      instance.SetDestructor(&destruct_triggersimcLcLBasicTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::triggersim::BasicTrigger*)
   {
      return GenerateInitInstanceLocal((::triggersim::BasicTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::triggersim::BasicTrigger*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggersimcLcLBasicTrigger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::triggersim::BasicTrigger*)0x0)->GetClass();
      triggersimcLcLBasicTrigger_TClassManip(theClass);
   return theClass;
   }

   static void triggersimcLcLBasicTrigger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Ptr<triggersim::BasicTrigger> : new ::art::Ptr<triggersim::BasicTrigger>;
   }
   static void *newArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Ptr<triggersim::BasicTrigger>[nElements] : new ::art::Ptr<triggersim::BasicTrigger>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p) {
      delete ((::art::Ptr<triggersim::BasicTrigger>*)p);
   }
   static void deleteArray_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p) {
      delete [] ((::art::Ptr<triggersim::BasicTrigger>*)p);
   }
   static void destruct_artcLcLPtrlEtriggersimcLcLBasicTriggergR(void *p) {
      typedef ::art::Ptr<triggersim::BasicTrigger> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Ptr<triggersim::BasicTrigger>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::PtrVector<triggersim::BasicTrigger> : new ::art::PtrVector<triggersim::BasicTrigger>;
   }
   static void *newArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::PtrVector<triggersim::BasicTrigger>[nElements] : new ::art::PtrVector<triggersim::BasicTrigger>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p) {
      delete ((::art::PtrVector<triggersim::BasicTrigger>*)p);
   }
   static void deleteArray_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p) {
      delete [] ((::art::PtrVector<triggersim::BasicTrigger>*)p);
   }
   static void destruct_artcLcLPtrVectorlEtriggersimcLcLBasicTriggergR(void *p) {
      typedef ::art::PtrVector<triggersim::BasicTrigger> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::PtrVector<triggersim::BasicTrigger>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > > : new ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >[nElements] : new ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<triggersim::BasicTrigger> > : new ::art::Wrapper<vector<triggersim::BasicTrigger> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<triggersim::BasicTrigger> >[nElements] : new ::art::Wrapper<vector<triggersim::BasicTrigger> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      delete ((::art::Wrapper<vector<triggersim::BasicTrigger> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<triggersim::BasicTrigger> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      typedef ::art::Wrapper<vector<triggersim::BasicTrigger> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<triggersim::BasicTrigger> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_HardwarecLcLHardwareID(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Hardware::HardwareID : new ::Hardware::HardwareID;
   }
   static void *newArray_HardwarecLcLHardwareID(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Hardware::HardwareID[nElements] : new ::Hardware::HardwareID[nElements];
   }
   // Wrapper around operator delete
   static void delete_HardwarecLcLHardwareID(void *p) {
      delete ((::Hardware::HardwareID*)p);
   }
   static void deleteArray_HardwarecLcLHardwareID(void *p) {
      delete [] ((::Hardware::HardwareID*)p);
   }
   static void destruct_HardwarecLcLHardwareID(void *p) {
      typedef ::Hardware::HardwareID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Hardware::HardwareID

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggersimcLcLBasicTrigger(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::triggersim::BasicTrigger : new ::triggersim::BasicTrigger;
   }
   static void *newArray_triggersimcLcLBasicTrigger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::triggersim::BasicTrigger[nElements] : new ::triggersim::BasicTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggersimcLcLBasicTrigger(void *p) {
      delete ((::triggersim::BasicTrigger*)p);
   }
   static void deleteArray_triggersimcLcLBasicTrigger(void *p) {
      delete [] ((::triggersim::BasicTrigger*)p);
   }
   static void destruct_triggersimcLcLBasicTrigger(void *p) {
      typedef ::triggersim::BasicTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::triggersim::BasicTrigger

namespace ROOT {
   static TClass *vectorlEtriggersimcLcLBasicTriggergR_Dictionary();
   static void vectorlEtriggersimcLcLBasicTriggergR_TClassManip(TClass*);
   static void *new_vectorlEtriggersimcLcLBasicTriggergR(void *p = 0);
   static void *newArray_vectorlEtriggersimcLcLBasicTriggergR(Long_t size, void *p);
   static void delete_vectorlEtriggersimcLcLBasicTriggergR(void *p);
   static void deleteArray_vectorlEtriggersimcLcLBasicTriggergR(void *p);
   static void destruct_vectorlEtriggersimcLcLBasicTriggergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<triggersim::BasicTrigger>*)
   {
      vector<triggersim::BasicTrigger> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<triggersim::BasicTrigger>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<triggersim::BasicTrigger>", -2, "vector", 214,
                  typeid(vector<triggersim::BasicTrigger>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtriggersimcLcLBasicTriggergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<triggersim::BasicTrigger>) );
      instance.SetNew(&new_vectorlEtriggersimcLcLBasicTriggergR);
      instance.SetNewArray(&newArray_vectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDelete(&delete_vectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDeleteArray(&deleteArray_vectorlEtriggersimcLcLBasicTriggergR);
      instance.SetDestructor(&destruct_vectorlEtriggersimcLcLBasicTriggergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<triggersim::BasicTrigger> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<triggersim::BasicTrigger>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtriggersimcLcLBasicTriggergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<triggersim::BasicTrigger>*)0x0)->GetClass();
      vectorlEtriggersimcLcLBasicTriggergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtriggersimcLcLBasicTriggergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtriggersimcLcLBasicTriggergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<triggersim::BasicTrigger> : new vector<triggersim::BasicTrigger>;
   }
   static void *newArray_vectorlEtriggersimcLcLBasicTriggergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<triggersim::BasicTrigger>[nElements] : new vector<triggersim::BasicTrigger>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtriggersimcLcLBasicTriggergR(void *p) {
      delete ((vector<triggersim::BasicTrigger>*)p);
   }
   static void deleteArray_vectorlEtriggersimcLcLBasicTriggergR(void *p) {
      delete [] ((vector<triggersim::BasicTrigger>*)p);
   }
   static void destruct_vectorlEtriggersimcLcLBasicTriggergR(void *p) {
      typedef vector<triggersim::BasicTrigger> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<triggersim::BasicTrigger>

namespace ROOT {
   static TClass *vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary();
   static void vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(TClass*);
   static void *new_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p = 0);
   static void *newArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(Long_t size, void *p);
   static void delete_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);
   static void deleteArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);
   static void destruct_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<art::PtrVector<triggersim::BasicTrigger> >*)
   {
      vector<art::PtrVector<triggersim::BasicTrigger> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<art::PtrVector<triggersim::BasicTrigger> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<art::PtrVector<triggersim::BasicTrigger> >", -2, "vector", 214,
                  typeid(vector<art::PtrVector<triggersim::BasicTrigger> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<art::PtrVector<triggersim::BasicTrigger> >) );
      instance.SetNew(&new_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetNewArray(&newArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDelete(&delete_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.SetDestructor(&destruct_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<art::PtrVector<triggersim::BasicTrigger> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<art::PtrVector<triggersim::BasicTrigger> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<art::PtrVector<triggersim::BasicTrigger> >*)0x0)->GetClass();
      vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<art::PtrVector<triggersim::BasicTrigger> > : new vector<art::PtrVector<triggersim::BasicTrigger> >;
   }
   static void *newArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<art::PtrVector<triggersim::BasicTrigger> >[nElements] : new vector<art::PtrVector<triggersim::BasicTrigger> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      delete ((vector<art::PtrVector<triggersim::BasicTrigger> >*)p);
   }
   static void deleteArray_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      delete [] ((vector<art::PtrVector<triggersim::BasicTrigger> >*)p);
   }
   static void destruct_vectorlEartcLcLPtrVectorlEtriggersimcLcLBasicTriggergRsPgR(void *p) {
      typedef vector<art::PtrVector<triggersim::BasicTrigger> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<art::PtrVector<triggersim::BasicTrigger> >

namespace {
  void TriggerDictionaryInitialization_libdune_DAQTriggerSim_TriggerDataProducts_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/dune/app/users/soughton/larsoft_v06_43_00/srcs",
"/dune/app/users/soughton/larsoft_v06_43_00/srcs",
"/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc",
"/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc",
"/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc",
"/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/boost/v1_63_0b/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/tbb/v2017_3c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcoreobj/v1_15_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcoreobj/v1_15_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcore/v06_13_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcore/v06_13_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/nusimdata/v1_08_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/nusimdata/v1_08_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardataobj/v1_18_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardataobj/v1_18_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/nutools/v2_14_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/nutools/v2_14_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardata/v06_24_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardata/v06_24_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larevt/v06_15_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larevt/v06_15_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/marley/v0_9_5d/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larsim/v06_26_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larsim/v06_26_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/marley/v0_9_5d/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/marley/v0_9_5d/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larreco/v06_34_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larreco/v06_34_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/pandora/v03_00_00d/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/pandora/v03_00_00d/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/eigen/v3_3_3/include/eigen3",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larpandoracontent/v03_07_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larpandoracontent/v03_07_02/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/eigen/v3_3_3/include/eigen3",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larpandora/v06_15_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larpandora/v06_15_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/genie/v2_12_2c/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/xerces_c/v3_1_4a/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/range/v3_0_2_4/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/marley/v0_9_5d/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larana/v06_08_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larana/v06_08_00/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/postgresql/v9_5_6/Linux64bit+2.6-2.12-p2713d/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/TRACE/v3_08_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/TRACE/v3_08_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/artdaq_core/v1_07_08/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/artdaq_core/v1_07_08/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/dune.opensciencegrid.org/products/dune/lbne_raw_data/v1_04_13/include",
"/cvmfs/dune.opensciencegrid.org/products/dune/lbne_raw_data/v1_04_13/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cppunit/v1_13_2/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/clhep/v2_3_4_4/Linux64bit+2.6-2.12-e14-debug/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/sqlite/v3_16_02_00a/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/libwda/v2_23_0/Linux64bit+2.6-2.12/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/ifdh_art/v2_02_00/slf6.x86_64.e14.nu.s50.debug/inc",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/ifdh_art/v2_02_00/slf6.x86_64.e14.nu.s50.debug/inc",
"/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DAQTriggerSim/TriggerDataProducts",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DAQTriggerSim/TriggerDataProducts/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libdune_DAQTriggerSim_TriggerDataProducts_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace triggersim{class __attribute__((annotate("$clingAutoload$dune/DAQTriggerSim/TriggerDataProducts/BasicTrigger.h")))  BasicTrigger;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Ptr.h")))  __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/PtrVector.h")))  Ptr;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/PtrVector.h")))  PtrVector;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace Hardware{class __attribute__((annotate("$clingAutoload$dune/DAQTriggerSim/TriggerDataProducts/HardwareElements.h")))  __attribute__((annotate("$clingAutoload$dune/DAQTriggerSim/TriggerDataProducts/BasicTrigger.h")))  HardwareID;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libdune_DAQTriggerSim_TriggerDataProducts_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/////////////////////////////////////////////////////////
//
// DAQTriggerSim/TriggerDataProducts/classes.h
//
// Michael Baird
// March 2016
//
/////////////////////////////////////////////////////////

// Framework includes:
#include "canvas/Persistency/Common/PtrVector.h" 
#include "canvas/Persistency/Common/Wrapper.h"
#include "canvas/Persistency/Common/Assns.h"

// DUNETPC includes:
#include "dune/DAQTriggerSim/TriggerDataProducts/BasicTrigger.h"
#include "dune/DAQTriggerSim/TriggerDataProducts/HardwareElements.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Hardware::HardwareID", payloadCode, "@",
"art::Ptr<triggersim::BasicTrigger>", payloadCode, "@",
"art::PtrVector<triggersim::BasicTrigger>", payloadCode, "@",
"art::Wrapper<std::vector<art::PtrVector<triggersim::BasicTrigger> > >", payloadCode, "@",
"art::Wrapper<std::vector<triggersim::BasicTrigger> >", payloadCode, "@",
"art::Wrapper<vector<art::PtrVector<triggersim::BasicTrigger> > >", payloadCode, "@",
"art::Wrapper<vector<triggersim::BasicTrigger> >", payloadCode, "@",
"triggersim::BasicTrigger", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libdune_DAQTriggerSim_TriggerDataProducts_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libdune_DAQTriggerSim_TriggerDataProducts_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libdune_DAQTriggerSim_TriggerDataProducts_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libdune_DAQTriggerSim_TriggerDataProducts_dict() {
  TriggerDictionaryInitialization_libdune_DAQTriggerSim_TriggerDataProducts_dict_Impl();
}
