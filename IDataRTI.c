/*
 * (c) 2022 Copyright, Real-Time Innovations, Inc. (RTI) All rights reserved.
 *
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS.  Licensee may
 * redistribute copies of the software provided that all such copies are
 * subject to this license. The software is provided "as is", with no warranty
 * of any type, including any warranty for fitness for any purpose. RTI is
 * under no obligation to maintain or support the software.  RTI shall not be
 * liable for any incidental or consequential damages arising out of the use or
 * inability to use the software.
 */


#include "IDataOS.h"
#include "IData.h"

/* RTI Connext Includes */
#include "ndds/ndds_c.h"
#include "Orientation_Data.h"
#include "Orientation_DataSupport.h"



/************************************************************************************/
/* $begin IDATA_TEMPLATE_INCLUDE_BLOCK */
/* $end IDATA_TEMPLATE_INCLUDE_BLOCK */
/************************************************************************************/

/* DDS Participant and Reader */
static DDS_DomainParticipant *participant = NULL;
static Connext_OrientationDataReader *orientation_reader = NULL;

/* Event handler variables */
static StIDataEvent events[ 50 ];
static int lastEvent;
static void* MyInstrument;

/************************************************************************************/
/* $begin IDATA_TEMPLATE_DEFINITION_BLOCK */
static float* pPITCH;
static float* pROLL;
/* $end IDATA_TEMPLATE_DEFINITION_BLOCK */
/************************************************************************************/

/************************************************************************************/
/* $begin IDATA_TEMPLATE_FUNCTION_BLOCK */
/* $end IDATA_TEMPLATE_FUNCTION_BLOCK */
/************************************************************************************/

PLUGIN_API void GetDataPointers( void* pInstrument )
{
  lastEvent = -1;
  MyInstrument = pInstrument;
  
  /* DDS variables */
  DDS_Subscriber *subscriber = NULL;
  DDS_Topic *topic = NULL;
  DDS_DataReader *reader = NULL;
  DDS_ReturnCode_t retcode;
  const char *type_name = NULL;
  int domainId = 0;

  /* Create Domain Participant with default configuration */
  participant = DDS_DomainParticipantFactory_create_participant(
        DDS_TheParticipantFactory, domainId, &DDS_PARTICIPANT_QOS_DEFAULT,
        NULL /* listener */, DDS_STATUS_MASK_NONE);
  if (participant == NULL) 
  {
     return;
  }
  
  /* Create Subscriber with default configuration */
  subscriber = DDS_DomainParticipant_create_subscriber(
        participant, &DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* no listener */,
        DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) 
  {
    return;
  }

   /* Register the type before creating the topic */
  type_name = Connext_OrientationTypeSupport_get_type_name();
  retcode = Connext_OrientationTypeSupport_register_type(participant, type_name);
  if (retcode != DDS_RETCODE_OK) 
  {
    return;
  }
    
  /* Create the Topic */
  topic = DDS_DomainParticipant_create_topic(
        participant, "Orientation",
        type_name, &DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
  if (topic == NULL) 
  {
    return;
  }

  /* Create reader with default configuration */
  reader = DDS_Subscriber_create_datareader(
        subscriber, DDS_Topic_as_topicdescription(topic),
        &DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (reader == NULL) 
  {
    return;
  }

  orientation_reader = Connext_OrientationDataReader_narrow(reader);
  if (orientation_reader == NULL) 
  {
    return;
  }

 
 
  
  /************************************************************************************/
  /* $begin IDATA_TEMPLATE_INITIALIZATION_BLOCK */                            
  pPITCH = ( float* )IDR_CreateDataPointer( pInstrument, "PITCH", IDATA_TYPE_FLOAT, 1, 0 );
  pROLL = ( float* )IDR_CreateDataPointer( pInstrument, "ROLL", IDATA_TYPE_FLOAT, 1, 0 );
  /* $end IDATA_TEMPLATE_INITIALIZATION_BLOCK */
  /************************************************************************************/
}

PLUGIN_API void DriveData( void* pInstrument )
{
  /* Local variables */
  int eventCount;
  int i;
  
  /* Connect variables */
  struct Connext_OrientationSeq data_seq = DDS_SEQUENCE_INITIALIZER;
  struct DDS_SampleInfoSeq info_seq = DDS_SEQUENCE_INITIALIZER;
  DDS_ReturnCode_t retcode;
  struct Connext_Orientation* data = NULL;

  /* Get the event list and process it */
  eventCount = IDT_GetEvents( events, &lastEvent );
  for ( i = 0; i < eventCount; i++ )
  {
    /***********************************************************************************/
    /* $begin IDATA_TEMPLATE_EVENT_BLOCK */
    /* $end IDATA_TEMPLATE_EVENT_BLOCK */
    /***********************************************************************************/
  }

  retcode = Connext_OrientationDataReader_take(
        orientation_reader,
        &data_seq, &info_seq, DDS_LENGTH_UNLIMITED,
        DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
  if (retcode == DDS_RETCODE_NO_DATA) {
    //ignore
  } else if (retcode != DDS_RETCODE_OK) {
    //error
  }
  for (i = 0; i < Connext_OrientationSeq_get_length(&data_seq); ++i) {
    if (DDS_SampleInfoSeq_get_reference(&info_seq, i)->valid_data) {
      data = Connext_OrientationSeq_get_reference(&data_seq, i);
      *pPITCH = data->Pitch_deg;
      *pROLL = data->Roll_deg;
    }
  }
  
  /************************************************************************************/
  /* $begin IDATA_TEMPLATE_UPDATE_BLOCK */
  /* $end IDATA_TEMPLATE_UPDATE_BLOCK */
  /***********************************************************************************/
}

PLUGIN_API void CleanupData( void* pInstrument )
{
  /***********************************************************************************/
  /* $begin IDATA_TEMPLATE_CLEANUP_BLOCK */
  /* $end IDATA_TEMPLATE_CLEANUP_BLOCK */
  /***********************************************************************************/
  if (participant != NULL) {
    DDS_DomainParticipant_delete_contained_entities(participant);
    DDS_DomainParticipantFactory_delete_participant(DDS_TheParticipantFactory, participant);
  }
}
