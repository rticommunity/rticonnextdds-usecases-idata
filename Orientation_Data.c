

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation_Data.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Orientation_Data.h"

#ifndef NDDS_STANDALONE_TYPE
#include "Orientation_DataPlugin.h"
#endif

/* ========================================================================= */
const char *Connext_OrientationTYPENAME = "Connext::Orientation";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* Connext_Orientation_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Connext_Orientation_g_tc_members[2]=
    {

        {
            (char *)"Pitch_deg",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Roll_deg",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode Connext_Orientation_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Connext::Orientation", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Connext_Orientation_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Connext_Orientation*/

    if (is_initialized) {
        return &Connext_Orientation_g_tc;
    }

    Connext_Orientation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Connext_Orientation_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Connext_Orientation_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    /* Initialize the values for member annotations. */
    Connext_Orientation_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
    Connext_Orientation_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Connext_Orientation_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Connext_Orientation_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
    Connext_Orientation_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    Connext_Orientation_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    Connext_Orientation_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    Connext_Orientation_g_tc._data._sampleAccessInfo =
    Connext_Orientation_get_sample_access_info();
    Connext_Orientation_g_tc._data._typePlugin =
    Connext_Orientation_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Connext_Orientation_g_tc;
}

RTIXCdrSampleAccessInfo *Connext_Orientation_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Connext_Orientation_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Connext_Orientation_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Connext_Orientation_g_sampleAccessInfo;
    }

    Connext_Orientation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((Connext_Orientation *)NULL)->Pitch_deg);

    Connext_Orientation_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((Connext_Orientation *)NULL)->Roll_deg);

    Connext_Orientation_g_sampleAccessInfo.memberAccessInfos = 
    Connext_Orientation_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Connext_Orientation);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            Connext_Orientation_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            Connext_Orientation_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Connext_Orientation_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Connext_Orientation_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Connext_Orientation_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Connext_Orientation_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        Connext_Orientation_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Connext_Orientation_finalize_w_return,
        NULL
    };

    return &Connext_Orientation_g_typePlugin;
}
#endif

RTIBool Connext_Orientation_initialize(
    Connext_Orientation* sample) {
    return Connext_Orientation_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Connext_Orientation_initialize_ex(
    Connext_Orientation* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Connext_Orientation_initialize_w_params(
        sample,&allocParams);

}

RTIBool Connext_Orientation_initialize_w_params(
    Connext_Orientation* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->Pitch_deg = 0.0f;

    sample->Roll_deg = 0.0f;

    return RTI_TRUE;
}

RTIBool Connext_Orientation_finalize_w_return(
    Connext_Orientation* sample)
{
    Connext_Orientation_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Connext_Orientation_finalize(
    Connext_Orientation* sample)
{

    Connext_Orientation_finalize_ex(sample,RTI_TRUE);
}

void Connext_Orientation_finalize_ex(
    Connext_Orientation* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Connext_Orientation_finalize_w_params(
        sample,&deallocParams);
}

void Connext_Orientation_finalize_w_params(
    Connext_Orientation* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void Connext_Orientation_finalize_optional_members(
    Connext_Orientation* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Connext_Orientation_copy(
    Connext_Orientation* dst,
    const Connext_Orientation* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyFloat (
        &dst->Pitch_deg, &src->Pitch_deg)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->Roll_deg, &src->Roll_deg)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Connext_Orientation' sequence class.
*/
#define T Connext_Orientation
#define TSeq Connext_OrientationSeq

#define T_initialize_w_params Connext_Orientation_initialize_w_params

#define T_finalize_w_params   Connext_Orientation_finalize_w_params
#define T_copy       Connext_Orientation_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

