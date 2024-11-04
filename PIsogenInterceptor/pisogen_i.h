

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for pisogen.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __pisogen_i_h__
#define __pisogen_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IPersonalIsogen_FWD_DEFINED__
#define __IPersonalIsogen_FWD_DEFINED__
typedef interface IPersonalIsogen IPersonalIsogen;

#endif 	/* __IPersonalIsogen_FWD_DEFINED__ */


#ifndef __IOutputFiles_FWD_DEFINED__
#define __IOutputFiles_FWD_DEFINED__
typedef interface IOutputFiles IOutputFiles;

#endif 	/* __IOutputFiles_FWD_DEFINED__ */


#ifndef __IOutputFile_FWD_DEFINED__
#define __IOutputFile_FWD_DEFINED__
typedef interface IOutputFile IOutputFile;

#endif 	/* __IOutputFile_FWD_DEFINED__ */


#ifndef __IIsogen_FWD_DEFINED__
#define __IIsogen_FWD_DEFINED__
typedef interface IIsogen IIsogen;

#endif 	/* __IIsogen_FWD_DEFINED__ */


#ifndef __IIdfgen_FWD_DEFINED__
#define __IIdfgen_FWD_DEFINED__
typedef interface IIdfgen IIdfgen;

#endif 	/* __IIdfgen_FWD_DEFINED__ */


#ifndef __IUtility_FWD_DEFINED__
#define __IUtility_FWD_DEFINED__
typedef interface IUtility IUtility;

#endif 	/* __IUtility_FWD_DEFINED__ */


#ifndef ___IPersonalIsogen2Events_FWD_DEFINED__
#define ___IPersonalIsogen2Events_FWD_DEFINED__
typedef interface _IPersonalIsogen2Events _IPersonalIsogen2Events;

#endif 	/* ___IPersonalIsogen2Events_FWD_DEFINED__ */


#ifndef __IPersonalIsogen2_FWD_DEFINED__
#define __IPersonalIsogen2_FWD_DEFINED__
typedef interface IPersonalIsogen2 IPersonalIsogen2;

#endif 	/* __IPersonalIsogen2_FWD_DEFINED__ */


#ifndef ___IIDFTransEvents_FWD_DEFINED__
#define ___IIDFTransEvents_FWD_DEFINED__
typedef interface _IIDFTransEvents _IIDFTransEvents;

#endif 	/* ___IIDFTransEvents_FWD_DEFINED__ */


#ifndef __IDongle_FWD_DEFINED__
#define __IDongle_FWD_DEFINED__
typedef interface IDongle IDongle;

#endif 	/* __IDongle_FWD_DEFINED__ */


#ifndef __IIDFTrans_FWD_DEFINED__
#define __IIDFTrans_FWD_DEFINED__
typedef interface IIDFTrans IIDFTrans;

#endif 	/* __IIDFTrans_FWD_DEFINED__ */


#ifndef __ICountingDongle_FWD_DEFINED__
#define __ICountingDongle_FWD_DEFINED__
typedef interface ICountingDongle ICountingDongle;

#endif 	/* __ICountingDongle_FWD_DEFINED__ */


#ifndef __PersonalIsogen_FWD_DEFINED__
#define __PersonalIsogen_FWD_DEFINED__

#ifdef __cplusplus
typedef class PersonalIsogen PersonalIsogen;
#else
typedef struct PersonalIsogen PersonalIsogen;
#endif /* __cplusplus */

#endif 	/* __PersonalIsogen_FWD_DEFINED__ */


#ifndef __Isogen_FWD_DEFINED__
#define __Isogen_FWD_DEFINED__

#ifdef __cplusplus
typedef class Isogen Isogen;
#else
typedef struct Isogen Isogen;
#endif /* __cplusplus */

#endif 	/* __Isogen_FWD_DEFINED__ */


#ifndef __Idfgen_FWD_DEFINED__
#define __Idfgen_FWD_DEFINED__

#ifdef __cplusplus
typedef class Idfgen Idfgen;
#else
typedef struct Idfgen Idfgen;
#endif /* __cplusplus */

#endif 	/* __Idfgen_FWD_DEFINED__ */


#ifndef __OutputFile_FWD_DEFINED__
#define __OutputFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class OutputFile OutputFile;
#else
typedef struct OutputFile OutputFile;
#endif /* __cplusplus */

#endif 	/* __OutputFile_FWD_DEFINED__ */


#ifndef __OutputFiles_FWD_DEFINED__
#define __OutputFiles_FWD_DEFINED__

#ifdef __cplusplus
typedef class OutputFiles OutputFiles;
#else
typedef struct OutputFiles OutputFiles;
#endif /* __cplusplus */

#endif 	/* __OutputFiles_FWD_DEFINED__ */


#ifndef __Utility_FWD_DEFINED__
#define __Utility_FWD_DEFINED__

#ifdef __cplusplus
typedef class Utility Utility;
#else
typedef struct Utility Utility;
#endif /* __cplusplus */

#endif 	/* __Utility_FWD_DEFINED__ */


#ifndef __PersonalIsogen2_FWD_DEFINED__
#define __PersonalIsogen2_FWD_DEFINED__

#ifdef __cplusplus
typedef class PersonalIsogen2 PersonalIsogen2;
#else
typedef struct PersonalIsogen2 PersonalIsogen2;
#endif /* __cplusplus */

#endif 	/* __PersonalIsogen2_FWD_DEFINED__ */


#ifndef __IDFTrans_FWD_DEFINED__
#define __IDFTrans_FWD_DEFINED__

#ifdef __cplusplus
typedef class IDFTrans IDFTrans;
#else
typedef struct IDFTrans IDFTrans;
#endif /* __cplusplus */

#endif 	/* __IDFTrans_FWD_DEFINED__ */


#ifndef __Dongle_FWD_DEFINED__
#define __Dongle_FWD_DEFINED__

#ifdef __cplusplus
typedef class Dongle Dongle;
#else
typedef struct Dongle Dongle;
#endif /* __cplusplus */

#endif 	/* __Dongle_FWD_DEFINED__ */


#ifndef __CountingDongle_FWD_DEFINED__
#define __CountingDongle_FWD_DEFINED__

#ifdef __cplusplus
typedef class CountingDongle CountingDongle;
#else
typedef struct CountingDongle CountingDongle;
#endif /* __cplusplus */

#endif 	/* __CountingDongle_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AliasPersonalIsogen_LIBRARY_DEFINED__
#define __AliasPersonalIsogen_LIBRARY_DEFINED__

/* library AliasPersonalIsogen */
/* [custom][custom][custom][helpstring][version][uuid] */ 













typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0001
    {
        eDimensionUnitsM	= 0,
        eDimensionUnitsMM	= 1,
        eDimensionUnitsFTIN	= 2,
        eDimensionUnitsUSER	= 3
    } 	DimensionUnits;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0002
    {
        eBoreUnitsMM	= 4,
        eBoreUnitsIN	= 8,
        eBoreUnitsUSER	= 12
    } 	BoreUnits;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0003
    {
        eWeightUnitsKG	= 16,
        eWeightUnitsLB	= 32,
        eWeightUnitsUSER	= 48
    } 	WeightUnits;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0004
    {
        eDrawingFormatIsogen	= 100,
        eDrawingFormatDXF	= 104,
        eDrawingFormatDGN	= 108,
        eDrawingFormatSMARTIGR	= 110,
        eDrawingFormatSMARTDXF	= 111,
        eDrawingFormatSMARTDGN	= 112,
        eDrawingFormatSMARTDWG	= 113,
        eDrawingFormatSMARTPOD	= 114,
        eDrawingFormatSMARTSHA	= 115,
        eDrawingFormatUSER	= 116,
        eDrawingFormatSMARTDGN8	= 117
    } 	DrawingFormat;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0005
    {
        eViewpointTL	= 200,
        eViewpointTR	= 201,
        eViewpointBL	= 202,
        eViewpointBR	= 203,
        eViewpointUSER	= 204
    } 	Viewpoint;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0006
    {
        eMessageLevelUSER	= 300,
        eMessageLevelLOW	= 301,
        eMessageLevelMED	= 302,
        eMessageLevelHIGH	= 303
    } 	MessageLevel;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0007
    {
        ePersonalIsogenModeDEMO	= 0,
        ePersonalIsogenModeFULL	= 1,
        ePersonalIsogenModeLIMITED	= 2
    } 	PersonalIsogenMode;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0008
    {
        eDemoModeSET	= 1,
        eDemoModeSPOOLINGOFF	= 2
    } 	DemoMode;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0009
    {
        eStatusISO_OK	= 0,
        eStatusPISOGEN_NOT_SET	= 1,
        eStatusINVALID_ISOTYPE	= 2,
        eStatusNO_PROJECT	= 3,
        eStatusIDFGEN_HANDSHAKE_FAILED	= 4,
        eStatusNO_PCF	= 5,
        eStatusISOGEN_GET_CURRENT_FAILED	= 6,
        eStatusISOGEN_CD_PROGRAMS_FAILED	= 7,
        eStatusISOGEN_HANDSHAKE_FAILED	= 8,
        eStatusISOGEN_FAILED	= 9,
        eStatusISOGEN_CD_BACK_FAILED	= 10,
        eStatusIDFGEN_GET_CURRENT_FAILED	= 11,
        eStatusIDFGEN_CD_PROGRAMS_FAILED	= 12,
        eStatusIDFGEN_FAILED	= 13,
        eStatusIDFGEN_CD_BACK_FAILED	= 14,
        eStatusDEL_036_FAILED	= 15,
        eStatusCREATE_IDX_FAILED	= 16,
        eStatusCOPY_FLS_FAILED	= 17,
        eStatusISOGEN_AND_CD_BACK_FAILED	= 18,
        eStatusPISOGEN_HANDSHAKE_FAILED	= 19,
        eStatusUNKNOWN_ERROR	= 20,
        eStatusPISOGEN_GET_CURRENT_FAILED	= 21,
        eStatusPISOGEN_CD_PROGRAMS_FAILED	= 22,
        eStatusPISOGEN_WRITE_BANNER_FAILED	= 23,
        eStatusPISOGEN_CD_BACK_FAILED	= 24,
        eStatusIGEN_INITIALISE_FAILED	= 25,
        eStatusPISOGEN_INVALID_ROOT	= 26,
        eStatusPISOGEN_SETENV_FAILED	= 27,
        eStatusINVALID_FILE_EXTENSION	= 28,
        eStatusIDFGEN_PCF_FILE_REQUIRED	= 29,
        eStatusFILE_DOES_NOT_EXIST	= 60,
        eStatusISOGEN_IDF_OR_DAT_FILE_REQUIRED	= 61,
        eStatusISOA2B_FAILED	= 62,
        eStatusIDFGEN_UNITS_NOT_SET	= 63,
        eStatusIDFGEN_LIMIT_EXCEEDED	= 64,
        eStatusISOGEN_ERROR	= 0xffffffff,
        eStatusISOGEN_CRASH	= 0xfffffffe,
        eStatusISOGEN_TIMEOUT	= 0xfffffffd,
        eStatusISOGEN_THREAD_CREATION_FAILURE	= 0xfffffffc,
        eStatusISOGEN_LOAD_FAILURE	= 0xfffffffb,
        eStatusIDFGEN_LOAD_FAILURE	= 0xfffffffa,
        eStatusIDFGEN_CRASH	= 0xfffffff9,
        eStatusIDFGEN_TIMEOUT	= 0xfffffff8,
        eStatusIDFGEN_THREAD_CREATION_FAILURE	= 0xfffffff7,
        eStatusEXTERNAL_PROCESS_CREATION_FAILURE	= 0xfffffc17,
        eStatusEXTERNAL_PROCESS_CRASH	= 0xfffffc16,
        eStatusEXTERNAL_PROCESS_TIMEOUT_TERMINATION_SUCCESS	= 0xfffffc15,
        eStatusEXTERNAL_PROCESS_TIMEOUT_TERMINATION_FAILURE	= 0xfffffc14,
        eStatusPOD_PROCESS_WARNING	= 30,
        eStatusPOD_IDFTRANS_PROCESS_FAILED	= 31,
        eStatusPOD_PODTRANS_PROCESS_FAILED	= 32,
        eStatusPOD_PODGRAPHICS_LOAD_FAILED	= 33,
        eStatusPOD_PODGRAPHICS_PROCESS_FAILED	= 34,
        eStatusPOD_PODTRANS_NO_INTELLIGENCE	= 35,
        eStatusPOD_PODGRAPHICSPROCESSOR_FAILED	= 36,
        eStatusPISOGEN_GET_TEMP_PATH_FAILED	= 41,
        eStatusPISOGEN_TEMP_PATH_NOT_EXIST	= 42,
        eStatusPISOGEN_SETBOREUNITS_FAILED	= 43,
        eStatusPISOGEN_FLS_UPDATE_FAILED	= 44,
        eStatusPISOGEN_FLS_RESTORE_FAILED	= 45,
        eStatusPISOGEN_GET_MESSAGE_ENTRY_FAILED	= 46,
        eStatusPISOGEN_GET_OPL_ENTRY_FAILED	= 47,
        eStatusCOPY_OPL_FAILED	= 48,
        eStatusPISOGEN_UPDATE_FLS_ENTRY_FAILED	= 49,
        eStatusPROJECT_DISK_FULL	= 50,
        eStatusTEMP_DISK_FULL	= 51,
        eStatusPISOGEN_GETBOREUNITS_FAILED	= 52,
        eStatusCOPY_FILE_FAILED	= 53,
        eStatusErr_PersonalIsogenFilesMissing	= 1000,
        eStatusErr_InconsistentUnitsCombination	= 1001,
        eStatusErr_InconsistentDrawingFormat	= 1002,
        eStatusErr_CannotDeleteStdOutFile	= 1003,
        eStatusErr_InvalidLineInOptionsFile	= 1004,
        eStatusErr_TooManySwitchesInOptionsFile	= 1005,
        eStatusErr_TooFewSwitchesInOptionsFile	= 1006,
        eStatusErr_MS_EXE_not_defined	= 1007,
        eStatusErr_USTATION_not_installed	= 1008,
        eStatusErr_MS_EXE_without_slash	= 1009,
        eStatusErr_PersonalIsogenFLSMissing	= 1010,
        eStatusErr_PersonalIsogenOPTSMissing	= 1011,
        eStatusISOGEN_DRAWING_FAILED	= 1999,
        eStatusPISOGEN_INCOMPATIBLE_UNITS	= 2001,
        eStatusIDFGEN_DISCONNECTED_PIPELINE	= 2022,
        eStatusIDFGEN_DISCONNECTED_PIPELINE_UNCONNECTED	= 2023,
        eStatusIDFGEN_DISCONNECTED_PIPELINE_RESOLVED	= 2024
    } 	Status;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_pisogen_0000_0000_0010
    {
        eCountingDongleStatus_SUCCESS	= 0,
        eCountingDongleStatus_NOT_FOUND	= 200,
        eCountingDongleStatus_INVALID_PASSWORD	= 201,
        eCountingDongleStatus_INVALID_PASSWORD_OR_ID	= 202,
        eCountingDongleStatus_SET_SOFTID_FAILED	= 203,
        eCountingDongleStatus_INVALID_ADDR_OR_SIZE	= 204,
        eCountingDongleStatus_UNKNOWN_COMMAND	= 205,
        eCountingDongleStatus_READ_MEMORY	= 207,
        eCountingDongleStatus_WRITE_MEMORY	= 208
    } 	CountingDongleStatus;


EXTERN_C const IID LIBID_AliasPersonalIsogen;

#ifndef __IPersonalIsogen_INTERFACE_DEFINED__
#define __IPersonalIsogen_INTERFACE_DEFINED__

/* interface IPersonalIsogen */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPersonalIsogen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6723CBF7-F6F1-4103-BA97-2E53090E4354")
    IPersonalIsogen : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RootDirectory( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Project( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DimensionUnits( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WeightUnits( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DrawingFormat( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Viewpoint( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Tolerance( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MessageLevel( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DemoMode( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadIsogen( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnloadIsogen( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutputFiles( 
            /* [retval][out] */ IOutputFiles **ppVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InputName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHandshakeTime( 
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Handshake( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeepPOD( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsogenTimeout( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersonalIsogenVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersonalIsogen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersonalIsogen * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersonalIsogen * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPersonalIsogen * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPersonalIsogen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPersonalIsogen * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPersonalIsogen * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_RootDirectory)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RootDirectory )( 
            IPersonalIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_Project)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Project )( 
            IPersonalIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_Style)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            IPersonalIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_DimensionUnits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DimensionUnits )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_WeightUnits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WeightUnits )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_DrawingFormat)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DrawingFormat )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_Viewpoint)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Viewpoint )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_Tolerance)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Tolerance )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_MessageLevel)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MessageLevel )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_DemoMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DemoMode )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, Execute)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IPersonalIsogen * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, LoadIsogen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadIsogen )( 
            IPersonalIsogen * This);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, UnloadIsogen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadIsogen )( 
            IPersonalIsogen * This);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, get_OutputFiles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutputFiles )( 
            IPersonalIsogen * This,
            /* [retval][out] */ IOutputFiles **ppVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_InputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputName )( 
            IPersonalIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, GetHandshakeTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHandshakeTime )( 
            IPersonalIsogen * This,
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_Handshake)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Handshake )( 
            IPersonalIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, get_ErrorText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorText )( 
            IPersonalIsogen * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_KeepPOD)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeepPOD )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, put_IsogenTimeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsogenTimeout )( 
            IPersonalIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IPersonalIsogen * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IPersonalIsogenVtbl;

    interface IPersonalIsogen
    {
        CONST_VTBL struct IPersonalIsogenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersonalIsogen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersonalIsogen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersonalIsogen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersonalIsogen_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPersonalIsogen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPersonalIsogen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPersonalIsogen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPersonalIsogen_put_RootDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_RootDirectory(This,rhs) ) 

#define IPersonalIsogen_put_Project(This,rhs)	\
    ( (This)->lpVtbl -> put_Project(This,rhs) ) 

#define IPersonalIsogen_put_Style(This,rhs)	\
    ( (This)->lpVtbl -> put_Style(This,rhs) ) 

#define IPersonalIsogen_put_DimensionUnits(This,rhs)	\
    ( (This)->lpVtbl -> put_DimensionUnits(This,rhs) ) 

#define IPersonalIsogen_put_WeightUnits(This,rhs)	\
    ( (This)->lpVtbl -> put_WeightUnits(This,rhs) ) 

#define IPersonalIsogen_put_DrawingFormat(This,rhs)	\
    ( (This)->lpVtbl -> put_DrawingFormat(This,rhs) ) 

#define IPersonalIsogen_put_Viewpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_Viewpoint(This,rhs) ) 

#define IPersonalIsogen_put_Tolerance(This,rhs)	\
    ( (This)->lpVtbl -> put_Tolerance(This,rhs) ) 

#define IPersonalIsogen_put_MessageLevel(This,rhs)	\
    ( (This)->lpVtbl -> put_MessageLevel(This,rhs) ) 

#define IPersonalIsogen_put_DemoMode(This,rhs)	\
    ( (This)->lpVtbl -> put_DemoMode(This,rhs) ) 

#define IPersonalIsogen_Execute(This,pVal)	\
    ( (This)->lpVtbl -> Execute(This,pVal) ) 

#define IPersonalIsogen_LoadIsogen(This)	\
    ( (This)->lpVtbl -> LoadIsogen(This) ) 

#define IPersonalIsogen_UnloadIsogen(This)	\
    ( (This)->lpVtbl -> UnloadIsogen(This) ) 

#define IPersonalIsogen_get_OutputFiles(This,ppVal)	\
    ( (This)->lpVtbl -> get_OutputFiles(This,ppVal) ) 

#define IPersonalIsogen_put_InputName(This,rhs)	\
    ( (This)->lpVtbl -> put_InputName(This,rhs) ) 

#define IPersonalIsogen_GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount)	\
    ( (This)->lpVtbl -> GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount) ) 

#define IPersonalIsogen_put_Handshake(This,rhs)	\
    ( (This)->lpVtbl -> put_Handshake(This,rhs) ) 

#define IPersonalIsogen_get_ErrorText(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorText(This,pVal) ) 

#define IPersonalIsogen_put_KeepPOD(This,rhs)	\
    ( (This)->lpVtbl -> put_KeepPOD(This,rhs) ) 

#define IPersonalIsogen_put_IsogenTimeout(This,rhs)	\
    ( (This)->lpVtbl -> put_IsogenTimeout(This,rhs) ) 

#define IPersonalIsogen_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersonalIsogen_INTERFACE_DEFINED__ */


#ifndef __IOutputFiles_INTERFACE_DEFINED__
#define __IOutputFiles_INTERFACE_DEFINED__

/* interface IOutputFiles */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IOutputFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74427FE4-FAFE-4FD0-8BAD-E6358B9FC2D4")
    IOutputFiles : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IOutputFile *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DrawingCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DrawingCount( 
            /* [in] */ long pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOutputFilesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOutputFiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOutputFiles * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOutputFiles * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOutputFiles * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOutputFiles * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOutputFiles * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOutputFiles * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IOutputFiles, get__NewEnum)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IOutputFiles * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        DECLSPEC_XFGVIRT(IOutputFiles, Item)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IOutputFiles * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFiles, get_Count)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IOutputFiles * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFiles, Add)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IOutputFiles * This,
            /* [in] */ IOutputFile *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFiles, get_DrawingCount)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DrawingCount )( 
            IOutputFiles * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFiles, put_DrawingCount)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DrawingCount )( 
            IOutputFiles * This,
            /* [in] */ long pVal);
        
        END_INTERFACE
    } IOutputFilesVtbl;

    interface IOutputFiles
    {
        CONST_VTBL struct IOutputFilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOutputFiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOutputFiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOutputFiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOutputFiles_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOutputFiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOutputFiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOutputFiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOutputFiles_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IOutputFiles_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> Item(This,Index,pVal) ) 

#define IOutputFiles_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IOutputFiles_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IOutputFiles_get_DrawingCount(This,pVal)	\
    ( (This)->lpVtbl -> get_DrawingCount(This,pVal) ) 

#define IOutputFiles_put_DrawingCount(This,pVal)	\
    ( (This)->lpVtbl -> put_DrawingCount(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOutputFiles_INTERFACE_DEFINED__ */


#ifndef __IOutputFile_INTERFACE_DEFINED__
#define __IOutputFile_INTERFACE_DEFINED__

/* interface IOutputFile */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IOutputFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7D0F4F21-784D-49FF-9FCC-B44F8B82FB3F")
    IOutputFile : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOutputFileVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOutputFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOutputFile * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOutputFile * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOutputFile * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOutputFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOutputFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOutputFile * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IOutputFile, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IOutputFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFile, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IOutputFile * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IOutputFile, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IOutputFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOutputFile, put_Type)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IOutputFile * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IOutputFileVtbl;

    interface IOutputFile
    {
        CONST_VTBL struct IOutputFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOutputFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOutputFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOutputFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOutputFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOutputFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOutputFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOutputFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOutputFile_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IOutputFile_put_Name(This,pVal)	\
    ( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IOutputFile_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IOutputFile_put_Type(This,pVal)	\
    ( (This)->lpVtbl -> put_Type(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOutputFile_INTERFACE_DEFINED__ */


#ifndef __IIsogen_INTERFACE_DEFINED__
#define __IIsogen_INTERFACE_DEFINED__

/* interface IIsogen */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IIsogen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4AB9CE13-721A-42B2-A435-F50D31D3D34F")
    IIsogen : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHandshakeTime( 
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Handshake( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InputName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_OptionsName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeepPOD( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutputFiles( 
            /* [retval][out] */ IOutputFiles **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIsogenVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIsogen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIsogen * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIsogen * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIsogen * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIsogen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIsogen * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIsogen * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IIsogen, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IIsogen * This);
        
        DECLSPEC_XFGVIRT(IIsogen, Execute)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IIsogen * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IIsogen, Unload)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            IIsogen * This);
        
        DECLSPEC_XFGVIRT(IIsogen, put_Timeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IIsogen, get_ErrorText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorText )( 
            IIsogen * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIsogen, GetHandshakeTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHandshakeTime )( 
            IIsogen * This,
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount);
        
        DECLSPEC_XFGVIRT(IIsogen, put_Handshake)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Handshake )( 
            IIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIsogen, put_InputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputName )( 
            IIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIsogen, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IIsogen * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIsogen, put_OptionsName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OptionsName )( 
            IIsogen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIsogen, put_KeepPOD)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeepPOD )( 
            IIsogen * This,
            /* [in] */ long rhs);
        
        DECLSPEC_XFGVIRT(IIsogen, get_OutputFiles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutputFiles )( 
            IIsogen * This,
            /* [retval][out] */ IOutputFiles **pVal);
        
        END_INTERFACE
    } IIsogenVtbl;

    interface IIsogen
    {
        CONST_VTBL struct IIsogenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIsogen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIsogen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIsogen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIsogen_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIsogen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIsogen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIsogen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIsogen_Load(This)	\
    ( (This)->lpVtbl -> Load(This) ) 

#define IIsogen_Execute(This,pVal)	\
    ( (This)->lpVtbl -> Execute(This,pVal) ) 

#define IIsogen_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#define IIsogen_put_Timeout(This,rhs)	\
    ( (This)->lpVtbl -> put_Timeout(This,rhs) ) 

#define IIsogen_get_ErrorText(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorText(This,pVal) ) 

#define IIsogen_GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount)	\
    ( (This)->lpVtbl -> GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount) ) 

#define IIsogen_put_Handshake(This,rhs)	\
    ( (This)->lpVtbl -> put_Handshake(This,rhs) ) 

#define IIsogen_put_InputName(This,rhs)	\
    ( (This)->lpVtbl -> put_InputName(This,rhs) ) 

#define IIsogen_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IIsogen_put_OptionsName(This,rhs)	\
    ( (This)->lpVtbl -> put_OptionsName(This,rhs) ) 

#define IIsogen_put_KeepPOD(This,rhs)	\
    ( (This)->lpVtbl -> put_KeepPOD(This,rhs) ) 

#define IIsogen_get_OutputFiles(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputFiles(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIsogen_INTERFACE_DEFINED__ */


#ifndef __IIdfgen_INTERFACE_DEFINED__
#define __IIdfgen_INTERFACE_DEFINED__

/* interface IIdfgen */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IIdfgen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95CCB4E7-19C0-40F4-A2E1-A846115C1A0C")
    IIdfgen : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Handshake( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InputName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RootDirectory( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Project( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHandshakeTime( 
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_OutputName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long rhs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIdfgenVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIdfgen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIdfgen * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIdfgen * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIdfgen * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIdfgen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIdfgen * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIdfgen * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IIdfgen, Execute)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IIdfgen * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_Handshake)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Handshake )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_InputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputName )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_RootDirectory)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RootDirectory )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_Project)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Project )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_Style)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, get_ErrorText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorText )( 
            IIdfgen * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdfgen, GetHandshakeTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHandshakeTime )( 
            IIdfgen * This,
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_OutputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OutputName )( 
            IIdfgen * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IIdfgen, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IIdfgen * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdfgen, put_Timeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IIdfgen * This,
            /* [in] */ long rhs);
        
        END_INTERFACE
    } IIdfgenVtbl;

    interface IIdfgen
    {
        CONST_VTBL struct IIdfgenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdfgen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIdfgen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIdfgen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIdfgen_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIdfgen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIdfgen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIdfgen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIdfgen_Execute(This,pVal)	\
    ( (This)->lpVtbl -> Execute(This,pVal) ) 

#define IIdfgen_put_Handshake(This,rhs)	\
    ( (This)->lpVtbl -> put_Handshake(This,rhs) ) 

#define IIdfgen_put_InputName(This,rhs)	\
    ( (This)->lpVtbl -> put_InputName(This,rhs) ) 

#define IIdfgen_put_RootDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_RootDirectory(This,rhs) ) 

#define IIdfgen_put_Project(This,rhs)	\
    ( (This)->lpVtbl -> put_Project(This,rhs) ) 

#define IIdfgen_put_Style(This,rhs)	\
    ( (This)->lpVtbl -> put_Style(This,rhs) ) 

#define IIdfgen_get_ErrorText(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorText(This,pVal) ) 

#define IIdfgen_GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount)	\
    ( (This)->lpVtbl -> GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount) ) 

#define IIdfgen_put_OutputName(This,rhs)	\
    ( (This)->lpVtbl -> put_OutputName(This,rhs) ) 

#define IIdfgen_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IIdfgen_put_Timeout(This,rhs)	\
    ( (This)->lpVtbl -> put_Timeout(This,rhs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIdfgen_INTERFACE_DEFINED__ */


#ifndef __IUtility_INTERFACE_DEFINED__
#define __IUtility_INTERFACE_DEFINED__

/* interface IUtility */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUtility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80D76FC4-8698-41A2-800D-23E6BA1E53DD")
    IUtility : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Isoa2b( 
            BSTR bstrInputName,
            BSTR bstrOptionName,
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Isob2a( 
            BSTR bstrInputName,
            BSTR bstrOutputName,
            /* [retval][out] */ long *lStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUtilityVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUtility * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUtility * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUtility * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUtility * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUtility * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUtility * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUtility * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IUtility, Isoa2b)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Isoa2b )( 
            IUtility * This,
            BSTR bstrInputName,
            BSTR bstrOptionName,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IUtility, Isob2a)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Isob2a )( 
            IUtility * This,
            BSTR bstrInputName,
            BSTR bstrOutputName,
            /* [retval][out] */ long *lStatus);
        
        END_INTERFACE
    } IUtilityVtbl;

    interface IUtility
    {
        CONST_VTBL struct IUtilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUtility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUtility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUtility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUtility_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUtility_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUtility_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUtility_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUtility_Isoa2b(This,bstrInputName,bstrOptionName,lStatus)	\
    ( (This)->lpVtbl -> Isoa2b(This,bstrInputName,bstrOptionName,lStatus) ) 

#define IUtility_Isob2a(This,bstrInputName,bstrOutputName,lStatus)	\
    ( (This)->lpVtbl -> Isob2a(This,bstrInputName,bstrOutputName,lStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUtility_INTERFACE_DEFINED__ */


#ifndef ___IPersonalIsogen2Events_DISPINTERFACE_DEFINED__
#define ___IPersonalIsogen2Events_DISPINTERFACE_DEFINED__

/* dispinterface _IPersonalIsogen2Events */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IPersonalIsogen2Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B976DEED-F360-4C9E-B9B8-1DBD6A1B78AA")
    _IPersonalIsogen2Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IPersonalIsogen2EventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IPersonalIsogen2Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IPersonalIsogen2Events * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IPersonalIsogen2Events * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IPersonalIsogen2Events * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IPersonalIsogen2Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IPersonalIsogen2Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IPersonalIsogen2Events * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IPersonalIsogen2EventsVtbl;

    interface _IPersonalIsogen2Events
    {
        CONST_VTBL struct _IPersonalIsogen2EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IPersonalIsogen2Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IPersonalIsogen2Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IPersonalIsogen2Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IPersonalIsogen2Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IPersonalIsogen2Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IPersonalIsogen2Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IPersonalIsogen2Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IPersonalIsogen2Events_DISPINTERFACE_DEFINED__ */


#ifndef __IPersonalIsogen2_INTERFACE_DEFINED__
#define __IPersonalIsogen2_INTERFACE_DEFINED__

/* interface IPersonalIsogen2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPersonalIsogen2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1874D06-1FB4-4351-BFB5-FCD29C662D2A")
    IPersonalIsogen2 : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RootDirectory( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Project( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DimensionUnits( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WeightUnits( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DrawingFormat( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Viewpoint( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Tolerance( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MessageLevel( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DemoMode( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadIsogen( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnloadIsogen( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OutputFiles( 
            /* [retval][out] */ IOutputFiles **ppVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InputName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHandshakeTime( 
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Handshake( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeepPOD( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsogenTimeout( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RootDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DimensionUnits( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WeightUnits( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DrawingFormat( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Viewpoint( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Tolerance( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MessageLevel( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DemoMode( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InputName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Handshake( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeepPOD( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsogenTimeout( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IdfgenTimeout( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IdfgenTimeout( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginBatch( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndBatch( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersonalIsogen2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersonalIsogen2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersonalIsogen2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersonalIsogen2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPersonalIsogen2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPersonalIsogen2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPersonalIsogen2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPersonalIsogen2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_RootDirectory)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RootDirectory )( 
            IPersonalIsogen2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_Project)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Project )( 
            IPersonalIsogen2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_Style)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            IPersonalIsogen2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_DimensionUnits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DimensionUnits )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_WeightUnits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WeightUnits )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_DrawingFormat)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DrawingFormat )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_Viewpoint)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Viewpoint )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_Tolerance)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Tolerance )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_MessageLevel)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MessageLevel )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_DemoMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DemoMode )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, Execute)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, LoadIsogen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadIsogen )( 
            IPersonalIsogen2 * This);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, UnloadIsogen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadIsogen )( 
            IPersonalIsogen2 * This);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_OutputFiles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OutputFiles )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ IOutputFiles **ppVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_InputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputName )( 
            IPersonalIsogen2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, GetHandshakeTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHandshakeTime )( 
            IPersonalIsogen2 * This,
            long *lDay,
            long *lMonth,
            long *lYear,
            long *lHour,
            long *lMinute,
            /* [retval][out] */ long *SecondsCount);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_Handshake)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Handshake )( 
            IPersonalIsogen2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_ErrorText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorText )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_KeepPOD)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeepPOD )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_IsogenTimeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsogenTimeout )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_RootDirectory)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RootDirectory )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Project)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Style)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_DimensionUnits)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DimensionUnits )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_WeightUnits)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WeightUnits )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_DrawingFormat)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DrawingFormat )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Viewpoint)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Viewpoint )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Tolerance)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Tolerance )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_MessageLevel)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MessageLevel )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_DemoMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DemoMode )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_InputName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputName )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_Handshake)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Handshake )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_KeepPOD)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeepPOD )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_IsogenTimeout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsogenTimeout )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, get_IdfgenTimeout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IdfgenTimeout )( 
            IPersonalIsogen2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, put_IdfgenTimeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IdfgenTimeout )( 
            IPersonalIsogen2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, BeginBatch)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginBatch )( 
            IPersonalIsogen2 * This);
        
        DECLSPEC_XFGVIRT(IPersonalIsogen2, EndBatch)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndBatch )( 
            IPersonalIsogen2 * This);
        
        END_INTERFACE
    } IPersonalIsogen2Vtbl;

    interface IPersonalIsogen2
    {
        CONST_VTBL struct IPersonalIsogen2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersonalIsogen2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersonalIsogen2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersonalIsogen2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersonalIsogen2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPersonalIsogen2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPersonalIsogen2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPersonalIsogen2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPersonalIsogen2_put_RootDirectory(This,pVal)	\
    ( (This)->lpVtbl -> put_RootDirectory(This,pVal) ) 

#define IPersonalIsogen2_put_Project(This,pVal)	\
    ( (This)->lpVtbl -> put_Project(This,pVal) ) 

#define IPersonalIsogen2_put_Style(This,pVal)	\
    ( (This)->lpVtbl -> put_Style(This,pVal) ) 

#define IPersonalIsogen2_put_DimensionUnits(This,pVal)	\
    ( (This)->lpVtbl -> put_DimensionUnits(This,pVal) ) 

#define IPersonalIsogen2_put_WeightUnits(This,pVal)	\
    ( (This)->lpVtbl -> put_WeightUnits(This,pVal) ) 

#define IPersonalIsogen2_put_DrawingFormat(This,pVal)	\
    ( (This)->lpVtbl -> put_DrawingFormat(This,pVal) ) 

#define IPersonalIsogen2_put_Viewpoint(This,pVal)	\
    ( (This)->lpVtbl -> put_Viewpoint(This,pVal) ) 

#define IPersonalIsogen2_put_Tolerance(This,pVal)	\
    ( (This)->lpVtbl -> put_Tolerance(This,pVal) ) 

#define IPersonalIsogen2_put_MessageLevel(This,pVal)	\
    ( (This)->lpVtbl -> put_MessageLevel(This,pVal) ) 

#define IPersonalIsogen2_put_DemoMode(This,pVal)	\
    ( (This)->lpVtbl -> put_DemoMode(This,pVal) ) 

#define IPersonalIsogen2_Execute(This,pVal)	\
    ( (This)->lpVtbl -> Execute(This,pVal) ) 

#define IPersonalIsogen2_LoadIsogen(This)	\
    ( (This)->lpVtbl -> LoadIsogen(This) ) 

#define IPersonalIsogen2_UnloadIsogen(This)	\
    ( (This)->lpVtbl -> UnloadIsogen(This) ) 

#define IPersonalIsogen2_get_OutputFiles(This,ppVal)	\
    ( (This)->lpVtbl -> get_OutputFiles(This,ppVal) ) 

#define IPersonalIsogen2_put_InputName(This,pVal)	\
    ( (This)->lpVtbl -> put_InputName(This,pVal) ) 

#define IPersonalIsogen2_GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount)	\
    ( (This)->lpVtbl -> GetHandshakeTime(This,lDay,lMonth,lYear,lHour,lMinute,SecondsCount) ) 

#define IPersonalIsogen2_put_Handshake(This,pVal)	\
    ( (This)->lpVtbl -> put_Handshake(This,pVal) ) 

#define IPersonalIsogen2_get_ErrorText(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorText(This,pVal) ) 

#define IPersonalIsogen2_put_KeepPOD(This,pVal)	\
    ( (This)->lpVtbl -> put_KeepPOD(This,pVal) ) 

#define IPersonalIsogen2_put_IsogenTimeout(This,pVal)	\
    ( (This)->lpVtbl -> put_IsogenTimeout(This,pVal) ) 

#define IPersonalIsogen2_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IPersonalIsogen2_get_RootDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_RootDirectory(This,pVal) ) 

#define IPersonalIsogen2_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IPersonalIsogen2_get_Style(This,pVal)	\
    ( (This)->lpVtbl -> get_Style(This,pVal) ) 

#define IPersonalIsogen2_get_DimensionUnits(This,pVal)	\
    ( (This)->lpVtbl -> get_DimensionUnits(This,pVal) ) 

#define IPersonalIsogen2_get_WeightUnits(This,pVal)	\
    ( (This)->lpVtbl -> get_WeightUnits(This,pVal) ) 

#define IPersonalIsogen2_get_DrawingFormat(This,pVal)	\
    ( (This)->lpVtbl -> get_DrawingFormat(This,pVal) ) 

#define IPersonalIsogen2_get_Viewpoint(This,pVal)	\
    ( (This)->lpVtbl -> get_Viewpoint(This,pVal) ) 

#define IPersonalIsogen2_get_Tolerance(This,pVal)	\
    ( (This)->lpVtbl -> get_Tolerance(This,pVal) ) 

#define IPersonalIsogen2_get_MessageLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageLevel(This,pVal) ) 

#define IPersonalIsogen2_get_DemoMode(This,pVal)	\
    ( (This)->lpVtbl -> get_DemoMode(This,pVal) ) 

#define IPersonalIsogen2_get_InputName(This,pVal)	\
    ( (This)->lpVtbl -> get_InputName(This,pVal) ) 

#define IPersonalIsogen2_get_Handshake(This,pVal)	\
    ( (This)->lpVtbl -> get_Handshake(This,pVal) ) 

#define IPersonalIsogen2_get_KeepPOD(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepPOD(This,pVal) ) 

#define IPersonalIsogen2_get_IsogenTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_IsogenTimeout(This,pVal) ) 

#define IPersonalIsogen2_get_IdfgenTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_IdfgenTimeout(This,pVal) ) 

#define IPersonalIsogen2_put_IdfgenTimeout(This,pVal)	\
    ( (This)->lpVtbl -> put_IdfgenTimeout(This,pVal) ) 

#define IPersonalIsogen2_BeginBatch(This)	\
    ( (This)->lpVtbl -> BeginBatch(This) ) 

#define IPersonalIsogen2_EndBatch(This)	\
    ( (This)->lpVtbl -> EndBatch(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersonalIsogen2_INTERFACE_DEFINED__ */


#ifndef ___IIDFTransEvents_DISPINTERFACE_DEFINED__
#define ___IIDFTransEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IIDFTransEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IIDFTransEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9B417A86-ECDF-48C6-8B95-98D02A2DB676")
    _IIDFTransEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IIDFTransEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IIDFTransEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IIDFTransEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IIDFTransEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IIDFTransEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IIDFTransEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IIDFTransEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IIDFTransEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IIDFTransEventsVtbl;

    interface _IIDFTransEvents
    {
        CONST_VTBL struct _IIDFTransEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IIDFTransEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IIDFTransEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IIDFTransEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IIDFTransEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IIDFTransEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IIDFTransEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IIDFTransEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IIDFTransEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IDongle_INTERFACE_DEFINED__
#define __IDongle_INTERFACE_DEFINED__

/* interface IDongle */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDongle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC5C66B3-5337-4A4C-BDF3-30847D59E58F")
    IDongle : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DoesOldDongleExist( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDongleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDongle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDongle * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDongle * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDongle * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDongle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDongle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDongle * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IDongle, get_DoesOldDongleExist)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoesOldDongleExist )( 
            IDongle * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } IDongleVtbl;

    interface IDongle
    {
        CONST_VTBL struct IDongleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDongle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDongle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDongle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDongle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDongle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDongle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDongle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDongle_get_DoesOldDongleExist(This,pVal)	\
    ( (This)->lpVtbl -> get_DoesOldDongleExist(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDongle_INTERFACE_DEFINED__ */


#ifndef __IIDFTrans_INTERFACE_DEFINED__
#define __IIDFTrans_INTERFACE_DEFINED__

/* interface IIDFTrans */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IIDFTrans;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD00B355-DE60-48F0-AD5E-C9DBBB8C561A")
    IIDFTrans : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InputName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InputName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentProperties( 
            long lIndex,
            long *pComponent,
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNetworkData( 
            long lIndex,
            long *pNetwork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStraightProperties( 
            long lIndex,
            long *pStraight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNode( 
            long lIndex,
            long *pNode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNodeAsInt( 
            long lIndex,
            long *pNode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDirectionAsVec3d( 
            long lIndex,
            long *pDirAB,
            long *pDirBA) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDirectionAsString( 
            BSTR *bstrDir,
            long lMode,
            long *pDir) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentCoordinates( 
            long lIndex,
            long *pNodeA,
            long *pNodeB) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentCoordinatesAsInt( 
            long lIndex,
            long *pNodeA,
            long *pNodeB) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentType( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentBore( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBendRadius( 
            long lIndex,
            long *pBend) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPipelineStatistics( 
            long *pStats) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIntersectionData( 
            long *pComponent,
            long *pIntersect) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMaterialProperties( 
            long lIndex,
            long *pMaterial,
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOriginalSequenceId( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIdftransSequenceId( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAssociatedCptId( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTapOffId( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTapComponentIndex( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTapCount( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIsogenSequenceId( 
            long lIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTapByNumber( 
            long lIndex,
            long lTapIndex,
            /* [retval][out] */ long *lValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindCptAtPosition( 
            long lType,
            long *pNode,
            long lMode,
            long *lIndex,
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindCptAtIntPosition( 
            long lType,
            long *pNode,
            long lMode,
            long *lIndex,
            /* [retval][out] */ long *lStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorString( 
            BSTR *bstrError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorData( 
            long *pError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TransferGeneralSettings( 
            long *pSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIDFTransVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIDFTrans * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIDFTrans * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIDFTrans * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIDFTrans * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIDFTrans * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIDFTrans * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIDFTrans * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IIDFTrans, get_InputName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputName )( 
            IIDFTrans * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIDFTrans, put_InputName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputName )( 
            IIDFTrans * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IIDFTrans, Execute)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IIDFTrans * This,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetComponentProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentProperties )( 
            IIDFTrans * This,
            long lIndex,
            long *pComponent,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetNetworkData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkData )( 
            IIDFTrans * This,
            long lIndex,
            long *pNetwork);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetStraightProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStraightProperties )( 
            IIDFTrans * This,
            long lIndex,
            long *pStraight);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetNode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNode )( 
            IIDFTrans * This,
            long lIndex,
            long *pNode);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetNodeAsInt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNodeAsInt )( 
            IIDFTrans * This,
            long lIndex,
            long *pNode);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetDirectionAsVec3d)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDirectionAsVec3d )( 
            IIDFTrans * This,
            long lIndex,
            long *pDirAB,
            long *pDirBA);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetDirectionAsString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDirectionAsString )( 
            IIDFTrans * This,
            BSTR *bstrDir,
            long lMode,
            long *pDir);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetComponentCoordinates)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentCoordinates )( 
            IIDFTrans * This,
            long lIndex,
            long *pNodeA,
            long *pNodeB);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetComponentCoordinatesAsInt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentCoordinatesAsInt )( 
            IIDFTrans * This,
            long lIndex,
            long *pNodeA,
            long *pNodeB);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetComponentType)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetComponentBore)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentBore )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetBendRadius)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBendRadius )( 
            IIDFTrans * This,
            long lIndex,
            long *pBend);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetPipelineStatistics)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPipelineStatistics )( 
            IIDFTrans * This,
            long *pStats);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetIntersectionData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIntersectionData )( 
            IIDFTrans * This,
            long *pComponent,
            long *pIntersect);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetMaterialProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaterialProperties )( 
            IIDFTrans * This,
            long lIndex,
            long *pMaterial,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetOriginalSequenceId)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOriginalSequenceId )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetIdftransSequenceId)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIdftransSequenceId )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetAssociatedCptId)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAssociatedCptId )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetTapOffId)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTapOffId )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetTapComponentIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTapComponentIndex )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetTapCount)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTapCount )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetIsogenSequenceId)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIsogenSequenceId )( 
            IIDFTrans * This,
            long lIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetTapByNumber)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTapByNumber )( 
            IIDFTrans * This,
            long lIndex,
            long lTapIndex,
            /* [retval][out] */ long *lValue);
        
        DECLSPEC_XFGVIRT(IIDFTrans, FindCptAtPosition)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindCptAtPosition )( 
            IIDFTrans * This,
            long lType,
            long *pNode,
            long lMode,
            long *lIndex,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IIDFTrans, FindCptAtIntPosition)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindCptAtIntPosition )( 
            IIDFTrans * This,
            long lType,
            long *pNode,
            long lMode,
            long *lIndex,
            /* [retval][out] */ long *lStatus);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetErrorString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorString )( 
            IIDFTrans * This,
            BSTR *bstrError);
        
        DECLSPEC_XFGVIRT(IIDFTrans, GetErrorData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorData )( 
            IIDFTrans * This,
            long *pError);
        
        DECLSPEC_XFGVIRT(IIDFTrans, TransferGeneralSettings)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TransferGeneralSettings )( 
            IIDFTrans * This,
            long *pSettings);
        
        END_INTERFACE
    } IIDFTransVtbl;

    interface IIDFTrans
    {
        CONST_VTBL struct IIDFTransVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIDFTrans_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIDFTrans_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIDFTrans_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIDFTrans_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIDFTrans_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIDFTrans_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIDFTrans_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIDFTrans_get_InputName(This,pVal)	\
    ( (This)->lpVtbl -> get_InputName(This,pVal) ) 

#define IIDFTrans_put_InputName(This,pVal)	\
    ( (This)->lpVtbl -> put_InputName(This,pVal) ) 

#define IIDFTrans_Execute(This,lStatus)	\
    ( (This)->lpVtbl -> Execute(This,lStatus) ) 

#define IIDFTrans_GetComponentProperties(This,lIndex,pComponent,lStatus)	\
    ( (This)->lpVtbl -> GetComponentProperties(This,lIndex,pComponent,lStatus) ) 

#define IIDFTrans_GetNetworkData(This,lIndex,pNetwork)	\
    ( (This)->lpVtbl -> GetNetworkData(This,lIndex,pNetwork) ) 

#define IIDFTrans_GetStraightProperties(This,lIndex,pStraight)	\
    ( (This)->lpVtbl -> GetStraightProperties(This,lIndex,pStraight) ) 

#define IIDFTrans_GetNode(This,lIndex,pNode)	\
    ( (This)->lpVtbl -> GetNode(This,lIndex,pNode) ) 

#define IIDFTrans_GetNodeAsInt(This,lIndex,pNode)	\
    ( (This)->lpVtbl -> GetNodeAsInt(This,lIndex,pNode) ) 

#define IIDFTrans_GetDirectionAsVec3d(This,lIndex,pDirAB,pDirBA)	\
    ( (This)->lpVtbl -> GetDirectionAsVec3d(This,lIndex,pDirAB,pDirBA) ) 

#define IIDFTrans_GetDirectionAsString(This,bstrDir,lMode,pDir)	\
    ( (This)->lpVtbl -> GetDirectionAsString(This,bstrDir,lMode,pDir) ) 

#define IIDFTrans_GetComponentCoordinates(This,lIndex,pNodeA,pNodeB)	\
    ( (This)->lpVtbl -> GetComponentCoordinates(This,lIndex,pNodeA,pNodeB) ) 

#define IIDFTrans_GetComponentCoordinatesAsInt(This,lIndex,pNodeA,pNodeB)	\
    ( (This)->lpVtbl -> GetComponentCoordinatesAsInt(This,lIndex,pNodeA,pNodeB) ) 

#define IIDFTrans_GetComponentType(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetComponentType(This,lIndex,lValue) ) 

#define IIDFTrans_GetComponentBore(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetComponentBore(This,lIndex,lValue) ) 

#define IIDFTrans_GetBendRadius(This,lIndex,pBend)	\
    ( (This)->lpVtbl -> GetBendRadius(This,lIndex,pBend) ) 

#define IIDFTrans_GetPipelineStatistics(This,pStats)	\
    ( (This)->lpVtbl -> GetPipelineStatistics(This,pStats) ) 

#define IIDFTrans_GetIntersectionData(This,pComponent,pIntersect)	\
    ( (This)->lpVtbl -> GetIntersectionData(This,pComponent,pIntersect) ) 

#define IIDFTrans_GetMaterialProperties(This,lIndex,pMaterial,lStatus)	\
    ( (This)->lpVtbl -> GetMaterialProperties(This,lIndex,pMaterial,lStatus) ) 

#define IIDFTrans_GetOriginalSequenceId(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetOriginalSequenceId(This,lIndex,lValue) ) 

#define IIDFTrans_GetIdftransSequenceId(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetIdftransSequenceId(This,lIndex,lValue) ) 

#define IIDFTrans_GetAssociatedCptId(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetAssociatedCptId(This,lIndex,lValue) ) 

#define IIDFTrans_GetTapOffId(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetTapOffId(This,lIndex,lValue) ) 

#define IIDFTrans_GetTapComponentIndex(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetTapComponentIndex(This,lIndex,lValue) ) 

#define IIDFTrans_GetTapCount(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetTapCount(This,lIndex,lValue) ) 

#define IIDFTrans_GetIsogenSequenceId(This,lIndex,lValue)	\
    ( (This)->lpVtbl -> GetIsogenSequenceId(This,lIndex,lValue) ) 

#define IIDFTrans_GetTapByNumber(This,lIndex,lTapIndex,lValue)	\
    ( (This)->lpVtbl -> GetTapByNumber(This,lIndex,lTapIndex,lValue) ) 

#define IIDFTrans_FindCptAtPosition(This,lType,pNode,lMode,lIndex,lStatus)	\
    ( (This)->lpVtbl -> FindCptAtPosition(This,lType,pNode,lMode,lIndex,lStatus) ) 

#define IIDFTrans_FindCptAtIntPosition(This,lType,pNode,lMode,lIndex,lStatus)	\
    ( (This)->lpVtbl -> FindCptAtIntPosition(This,lType,pNode,lMode,lIndex,lStatus) ) 

#define IIDFTrans_GetErrorString(This,bstrError)	\
    ( (This)->lpVtbl -> GetErrorString(This,bstrError) ) 

#define IIDFTrans_GetErrorData(This,pError)	\
    ( (This)->lpVtbl -> GetErrorData(This,pError) ) 

#define IIDFTrans_TransferGeneralSettings(This,pSettings)	\
    ( (This)->lpVtbl -> TransferGeneralSettings(This,pSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIDFTrans_INTERFACE_DEFINED__ */


#ifndef __ICountingDongle_INTERFACE_DEFINED__
#define __ICountingDongle_INTERFACE_DEFINED__

/* interface ICountingDongle */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICountingDongle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F2CF43C-92D5-448D-B19E-5E447968D01C")
    ICountingDongle : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ long lAppID,
            /* [in] */ long lPassword1,
            /* [in] */ long lPassword2,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Logoff( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IncrementUsage( 
            /* [in] */ BSTR *bstrPipelineReference,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReportUsage( 
            /* [in] */ BSTR *bstrPipelineReference,
            /* [out] */ long *pCount,
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICountingDongleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICountingDongle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICountingDongle * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICountingDongle * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICountingDongle * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICountingDongle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICountingDongle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICountingDongle * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICountingDongle, Logon)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Logon )( 
            ICountingDongle * This,
            /* [in] */ long lAppID,
            /* [in] */ long lPassword1,
            /* [in] */ long lPassword2,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICountingDongle, Logoff)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Logoff )( 
            ICountingDongle * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICountingDongle, IncrementUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IncrementUsage )( 
            ICountingDongle * This,
            /* [in] */ BSTR *bstrPipelineReference,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICountingDongle, ReportUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReportUsage )( 
            ICountingDongle * This,
            /* [in] */ BSTR *bstrPipelineReference,
            /* [out] */ long *pCount,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } ICountingDongleVtbl;

    interface ICountingDongle
    {
        CONST_VTBL struct ICountingDongleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICountingDongle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICountingDongle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICountingDongle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICountingDongle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICountingDongle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICountingDongle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICountingDongle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICountingDongle_Logon(This,lAppID,lPassword1,lPassword2,pVal)	\
    ( (This)->lpVtbl -> Logon(This,lAppID,lPassword1,lPassword2,pVal) ) 

#define ICountingDongle_Logoff(This,pVal)	\
    ( (This)->lpVtbl -> Logoff(This,pVal) ) 

#define ICountingDongle_IncrementUsage(This,bstrPipelineReference,pVal)	\
    ( (This)->lpVtbl -> IncrementUsage(This,bstrPipelineReference,pVal) ) 

#define ICountingDongle_ReportUsage(This,bstrPipelineReference,pCount,pVal)	\
    ( (This)->lpVtbl -> ReportUsage(This,bstrPipelineReference,pCount,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICountingDongle_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PersonalIsogen;

#ifdef __cplusplus

class DECLSPEC_UUID("C28FF079-C962-4E41-95F1-7175DFE76350")
PersonalIsogen;
#endif

EXTERN_C const CLSID CLSID_Isogen;

#ifdef __cplusplus

class DECLSPEC_UUID("7F6608F5-277F-41F9-8668-8244A41BF5B7")
Isogen;
#endif

EXTERN_C const CLSID CLSID_Idfgen;

#ifdef __cplusplus

class DECLSPEC_UUID("2273DDDF-8AB2-46F2-AFE1-F8F7ED17B01E")
Idfgen;
#endif

EXTERN_C const CLSID CLSID_OutputFile;

#ifdef __cplusplus

class DECLSPEC_UUID("A0FD25EC-EFB0-448C-9565-E6CEA3F49C32")
OutputFile;
#endif

EXTERN_C const CLSID CLSID_OutputFiles;

#ifdef __cplusplus

class DECLSPEC_UUID("930E57E4-08DC-4AD7-B43E-FE7BCDF18945")
OutputFiles;
#endif

EXTERN_C const CLSID CLSID_Utility;

#ifdef __cplusplus

class DECLSPEC_UUID("B3DAB063-C2BE-4739-82E6-0C6D74D3C988")
Utility;
#endif

EXTERN_C const CLSID CLSID_PersonalIsogen2;

#ifdef __cplusplus

class DECLSPEC_UUID("B0ECDEA0-443C-48D1-B08E-A4B6142796E4")
PersonalIsogen2;
#endif

EXTERN_C const CLSID CLSID_IDFTrans;

#ifdef __cplusplus

class DECLSPEC_UUID("D39C884E-2DC7-454F-9E8E-477CDD85F204")
IDFTrans;
#endif

EXTERN_C const CLSID CLSID_Dongle;

#ifdef __cplusplus

class DECLSPEC_UUID("63B97BF3-A427-4E64-8456-9A07DC87FD7B")
Dongle;
#endif

EXTERN_C const CLSID CLSID_CountingDongle;

#ifdef __cplusplus

class DECLSPEC_UUID("772B7334-92F0-41A6-B1E5-F5FB49C9AA27")
CountingDongle;
#endif
#endif /* __AliasPersonalIsogen_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


