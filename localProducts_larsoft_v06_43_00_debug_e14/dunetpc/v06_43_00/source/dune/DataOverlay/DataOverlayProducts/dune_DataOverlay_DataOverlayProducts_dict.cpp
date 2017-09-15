// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dune_DataOverlay_DataOverlayProducts_dict

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
#include "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlayProducts/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *dunemixcLcLEventMixingSummary_Dictionary();
   static void dunemixcLcLEventMixingSummary_TClassManip(TClass*);
   static void *new_dunemixcLcLEventMixingSummary(void *p = 0);
   static void *newArray_dunemixcLcLEventMixingSummary(Long_t size, void *p);
   static void delete_dunemixcLcLEventMixingSummary(void *p);
   static void deleteArray_dunemixcLcLEventMixingSummary(void *p);
   static void destruct_dunemixcLcLEventMixingSummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dunemix::EventMixingSummary*)
   {
      ::dunemix::EventMixingSummary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::dunemix::EventMixingSummary));
      static ::ROOT::TGenericClassInfo 
         instance("dunemix::EventMixingSummary", 11, "EventMixingSummary.h", 18,
                  typeid(::dunemix::EventMixingSummary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dunemixcLcLEventMixingSummary_Dictionary, isa_proxy, 12,
                  sizeof(::dunemix::EventMixingSummary) );
      instance.SetNew(&new_dunemixcLcLEventMixingSummary);
      instance.SetNewArray(&newArray_dunemixcLcLEventMixingSummary);
      instance.SetDelete(&delete_dunemixcLcLEventMixingSummary);
      instance.SetDeleteArray(&deleteArray_dunemixcLcLEventMixingSummary);
      instance.SetDestructor(&destruct_dunemixcLcLEventMixingSummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dunemix::EventMixingSummary*)
   {
      return GenerateInitInstanceLocal((::dunemix::EventMixingSummary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::dunemix::EventMixingSummary*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dunemixcLcLEventMixingSummary_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::dunemix::EventMixingSummary*)0x0)->GetClass();
      dunemixcLcLEventMixingSummary_TClassManip(theClass);
   return theClass;
   }

   static void dunemixcLcLEventMixingSummary_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<dunemix::EventMixingSummary> >*)
   {
      ::art::Wrapper<vector<dunemix::EventMixingSummary> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<dunemix::EventMixingSummary> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<dunemix::EventMixingSummary> >", ::art::Wrapper<vector<dunemix::EventMixingSummary> >::Class_Version(), "", 26,
                  typeid(::art::Wrapper<vector<dunemix::EventMixingSummary> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<dunemix::EventMixingSummary> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<dunemix::EventMixingSummary> >","art::Wrapper<std::vector<dunemix::EventMixingSummary> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<dunemix::EventMixingSummary> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<dunemix::EventMixingSummary> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<dunemix::EventMixingSummary> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<dunemix::EventMixingSummary> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dunemixcLcLEventMixingSummary(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::dunemix::EventMixingSummary : new ::dunemix::EventMixingSummary;
   }
   static void *newArray_dunemixcLcLEventMixingSummary(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::dunemix::EventMixingSummary[nElements] : new ::dunemix::EventMixingSummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_dunemixcLcLEventMixingSummary(void *p) {
      delete ((::dunemix::EventMixingSummary*)p);
   }
   static void deleteArray_dunemixcLcLEventMixingSummary(void *p) {
      delete [] ((::dunemix::EventMixingSummary*)p);
   }
   static void destruct_dunemixcLcLEventMixingSummary(void *p) {
      typedef ::dunemix::EventMixingSummary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::dunemix::EventMixingSummary

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<dunemix::EventMixingSummary> > : new ::art::Wrapper<vector<dunemix::EventMixingSummary> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<dunemix::EventMixingSummary> >[nElements] : new ::art::Wrapper<vector<dunemix::EventMixingSummary> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p) {
      delete ((::art::Wrapper<vector<dunemix::EventMixingSummary> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<dunemix::EventMixingSummary> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEdunemixcLcLEventMixingSummarygRsPgR(void *p) {
      typedef ::art::Wrapper<vector<dunemix::EventMixingSummary> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<dunemix::EventMixingSummary> >

namespace ROOT {
   static TClass *vectorlEdunemixcLcLEventMixingSummarygR_Dictionary();
   static void vectorlEdunemixcLcLEventMixingSummarygR_TClassManip(TClass*);
   static void *new_vectorlEdunemixcLcLEventMixingSummarygR(void *p = 0);
   static void *newArray_vectorlEdunemixcLcLEventMixingSummarygR(Long_t size, void *p);
   static void delete_vectorlEdunemixcLcLEventMixingSummarygR(void *p);
   static void deleteArray_vectorlEdunemixcLcLEventMixingSummarygR(void *p);
   static void destruct_vectorlEdunemixcLcLEventMixingSummarygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<dunemix::EventMixingSummary>*)
   {
      vector<dunemix::EventMixingSummary> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<dunemix::EventMixingSummary>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<dunemix::EventMixingSummary>", -2, "", 25,
                  typeid(vector<dunemix::EventMixingSummary>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdunemixcLcLEventMixingSummarygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<dunemix::EventMixingSummary>) );
      instance.SetNew(&new_vectorlEdunemixcLcLEventMixingSummarygR);
      instance.SetNewArray(&newArray_vectorlEdunemixcLcLEventMixingSummarygR);
      instance.SetDelete(&delete_vectorlEdunemixcLcLEventMixingSummarygR);
      instance.SetDeleteArray(&deleteArray_vectorlEdunemixcLcLEventMixingSummarygR);
      instance.SetDestructor(&destruct_vectorlEdunemixcLcLEventMixingSummarygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<dunemix::EventMixingSummary> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<dunemix::EventMixingSummary>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdunemixcLcLEventMixingSummarygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<dunemix::EventMixingSummary>*)0x0)->GetClass();
      vectorlEdunemixcLcLEventMixingSummarygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdunemixcLcLEventMixingSummarygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdunemixcLcLEventMixingSummarygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dunemix::EventMixingSummary> : new vector<dunemix::EventMixingSummary>;
   }
   static void *newArray_vectorlEdunemixcLcLEventMixingSummarygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dunemix::EventMixingSummary>[nElements] : new vector<dunemix::EventMixingSummary>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdunemixcLcLEventMixingSummarygR(void *p) {
      delete ((vector<dunemix::EventMixingSummary>*)p);
   }
   static void deleteArray_vectorlEdunemixcLcLEventMixingSummarygR(void *p) {
      delete [] ((vector<dunemix::EventMixingSummary>*)p);
   }
   static void destruct_vectorlEdunemixcLcLEventMixingSummarygR(void *p) {
      typedef vector<dunemix::EventMixingSummary> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<dunemix::EventMixingSummary>

namespace {
  void TriggerDictionaryInitialization_libdune_DataOverlay_DataOverlayProducts_dict_Impl() {
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
"/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/.",
"/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlayProducts",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/nutools/v2_14_01/include",
"/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/include",
"/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlayProducts/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libdune_DataOverlay_DataOverlayProducts_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace dunemix{class __attribute__((annotate("$clingAutoload$EventMixingSummary.h")))  EventMixingSummary;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libdune_DataOverlay_DataOverlayProducts_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//
// Build a dictionary.
//
// $Id: classes.h,v 1.8 2010/04/12 18:12:28  Exp $
// $Author:  $
// $Date: 2010/04/12 18:12:28 $
// 
// Original author Rob Kutschke, modified by wes
//

#include "canvas/Persistency/Common/Wrapper.h"
#include "EventMixingSummary.h"
#include <vector>

//
// Only include objects that we would like to be able to put into the event.
// Do not include the objects they contain internally.
//

template class std::vector<dunemix::EventMixingSummary>;
template class art::Wrapper< std::vector<dunemix::EventMixingSummary> >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<std::vector<dunemix::EventMixingSummary> >", payloadCode, "@",
"art::Wrapper<vector<dunemix::EventMixingSummary> >", payloadCode, "@",
"dunemix::EventMixingSummary", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libdune_DataOverlay_DataOverlayProducts_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libdune_DataOverlay_DataOverlayProducts_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libdune_DataOverlay_DataOverlayProducts_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libdune_DataOverlay_DataOverlayProducts_dict() {
  TriggerDictionaryInitialization_libdune_DataOverlay_DataOverlayProducts_dict_Impl();
}
