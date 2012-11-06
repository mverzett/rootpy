//
// File generated by rootcint at Sun Sep 16 00:34:49 2012

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME _pydispatcher
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "_pydispatcher.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void TPyDispatcherProcessedEvent_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void delete_TPyDispatcherProcessedEvent(void *p);
   static void deleteArray_TPyDispatcherProcessedEvent(void *p);
   static void destruct_TPyDispatcherProcessedEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyDispatcherProcessedEvent*)
   {
      ::TPyDispatcherProcessedEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyDispatcherProcessedEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyDispatcherProcessedEvent", ::TPyDispatcherProcessedEvent::Class_Version(), "./_pydispatcher_processed_event.h", 7,
                  typeid(::TPyDispatcherProcessedEvent), DefineBehavior(ptr, ptr),
                  &::TPyDispatcherProcessedEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TPyDispatcherProcessedEvent) );
      instance.SetDelete(&delete_TPyDispatcherProcessedEvent);
      instance.SetDeleteArray(&deleteArray_TPyDispatcherProcessedEvent);
      instance.SetDestructor(&destruct_TPyDispatcherProcessedEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyDispatcherProcessedEvent*)
   {
      return GenerateInitInstanceLocal((::TPyDispatcherProcessedEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TPyDispatcherProcessedEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *TPyDispatcherProcessedEvent::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *TPyDispatcherProcessedEvent::Class_Name()
{
   return "TPyDispatcherProcessedEvent";
}

//______________________________________________________________________________
const char *TPyDispatcherProcessedEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcherProcessedEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyDispatcherProcessedEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcherProcessedEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void TPyDispatcherProcessedEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcherProcessedEvent*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *TPyDispatcherProcessedEvent::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcherProcessedEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void TPyDispatcherProcessedEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyDispatcherProcessedEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPyDispatcherProcessedEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPyDispatcherProcessedEvent::Class(),this);
   }
}

//______________________________________________________________________________
void TPyDispatcherProcessedEvent::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class TPyDispatcherProcessedEvent.
      TClass *R__cl = ::TPyDispatcherProcessedEvent::IsA();
      if (R__cl || R__insp.IsA()) { }
      TPyDispatcher::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPyDispatcherProcessedEvent(void *p) {
      delete ((::TPyDispatcherProcessedEvent*)p);
   }
   static void deleteArray_TPyDispatcherProcessedEvent(void *p) {
      delete [] ((::TPyDispatcherProcessedEvent*)p);
   }
   static void destruct_TPyDispatcherProcessedEvent(void *p) {
      typedef ::TPyDispatcherProcessedEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPyDispatcherProcessedEvent

/********************************************************
* _pydispatcher.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtable_pydispatcher();

extern "C" void G__set_cpp_environment_pydispatcher() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("_pydispatcher_processed_event.h");
  G__cpp_reset_tagtable_pydispatcher();
}
#include <new>
extern "C" int G__cpp_dllrev_pydispatcher() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TPyDispatcherProcessedEvent */
static int G___pydispatcher_172_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TPyDispatcherProcessedEvent* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new TPyDispatcherProcessedEvent((PyObject*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) TPyDispatcherProcessedEvent((PyObject*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((TPyDispatcherProcessedEvent*) G__getstructoffset())->Dispatch((int) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (int) G__int(libp->para[2]), (void*) G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) TPyDispatcherProcessedEvent::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TPyDispatcherProcessedEvent::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) TPyDispatcherProcessedEvent::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      TPyDispatcherProcessedEvent::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((TPyDispatcherProcessedEvent*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TPyDispatcherProcessedEvent::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TPyDispatcherProcessedEvent::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TPyDispatcherProcessedEvent::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___pydispatcher_172_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TPyDispatcherProcessedEvent::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G___pydispatcher_172_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   TPyDispatcherProcessedEvent* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new TPyDispatcherProcessedEvent(*(TPyDispatcherProcessedEvent*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef TPyDispatcherProcessedEvent G__TTPyDispatcherProcessedEvent;
static int G___pydispatcher_172_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (TPyDispatcherProcessedEvent*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((TPyDispatcherProcessedEvent*) (soff+(sizeof(TPyDispatcherProcessedEvent)*i)))->~G__TTPyDispatcherProcessedEvent();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (TPyDispatcherProcessedEvent*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((TPyDispatcherProcessedEvent*) (soff))->~G__TTPyDispatcherProcessedEvent();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G___pydispatcher_172_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TPyDispatcherProcessedEvent* dest = (TPyDispatcherProcessedEvent*) G__getstructoffset();
   *dest = *(TPyDispatcherProcessedEvent*) libp->para[0].ref;
   const TPyDispatcherProcessedEvent& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TPyDispatcherProcessedEvent */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfunc_pydispatcher {
 public:
  G__Sizep2memfunc_pydispatcher(): p(&G__Sizep2memfunc_pydispatcher::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfunc_pydispatcher::*p)();
};

size_t G__get_sizep2memfunc_pydispatcher()
{
  G__Sizep2memfunc_pydispatcher a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritance_pydispatcher() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent))) {
     TPyDispatcherProcessedEvent *G__Lderived;
     G__Lderived=(TPyDispatcherProcessedEvent*)0x1000;
     {
       TPyDispatcher *G__Lpbase=(TPyDispatcher*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent),G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcher),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent),G__get_linked_tagnum(&G___pydispatcherLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetable_pydispatcher() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G___pydispatcherLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G___pydispatcherLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G___pydispatcherLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G___pydispatcherLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("PyObject",117,G__get_linked_tagnum(&G___pydispatcherLN__object),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TPyDispatcherProcessedEvent */
static void G__setup_memvarTPyDispatcherProcessedEvent(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent));
   { TPyDispatcherProcessedEvent *p; p=(TPyDispatcherProcessedEvent*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G___pydispatcherLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvar_pydispatcher() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTPyDispatcherProcessedEvent(void) {
   /* TPyDispatcherProcessedEvent */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent));
   G__memfunc_setup("TPyDispatcherProcessedEvent",2766,G___pydispatcher_172_0_1, 105, G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent), -1, 0, 1, 1, 1, 0, "U '_object' 'PyObject' 0 - callable", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Dispatch",816,G___pydispatcher_172_0_2, 85, G__get_linked_tagnum(&G___pydispatcherLN__object), G__defined_typename("PyObject"), 0, 4, 1, 1, 0, 
"i - - 0 - p1 i - - 0 - p2 "
"i - - 0 - p3 Y - - 0 - p4", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G___pydispatcher_172_0_3, 85, G__get_linked_tagnum(&G___pydispatcherLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&TPyDispatcherProcessedEvent::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G___pydispatcher_172_0_4, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TPyDispatcherProcessedEvent::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G___pydispatcher_172_0_5, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&TPyDispatcherProcessedEvent::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G___pydispatcher_172_0_6, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&TPyDispatcherProcessedEvent::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G___pydispatcherLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G___pydispatcher_172_0_10, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G___pydispatcher_172_0_11, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TPyDispatcherProcessedEvent::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G___pydispatcher_172_0_12, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TPyDispatcherProcessedEvent::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G___pydispatcher_172_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TPyDispatcherProcessedEvent::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G___pydispatcher_172_0_14, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TPyDispatcherProcessedEvent::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("TPyDispatcherProcessedEvent", 2766, G___pydispatcher_172_0_15, (int) ('i'), 
G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent), -1, 0, 1, 1, 1, 0, "u 'TPyDispatcherProcessedEvent' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~TPyDispatcherProcessedEvent", 2892, G___pydispatcher_172_0_16, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G___pydispatcher_172_0_17, (int) ('u'), G__get_linked_tagnum(&G___pydispatcherLN_TPyDispatcherProcessedEvent), -1, 1, 1, 1, 1, 0, "u 'TPyDispatcherProcessedEvent' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfunc_pydispatcher() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_global_pydispatcher() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_func_pydispatcher() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G___pydispatcherLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN__object = { "_object" , 115 , -1 };
G__linked_taginfo G___pydispatcherLN_TPyDispatcher = { "TPyDispatcher" , 99 , -1 };
G__linked_taginfo G___pydispatcherLN_TPyDispatcherProcessedEvent = { "TPyDispatcherProcessedEvent" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtable_pydispatcher() {
  G___pydispatcherLN_TClass.tagnum = -1 ;
  G___pydispatcherLN_TBuffer.tagnum = -1 ;
  G___pydispatcherLN_TMemberInspector.tagnum = -1 ;
  G___pydispatcherLN_TObject.tagnum = -1 ;
  G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G___pydispatcherLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G___pydispatcherLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G___pydispatcherLN__object.tagnum = -1 ;
  G___pydispatcherLN_TPyDispatcher.tagnum = -1 ;
  G___pydispatcherLN_TPyDispatcherProcessedEvent.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtable_pydispatcher() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_TClass);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_TBuffer);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_TObject);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN__object);
   G__get_linked_tagnum_fwd(&G___pydispatcherLN_TPyDispatcher);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G___pydispatcherLN_TPyDispatcherProcessedEvent),sizeof(TPyDispatcherProcessedEvent),-1,323584,(char*)NULL,G__setup_memvarTPyDispatcherProcessedEvent,G__setup_memfuncTPyDispatcherProcessedEvent);
}
extern "C" void G__cpp_setup_pydispatcher(void) {
  G__check_setup_version(30051515,"G__cpp_setup_pydispatcher()");
  G__set_cpp_environment_pydispatcher();
  G__cpp_setup_tagtable_pydispatcher();

  G__cpp_setup_inheritance_pydispatcher();

  G__cpp_setup_typetable_pydispatcher();

  G__cpp_setup_memvar_pydispatcher();

  G__cpp_setup_memfunc_pydispatcher();
  G__cpp_setup_global_pydispatcher();
  G__cpp_setup_func_pydispatcher();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfunc_pydispatcher();
  return;
}
class G__cpp_setup_init_pydispatcher {
  public:
    G__cpp_setup_init_pydispatcher() { G__add_setup_func("_pydispatcher",(G__incsetup)(&G__cpp_setup_pydispatcher)); G__call_setup_funcs(); }
   ~G__cpp_setup_init_pydispatcher() { G__remove_setup_func("_pydispatcher"); }
};
G__cpp_setup_init_pydispatcher G__cpp_setup_initializer_pydispatcher;

