

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation_Data.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation_Data_225253425_h
#define Orientation_Data_225253425_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#ifdef __cplusplus
extern "C" {
    #endif

    extern const char *Connext_OrientationTYPENAME;

    typedef struct Connext_Orientation {

        DDS_Float   Pitch_deg ;
        DDS_Float   Roll_deg ;

    } Connext_Orientation ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Connext_Orientation_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Connext_Orientation_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Connext_Orientation_get_sample_access_info(void);
    #endif

    DDS_SEQUENCE(Connext_OrientationSeq, Connext_Orientation);

    NDDSUSERDllExport
    RTIBool Connext_Orientation_initialize(
        Connext_Orientation* self);

    NDDSUSERDllExport
    RTIBool Connext_Orientation_initialize_ex(
        Connext_Orientation* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Connext_Orientation_initialize_w_params(
        Connext_Orientation* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Connext_Orientation_finalize_w_return(
        Connext_Orientation* self);

    NDDSUSERDllExport
    void Connext_Orientation_finalize(
        Connext_Orientation* self);

    NDDSUSERDllExport
    void Connext_Orientation_finalize_ex(
        Connext_Orientation* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Connext_Orientation_finalize_w_params(
        Connext_Orientation* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Connext_Orientation_finalize_optional_members(
        Connext_Orientation* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Connext_Orientation_copy(
        Connext_Orientation* dst,
        const Connext_Orientation* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    #ifdef __cplusplus
}
#endif

#endif /* Orientation_Data */

