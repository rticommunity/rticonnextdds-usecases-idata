

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation_Data.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation_DataPlugin_225253425_h
#define Orientation_DataPlugin_225253425_h

#include "Orientation_Data.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus
extern "C" {
    #endif

    #define Connext_OrientationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Connext_OrientationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Connext_OrientationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Connext_OrientationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Connext_OrientationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Connext_Orientation*
    Connext_OrientationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Connext_Orientation*
    Connext_OrientationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Connext_Orientation*
    Connext_OrientationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Connext_OrientationPluginSupport_copy_data(
        Connext_Orientation *out,
        const Connext_Orientation *in);

    NDDSUSERDllExport extern void 
    Connext_OrientationPluginSupport_destroy_data_w_params(
        Connext_Orientation *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Connext_OrientationPluginSupport_destroy_data_ex(
        Connext_Orientation *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Connext_OrientationPluginSupport_destroy_data(
        Connext_Orientation *sample);

    NDDSUSERDllExport extern void 
    Connext_OrientationPluginSupport_print_data(
        const Connext_Orientation *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    Connext_OrientationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    Connext_OrientationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    Connext_OrientationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    Connext_OrientationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    Connext_OrientationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Connext_Orientation *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    Connext_OrientationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Connext_Orientation *out,
        const Connext_Orientation *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Connext_OrientationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Connext_Orientation *sample); 

    NDDSUSERDllExport extern RTIBool
    Connext_OrientationPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Connext_Orientation *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Connext_OrientationPlugin_deserialize_from_cdr_buffer(
        Connext_Orientation *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Connext_OrientationPlugin_data_to_string(
        const Connext_Orientation *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Connext_OrientationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Connext_OrientationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Connext_OrientationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Connext_OrientationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Connext_OrientationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Connext_Orientation ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Connext_OrientationPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    Connext_OrientationPlugin_new(void);

    NDDSUSERDllExport extern void
    Connext_OrientationPlugin_delete(struct PRESTypePlugin *);

    #ifdef __cplusplus
}
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Orientation_DataPlugin_225253425_h */

