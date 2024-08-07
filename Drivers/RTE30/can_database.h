
/* CAN DATABASE HEADER */
/* parsed from: C:\Users\User\Desktop\Can\RTE30\RTE_3.0_CAN1.dbc */
/* 07/08/2024 19:46:13 */


/* ANGLE_SENSOR_COMMAND */
#define   ANGLE_SENSOR_COMMAND_ID   0x530
#define   ANGLE_SENSOR_COMMAND_PERIOD   10000
#define   ANGLE_SENSOR_COMMAND_DLC  6
/*  Values  of ANGLE_SENSOR_COMMAND */
/* Sensor1 (big_endian)*/
#define   SENSOR1_BIT_OFS  0
#define   SENSOR1_VALUE_TYPE   _uint8_t
/* Sensor2 (big_endian)*/
#define   SENSOR2_BIT_OFS  8
#define   SENSOR2_VALUE_TYPE   _uint8_t
/* Sensor3 (big_endian)*/
#define   SENSOR3_BIT_OFS  16
#define   SENSOR3_VALUE_TYPE   _uint8_t
/* Sensor4 (big_endian)*/
#define   SENSOR4_BIT_OFS  24
#define   SENSOR4_VALUE_TYPE   _uint8_t
/* SensorCommand (big_endian)*/
#define   SENSORCOMMAND_BIT_OFS  32
#define   SENSORCOMMAND_VALUE_TYPE   _uint8_t
/* SensorChecksum (big_endian)*/
#define   SENSORCHECKSUM_BIT_OFS  40
#define   SENSORCHECKSUM_VALUE_TYPE   _uint8_t

/* SW_FLAGS_POWERLIM_TCFPID */
#define   SW_FLAGS_POWERLIM_TCFPID_ID   0xd
#define   SW_FLAGS_POWERLIM_TCFPID_PERIOD   1000
#define   SW_FLAGS_POWERLIM_TCFPID_DLC  8
/*  Values  of SW_FLAGS_POWERLIM_TCFPID */
/* ModuleActiveFlags (big_endian)*/
#define   MODULEACTIVEFLAGS_BIT_OFS  0
#define   MODULEACTIVEFLAGS_VALUE_TYPE   _uint8_t
/* PowerLimit (big_endian)*/
#define   POWERLIMIT_BIT_OFS  8
#define   POWERLIMIT_VALUE_TYPE   _uint8_t
/* TCFrontKp (big_endian)*/
#define   TCFRONTKP_BIT_OFS  16
#define   TCFRONTKP_VALUE_TYPE   _uint16_t
/* TCFrontKi (big_endian)*/
#define   TCFRONTKI_BIT_OFS  32
#define   TCFRONTKI_VALUE_TYPE   _uint16_t
/* TCFrontKd (big_endian)*/
#define   TCFRONTKD_BIT_OFS  48
#define   TCFRONTKD_VALUE_TYPE   _uint16_t

/* SW_TVSPEED_YAWSETP_TCRPID */
#define   SW_TVSPEED_YAWSETP_TCRPID_ID   0xe
#define   SW_TVSPEED_YAWSETP_TCRPID_PERIOD   1000
#define   SW_TVSPEED_YAWSETP_TCRPID_DLC  8
/*  Values  of SW_TVSPEED_YAWSETP_TCRPID */
/* TVStartSpeed (big_endian)*/
#define   TVSTARTSPEED_BIT_OFS  0
#define   TVSTARTSPEED_VALUE_TYPE   _uint8_t
/* YawSetPoint (big_endian)*/
#define   YAWSETPOINT_BIT_OFS  8
#define   YAWSETPOINT_VALUE_TYPE   _uint8_t
/* TCRearKp (big_endian)*/
#define   TCREARKP_BIT_OFS  16
#define   TCREARKP_VALUE_TYPE   _uint16_t
/* TCRearKi (big_endian)*/
#define   TCREARKI_BIT_OFS  32
#define   TCREARKI_VALUE_TYPE   _uint16_t
/* TCRearKd (big_endian)*/
#define   TCREARKD_BIT_OFS  48
#define   TCREARKD_VALUE_TYPE   _uint16_t

/* SW_DRV_R2D_TVPID */
#define   SW_DRV_R2D_TVPID_ID   0xc
#define   SW_DRV_R2D_TVPID_PERIOD   1000
#define   SW_DRV_R2D_TVPID_DLC  8
/*  Values  of SW_DRV_R2D_TVPID */
/* Driver (big_endian)*/
#define   DRIVER_BIT_OFS  0
#define   DRIVER_VALUE_TYPE   _uint8_t
/* R2DSound (big_endian)*/
#define   R2DSOUND_BIT_OFS  8
#define   R2DSOUND_VALUE_TYPE   _uint8_t
/* TVKp (big_endian)*/
#define   TVKP_BIT_OFS  16
#define   TVKP_VALUE_TYPE   _uint16_t
/* TVKi (big_endian)*/
#define   TVKI_BIT_OFS  32
#define   TVKI_VALUE_TYPE   _uint16_t
/* TVKd (big_endian)*/
#define   TVKD_BIT_OFS  48
#define   TVKD_VALUE_TYPE   _uint16_t

/* SW_CFILT_POWERBAL_COEFFS */
#define   SW_CFILT_POWERBAL_COEFFS_ID   0xf
#define   SW_CFILT_POWERBAL_COEFFS_PERIOD   1000
#define   SW_CFILT_POWERBAL_COEFFS_DLC  8
/*  Values  of SW_CFILT_POWERBAL_COEFFS */
/* ComplementaryFilter (big_endian)*/
#define   COMPLEMENTARYFILTER_BIT_OFS  0
#define   COMPLEMENTARYFILTER_VALUE_TYPE   _uint8_t
/* PowerBalance_ADU (big_endian)*/
#define   POWERBALANCE_ADU_BIT_OFS  8
#define   POWERBALANCE_ADU_VALUE_TYPE   _int8_t
/* UnderOverSteer_ADU (big_endian)*/
#define   UNDEROVERSTEER_ADU_BIT_OFS  16
#define   UNDEROVERSTEER_ADU_VALUE_TYPE   _uint8_t
/* EPedalBrakeThreshold (big_endian)*/
#define   EPEDALBRAKETHRESHOLD_BIT_OFS  24
#define   EPEDALBRAKETHRESHOLD_VALUE_TYPE   _uint8_t
/* EPedalBrakeAcceleratorThreshold (big_endian)*/
#define   EPEDALBRAKEACCELERATORTHRESHOLD_BIT_OFS  32
#define   EPEDALBRAKEACCELERATORTHRESHOLD_VALUE_TYPE   _uint8_t
/* VelocityCoefficient (big_endian)*/
#define   VELOCITYCOEFFICIENT_BIT_OFS  40
#define   VELOCITYCOEFFICIENT_VALUE_TYPE   _uint8_t
/* TurnCoefficient (big_endian)*/
#define   TURNCOEFFICIENT_BIT_OFS  48
#define   TURNCOEFFICIENT_VALUE_TYPE   _uint8_t
/* WeightTransferCoefficient (big_endian)*/
#define   WEIGHTTRANSFERCOEFFICIENT_BIT_OFS  56
#define   WEIGHTTRANSFERCOEFFICIENT_VALUE_TYPE   _uint8_t

/* MAIN_CFILT_POWERBAL_COEFFS */
#define   MAIN_CFILT_POWERBAL_COEFFS_ID   0xb
#define   MAIN_CFILT_POWERBAL_COEFFS_PERIOD   1000
#define   MAIN_CFILT_POWERBAL_COEFFS_DLC  8
/*  Values  of MAIN_CFILT_POWERBAL_COEFFS */
/* ComplementaryFilter (big_endian)*/
#define   COMPLEMENTARYFILTER_BIT_OFS  0
#define   COMPLEMENTARYFILTER_VALUE_TYPE   _uint8_t
/* PowerBalance_ADU (big_endian)*/
#define   POWERBALANCE_ADU_BIT_OFS  8
#define   POWERBALANCE_ADU_VALUE_TYPE   _int8_t
/* UnderOverSteer_ADU (big_endian)*/
#define   UNDEROVERSTEER_ADU_BIT_OFS  16
#define   UNDEROVERSTEER_ADU_VALUE_TYPE   _uint8_t
/* EPedalBrakeThreshold (big_endian)*/
#define   EPEDALBRAKETHRESHOLD_BIT_OFS  24
#define   EPEDALBRAKETHRESHOLD_VALUE_TYPE   _uint8_t
/* EPedalBrakeAcceleratorThreshold (big_endian)*/
#define   EPEDALBRAKEACCELERATORTHRESHOLD_BIT_OFS  32
#define   EPEDALBRAKEACCELERATORTHRESHOLD_VALUE_TYPE   _uint8_t
/* VelocityCoefficient (big_endian)*/
#define   VELOCITYCOEFFICIENT_BIT_OFS  40
#define   VELOCITYCOEFFICIENT_VALUE_TYPE   _uint8_t
/* TurnCoefficient (big_endian)*/
#define   TURNCOEFFICIENT_BIT_OFS  48
#define   TURNCOEFFICIENT_VALUE_TYPE   _uint8_t
/* WeightTransferCoefficient (big_endian)*/
#define   WEIGHTTRANSFERCOEFFICIENT_BIT_OFS  56
#define   WEIGHTTRANSFERCOEFFICIENT_VALUE_TYPE   _uint8_t

/* MAIN_TVSPEED_YAWSETP_TCRPID */
#define   MAIN_TVSPEED_YAWSETP_TCRPID_ID   0xa
#define   MAIN_TVSPEED_YAWSETP_TCRPID_PERIOD   1000
#define   MAIN_TVSPEED_YAWSETP_TCRPID_DLC  8
/*  Values  of MAIN_TVSPEED_YAWSETP_TCRPID */
/* TVStartSpeed (big_endian)*/
#define   TVSTARTSPEED_BIT_OFS  0
#define   TVSTARTSPEED_VALUE_TYPE   _uint8_t
/* YawSetPoint (big_endian)*/
#define   YAWSETPOINT_BIT_OFS  8
#define   YAWSETPOINT_VALUE_TYPE   _uint8_t
/* TCRearKp (big_endian)*/
#define   TCREARKP_BIT_OFS  16
#define   TCREARKP_VALUE_TYPE   _uint16_t
/* TCRearKi (big_endian)*/
#define   TCREARKI_BIT_OFS  32
#define   TCREARKI_VALUE_TYPE   _uint16_t
/* TCRearKd (big_endian)*/
#define   TCREARKD_BIT_OFS  48
#define   TCREARKD_VALUE_TYPE   _uint16_t

/* MAIN_FLAGS_POWERLIM_TCFPID */
#define   MAIN_FLAGS_POWERLIM_TCFPID_ID   0x9
#define   MAIN_FLAGS_POWERLIM_TCFPID_PERIOD   1000
#define   MAIN_FLAGS_POWERLIM_TCFPID_DLC  8
/*  Values  of MAIN_FLAGS_POWERLIM_TCFPID */
/* ModuleActiveFlags (big_endian)*/
#define   MODULEACTIVEFLAGS_BIT_OFS  0
#define   MODULEACTIVEFLAGS_VALUE_TYPE   _uint8_t
/* PowerLimit (big_endian)*/
#define   POWERLIMIT_BIT_OFS  8
#define   POWERLIMIT_VALUE_TYPE   _uint8_t
/* TCFrontKp (big_endian)*/
#define   TCFRONTKP_BIT_OFS  16
#define   TCFRONTKP_VALUE_TYPE   _uint16_t
/* TCFrontKi (big_endian)*/
#define   TCFRONTKI_BIT_OFS  32
#define   TCFRONTKI_VALUE_TYPE   _uint16_t
/* TCFrontKd (big_endian)*/
#define   TCFRONTKD_BIT_OFS  48
#define   TCFRONTKD_VALUE_TYPE   _uint16_t

/* MAIN_DRV_R2D_TVPID */
#define   MAIN_DRV_R2D_TVPID_ID   0x8
#define   MAIN_DRV_R2D_TVPID_PERIOD   1000
#define   MAIN_DRV_R2D_TVPID_DLC  8
/*  Values  of MAIN_DRV_R2D_TVPID */
/* Driver (big_endian)*/
#define   DRIVER_BIT_OFS  0
#define   DRIVER_VALUE_TYPE   _uint8_t
/* R2DSound (big_endian)*/
#define   R2DSOUND_BIT_OFS  8
#define   R2DSOUND_VALUE_TYPE   _uint8_t
/* TVKp (big_endian)*/
#define   TVKP_BIT_OFS  16
#define   TVKP_VALUE_TYPE   _uint16_t
/* TVKi (big_endian)*/
#define   TVKI_BIT_OFS  32
#define   TVKI_VALUE_TYPE   _uint16_t
/* TVKd (big_endian)*/
#define   TVKD_BIT_OFS  48
#define   TVKD_VALUE_TYPE   _uint16_t

/* ACCU_FAN_SPEED_REQUEST */
#define   ACCU_FAN_SPEED_REQUEST_ID   0x6
#define   ACCU_FAN_SPEED_REQUEST_PERIOD   10000
#define   ACCU_FAN_SPEED_REQUEST_DLC  2
/*  Values  of ACCU_FAN_SPEED_REQUEST */
/* AccuFunSpeedIncrease (little_endian)*/
#define   ACCUFUNSPEEDINCREASE_BIT_OFS  0
#define   ACCUFUNSPEEDINCREASE_VALUE_TYPE   _int8_t
/* AccuFunSpeedSet (little_endian)*/
#define   ACCUFUNSPEEDSET_BIT_OFS  8
#define   ACCUFUNSPEEDSET_VALUE_TYPE   _uint8_t

/* ACCU_FAN_SPEED */
#define   ACCU_FAN_SPEED_ID   0x1c
#define   ACCU_FAN_SPEED_PERIOD   1000
#define   ACCU_FAN_SPEED_DLC  1
/*  Values  of ACCU_FAN_SPEED */
/* AccuFunSpeed (little_endian)*/
#define   ACCUFUNSPEED_BIT_OFS  0
#define   ACCUFUNSPEED_VALUE_TYPE   _uint8_t

/* MAIN_PBALANCE_OSTEER */
#define   MAIN_PBALANCE_OSTEER_ID   0x27
#define   MAIN_PBALANCE_OSTEER_PERIOD   100
#define   MAIN_PBALANCE_OSTEER_DLC  8
/*  Values  of MAIN_PBALANCE_OSTEER */
/* PowerBalance_MAIN (little_endian)*/
#define   POWERBALANCE_MAIN_BIT_OFS  0
#define   POWERBALANCE_MAIN_VALUE_TYPE   _uint32_t
/* UnderOverSteer_MAIN (little_endian)*/
#define   UNDEROVERSTEER_MAIN_BIT_OFS  32
#define   UNDEROVERSTEER_MAIN_VALUE_TYPE   _uint32_t

/* MAIN_O_P_Q */
#define   MAIN_O_P_Q_ID   0x26
#define   MAIN_O_P_Q_PERIOD   100
#define   MAIN_O_P_Q_DLC  8
/*  Values  of MAIN_O_P_Q */
/* O (little_endian)*/
#define   O_BIT_OFS  0
#define   O_VALUE_TYPE   _uint32_t
/* P (little_endian)*/
#define   P_BIT_OFS  32
#define   P_VALUE_TYPE   _uint16_t
/* Q (little_endian)*/
#define   Q_BIT_OFS  48
#define   Q_VALUE_TYPE   _uint16_t

/* MAIN_KL */
#define   MAIN_KL_ID   0x25
#define   MAIN_KL_PERIOD   100
#define   MAIN_KL_DLC  8
/*  Values  of MAIN_KL */
/* K (little_endian)*/
#define   K_BIT_OFS  0
#define   K_VALUE_TYPE   _uint32_t
/* L (little_endian)*/
#define   L_BIT_OFS  32
#define   L_VALUE_TYPE   _uint32_t

/* LV_BMS_REQUEST_FRAME */
#define   LV_BMS_REQUEST_FRAME_ID   0x40a
#define   LV_BMS_REQUEST_FRAME_PERIOD   10000
#define   LV_BMS_REQUEST_FRAME_DLC  1
/*  Values  of LV_BMS_REQUEST_FRAME */
/* LVBMSRequestPowerCycle (little_endian)*/
#define   LVBMSREQUESTPOWERCYCLE_BIT_OFS  0
#define   LVBMSREQUESTPOWERCYCLE_VALUE_TYPE   _uint8_t

/* POWER_MODULE_REQUEST */
#define   POWER_MODULE_REQUEST_ID   0x40f
#define   POWER_MODULE_REQUEST_PERIOD   200
#define   POWER_MODULE_REQUEST_DLC  8
/*  Values  of POWER_MODULE_REQUEST */
/* Pump (big_endian)*/
#define   PUMP_BIT_OFS  0
#define   PUMP_VALUE_TYPE   _uint8_t
/* FunRadiator (big_endian)*/
#define   FUNRADIATOR_BIT_OFS  8
#define   FUNRADIATOR_VALUE_TYPE   _uint8_t
/* FanAccu (big_endian)*/
#define   FANACCU_BIT_OFS  16
#define   FANACCU_VALUE_TYPE   _uint8_t
/* Inv (big_endian)*/
#define   INV_BIT_OFS  24
#define   INV_VALUE_TYPE   _uint8_t

/* GPS_FRAME_7 */
#define   GPS_FRAME_7_ID   0x407
#define   GPS_FRAME_7_PERIOD   100
#define   GPS_FRAME_7_DLC  8
/*  Values  of GPS_FRAME_7 */

/* GPS_FRAME_6 */
#define   GPS_FRAME_6_ID   0x406
#define   GPS_FRAME_6_PERIOD   100
#define   GPS_FRAME_6_DLC  8
/*  Values  of GPS_FRAME_6 */

/* GPS_FRAME_5 */
#define   GPS_FRAME_5_ID   0x405
#define   GPS_FRAME_5_PERIOD   100
#define   GPS_FRAME_5_DLC  8
/*  Values  of GPS_FRAME_5 */

/* MAXON_NMT_MONITORING */
#define   MAXON_NMT_MONITORING_ID   0x702
#define   MAXON_NMT_MONITORING_PERIOD   100
#define   MAXON_NMT_MONITORING_DLC  8
/*  Values  of MAXON_NMT_MONITORING */

/* MAXON_PDO_TRANSMIT_4 */
#define   MAXON_PDO_TRANSMIT_4_ID   0x482
#define   MAXON_PDO_TRANSMIT_4_PERIOD   100
#define   MAXON_PDO_TRANSMIT_4_DLC  8
/*  Values  of MAXON_PDO_TRANSMIT_4 */

/* NODE_CLAIMING_PROCEDURE_END */
#define   NODE_CLAIMING_PROCEDURE_END_ID   0x6ff
#define   NODE_CLAIMING_PROCEDURE_END_PERIOD   100
#define   NODE_CLAIMING_PROCEDURE_END_DLC  8
/*  Values  of NODE_CLAIMING_PROCEDURE_END */

/* NODE_CLAIMING_PROCEDURE_BEGIN */
#define   NODE_CLAIMING_PROCEDURE_BEGIN_ID   0x6f0
#define   NODE_CLAIMING_PROCEDURE_BEGIN_PERIOD   100
#define   NODE_CLAIMING_PROCEDURE_BEGIN_DLC  8
/*  Values  of NODE_CLAIMING_PROCEDURE_BEGIN */

/* NODE_CLAIMING_PROCEDURE_3 */
#define   NODE_CLAIMING_PROCEDURE_3_ID   0x6e3
#define   NODE_CLAIMING_PROCEDURE_3_PERIOD   100
#define   NODE_CLAIMING_PROCEDURE_3_DLC  8
/*  Values  of NODE_CLAIMING_PROCEDURE_3 */

/* NODE_CLAIMING_PROCEDURE_2 */
#define   NODE_CLAIMING_PROCEDURE_2_ID   0x6e2
#define   NODE_CLAIMING_PROCEDURE_2_PERIOD   100
#define   NODE_CLAIMING_PROCEDURE_2_DLC  8
/*  Values  of NODE_CLAIMING_PROCEDURE_2 */

/* NODE_CLAIMING_PROCEDURE_1 */
#define   NODE_CLAIMING_PROCEDURE_1_ID   0x6e1
#define   NODE_CLAIMING_PROCEDURE_1_PERIOD   100
#define   NODE_CLAIMING_PROCEDURE_1_DLC  8
/*  Values  of NODE_CLAIMING_PROCEDURE_1 */

/* DYNAMIC_SDO_REQUEST */
#define   DYNAMIC_SDO_REQUEST_ID   0x6e0
#define   DYNAMIC_SDO_REQUEST_PERIOD   100
#define   DYNAMIC_SDO_REQUEST_DLC  8
/*  Values  of DYNAMIC_SDO_REQUEST */

/* SAFETY_RELEVANT_DATA_END */
#define   SAFETY_RELEVANT_DATA_END_ID   0x180
#define   SAFETY_RELEVANT_DATA_END_PERIOD   100
#define   SAFETY_RELEVANT_DATA_END_DLC  8
/*  Values  of SAFETY_RELEVANT_DATA_END */

/* SAFETY_RELEVANT_DATA_BEGIN */
#define   SAFETY_RELEVANT_DATA_BEGIN_ID   0x101
#define   SAFETY_RELEVANT_DATA_BEGIN_PERIOD   100
#define   SAFETY_RELEVANT_DATA_BEGIN_DLC  8
/*  Values  of SAFETY_RELEVANT_DATA_BEGIN */

/* FLYING_MASTER_END */
#define   FLYING_MASTER_END_ID   0x76
#define   FLYING_MASTER_END_PERIOD   100
#define   FLYING_MASTER_END_DLC  8
/*  Values  of FLYING_MASTER_END */

/* FLYING_MASTER_BEGIN */
#define   FLYING_MASTER_BEGIN_ID   0x71
#define   FLYING_MASTER_BEGIN_PERIOD   100
#define   FLYING_MASTER_BEGIN_DLC  8
/*  Values  of FLYING_MASTER_BEGIN */

/* MAXON_NMT_NODE_MONITORING */
#define   MAXON_NMT_NODE_MONITORING_ID   0x3
#define   MAXON_NMT_NODE_MONITORING_PERIOD   100
#define   MAXON_NMT_NODE_MONITORING_DLC  8
/*  Values  of MAXON_NMT_NODE_MONITORING */

/* MAXON_SDO_RECEIVE */
#define   MAXON_SDO_RECEIVE_ID   0x602
#define   MAXON_SDO_RECEIVE_PERIOD   100
#define   MAXON_SDO_RECEIVE_DLC  8
/*  Values  of MAXON_SDO_RECEIVE */

/* MAXON_SDO_TRANSMIT */
#define   MAXON_SDO_TRANSMIT_ID   0x582
#define   MAXON_SDO_TRANSMIT_PERIOD   100
#define   MAXON_SDO_TRANSMIT_DLC  8
/*  Values  of MAXON_SDO_TRANSMIT */

/* MAXON_PDO_RECEIVE_2 */
#define   MAXON_PDO_RECEIVE_2_ID   0x2
#define   MAXON_PDO_RECEIVE_2_PERIOD   100
#define   MAXON_PDO_RECEIVE_2_DLC  8
/*  Values  of MAXON_PDO_RECEIVE_2 */

/* MAXON_PDO_TRANSMIT_2 */
#define   MAXON_PDO_TRANSMIT_2_ID   0x382
#define   MAXON_PDO_TRANSMIT_2_PERIOD   100
#define   MAXON_PDO_TRANSMIT_2_DLC  8
/*  Values  of MAXON_PDO_TRANSMIT_2 */

/* MAXON_PDO_RECEIVE_1 */
#define   MAXON_PDO_RECEIVE_1_ID   0x302
#define   MAXON_PDO_RECEIVE_1_PERIOD   100
#define   MAXON_PDO_RECEIVE_1_DLC  8
/*  Values  of MAXON_PDO_RECEIVE_1 */

/* MAXON_PDO_TRANSMIT_1 */
#define   MAXON_PDO_TRANSMIT_1_ID   0x282
#define   MAXON_PDO_TRANSMIT_1_PERIOD   100
#define   MAXON_PDO_TRANSMIT_1_DLC  8
/*  Values  of MAXON_PDO_TRANSMIT_1 */

/* MAXON_PDO_RECEIVE */
#define   MAXON_PDO_RECEIVE_ID   0x202
#define   MAXON_PDO_RECEIVE_PERIOD   100
#define   MAXON_PDO_RECEIVE_DLC  8
/*  Values  of MAXON_PDO_RECEIVE */

/* MAXON_PDO_TRANSMIT */
#define   MAXON_PDO_TRANSMIT_ID   0x182
#define   MAXON_PDO_TRANSMIT_PERIOD   100
#define   MAXON_PDO_TRANSMIT_DLC  8
/*  Values  of MAXON_PDO_TRANSMIT */

/* MAXON_EMERGENCY_TRANSMIT */
#define   MAXON_EMERGENCY_TRANSMIT_ID   0x82
#define   MAXON_EMERGENCY_TRANSMIT_PERIOD   100
#define   MAXON_EMERGENCY_TRANSMIT_DLC  8
/*  Values  of MAXON_EMERGENCY_TRANSMIT */

/* INDICATE_ACTIVE_INTERFACE */
#define   INDICATE_ACTIVE_INTERFACE_ID   0x7f
#define   INDICATE_ACTIVE_INTERFACE_PERIOD   100
#define   INDICATE_ACTIVE_INTERFACE_DLC  8
/*  Values  of INDICATE_ACTIVE_INTERFACE */

/* GLOBAL_FAILSAFE_COMMAND */
#define   GLOBAL_FAILSAFE_COMMAND_ID   0x1
#define   GLOBAL_FAILSAFE_COMMAND_PERIOD   100
#define   GLOBAL_FAILSAFE_COMMAND_DLC  8
/*  Values  of GLOBAL_FAILSAFE_COMMAND */

/* PDO_RECEIVE */
#define   PDO_RECEIVE_ID   0x211
#define   PDO_RECEIVE_PERIOD   100
#define   PDO_RECEIVE_DLC  8
/*  Values  of PDO_RECEIVE */

/* PDO_TRANSMIT */
#define   PDO_TRANSMIT_ID   0x191
#define   PDO_TRANSMIT_PERIOD   30
#define   PDO_TRANSMIT_DLC  8
/*  Values  of PDO_TRANSMIT */

/* RES_SDO_RECEIVE */
#define   RES_SDO_RECEIVE_ID   0x611
#define   RES_SDO_RECEIVE_PERIOD   100
#define   RES_SDO_RECEIVE_DLC  8
/*  Values  of RES_SDO_RECEIVE */

/* RES_SDO_TRANSMIT */
#define   RES_SDO_TRANSMIT_ID   0x591
#define   RES_SDO_TRANSMIT_PERIOD   100
#define   RES_SDO_TRANSMIT_DLC  8
/*  Values  of RES_SDO_TRANSMIT */

/* LSS_RECEIVE */
#define   LSS_RECEIVE_ID   0x7e5
#define   LSS_RECEIVE_PERIOD   100
#define   LSS_RECEIVE_DLC  8
/*  Values  of LSS_RECEIVE */

/* LSS_TRANSMIT */
#define   LSS_TRANSMIT_ID   0x7e4
#define   LSS_TRANSMIT_PERIOD   100
#define   LSS_TRANSMIT_DLC  8
/*  Values  of LSS_TRANSMIT */

/* NMT_NODE_MONITORING */
#define   NMT_NODE_MONITORING_ID   0x711
#define   NMT_NODE_MONITORING_PERIOD   100
#define   NMT_NODE_MONITORING_DLC  8
/*  Values  of NMT_NODE_MONITORING */

/* TIMESTAMP */
#define   TIMESTAMP_ID   0x100
#define   TIMESTAMP_PERIOD   100
#define   TIMESTAMP_DLC  8
/*  Values  of TIMESTAMP */

/* RES_EMERGENCY */
#define   RES_EMERGENCY_ID   0x91
#define   RES_EMERGENCY_PERIOD   100
#define   RES_EMERGENCY_DLC  8
/*  Values  of RES_EMERGENCY */

/* SYNC */
#define   SYNC_ID   0x80
#define   SYNC_PERIOD   100
#define   SYNC_DLC  8
/*  Values  of SYNC */

/* NMT_NODE_CONTROL */
#define   NMT_NODE_CONTROL_ID   0x0
#define   NMT_NODE_CONTROL_PERIOD   100
#define   NMT_NODE_CONTROL_DLC  8
/*  Values  of NMT_NODE_CONTROL */

/* DV_SYSTEM_STATUS */
#define   DV_SYSTEM_STATUS_ID   0x502
#define   DV_SYSTEM_STATUS_PERIOD   100
#define   DV_SYSTEM_STATUS_DLC  5
/*  Values  of DV_SYSTEM_STATUS */
/* ASState (big_endian)*/
#define   ASSTATE_BIT_OFS  7
#define   ASSTATE_VALUE_TYPE   _uint3_t
/* EBSState (big_endian)*/
#define   EBSSTATE_BIT_OFS  4
#define   EBSSTATE_VALUE_TYPE   _uint2_t
/* AMIState (big_endian)*/
#define   AMISTATE_BIT_OFS  2
#define   AMISTATE_VALUE_TYPE   _uint3_t
/* SteeringState (big_endian)*/
#define   STEERINGSTATE_BIT_OFS  15
#define   STEERINGSTATE_VALUE_TYPE   _uint1_t
/* ServiceBrakeStateEngaged (big_endian)*/
#define   SERVICEBRAKESTATEENGAGED_BIT_OFS  14
#define   SERVICEBRAKESTATEENGAGED_VALUE_TYPE   _uint2_t
/* LapCounter (big_endian)*/
#define   LAPCOUNTER_BIT_OFS  12
#define   LAPCOUNTER_VALUE_TYPE   _uint4_t
/* ConesCountActual (big_endian)*/
#define   CONESCOUNTACTUAL_BIT_OFS  1
#define   CONESCOUNTACTUAL_VALUE_TYPE   _uint8_t
/* ConesCountAll (big_endian)*/
#define   CONESCOUNTALL_BIT_OFS  9
#define   CONESCOUNTALL_VALUE_TYPE   _uint17_t

/* DV_DRIVING_DYNAMICS_2 */
#define   DV_DRIVING_DYNAMICS_2_ID   0x501
#define   DV_DRIVING_DYNAMICS_2_PERIOD   100
#define   DV_DRIVING_DYNAMICS_2_DLC  6
/*  Values  of DV_DRIVING_DYNAMICS_2 */
/* AccelerationLongitudinal (big_endian)*/
#define   ACCELERATIONLONGITUDINAL_BIT_OFS  0
#define   ACCELERATIONLONGITUDINAL_VALUE_TYPE   _int16_t
/* AccelerationLateral (big_endian)*/
#define   ACCELERATIONLATERAL_BIT_OFS  16
#define   ACCELERATIONLATERAL_VALUE_TYPE   _int16_t
/* YawRate (big_endian)*/
#define   YAWRATE_BIT_OFS  32
#define   YAWRATE_VALUE_TYPE   _int16_t

/* DV_DRIVING_DYNAMICS_1 */
#define   DV_DRIVING_DYNAMICS_1_ID   0x500
#define   DV_DRIVING_DYNAMICS_1_PERIOD   100
#define   DV_DRIVING_DYNAMICS_1_DLC  8
/*  Values  of DV_DRIVING_DYNAMICS_1 */
/* SpeedActual (big_endian)*/
#define   SPEEDACTUAL_BIT_OFS  0
#define   SPEEDACTUAL_VALUE_TYPE   _uint8_t
/* SpeedTarget (big_endian)*/
#define   SPEEDTARGET_BIT_OFS  8
#define   SPEEDTARGET_VALUE_TYPE   _uint8_t
/* SteeringAngleActual (big_endian)*/
#define   STEERINGANGLEACTUAL_BIT_OFS  16
#define   STEERINGANGLEACTUAL_VALUE_TYPE   _int8_t
/* SteeringAngleTarget (big_endian)*/
#define   STEERINGANGLETARGET_BIT_OFS  24
#define   STEERINGANGLETARGET_VALUE_TYPE   _int8_t
/* BrakeHydrActual (big_endian)*/
#define   BRAKEHYDRACTUAL_BIT_OFS  32
#define   BRAKEHYDRACTUAL_VALUE_TYPE   _uint8_t
/* BrakeHydrTarget (big_endian)*/
#define   BRAKEHYDRTARGET_BIT_OFS  40
#define   BRAKEHYDRTARGET_VALUE_TYPE   _uint8_t
/* MotorMomentActual (big_endian)*/
#define   MOTORMOMENTACTUAL_BIT_OFS  48
#define   MOTORMOMENTACTUAL_VALUE_TYPE   _int8_t
/* MotorMomentTarget (big_endian)*/
#define   MOTORMOMENTTARGET_BIT_OFS  56
#define   MOTORMOMENTTARGET_VALUE_TYPE   _int8_t

/* AREO_SENS_REAR_2 */
#define   AREO_SENS_REAR_2_ID   0x52f
#define   AREO_SENS_REAR_2_PERIOD   1000
#define   AREO_SENS_REAR_2_DLC  8
/*  Values  of AREO_SENS_REAR_2 */
/* SENS_18 (big_endian)*/
#define   SENS_18_BIT_OFS  0
#define   SENS_18_VALUE_TYPE   _uint8_t
/* SENS_20 (big_endian)*/
#define   SENS_20_BIT_OFS  8
#define   SENS_20_VALUE_TYPE   _uint8_t
/* SENS_22 (big_endian)*/
#define   SENS_22_BIT_OFS  16
#define   SENS_22_VALUE_TYPE   _uint8_t
/* SENS_24 (big_endian)*/
#define   SENS_24_BIT_OFS  24
#define   SENS_24_VALUE_TYPE   _uint8_t
/* SENS_26 (big_endian)*/
#define   SENS_26_BIT_OFS  32
#define   SENS_26_VALUE_TYPE   _uint8_t
/* SENS_28 (big_endian)*/
#define   SENS_28_BIT_OFS  40
#define   SENS_28_VALUE_TYPE   _uint8_t
/* SENS_30 (big_endian)*/
#define   SENS_30_BIT_OFS  48
#define   SENS_30_VALUE_TYPE   _uint8_t
/* SENS_32 (big_endian)*/
#define   SENS_32_BIT_OFS  56
#define   SENS_32_VALUE_TYPE   _uint8_t

/* AREO_SENS_FRONT_2 */
#define   AREO_SENS_FRONT_2_ID   0x52d
#define   AREO_SENS_FRONT_2_PERIOD   1000
#define   AREO_SENS_FRONT_2_DLC  8
/*  Values  of AREO_SENS_FRONT_2 */
/* SENS_2 (big_endian)*/
#define   SENS_2_BIT_OFS  0
#define   SENS_2_VALUE_TYPE   _uint8_t
/* SENS_4 (big_endian)*/
#define   SENS_4_BIT_OFS  8
#define   SENS_4_VALUE_TYPE   _uint8_t
/* SENS_6 (big_endian)*/
#define   SENS_6_BIT_OFS  16
#define   SENS_6_VALUE_TYPE   _uint8_t
/* SENS_8 (big_endian)*/
#define   SENS_8_BIT_OFS  24
#define   SENS_8_VALUE_TYPE   _uint8_t
/* SENS_10 (big_endian)*/
#define   SENS_10_BIT_OFS  32
#define   SENS_10_VALUE_TYPE   _uint8_t
/* SENS_12 (big_endian)*/
#define   SENS_12_BIT_OFS  40
#define   SENS_12_VALUE_TYPE   _uint8_t
/* SENS_14 (big_endian)*/
#define   SENS_14_BIT_OFS  48
#define   SENS_14_VALUE_TYPE   _uint8_t
/* SENS_16 (big_endian)*/
#define   SENS_16_BIT_OFS  56
#define   SENS_16_VALUE_TYPE   _uint8_t

/* AREO_SENS_REAR_1 */
#define   AREO_SENS_REAR_1_ID   0x52e
#define   AREO_SENS_REAR_1_PERIOD   1000
#define   AREO_SENS_REAR_1_DLC  8
/*  Values  of AREO_SENS_REAR_1 */
/* SENS_17 (big_endian)*/
#define   SENS_17_BIT_OFS  0
#define   SENS_17_VALUE_TYPE   _uint8_t
/* SENS_19 (big_endian)*/
#define   SENS_19_BIT_OFS  8
#define   SENS_19_VALUE_TYPE   _uint8_t
/* SENS_21 (big_endian)*/
#define   SENS_21_BIT_OFS  16
#define   SENS_21_VALUE_TYPE   _uint8_t
/* SENS_23 (big_endian)*/
#define   SENS_23_BIT_OFS  24
#define   SENS_23_VALUE_TYPE   _uint8_t
/* SENS_25 (big_endian)*/
#define   SENS_25_BIT_OFS  32
#define   SENS_25_VALUE_TYPE   _uint8_t
/* SENS_27 (big_endian)*/
#define   SENS_27_BIT_OFS  40
#define   SENS_27_VALUE_TYPE   _uint8_t
/* SENS_29 (big_endian)*/
#define   SENS_29_BIT_OFS  48
#define   SENS_29_VALUE_TYPE   _uint8_t
/* SENS_31 (big_endian)*/
#define   SENS_31_BIT_OFS  56
#define   SENS_31_VALUE_TYPE   _uint8_t

/* AREO_SENS_FRONT_1 */
#define   AREO_SENS_FRONT_1_ID   0x52c
#define   AREO_SENS_FRONT_1_PERIOD   1000
#define   AREO_SENS_FRONT_1_DLC  8
/*  Values  of AREO_SENS_FRONT_1 */
/* SENS_1 (big_endian)*/
#define   SENS_1_BIT_OFS  0
#define   SENS_1_VALUE_TYPE   _uint8_t
/* SENS_3 (big_endian)*/
#define   SENS_3_BIT_OFS  8
#define   SENS_3_VALUE_TYPE   _uint8_t
/* SENS_5 (big_endian)*/
#define   SENS_5_BIT_OFS  16
#define   SENS_5_VALUE_TYPE   _uint8_t
/* SENS_7 (big_endian)*/
#define   SENS_7_BIT_OFS  24
#define   SENS_7_VALUE_TYPE   _uint8_t
/* SENS_9 (big_endian)*/
#define   SENS_9_BIT_OFS  32
#define   SENS_9_VALUE_TYPE   _uint8_t
/* SENS_11 (big_endian)*/
#define   SENS_11_BIT_OFS  40
#define   SENS_11_VALUE_TYPE   _uint8_t
/* SENS_13 (big_endian)*/
#define   SENS_13_BIT_OFS  48
#define   SENS_13_VALUE_TYPE   _uint8_t
/* SENS_15 (big_endian)*/
#define   SENS_15_BIT_OFS  56
#define   SENS_15_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_RL */
#define   ANGLE_SENSOR_RL_ID   0x52b
#define   ANGLE_SENSOR_RL_PERIOD   5
#define   ANGLE_SENSOR_RL_DLC  8
/*  Values  of ANGLE_SENSOR_RL */
/* AngleRL (big_endian)*/
#define   ANGLERL_BIT_OFS  0
#define   ANGLERL_VALUE_TYPE   _int32_t
/* AngleRLError (big_endian)*/
#define   ANGLERLERROR_BIT_OFS  32
#define   ANGLERLERROR_VALUE_TYPE   _uint8_t
/* WASAngleRLError (big_endian)*/
#define   WASANGLERLERROR_BIT_OFS  40
#define   WASANGLERLERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_RR */
#define   ANGLE_SENSOR_RR_ID   0x52a
#define   ANGLE_SENSOR_RR_PERIOD   5
#define   ANGLE_SENSOR_RR_DLC  8
/*  Values  of ANGLE_SENSOR_RR */
/* AngleRR (big_endian)*/
#define   ANGLERR_BIT_OFS  0
#define   ANGLERR_VALUE_TYPE   _int32_t
/* AngleRRError (big_endian)*/
#define   ANGLERRERROR_BIT_OFS  32
#define   ANGLERRERROR_VALUE_TYPE   _uint8_t
/* WASAngleRRError (big_endian)*/
#define   WASANGLERRERROR_BIT_OFS  40
#define   WASANGLERRERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_FL */
#define   ANGLE_SENSOR_FL_ID   0x529
#define   ANGLE_SENSOR_FL_PERIOD   5
#define   ANGLE_SENSOR_FL_DLC  8
/*  Values  of ANGLE_SENSOR_FL */
/* AngleFL (big_endian)*/
#define   ANGLEFL_BIT_OFS  0
#define   ANGLEFL_VALUE_TYPE   _int32_t
/* AngleFLError (big_endian)*/
#define   ANGLEFLERROR_BIT_OFS  32
#define   ANGLEFLERROR_VALUE_TYPE   _uint8_t
/* WASAngleFLError (big_endian)*/
#define   WASANGLEFLERROR_BIT_OFS  40
#define   WASANGLEFLERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_FR */
#define   ANGLE_SENSOR_FR_ID   0x528
#define   ANGLE_SENSOR_FR_PERIOD   5
#define   ANGLE_SENSOR_FR_DLC  8
/*  Values  of ANGLE_SENSOR_FR */
/* AngleFR (big_endian)*/
#define   ANGLEFR_BIT_OFS  0
#define   ANGLEFR_VALUE_TYPE   _int32_t
/* AngleFRError (big_endian)*/
#define   ANGLEFRERROR_BIT_OFS  32
#define   ANGLEFRERROR_VALUE_TYPE   _uint8_t
/* WASAngleFRError (big_endian)*/
#define   WASANGLEFRERROR_BIT_OFS  40
#define   WASANGLEFRERROR_VALUE_TYPE   _uint8_t

/* SW_SENSOR */
#define   SW_SENSOR_ID   0x527
#define   SW_SENSOR_PERIOD   5
#define   SW_SENSOR_DLC  8
/*  Values  of SW_SENSOR */
/* Angle (big_endian)*/
#define   ANGLE_BIT_OFS  0
#define   ANGLE_VALUE_TYPE   _int32_t
/* AngleError (big_endian)*/
#define   ANGLEERROR_BIT_OFS  32
#define   ANGLEERROR_VALUE_TYPE   _uint8_t
/* WASAngleSWError (big_endian)*/
#define   WASANGLESWERROR_BIT_OFS  40
#define   WASANGLESWERROR_VALUE_TYPE   _uint8_t

/* BRAKE_LIGHT_FRAME */
#define   BRAKE_LIGHT_FRAME_ID   0x526
#define   BRAKE_LIGHT_FRAME_PERIOD   100
#define   BRAKE_LIGHT_FRAME_DLC  1
/*  Values  of BRAKE_LIGHT_FRAME */
/* BrakeLightEnable (little_endian)*/
#define   BRAKELIGHTENABLE_BIT_OFS  0
#define   BRAKELIGHTENABLE_VALUE_TYPE   _int8_t

/* BUZZER_FRAME */
#define   BUZZER_FRAME_ID   0x525
#define   BUZZER_FRAME_PERIOD   200
#define   BUZZER_FRAME_DLC  1
/*  Values  of BUZZER_FRAME */
/* BuzzerEnable (little_endian)*/
#define   BUZZERENABLE_BIT_OFS  0
#define   BUZZERENABLE_VALUE_TYPE   _uint8_t

/* IVT_V3 */
#define   IVT_V3_ID   0x524
#define   IVT_V3_PERIOD   4
#define   IVT_V3_DLC  8
/*  Values  of IVT_V3 */
/* IVTV3Value (little_endian)*/
#define   IVTV3VALUE_BIT_OFS  16
#define   IVTV3VALUE_VALUE_TYPE   _int32_t

/* IVT_V2 */
#define   IVT_V2_ID   0x523
#define   IVT_V2_PERIOD   4
#define   IVT_V2_DLC  8
/*  Values  of IVT_V2 */
/* IVTV2Value (little_endian)*/
#define   IVTV2VALUE_BIT_OFS  16
#define   IVTV2VALUE_VALUE_TYPE   _int32_t

/* IVT_V1 */
#define   IVT_V1_ID   0x522
#define   IVT_V1_PERIOD   4
#define   IVT_V1_DLC  8
/*  Values  of IVT_V1 */
/* IVTV1Value (little_endian)*/
#define   IVTV1VALUE_BIT_OFS  16
#define   IVTV1VALUE_VALUE_TYPE   _int32_t

/* IVT_I */
#define   IVT_I_ID   0x521
#define   IVT_I_PERIOD   4
#define   IVT_I_DLC  8
/*  Values  of IVT_I */
/* IVTIValue (little_endian)*/
#define   IVTIVALUE_BIT_OFS  16
#define   IVTIVALUE_VALUE_TYPE   _int32_t

/* SW_MAIN_REQ_FRAME */
#define   SW_MAIN_REQ_FRAME_ID   0x720
#define   SW_MAIN_REQ_FRAME_PERIOD   100
#define   SW_MAIN_REQ_FRAME_DLC  3
/*  Values  of SW_MAIN_REQ_FRAME */
/* Balance (big_endian)*/
#define   BALANCE_BIT_OFS  0
#define   BALANCE_VALUE_TYPE   _int8_t
/* Limit (big_endian)*/
#define   LIMIT_BIT_OFS  8
#define   LIMIT_VALUE_TYPE   _uint8_t
/* DriverNumber (big_endian)*/
#define   DRIVERNUMBER_BIT_OFS  16
#define   DRIVERNUMBER_VALUE_TYPE   _uint8_t

/* LV_BMS_TEMP_FRAME */
#define   LV_BMS_TEMP_FRAME_ID   0x40c
#define   LV_BMS_TEMP_FRAME_PERIOD   200
#define   LV_BMS_TEMP_FRAME_DLC  8
/*  Values  of LV_BMS_TEMP_FRAME */
/* LVTemp0 (big_endian)*/
#define   LVTEMP0_BIT_OFS  0
#define   LVTEMP0_VALUE_TYPE   _uint8_t
/* LVTemp1 (big_endian)*/
#define   LVTEMP1_BIT_OFS  8
#define   LVTEMP1_VALUE_TYPE   _uint8_t
/* LVTemp2 (big_endian)*/
#define   LVTEMP2_BIT_OFS  16
#define   LVTEMP2_VALUE_TYPE   _uint8_t
/* LVTemp3 (big_endian)*/
#define   LVTEMP3_BIT_OFS  24
#define   LVTEMP3_VALUE_TYPE   _uint8_t
/* LVTemp4 (big_endian)*/
#define   LVTEMP4_BIT_OFS  32
#define   LVTEMP4_VALUE_TYPE   _uint8_t
/* LVTemp5 (big_endian)*/
#define   LVTEMP5_BIT_OFS  40
#define   LVTEMP5_VALUE_TYPE   _uint8_t
/* LVBMSState (big_endian)*/
#define   LVBMSSTATE_BIT_OFS  48
#define   LVBMSSTATE_VALUE_TYPE   _uint8_t
/* LVBMSErrorFrame (big_endian)*/
#define   LVBMSERRORFRAME_BIT_OFS  56
#define   LVBMSERRORFRAME_VALUE_TYPE   _uint8_t

/* LV_BMS_VOLTAGE_FRAME */
#define   LV_BMS_VOLTAGE_FRAME_ID   0x40b
#define   LV_BMS_VOLTAGE_FRAME_PERIOD   200
#define   LV_BMS_VOLTAGE_FRAME_DLC  8
/*  Values  of LV_BMS_VOLTAGE_FRAME */
/* LVVoltage0 (big_endian)*/
#define   LVVOLTAGE0_BIT_OFS  0
#define   LVVOLTAGE0_VALUE_TYPE   _uint9_t
/* LVVoltage1 (big_endian)*/
#define   LVVOLTAGE1_BIT_OFS  7
#define   LVVOLTAGE1_VALUE_TYPE   _uint9_t
/* LVVoltage2 (big_endian)*/
#define   LVVOLTAGE2_BIT_OFS  14
#define   LVVOLTAGE2_VALUE_TYPE   _uint9_t
/* LVVoltage3 (big_endian)*/
#define   LVVOLTAGE3_BIT_OFS  21
#define   LVVOLTAGE3_VALUE_TYPE   _uint9_t
/* LVVoltage4 (big_endian)*/
#define   LVVOLTAGE4_BIT_OFS  28
#define   LVVOLTAGE4_VALUE_TYPE   _uint9_t
/* LVVoltage5 (big_endian)*/
#define   LVVOLTAGE5_BIT_OFS  35
#define   LVVOLTAGE5_VALUE_TYPE   _uint9_t

/* POWER_MODULE_ERROR */
#define   POWER_MODULE_ERROR_ID   0x40e
#define   POWER_MODULE_ERROR_PERIOD   200
#define   POWER_MODULE_ERROR_DLC  1
/*  Values  of POWER_MODULE_ERROR */
/* PowerModuleError (big_endian)*/
#define   POWERMODULEERROR_BIT_OFS  0
#define   POWERMODULEERROR_VALUE_TYPE   _uint8_t

/* V_T_REQUEST_FRAME */
#define   V_T_REQUEST_FRAME_ID   0x57f
#define   V_T_REQUEST_FRAME_PERIOD   10000
#define   V_T_REQUEST_FRAME_DLC  8
/*  Values  of V_T_REQUEST_FRAME */
/* PrintVT (little_endian)*/
#define   PRINTVT_BIT_OFS  0
#define   PRINTVT_VALUE_TYPE   _uint8_t

/* HV_PWR_LIMITS_FRAME */
#define   HV_PWR_LIMITS_FRAME_ID   0x5f
#define   HV_PWR_LIMITS_FRAME_PERIOD   4
#define   HV_PWR_LIMITS_FRAME_DLC  4
/*  Values  of HV_PWR_LIMITS_FRAME */
/* DischargeCurrentLimit (little_endian)*/
#define   DISCHARGECURRENTLIMIT_BIT_OFS  0
#define   DISCHARGECURRENTLIMIT_VALUE_TYPE   _uint16_t
/* ChargeCurrentLimit (little_endian)*/
#define   CHARGECURRENTLIMIT_BIT_OFS  16
#define   CHARGECURRENTLIMIT_VALUE_TYPE   _uint16_t

/* HV_BMS_STATUS_FRAME */
#define   HV_BMS_STATUS_FRAME_ID   0x60
#define   HV_BMS_STATUS_FRAME_PERIOD   100
#define   HV_BMS_STATUS_FRAME_DLC  8
/*  Values  of HV_BMS_STATUS_FRAME */
/* HVBMSBmsState (big_endian)*/
#define   HVBMSBMSSTATE_BIT_OFS  0
#define   HVBMSBMSSTATE_VALUE_TYPE   _uint8_t
/* HVBMSErrorCode (big_endian)*/
#define   HVBMSERRORCODE_BIT_OFS  8
#define   HVBMSERRORCODE_VALUE_TYPE   _uint8_t
/* HVBMSStateOfCharge (big_endian)*/
#define   HVBMSSTATEOFCHARGE_BIT_OFS  16
#define   HVBMSSTATEOFCHARGE_VALUE_TYPE   _uint8_t
/* HVBMSSHDState (big_endian)*/
#define   HVBMSSHDSTATE_BIT_OFS  24
#define   HVBMSSHDSTATE_VALUE_TYPE   _uint8_t
/* JaggoracyProc (big_endian)*/
#define   JAGGORACYPROC_BIT_OFS  32
#define   JAGGORACYPROC_VALUE_TYPE   _int8_t

/* HV_BMS_ERROR */
#define   HV_BMS_ERROR_ID   0x61
#define   HV_BMS_ERROR_PERIOD   100
#define   HV_BMS_ERROR_DLC  8
/*  Values  of HV_BMS_ERROR */
/* AMSError (little_endian)*/
#define   AMSERROR_BIT_OFS  0
#define   AMSERROR_VALUE_TYPE   _uint32_t
/* AMSWarrnig (little_endian)*/
#define   AMSWARRNIG_BIT_OFS  32
#define   AMSWARRNIG_VALUE_TYPE   _uint32_t

/* HV_BMS_SLAVE_FRAME */
#define   HV_BMS_SLAVE_FRAME_ID   0x62
#define   HV_BMS_SLAVE_FRAME_PERIOD   100
#define   HV_BMS_SLAVE_FRAME_DLC  8
/*  Values  of HV_BMS_SLAVE_FRAME */
/* AccuMaxCellVoltage (little_endian)*/
#define   ACCUMAXCELLVOLTAGE_BIT_OFS  0
#define   ACCUMAXCELLVOLTAGE_VALUE_TYPE   _uint16_t
/* AccuMinCellVoltage (little_endian)*/
#define   ACCUMINCELLVOLTAGE_BIT_OFS  16
#define   ACCUMINCELLVOLTAGE_VALUE_TYPE   _uint16_t
/* AccuMaxCellTemp (little_endian)*/
#define   ACCUMAXCELLTEMP_BIT_OFS  32
#define   ACCUMAXCELLTEMP_VALUE_TYPE   _uint16_t
/* AccuMinCellTemp (little_endian)*/
#define   ACCUMINCELLTEMP_BIT_OFS  48
#define   ACCUMINCELLTEMP_VALUE_TYPE   _uint16_t

/* HV_BMS_MAIN_COMMAND_FRAME */
#define   HV_BMS_MAIN_COMMAND_FRAME_ID   0x65
#define   HV_BMS_MAIN_COMMAND_FRAME_PERIOD   100
#define   HV_BMS_MAIN_COMMAND_FRAME_DLC  8
/*  Values  of HV_BMS_MAIN_COMMAND_FRAME */
/* HVBMSCommand (big_endian)*/
#define   HVBMSCOMMAND_BIT_OFS  0
#define   HVBMSCOMMAND_VALUE_TYPE   _uint8_t

/* SW_PEDALS_REQ_FRAME */
#define   SW_PEDALS_REQ_FRAME_ID   0x701
#define   SW_PEDALS_REQ_FRAME_PERIOD   100
#define   SW_PEDALS_REQ_FRAME_DLC  8
/*  Values  of SW_PEDALS_REQ_FRAME */
/* BBUpdate (big_endian)*/
#define   BBUPDATE_BIT_OFS  0
#define   BBUPDATE_VALUE_TYPE   _uint8_t
/* PedalsCalib (big_endian)*/
#define   PEDALSCALIB_BIT_OFS  8
#define   PEDALSCALIB_VALUE_TYPE   _uint8_t

/* PEDALS_DEBUG */
#define   PEDALS_DEBUG_ID   0x64
#define   PEDALS_DEBUG_PERIOD   100
#define   PEDALS_DEBUG_DLC  8
/*  Values  of PEDALS_DEBUG */
/* Apps1ADC (big_endian)*/
#define   APPS1ADC_BIT_OFS  0
#define   APPS1ADC_VALUE_TYPE   _uint16_t
/* Apps2ADC (big_endian)*/
#define   APPS2ADC_BIT_OFS  16
#define   APPS2ADC_VALUE_TYPE   _uint16_t
/* AppsDiff (big_endian)*/
#define   APPSDIFF_BIT_OFS  32
#define   APPSDIFF_VALUE_TYPE   _int16_t
/* PedalsErrcode (big_endian)*/
#define   PEDALSERRCODE_BIT_OFS  48
#define   PEDALSERRCODE_VALUE_TYPE   _uint16_t

/* IMU_ACCELERATION_FRAME */
#define   IMU_ACCELERATION_FRAME_ID   0x409
#define   IMU_ACCELERATION_FRAME_PERIOD   10
#define   IMU_ACCELERATION_FRAME_DLC  6
/*  Values  of IMU_ACCELERATION_FRAME */
/* HRXAccel (big_endian)*/
#define   HRXACCEL_BIT_OFS  0
#define   HRXACCEL_VALUE_TYPE   _int16_t
/* HRYAccel (big_endian)*/
#define   HRYACCEL_BIT_OFS  16
#define   HRYACCEL_VALUE_TYPE   _int16_t
/* HRZAccel (big_endian)*/
#define   HRZACCEL_BIT_OFS  32
#define   HRZACCEL_VALUE_TYPE   _int16_t

/* IMU_ANGULAR_FRAME */
#define   IMU_ANGULAR_FRAME_ID   0x408
#define   IMU_ANGULAR_FRAME_PERIOD   10
#define   IMU_ANGULAR_FRAME_DLC  6
/*  Values  of IMU_ANGULAR_FRAME */
/* HRXAngRate (big_endian)*/
#define   HRXANGRATE_BIT_OFS  0
#define   HRXANGRATE_VALUE_TYPE   _int16_t
/* HRYAngRate (big_endian)*/
#define   HRYANGRATE_BIT_OFS  16
#define   HRYANGRATE_VALUE_TYPE   _int16_t
/* HRZAngRate (big_endian)*/
#define   HRZANGRATE_BIT_OFS  32
#define   HRZANGRATE_VALUE_TYPE   _int16_t

/* GPS_FRAME_4 */
#define   GPS_FRAME_4_ID   0x404
#define   GPS_FRAME_4_PERIOD   100
#define   GPS_FRAME_4_DLC  8
/*  Values  of GPS_FRAME_4 */
/* UTCYear (big_endian)*/
#define   UTCYEAR_BIT_OFS  0
#define   UTCYEAR_VALUE_TYPE   _uint8_t
/* UTCMonth (big_endian)*/
#define   UTCMONTH_BIT_OFS  8
#define   UTCMONTH_VALUE_TYPE   _uint8_t
/* UTCDay (big_endian)*/
#define   UTCDAY_BIT_OFS  16
#define   UTCDAY_VALUE_TYPE   _uint8_t
/* UTCHour (big_endian)*/
#define   UTCHOUR_BIT_OFS  24
#define   UTCHOUR_VALUE_TYPE   _uint8_t
/* UTCMinute (big_endian)*/
#define   UTCMINUTE_BIT_OFS  32
#define   UTCMINUTE_VALUE_TYPE   _uint8_t
/* UTCSecond (big_endian)*/
#define   UTCSECOND_BIT_OFS  40
#define   UTCSECOND_VALUE_TYPE   _uint8_t
/* UTCMillisecond (big_endian)*/
#define   UTCMILLISECOND_BIT_OFS  48
#define   UTCMILLISECOND_VALUE_TYPE   _uint16_t

/* GPS_FRAME_3 */
#define   GPS_FRAME_3_ID   0x403
#define   GPS_FRAME_3_PERIOD   100
#define   GPS_FRAME_3_DLC  8
/*  Values  of GPS_FRAME_3 */
/* ZAngleRate (big_endian)*/
#define   ZANGLERATE_BIT_OFS  0
#define   ZANGLERATE_VALUE_TYPE   _int16_t
/* XAcceleration (big_endian)*/
#define   XACCELERATION_BIT_OFS  16
#define   XACCELERATION_VALUE_TYPE   _int16_t
/* YAcceleration (big_endian)*/
#define   YACCELERATION_BIT_OFS  32
#define   YACCELERATION_VALUE_TYPE   _int16_t
/* ZAcceleration (big_endian)*/
#define   ZACCELERATION_BIT_OFS  48
#define   ZACCELERATION_VALUE_TYPE   _int16_t

/* GPS_FRAME_2 */
#define   GPS_FRAME_2_ID   0x402
#define   GPS_FRAME_2_PERIOD   100
#define   GPS_FRAME_2_DLC  8
/*  Values  of GPS_FRAME_2 */
/* HeadingMotion (big_endian)*/
#define   HEADINGMOTION_BIT_OFS  0
#define   HEADINGMOTION_VALUE_TYPE   _uint16_t
/* HeadingVehicle1 (big_endian)*/
#define   HEADINGVEHICLE1_BIT_OFS  16
#define   HEADINGVEHICLE1_VALUE_TYPE   _uint16_t
/* XAngleRate (big_endian)*/
#define   XANGLERATE_BIT_OFS  32
#define   XANGLERATE_VALUE_TYPE   _int16_t
/* YAngleRate (big_endian)*/
#define   YANGLERATE_BIT_OFS  48
#define   YANGLERATE_VALUE_TYPE   _int16_t

/* GPS_FRAME_1 */
#define   GPS_FRAME_1_ID   0x401
#define   GPS_FRAME_1_PERIOD   100
#define   GPS_FRAME_1_DLC  8
/*  Values  of GPS_FRAME_1 */
/* Speed (big_endian)*/
#define   SPEED_BIT_OFS  0
#define   SPEED_VALUE_TYPE   _int16_t
/* Height (big_endian)*/
#define   HEIGHT_BIT_OFS  16
#define   HEIGHT_VALUE_TYPE   _int16_t
/* Noise (big_endian)*/
#define   NOISE_BIT_OFS  32
#define   NOISE_VALUE_TYPE   _uint8_t
/* SatellitesNumber (big_endian)*/
#define   SATELLITESNUMBER_BIT_OFS  40
#define   SATELLITESNUMBER_VALUE_TYPE   _uint8_t
/* GPSFrameIndex (big_endian)*/
#define   GPSFRAMEINDEX_BIT_OFS  55
#define   GPSFRAMEINDEX_VALUE_TYPE   _uint4_t
/* EmptyFrameIndex (big_endian)*/
#define   EMPTYFRAMEINDEX_BIT_OFS  51
#define   EMPTYFRAMEINDEX_VALUE_TYPE   _uint4_t
/* GPSStatus (big_endian)*/
#define   GPSSTATUS_BIT_OFS  63
#define   GPSSTATUS_VALUE_TYPE   _uint3_t
/* IMUFusionStatus (big_endian)*/
#define   IMUFUSIONSTATUS_BIT_OFS  60
#define   IMUFUSIONSTATUS_VALUE_TYPE   _uint3_t

/* GPS_FRAME_0 */
#define   GPS_FRAME_0_ID   0x400
#define   GPS_FRAME_0_PERIOD   100
#define   GPS_FRAME_0_DLC  8
/*  Values  of GPS_FRAME_0 */
/* Latitude (big_endian)*/
#define   LATITUDE_BIT_OFS  0
#define   LATITUDE_VALUE_TYPE   _int32_t
/* Longitude (big_endian)*/
#define   LONGITUDE_BIT_OFS  32
#define   LONGITUDE_VALUE_TYPE   _int32_t

/* START_BUTTONS */
#define   START_BUTTONS_ID   0x11
#define   START_BUTTONS_PERIOD   100
#define   START_BUTTONS_DLC  2
/*  Values  of START_BUTTONS */
/* HvOn (little_endian)*/
#define   HVON_BIT_OFS  0
#define   HVON_VALUE_TYPE   _uint8_t
/* TS_on (little_endian)*/
#define   TS_ON_BIT_OFS  8
#define   TS_ON_VALUE_TYPE   _uint8_t

/* INV_FR */
#define   INV_FR_ID   0x19
#define   INV_FR_PERIOD   100
#define   INV_FR_DLC  8
/*  Values  of INV_FR */
/* WheelFRSpeed (little_endian)*/
#define   WHEELFRSPEED_BIT_OFS  0
#define   WHEELFRSPEED_VALUE_TYPE   _uint16_t
/* WheelFRTempInverter (little_endian)*/
#define   WHEELFRTEMPINVERTER_BIT_OFS  16
#define   WHEELFRTEMPINVERTER_VALUE_TYPE   _uint16_t
/* WheelFRTempMotor (little_endian)*/
#define   WHEELFRTEMPMOTOR_BIT_OFS  32
#define   WHEELFRTEMPMOTOR_VALUE_TYPE   _uint16_t
/* WheelFRTorque (little_endian)*/
#define   WHEELFRTORQUE_BIT_OFS  48
#define   WHEELFRTORQUE_VALUE_TYPE   _uint16_t

/* INV_RR */
#define   INV_RR_ID   0x1b
#define   INV_RR_PERIOD   100
#define   INV_RR_DLC  8
/*  Values  of INV_RR */
/* WheelRRSpeed (little_endian)*/
#define   WHEELRRSPEED_BIT_OFS  0
#define   WHEELRRSPEED_VALUE_TYPE   _uint16_t
/* WheelRRTorque (little_endian)*/
#define   WHEELRRTORQUE_BIT_OFS  16
#define   WHEELRRTORQUE_VALUE_TYPE   _uint16_t
/* WheelRRTempMotor (little_endian)*/
#define   WHEELRRTEMPMOTOR_BIT_OFS  32
#define   WHEELRRTEMPMOTOR_VALUE_TYPE   _uint16_t
/* WheelRRTempInverter (little_endian)*/
#define   WHEELRRTEMPINVERTER_BIT_OFS  48
#define   WHEELRRTEMPINVERTER_VALUE_TYPE   _uint16_t

/* INV_RL */
#define   INV_RL_ID   0x1a
#define   INV_RL_PERIOD   100
#define   INV_RL_DLC  8
/*  Values  of INV_RL */
/* WheelRLSpeed (little_endian)*/
#define   WHEELRLSPEED_BIT_OFS  0
#define   WHEELRLSPEED_VALUE_TYPE   _uint16_t
/* WheelRLTorque (little_endian)*/
#define   WHEELRLTORQUE_BIT_OFS  16
#define   WHEELRLTORQUE_VALUE_TYPE   _uint16_t
/* WheelRLTempInverter (little_endian)*/
#define   WHEELRLTEMPINVERTER_BIT_OFS  32
#define   WHEELRLTEMPINVERTER_VALUE_TYPE   _uint16_t
/* WheelRLTempMotor (little_endian)*/
#define   WHEELRLTEMPMOTOR_BIT_OFS  48
#define   WHEELRLTEMPMOTOR_VALUE_TYPE   _uint16_t

/* INV_FL */
#define   INV_FL_ID   0x18
#define   INV_FL_PERIOD   100
#define   INV_FL_DLC  8
/*  Values  of INV_FL */
/* WheelFLSpeed (little_endian)*/
#define   WHEELFLSPEED_BIT_OFS  0
#define   WHEELFLSPEED_VALUE_TYPE   _uint16_t
/* WheelFLTorque (little_endian)*/
#define   WHEELFLTORQUE_BIT_OFS  16
#define   WHEELFLTORQUE_VALUE_TYPE   _uint16_t
/* WheelFLTempMotor (little_endian)*/
#define   WHEELFLTEMPMOTOR_BIT_OFS  32
#define   WHEELFLTEMPMOTOR_VALUE_TYPE   _uint16_t
/* WheelFLTempInverter (little_endian)*/
#define   WHEELFLTEMPINVERTER_BIT_OFS  48
#define   WHEELFLTEMPINVERTER_VALUE_TYPE   _uint16_t

/* SW */
#define   SW_ID   0x7
#define   SW_PERIOD   100
#define   SW_DLC  8
/*  Values  of SW */
/* ActiveTile (little_endian)*/
#define   ACTIVETILE_BIT_OFS  0
#define   ACTIVETILE_VALUE_TYPE   _uint8_t
/* Menulndex (little_endian)*/
#define   MENULNDEX_BIT_OFS  8
#define   MENULNDEX_VALUE_TYPE   _uint8_t
/* AduPage (little_endian)*/
#define   ADUPAGE_BIT_OFS  16
#define   ADUPAGE_VALUE_TYPE   _uint8_t

/* MAIN_STATUS_FRAME */
#define   MAIN_STATUS_FRAME_ID   0x66
#define   MAIN_STATUS_FRAME_PERIOD   100
#define   MAIN_STATUS_FRAME_DLC  8
/*  Values  of MAIN_STATUS_FRAME */
/* MainState (big_endian)*/
#define   MAINSTATE_BIT_OFS  0
#define   MAINSTATE_VALUE_TYPE   _uint8_t
/* Buzzer (big_endian)*/
#define   BUZZER_BIT_OFS  8
#define   BUZZER_VALUE_TYPE   _uint8_t
/* TSOff (big_endian)*/
#define   TSOFF_BIT_OFS  23
#define   TSOFF_VALUE_TYPE   _uint1_t
/* IMD (big_endian)*/
#define   IMD_BIT_OFS  22
#define   IMD_VALUE_TYPE   _uint1_t
/* AMS (big_endian)*/
#define   AMS_BIT_OFS  21
#define   AMS_VALUE_TYPE   _uint1_t
/* AMKError (big_endian)*/
#define   AMKERROR_BIT_OFS  24
#define   AMKERROR_VALUE_TYPE   _uint8_t
/* CurrentDriverProfile (big_endian)*/
#define   CURRENTDRIVERPROFILE_BIT_OFS  32
#define   CURRENTDRIVERPROFILE_VALUE_TYPE   _uint8_t

/* PEDALS_FRAME */
#define   PEDALS_FRAME_ID   0x63
#define   PEDALS_FRAME_PERIOD   20
#define   PEDALS_FRAME_DLC  8
/*  Values  of PEDALS_FRAME */
/* PedalsAcc (big_endian)*/
#define   PEDALSACC_BIT_OFS  0
#define   PEDALSACC_VALUE_TYPE   _uint16_t
/* PedalsBrk1 (big_endian)*/
#define   PEDALSBRK1_BIT_OFS  16
#define   PEDALSBRK1_VALUE_TYPE   _uint16_t
/* PedalsBrk2 (big_endian)*/
#define   PEDALSBRK2_BIT_OFS  32
#define   PEDALSBRK2_VALUE_TYPE   _uint16_t
/* PedalsState (big_endian)*/
#define   PEDALSSTATE_BIT_OFS  48
#define   PEDALSSTATE_VALUE_TYPE   _uint8_t
/* PedalsBB (big_endian)*/
#define   PEDALSBB_BIT_OFS  56
#define   PEDALSBB_VALUE_TYPE   _uint8_t

/* POWER_MODULE */
#define   POWER_MODULE_ID   0x40d
#define   POWER_MODULE_PERIOD   200
#define   POWER_MODULE_DLC  8
/*  Values  of POWER_MODULE */
/* PumpStatus (little_endian)*/
#define   PUMPSTATUS_BIT_OFS  0
#define   PUMPSTATUS_VALUE_TYPE   _uint1_t
/* RadFanStatus (little_endian)*/
#define   RADFANSTATUS_BIT_OFS  1
#define   RADFANSTATUS_VALUE_TYPE   _uint1_t
/* AccuFanStatus (little_endian)*/
#define   ACCUFANSTATUS_BIT_OFS  2
#define   ACCUFANSTATUS_VALUE_TYPE   _uint1_t
/* InvStatus (little_endian)*/
#define   INVSTATUS_BIT_OFS  3
#define   INVSTATUS_VALUE_TYPE   _uint1_t
/* PumpCurr (little_endian)*/
#define   PUMPCURR_BIT_OFS  8
#define   PUMPCURR_VALUE_TYPE   _uint8_t
/* RadFanCurr (little_endian)*/
#define   RADFANCURR_BIT_OFS  16
#define   RADFANCURR_VALUE_TYPE   _uint8_t
/* AccuFanCurr (little_endian)*/
#define   ACCUFANCURR_BIT_OFS  24
#define   ACCUFANCURR_VALUE_TYPE   _uint8_t
/* InvCurr (little_endian)*/
#define   INVCURR_BIT_OFS  32
#define   INVCURR_VALUE_TYPE   _uint8_t
/* CANCurr (little_endian)*/
#define   CANCURR_BIT_OFS  40
#define   CANCURR_VALUE_TYPE   _uint8_t

/* BP01_V01_04 */
#define   BP01_V01_04_ID   0x550
#define   BP01_V01_04_PERIOD   100
#define   BP01_V01_04_DLC  8
/*  Values  of BP01_V01_04 */
/* BP01V01 (little_endian)*/
#define   BP01V01_BIT_OFS  0
#define   BP01V01_VALUE_TYPE   _uint16_t
/* BP01V02 (little_endian)*/
#define   BP01V02_BIT_OFS  16
#define   BP01V02_VALUE_TYPE   _uint16_t
/* BP01V03 (little_endian)*/
#define   BP01V03_BIT_OFS  32
#define   BP01V03_VALUE_TYPE   _uint16_t
/* BP01V04 (little_endian)*/
#define   BP01V04_BIT_OFS  48
#define   BP01V04_VALUE_TYPE   _uint16_t

/* BP01_V05_08 */
#define   BP01_V05_08_ID   0x551
#define   BP01_V05_08_PERIOD   100
#define   BP01_V05_08_DLC  8
/*  Values  of BP01_V05_08 */
/* BP01V05 (little_endian)*/
#define   BP01V05_BIT_OFS  0
#define   BP01V05_VALUE_TYPE   _uint16_t
/* BP01V06 (little_endian)*/
#define   BP01V06_BIT_OFS  16
#define   BP01V06_VALUE_TYPE   _uint16_t
/* BP01V07 (little_endian)*/
#define   BP01V07_BIT_OFS  32
#define   BP01V07_VALUE_TYPE   _uint16_t
/* BP01V08 (little_endian)*/
#define   BP01V08_BIT_OFS  48
#define   BP01V08_VALUE_TYPE   _uint16_t

/* BP01_V09_12 */
#define   BP01_V09_12_ID   0x552
#define   BP01_V09_12_PERIOD   100
#define   BP01_V09_12_DLC  8
/*  Values  of BP01_V09_12 */
/* BP01V09 (little_endian)*/
#define   BP01V09_BIT_OFS  0
#define   BP01V09_VALUE_TYPE   _uint16_t
/* BP01V10 (little_endian)*/
#define   BP01V10_BIT_OFS  16
#define   BP01V10_VALUE_TYPE   _uint16_t
/* BP01V11 (little_endian)*/
#define   BP01V11_BIT_OFS  32
#define   BP01V11_VALUE_TYPE   _uint16_t
/* BP01V12 (little_endian)*/
#define   BP01V12_BIT_OFS  48
#define   BP01V12_VALUE_TYPE   _uint16_t

/* BP01_V13_14 */
#define   BP01_V13_14_ID   0x553
#define   BP01_V13_14_PERIOD   100
#define   BP01_V13_14_DLC  8
/*  Values  of BP01_V13_14 */
/* BP01V13 (little_endian)*/
#define   BP01V13_BIT_OFS  0
#define   BP01V13_VALUE_TYPE   _uint16_t
/* BP01V14 (little_endian)*/
#define   BP01V14_BIT_OFS  16
#define   BP01V14_VALUE_TYPE   _uint16_t

/* BP02_V01_04 */
#define   BP02_V01_04_ID   0x554
#define   BP02_V01_04_PERIOD   100
#define   BP02_V01_04_DLC  8
/*  Values  of BP02_V01_04 */
/* BP02V01 (little_endian)*/
#define   BP02V01_BIT_OFS  0
#define   BP02V01_VALUE_TYPE   _uint16_t
/* BP02V02 (little_endian)*/
#define   BP02V02_BIT_OFS  16
#define   BP02V02_VALUE_TYPE   _uint16_t
/* BP02V03 (little_endian)*/
#define   BP02V03_BIT_OFS  32
#define   BP02V03_VALUE_TYPE   _uint16_t
/* BP02V04 (little_endian)*/
#define   BP02V04_BIT_OFS  48
#define   BP02V04_VALUE_TYPE   _uint16_t

/* BP02_V05_08 */
#define   BP02_V05_08_ID   0x555
#define   BP02_V05_08_PERIOD   100
#define   BP02_V05_08_DLC  8
/*  Values  of BP02_V05_08 */
/* BP02V05 (little_endian)*/
#define   BP02V05_BIT_OFS  0
#define   BP02V05_VALUE_TYPE   _uint16_t
/* BP02V06 (little_endian)*/
#define   BP02V06_BIT_OFS  16
#define   BP02V06_VALUE_TYPE   _uint16_t
/* BP02V07 (little_endian)*/
#define   BP02V07_BIT_OFS  32
#define   BP02V07_VALUE_TYPE   _uint16_t
/* BP02V08 (little_endian)*/
#define   BP02V08_BIT_OFS  48
#define   BP02V08_VALUE_TYPE   _uint16_t

/* BP02_V09_12 */
#define   BP02_V09_12_ID   0x556
#define   BP02_V09_12_PERIOD   100
#define   BP02_V09_12_DLC  8
/*  Values  of BP02_V09_12 */
/* BP02V09 (little_endian)*/
#define   BP02V09_BIT_OFS  0
#define   BP02V09_VALUE_TYPE   _uint16_t
/* BP02V10 (little_endian)*/
#define   BP02V10_BIT_OFS  16
#define   BP02V10_VALUE_TYPE   _uint16_t
/* BP02V11 (little_endian)*/
#define   BP02V11_BIT_OFS  32
#define   BP02V11_VALUE_TYPE   _uint16_t
/* BP02V12 (little_endian)*/
#define   BP02V12_BIT_OFS  48
#define   BP02V12_VALUE_TYPE   _uint16_t

/* BP02_V13_14 */
#define   BP02_V13_14_ID   0x557
#define   BP02_V13_14_PERIOD   100
#define   BP02_V13_14_DLC  8
/*  Values  of BP02_V13_14 */
/* BP02V13 (little_endian)*/
#define   BP02V13_BIT_OFS  0
#define   BP02V13_VALUE_TYPE   _uint16_t
/* BP02V14 (little_endian)*/
#define   BP02V14_BIT_OFS  16
#define   BP02V14_VALUE_TYPE   _uint16_t

/* BP03_V01_04 */
#define   BP03_V01_04_ID   0x558
#define   BP03_V01_04_PERIOD   100
#define   BP03_V01_04_DLC  8
/*  Values  of BP03_V01_04 */
/* BP03V01 (little_endian)*/
#define   BP03V01_BIT_OFS  0
#define   BP03V01_VALUE_TYPE   _uint16_t
/* BP03V02 (little_endian)*/
#define   BP03V02_BIT_OFS  16
#define   BP03V02_VALUE_TYPE   _uint16_t
/* BP03V03 (little_endian)*/
#define   BP03V03_BIT_OFS  32
#define   BP03V03_VALUE_TYPE   _uint16_t
/* BP03V04 (little_endian)*/
#define   BP03V04_BIT_OFS  48
#define   BP03V04_VALUE_TYPE   _uint16_t

/* BP03_V05_08 */
#define   BP03_V05_08_ID   0x559
#define   BP03_V05_08_PERIOD   100
#define   BP03_V05_08_DLC  8
/*  Values  of BP03_V05_08 */
/* BP03V05 (little_endian)*/
#define   BP03V05_BIT_OFS  0
#define   BP03V05_VALUE_TYPE   _uint16_t
/* BP03V06 (little_endian)*/
#define   BP03V06_BIT_OFS  16
#define   BP03V06_VALUE_TYPE   _uint16_t
/* BP03V07 (little_endian)*/
#define   BP03V07_BIT_OFS  32
#define   BP03V07_VALUE_TYPE   _uint16_t
/* BP03V08 (little_endian)*/
#define   BP03V08_BIT_OFS  48
#define   BP03V08_VALUE_TYPE   _uint16_t

/* BP03_V09_12 */
#define   BP03_V09_12_ID   0x55a
#define   BP03_V09_12_PERIOD   100
#define   BP03_V09_12_DLC  8
/*  Values  of BP03_V09_12 */
/* BP03V09 (little_endian)*/
#define   BP03V09_BIT_OFS  0
#define   BP03V09_VALUE_TYPE   _uint16_t
/* BP03V10 (little_endian)*/
#define   BP03V10_BIT_OFS  16
#define   BP03V10_VALUE_TYPE   _uint16_t
/* BP03V11 (little_endian)*/
#define   BP03V11_BIT_OFS  32
#define   BP03V11_VALUE_TYPE   _uint16_t
/* BP03V12 (little_endian)*/
#define   BP03V12_BIT_OFS  48
#define   BP03V12_VALUE_TYPE   _uint16_t

/* BP03_V13_14 */
#define   BP03_V13_14_ID   0x55b
#define   BP03_V13_14_PERIOD   100
#define   BP03_V13_14_DLC  8
/*  Values  of BP03_V13_14 */
/* BP03V13 (little_endian)*/
#define   BP03V13_BIT_OFS  0
#define   BP03V13_VALUE_TYPE   _uint16_t
/* BP03V14 (little_endian)*/
#define   BP03V14_BIT_OFS  16
#define   BP03V14_VALUE_TYPE   _uint16_t

/* BP04_V01_04 */
#define   BP04_V01_04_ID   0x55c
#define   BP04_V01_04_PERIOD   100
#define   BP04_V01_04_DLC  8
/*  Values  of BP04_V01_04 */
/* BP04V01 (little_endian)*/
#define   BP04V01_BIT_OFS  0
#define   BP04V01_VALUE_TYPE   _uint16_t
/* BP04V02 (little_endian)*/
#define   BP04V02_BIT_OFS  16
#define   BP04V02_VALUE_TYPE   _uint16_t
/* BP04V03 (little_endian)*/
#define   BP04V03_BIT_OFS  32
#define   BP04V03_VALUE_TYPE   _uint16_t
/* BP04V04 (little_endian)*/
#define   BP04V04_BIT_OFS  48
#define   BP04V04_VALUE_TYPE   _uint16_t

/* BP04_V05_08 */
#define   BP04_V05_08_ID   0x55d
#define   BP04_V05_08_PERIOD   100
#define   BP04_V05_08_DLC  8
/*  Values  of BP04_V05_08 */
/* BP04V05 (little_endian)*/
#define   BP04V05_BIT_OFS  0
#define   BP04V05_VALUE_TYPE   _uint16_t
/* BP04V06 (little_endian)*/
#define   BP04V06_BIT_OFS  16
#define   BP04V06_VALUE_TYPE   _uint16_t
/* BP04V07 (little_endian)*/
#define   BP04V07_BIT_OFS  32
#define   BP04V07_VALUE_TYPE   _uint16_t
/* BP04V08 (little_endian)*/
#define   BP04V08_BIT_OFS  48
#define   BP04V08_VALUE_TYPE   _uint16_t

/* BP04_V09_12 */
#define   BP04_V09_12_ID   0x55e
#define   BP04_V09_12_PERIOD   100
#define   BP04_V09_12_DLC  8
/*  Values  of BP04_V09_12 */
/* BP04V09 (little_endian)*/
#define   BP04V09_BIT_OFS  0
#define   BP04V09_VALUE_TYPE   _uint16_t
/* BP04V10 (little_endian)*/
#define   BP04V10_BIT_OFS  16
#define   BP04V10_VALUE_TYPE   _uint16_t
/* BP04V11 (little_endian)*/
#define   BP04V11_BIT_OFS  32
#define   BP04V11_VALUE_TYPE   _uint16_t
/* BP04V12 (little_endian)*/
#define   BP04V12_BIT_OFS  48
#define   BP04V12_VALUE_TYPE   _uint16_t

/* BP04_V13_14 */
#define   BP04_V13_14_ID   0x55f
#define   BP04_V13_14_PERIOD   100
#define   BP04_V13_14_DLC  8
/*  Values  of BP04_V13_14 */
/* BP04V13 (little_endian)*/
#define   BP04V13_BIT_OFS  0
#define   BP04V13_VALUE_TYPE   _uint16_t
/* BP04V14 (little_endian)*/
#define   BP04V14_BIT_OFS  16
#define   BP04V14_VALUE_TYPE   _uint16_t

/* BP05_V01_04 */
#define   BP05_V01_04_ID   0x560
#define   BP05_V01_04_PERIOD   100
#define   BP05_V01_04_DLC  8
/*  Values  of BP05_V01_04 */
/* BP05V01 (little_endian)*/
#define   BP05V01_BIT_OFS  0
#define   BP05V01_VALUE_TYPE   _uint16_t
/* BP05V02 (little_endian)*/
#define   BP05V02_BIT_OFS  16
#define   BP05V02_VALUE_TYPE   _uint16_t
/* BP05V03 (little_endian)*/
#define   BP05V03_BIT_OFS  32
#define   BP05V03_VALUE_TYPE   _uint16_t
/* BP05V04 (little_endian)*/
#define   BP05V04_BIT_OFS  48
#define   BP05V04_VALUE_TYPE   _uint16_t

/* BP05_V05_08 */
#define   BP05_V05_08_ID   0x561
#define   BP05_V05_08_PERIOD   100
#define   BP05_V05_08_DLC  8
/*  Values  of BP05_V05_08 */
/* BP05V05 (little_endian)*/
#define   BP05V05_BIT_OFS  0
#define   BP05V05_VALUE_TYPE   _uint16_t
/* BP05V06 (little_endian)*/
#define   BP05V06_BIT_OFS  16
#define   BP05V06_VALUE_TYPE   _uint16_t
/* BP05V07 (little_endian)*/
#define   BP05V07_BIT_OFS  32
#define   BP05V07_VALUE_TYPE   _uint16_t
/* BP05V08 (little_endian)*/
#define   BP05V08_BIT_OFS  48
#define   BP05V08_VALUE_TYPE   _uint16_t

/* BP05_V09_12 */
#define   BP05_V09_12_ID   0x562
#define   BP05_V09_12_PERIOD   100
#define   BP05_V09_12_DLC  8
/*  Values  of BP05_V09_12 */
/* BP05V09 (little_endian)*/
#define   BP05V09_BIT_OFS  0
#define   BP05V09_VALUE_TYPE   _uint16_t
/* BP05V10 (little_endian)*/
#define   BP05V10_BIT_OFS  16
#define   BP05V10_VALUE_TYPE   _uint16_t
/* BP05V11 (little_endian)*/
#define   BP05V11_BIT_OFS  32
#define   BP05V11_VALUE_TYPE   _uint16_t
/* BP05V12 (little_endian)*/
#define   BP05V12_BIT_OFS  48
#define   BP05V12_VALUE_TYPE   _uint16_t

/* BP05_V13_14 */
#define   BP05_V13_14_ID   0x563
#define   BP05_V13_14_PERIOD   100
#define   BP05_V13_14_DLC  8
/*  Values  of BP05_V13_14 */
/* BP05V13 (little_endian)*/
#define   BP05V13_BIT_OFS  0
#define   BP05V13_VALUE_TYPE   _uint16_t
/* BP05V14 (little_endian)*/
#define   BP05V14_BIT_OFS  16
#define   BP05V14_VALUE_TYPE   _uint16_t

/* BP06_V01_04 */
#define   BP06_V01_04_ID   0x564
#define   BP06_V01_04_PERIOD   100
#define   BP06_V01_04_DLC  8
/*  Values  of BP06_V01_04 */
/* BP06V01 (little_endian)*/
#define   BP06V01_BIT_OFS  0
#define   BP06V01_VALUE_TYPE   _uint16_t
/* BP06V02 (little_endian)*/
#define   BP06V02_BIT_OFS  16
#define   BP06V02_VALUE_TYPE   _uint16_t
/* BP06V03 (little_endian)*/
#define   BP06V03_BIT_OFS  32
#define   BP06V03_VALUE_TYPE   _uint16_t
/* BP06V04 (little_endian)*/
#define   BP06V04_BIT_OFS  48
#define   BP06V04_VALUE_TYPE   _uint16_t

/* BP06_V05_08 */
#define   BP06_V05_08_ID   0x565
#define   BP06_V05_08_PERIOD   100
#define   BP06_V05_08_DLC  8
/*  Values  of BP06_V05_08 */
/* BP06V05 (little_endian)*/
#define   BP06V05_BIT_OFS  0
#define   BP06V05_VALUE_TYPE   _uint16_t
/* BP06V06 (little_endian)*/
#define   BP06V06_BIT_OFS  16
#define   BP06V06_VALUE_TYPE   _uint16_t
/* BP06V07 (little_endian)*/
#define   BP06V07_BIT_OFS  32
#define   BP06V07_VALUE_TYPE   _uint16_t
/* BP06V08 (little_endian)*/
#define   BP06V08_BIT_OFS  48
#define   BP06V08_VALUE_TYPE   _uint16_t

/* BP06_V09_12 */
#define   BP06_V09_12_ID   0x566
#define   BP06_V09_12_PERIOD   100
#define   BP06_V09_12_DLC  8
/*  Values  of BP06_V09_12 */
/* BP06V09 (little_endian)*/
#define   BP06V09_BIT_OFS  0
#define   BP06V09_VALUE_TYPE   _uint16_t
/* BP06V10 (little_endian)*/
#define   BP06V10_BIT_OFS  16
#define   BP06V10_VALUE_TYPE   _uint16_t
/* BP06V11 (little_endian)*/
#define   BP06V11_BIT_OFS  32
#define   BP06V11_VALUE_TYPE   _uint16_t
/* BP06V12 (little_endian)*/
#define   BP06V12_BIT_OFS  48
#define   BP06V12_VALUE_TYPE   _uint16_t

/* BP06_V13_14 */
#define   BP06_V13_14_ID   0x567
#define   BP06_V13_14_PERIOD   100
#define   BP06_V13_14_DLC  8
/*  Values  of BP06_V13_14 */
/* BP06V13 (little_endian)*/
#define   BP06V13_BIT_OFS  0
#define   BP06V13_VALUE_TYPE   _uint16_t
/* BP06V14 (little_endian)*/
#define   BP06V14_BIT_OFS  16
#define   BP06V14_VALUE_TYPE   _uint16_t

/* BP07_V01_04 */
#define   BP07_V01_04_ID   0x568
#define   BP07_V01_04_PERIOD   100
#define   BP07_V01_04_DLC  8
/*  Values  of BP07_V01_04 */
/* BP07V01 (little_endian)*/
#define   BP07V01_BIT_OFS  0
#define   BP07V01_VALUE_TYPE   _uint16_t
/* BP07V02 (little_endian)*/
#define   BP07V02_BIT_OFS  16
#define   BP07V02_VALUE_TYPE   _uint16_t
/* BP07V03 (little_endian)*/
#define   BP07V03_BIT_OFS  32
#define   BP07V03_VALUE_TYPE   _uint16_t
/* BP07V04 (little_endian)*/
#define   BP07V04_BIT_OFS  48
#define   BP07V04_VALUE_TYPE   _uint16_t

/* BP07_V05_08 */
#define   BP07_V05_08_ID   0x569
#define   BP07_V05_08_PERIOD   100
#define   BP07_V05_08_DLC  8
/*  Values  of BP07_V05_08 */
/* BP07V05 (little_endian)*/
#define   BP07V05_BIT_OFS  0
#define   BP07V05_VALUE_TYPE   _uint16_t
/* BP07V06 (little_endian)*/
#define   BP07V06_BIT_OFS  16
#define   BP07V06_VALUE_TYPE   _uint16_t
/* BP07V07 (little_endian)*/
#define   BP07V07_BIT_OFS  32
#define   BP07V07_VALUE_TYPE   _uint16_t
/* BP07V08 (little_endian)*/
#define   BP07V08_BIT_OFS  48
#define   BP07V08_VALUE_TYPE   _uint16_t

/* BP07_V09_12 */
#define   BP07_V09_12_ID   0x56a
#define   BP07_V09_12_PERIOD   100
#define   BP07_V09_12_DLC  8
/*  Values  of BP07_V09_12 */
/* BP07V09 (little_endian)*/
#define   BP07V09_BIT_OFS  0
#define   BP07V09_VALUE_TYPE   _uint16_t
/* BP07V10 (little_endian)*/
#define   BP07V10_BIT_OFS  16
#define   BP07V10_VALUE_TYPE   _uint16_t
/* BP07V11 (little_endian)*/
#define   BP07V11_BIT_OFS  32
#define   BP07V11_VALUE_TYPE   _uint16_t
/* BP07V12 (little_endian)*/
#define   BP07V12_BIT_OFS  48
#define   BP07V12_VALUE_TYPE   _uint16_t

/* BP07_V13_14 */
#define   BP07_V13_14_ID   0x56b
#define   BP07_V13_14_PERIOD   100
#define   BP07_V13_14_DLC  8
/*  Values  of BP07_V13_14 */
/* BP07V13 (little_endian)*/
#define   BP07V13_BIT_OFS  0
#define   BP07V13_VALUE_TYPE   _uint16_t
/* BP07V14 (little_endian)*/
#define   BP07V14_BIT_OFS  16
#define   BP07V14_VALUE_TYPE   _uint16_t

/* BP08_V01_04 */
#define   BP08_V01_04_ID   0x56c
#define   BP08_V01_04_PERIOD   100
#define   BP08_V01_04_DLC  8
/*  Values  of BP08_V01_04 */
/* BP08V01 (little_endian)*/
#define   BP08V01_BIT_OFS  0
#define   BP08V01_VALUE_TYPE   _uint16_t
/* BP08V02 (little_endian)*/
#define   BP08V02_BIT_OFS  16
#define   BP08V02_VALUE_TYPE   _uint16_t
/* BP08V03 (little_endian)*/
#define   BP08V03_BIT_OFS  32
#define   BP08V03_VALUE_TYPE   _uint16_t
/* BP08V04 (little_endian)*/
#define   BP08V04_BIT_OFS  48
#define   BP08V04_VALUE_TYPE   _uint16_t

/* BP08_V05_08 */
#define   BP08_V05_08_ID   0x56d
#define   BP08_V05_08_PERIOD   100
#define   BP08_V05_08_DLC  8
/*  Values  of BP08_V05_08 */
/* BP08V05 (little_endian)*/
#define   BP08V05_BIT_OFS  0
#define   BP08V05_VALUE_TYPE   _uint16_t
/* BP08V06 (little_endian)*/
#define   BP08V06_BIT_OFS  16
#define   BP08V06_VALUE_TYPE   _uint16_t
/* BP08V07 (little_endian)*/
#define   BP08V07_BIT_OFS  32
#define   BP08V07_VALUE_TYPE   _uint16_t
/* BP08V08 (little_endian)*/
#define   BP08V08_BIT_OFS  48
#define   BP08V08_VALUE_TYPE   _uint16_t

/* BP08_V09_12 */
#define   BP08_V09_12_ID   0x56e
#define   BP08_V09_12_PERIOD   100
#define   BP08_V09_12_DLC  8
/*  Values  of BP08_V09_12 */
/* BP08V09 (little_endian)*/
#define   BP08V09_BIT_OFS  0
#define   BP08V09_VALUE_TYPE   _uint16_t
/* BP08V10 (little_endian)*/
#define   BP08V10_BIT_OFS  16
#define   BP08V10_VALUE_TYPE   _uint16_t
/* BP08V11 (little_endian)*/
#define   BP08V11_BIT_OFS  32
#define   BP08V11_VALUE_TYPE   _uint16_t
/* BP08V12 (little_endian)*/
#define   BP08V12_BIT_OFS  48
#define   BP08V12_VALUE_TYPE   _uint16_t

/* BP08_V13_14 */
#define   BP08_V13_14_ID   0x56f
#define   BP08_V13_14_PERIOD   100
#define   BP08_V13_14_DLC  8
/*  Values  of BP08_V13_14 */
/* BP08V13 (little_endian)*/
#define   BP08V13_BIT_OFS  0
#define   BP08V13_VALUE_TYPE   _uint16_t
/* BP08V14 (little_endian)*/
#define   BP08V14_BIT_OFS  16
#define   BP08V14_VALUE_TYPE   _uint16_t

/* BP09_V01_04 */
#define   BP09_V01_04_ID   0x570
#define   BP09_V01_04_PERIOD   100
#define   BP09_V01_04_DLC  8
/*  Values  of BP09_V01_04 */
/* BP09V01 (little_endian)*/
#define   BP09V01_BIT_OFS  0
#define   BP09V01_VALUE_TYPE   _uint16_t
/* BP09V02 (little_endian)*/
#define   BP09V02_BIT_OFS  16
#define   BP09V02_VALUE_TYPE   _uint16_t
/* BP09V03 (little_endian)*/
#define   BP09V03_BIT_OFS  32
#define   BP09V03_VALUE_TYPE   _uint16_t
/* BP09V04 (little_endian)*/
#define   BP09V04_BIT_OFS  48
#define   BP09V04_VALUE_TYPE   _uint16_t

/* BP09_V05_08 */
#define   BP09_V05_08_ID   0x571
#define   BP09_V05_08_PERIOD   100
#define   BP09_V05_08_DLC  8
/*  Values  of BP09_V05_08 */
/* BP09V05 (little_endian)*/
#define   BP09V05_BIT_OFS  0
#define   BP09V05_VALUE_TYPE   _uint16_t
/* BP09V06 (little_endian)*/
#define   BP09V06_BIT_OFS  16
#define   BP09V06_VALUE_TYPE   _uint16_t
/* BP09V07 (little_endian)*/
#define   BP09V07_BIT_OFS  32
#define   BP09V07_VALUE_TYPE   _uint16_t
/* BP09V08 (little_endian)*/
#define   BP09V08_BIT_OFS  48
#define   BP09V08_VALUE_TYPE   _uint16_t

/* BP09_V09_12 */
#define   BP09_V09_12_ID   0x572
#define   BP09_V09_12_PERIOD   100
#define   BP09_V09_12_DLC  8
/*  Values  of BP09_V09_12 */
/* BP09V09 (little_endian)*/
#define   BP09V09_BIT_OFS  0
#define   BP09V09_VALUE_TYPE   _uint16_t
/* BP09V10 (little_endian)*/
#define   BP09V10_BIT_OFS  16
#define   BP09V10_VALUE_TYPE   _uint16_t
/* BP09V11 (little_endian)*/
#define   BP09V11_BIT_OFS  32
#define   BP09V11_VALUE_TYPE   _uint16_t
/* BP09V12 (little_endian)*/
#define   BP09V12_BIT_OFS  48
#define   BP09V12_VALUE_TYPE   _uint16_t

/* BP09_V13_14 */
#define   BP09_V13_14_ID   0x573
#define   BP09_V13_14_PERIOD   100
#define   BP09_V13_14_DLC  8
/*  Values  of BP09_V13_14 */
/* BP09V13 (little_endian)*/
#define   BP09V13_BIT_OFS  0
#define   BP09V13_VALUE_TYPE   _uint16_t
/* BP09V14 (little_endian)*/
#define   BP09V14_BIT_OFS  16
#define   BP09V14_VALUE_TYPE   _uint16_t

/* BP10_V01_04 */
#define   BP10_V01_04_ID   0x574
#define   BP10_V01_04_PERIOD   100
#define   BP10_V01_04_DLC  8
/*  Values  of BP10_V01_04 */
/* BP10V01 (little_endian)*/
#define   BP10V01_BIT_OFS  0
#define   BP10V01_VALUE_TYPE   _uint16_t
/* BP10V02 (little_endian)*/
#define   BP10V02_BIT_OFS  16
#define   BP10V02_VALUE_TYPE   _uint16_t
/* BP10V03 (little_endian)*/
#define   BP10V03_BIT_OFS  32
#define   BP10V03_VALUE_TYPE   _uint16_t
/* BP10V04 (little_endian)*/
#define   BP10V04_BIT_OFS  48
#define   BP10V04_VALUE_TYPE   _uint16_t

/* BP10_V05_08 */
#define   BP10_V05_08_ID   0x575
#define   BP10_V05_08_PERIOD   100
#define   BP10_V05_08_DLC  8
/*  Values  of BP10_V05_08 */
/* BP10V05 (little_endian)*/
#define   BP10V05_BIT_OFS  0
#define   BP10V05_VALUE_TYPE   _uint16_t
/* BP10V06 (little_endian)*/
#define   BP10V06_BIT_OFS  16
#define   BP10V06_VALUE_TYPE   _uint16_t
/* BP10V07 (little_endian)*/
#define   BP10V07_BIT_OFS  32
#define   BP10V07_VALUE_TYPE   _uint16_t
/* BP10V08 (little_endian)*/
#define   BP10V08_BIT_OFS  48
#define   BP10V08_VALUE_TYPE   _uint16_t

/* BP10_V09_12 */
#define   BP10_V09_12_ID   0x576
#define   BP10_V09_12_PERIOD   100
#define   BP10_V09_12_DLC  8
/*  Values  of BP10_V09_12 */
/* BP10V09 (little_endian)*/
#define   BP10V09_BIT_OFS  0
#define   BP10V09_VALUE_TYPE   _uint16_t
/* BP10V10 (little_endian)*/
#define   BP10V10_BIT_OFS  16
#define   BP10V10_VALUE_TYPE   _uint16_t
/* BP10V11 (little_endian)*/
#define   BP10V11_BIT_OFS  32
#define   BP10V11_VALUE_TYPE   _uint16_t
/* BP10V12 (little_endian)*/
#define   BP10V12_BIT_OFS  48
#define   BP10V12_VALUE_TYPE   _uint16_t

/* BP10_V13_14 */
#define   BP10_V13_14_ID   0x577
#define   BP10_V13_14_PERIOD   100
#define   BP10_V13_14_DLC  8
/*  Values  of BP10_V13_14 */
/* BP10V13 (little_endian)*/
#define   BP10V13_BIT_OFS  0
#define   BP10V13_VALUE_TYPE   _uint16_t
/* BP10V14 (little_endian)*/
#define   BP10V14_BIT_OFS  16
#define   BP10V14_VALUE_TYPE   _uint16_t

/* FS_DATALOGGER_RESERVED_6 */
#define   FS_DATALOGGER_RESERVED_6_ID   0x755
#define   FS_DATALOGGER_RESERVED_6_PERIOD   100
#define   FS_DATALOGGER_RESERVED_6_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_6 */

/* FS_DATALOGGER_RESERVED_5 */
#define   FS_DATALOGGER_RESERVED_5_ID   0x754
#define   FS_DATALOGGER_RESERVED_5_PERIOD   100
#define   FS_DATALOGGER_RESERVED_5_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_5 */

/* FS_DATALOGGER_RESERVED_4 */
#define   FS_DATALOGGER_RESERVED_4_ID   0x753
#define   FS_DATALOGGER_RESERVED_4_PERIOD   100
#define   FS_DATALOGGER_RESERVED_4_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_4 */

/* FS_DATALOGGER_RESERVED_3 */
#define   FS_DATALOGGER_RESERVED_3_ID   0x752
#define   FS_DATALOGGER_RESERVED_3_PERIOD   100
#define   FS_DATALOGGER_RESERVED_3_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_3 */

/* FS_DATALOGGER_RESERVED_2 */
#define   FS_DATALOGGER_RESERVED_2_ID   0x751
#define   FS_DATALOGGER_RESERVED_2_PERIOD   100
#define   FS_DATALOGGER_RESERVED_2_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_2 */

/* FS_DATALOGGER_RESERVED_1 */
#define   FS_DATALOGGER_RESERVED_1_ID   0x750
#define   FS_DATALOGGER_RESERVED_1_PERIOD   100
#define   FS_DATALOGGER_RESERVED_1_DLC  8
/*  Values  of FS_DATALOGGER_RESERVED_1 */

/* FS_DATALOGGER_STATUS */
#define   FS_DATALOGGER_STATUS_ID   0x430
#define   FS_DATALOGGER_STATUS_PERIOD   100
#define   FS_DATALOGGER_STATUS_DLC  6
/*  Values  of FS_DATALOGGER_STATUS */
/* MsgCnt (little_endian)*/
#define   MSGCNT_BIT_OFS  0
#define   MSGCNT_VALUE_TYPE   _uint8_t
/* StatusReady (little_endian)*/
#define   STATUSREADY_BIT_OFS  8
#define   STATUSREADY_VALUE_TYPE   _int1_t
/* StatusLogging (little_endian)*/
#define   STATUSLOGGING_BIT_OFS  9
#define   STATUSLOGGING_VALUE_TYPE   _int1_t
/* StatusTriggeredVoltage (little_endian)*/
#define   STATUSTRIGGEREDVOLTAGE_BIT_OFS  10
#define   STATUSTRIGGEREDVOLTAGE_VALUE_TYPE   _int1_t
/* StatusTriggeredCurrent (little_endian)*/
#define   STATUSTRIGGEREDCURRENT_BIT_OFS  11
#define   STATUSTRIGGEREDCURRENT_VALUE_TYPE   _int1_t
/* Voltage (little_endian)*/
#define   VOLTAGE_BIT_OFS  16
#define   VOLTAGE_VALUE_TYPE   _uint16_t
/* Current (little_endian)*/
#define   CURRENT_BIT_OFS  32
#define   CURRENT_VALUE_TYPE   _uint16_t

/* BP01_T01_04 */
#define   BP01_T01_04_ID   0x760
#define   BP01_T01_04_PERIOD   100
#define   BP01_T01_04_DLC  8
/*  Values  of BP01_T01_04 */
/* BP01T01 (little_endian)*/
#define   BP01T01_BIT_OFS  0
#define   BP01T01_VALUE_TYPE   _uint16_t
/* BP01T02 (little_endian)*/
#define   BP01T02_BIT_OFS  16
#define   BP01T02_VALUE_TYPE   _uint16_t
/* BP01T03 (little_endian)*/
#define   BP01T03_BIT_OFS  32
#define   BP01T03_VALUE_TYPE   _uint16_t
/* BP01T04 (little_endian)*/
#define   BP01T04_BIT_OFS  48
#define   BP01T04_VALUE_TYPE   _uint16_t

/* BP01_T05_08 */
#define   BP01_T05_08_ID   0x761
#define   BP01_T05_08_PERIOD   100
#define   BP01_T05_08_DLC  8
/*  Values  of BP01_T05_08 */
/* BP01T05 (little_endian)*/
#define   BP01T05_BIT_OFS  0
#define   BP01T05_VALUE_TYPE   _uint16_t
/* BP01T06 (little_endian)*/
#define   BP01T06_BIT_OFS  16
#define   BP01T06_VALUE_TYPE   _uint16_t
/* BP01T07 (little_endian)*/
#define   BP01T07_BIT_OFS  32
#define   BP01T07_VALUE_TYPE   _uint16_t
/* BP01T08 (little_endian)*/
#define   BP01T08_BIT_OFS  48
#define   BP01T08_VALUE_TYPE   _uint16_t

/* BP01_T09_12 */
#define   BP01_T09_12_ID   0x762
#define   BP01_T09_12_PERIOD   100
#define   BP01_T09_12_DLC  8
/*  Values  of BP01_T09_12 */
/* BP01T09 (little_endian)*/
#define   BP01T09_BIT_OFS  0
#define   BP01T09_VALUE_TYPE   _uint16_t
/* BP01T10 (little_endian)*/
#define   BP01T10_BIT_OFS  16
#define   BP01T10_VALUE_TYPE   _uint16_t
/* BP01T11 (little_endian)*/
#define   BP01T11_BIT_OFS  32
#define   BP01T11_VALUE_TYPE   _uint16_t
/* BP01T12 (little_endian)*/
#define   BP01T12_BIT_OFS  48
#define   BP01T12_VALUE_TYPE   _uint16_t

/* BP01_T13_16 */
#define   BP01_T13_16_ID   0x763
#define   BP01_T13_16_PERIOD   100
#define   BP01_T13_16_DLC  8
/*  Values  of BP01_T13_16 */
/* BP01T13 (little_endian)*/
#define   BP01T13_BIT_OFS  0
#define   BP01T13_VALUE_TYPE   _uint16_t
/* BP01T14 (little_endian)*/
#define   BP01T14_BIT_OFS  16
#define   BP01T14_VALUE_TYPE   _uint16_t
/* BP01T15 (little_endian)*/
#define   BP01T15_BIT_OFS  32
#define   BP01T15_VALUE_TYPE   _uint16_t
/* BP01T16 (little_endian)*/
#define   BP01T16_BIT_OFS  48
#define   BP01T16_VALUE_TYPE   _uint16_t

/* BP01_T17_20 */
#define   BP01_T17_20_ID   0x764
#define   BP01_T17_20_PERIOD   100
#define   BP01_T17_20_DLC  8
/*  Values  of BP01_T17_20 */
/* BP01T17 (little_endian)*/
#define   BP01T17_BIT_OFS  0
#define   BP01T17_VALUE_TYPE   _uint16_t
/* BP01T18 (little_endian)*/
#define   BP01T18_BIT_OFS  16
#define   BP01T18_VALUE_TYPE   _uint16_t
/* BP01T19 (little_endian)*/
#define   BP01T19_BIT_OFS  32
#define   BP01T19_VALUE_TYPE   _uint16_t
/* BP01T20 (little_endian)*/
#define   BP01T20_BIT_OFS  48
#define   BP01T20_VALUE_TYPE   _uint16_t

/* BP01_T21_24 */
#define   BP01_T21_24_ID   0x765
#define   BP01_T21_24_PERIOD   100
#define   BP01_T21_24_DLC  8
/*  Values  of BP01_T21_24 */
/* BP01T21 (little_endian)*/
#define   BP01T21_BIT_OFS  0
#define   BP01T21_VALUE_TYPE   _uint16_t
/* BP01T22 (little_endian)*/
#define   BP01T22_BIT_OFS  16
#define   BP01T22_VALUE_TYPE   _uint16_t
/* BP01T23 (little_endian)*/
#define   BP01T23_BIT_OFS  32
#define   BP01T23_VALUE_TYPE   _uint16_t
/* BP01T24 (little_endian)*/
#define   BP01T24_BIT_OFS  48
#define   BP01T24_VALUE_TYPE   _uint16_t

/* BP02_T01_04 */
#define   BP02_T01_04_ID   0x766
#define   BP02_T01_04_PERIOD   100
#define   BP02_T01_04_DLC  8
/*  Values  of BP02_T01_04 */
/* BP02T01 (little_endian)*/
#define   BP02T01_BIT_OFS  0
#define   BP02T01_VALUE_TYPE   _uint16_t
/* BP02T02 (little_endian)*/
#define   BP02T02_BIT_OFS  16
#define   BP02T02_VALUE_TYPE   _uint16_t
/* BP02T03 (little_endian)*/
#define   BP02T03_BIT_OFS  32
#define   BP02T03_VALUE_TYPE   _uint16_t
/* BP02T04 (little_endian)*/
#define   BP02T04_BIT_OFS  48
#define   BP02T04_VALUE_TYPE   _uint16_t

/* BP02_T05_08 */
#define   BP02_T05_08_ID   0x767
#define   BP02_T05_08_PERIOD   100
#define   BP02_T05_08_DLC  8
/*  Values  of BP02_T05_08 */
/* BP02T05 (little_endian)*/
#define   BP02T05_BIT_OFS  0
#define   BP02T05_VALUE_TYPE   _uint16_t
/* BP02T06 (little_endian)*/
#define   BP02T06_BIT_OFS  16
#define   BP02T06_VALUE_TYPE   _uint16_t
/* BP02T07 (little_endian)*/
#define   BP02T07_BIT_OFS  32
#define   BP02T07_VALUE_TYPE   _uint16_t
/* BP02T08 (little_endian)*/
#define   BP02T08_BIT_OFS  48
#define   BP02T08_VALUE_TYPE   _uint16_t

/* BP02_T09_12 */
#define   BP02_T09_12_ID   0x768
#define   BP02_T09_12_PERIOD   100
#define   BP02_T09_12_DLC  8
/*  Values  of BP02_T09_12 */
/* BP02T09 (little_endian)*/
#define   BP02T09_BIT_OFS  0
#define   BP02T09_VALUE_TYPE   _uint16_t
/* BP02T10 (little_endian)*/
#define   BP02T10_BIT_OFS  16
#define   BP02T10_VALUE_TYPE   _uint16_t
/* BP02T11 (little_endian)*/
#define   BP02T11_BIT_OFS  32
#define   BP02T11_VALUE_TYPE   _uint16_t
/* BP02T12 (little_endian)*/
#define   BP02T12_BIT_OFS  48
#define   BP02T12_VALUE_TYPE   _uint16_t

/* BP02_T13_16 */
#define   BP02_T13_16_ID   0x769
#define   BP02_T13_16_PERIOD   100
#define   BP02_T13_16_DLC  8
/*  Values  of BP02_T13_16 */
/* BP02T13 (little_endian)*/
#define   BP02T13_BIT_OFS  0
#define   BP02T13_VALUE_TYPE   _uint16_t
/* BP02T14 (little_endian)*/
#define   BP02T14_BIT_OFS  16
#define   BP02T14_VALUE_TYPE   _uint16_t
/* BP02T15 (little_endian)*/
#define   BP02T15_BIT_OFS  32
#define   BP02T15_VALUE_TYPE   _uint16_t
/* BP02T16 (little_endian)*/
#define   BP02T16_BIT_OFS  48
#define   BP02T16_VALUE_TYPE   _uint16_t

/* BP02_T17_20 */
#define   BP02_T17_20_ID   0x76a
#define   BP02_T17_20_PERIOD   100
#define   BP02_T17_20_DLC  8
/*  Values  of BP02_T17_20 */
/* BP02T17 (little_endian)*/
#define   BP02T17_BIT_OFS  0
#define   BP02T17_VALUE_TYPE   _uint16_t
/* BP02T18 (little_endian)*/
#define   BP02T18_BIT_OFS  16
#define   BP02T18_VALUE_TYPE   _uint16_t
/* BP02T19 (little_endian)*/
#define   BP02T19_BIT_OFS  32
#define   BP02T19_VALUE_TYPE   _uint16_t
/* BP02T20 (little_endian)*/
#define   BP02T20_BIT_OFS  48
#define   BP02T20_VALUE_TYPE   _uint16_t

/* BP02_T21_24 */
#define   BP02_T21_24_ID   0x76b
#define   BP02_T21_24_PERIOD   100
#define   BP02_T21_24_DLC  8
/*  Values  of BP02_T21_24 */
/* BP02T21 (little_endian)*/
#define   BP02T21_BIT_OFS  0
#define   BP02T21_VALUE_TYPE   _uint16_t
/* BP02T22 (little_endian)*/
#define   BP02T22_BIT_OFS  16
#define   BP02T22_VALUE_TYPE   _uint16_t
/* BP02T23 (little_endian)*/
#define   BP02T23_BIT_OFS  32
#define   BP02T23_VALUE_TYPE   _uint16_t
/* BP02T24 (little_endian)*/
#define   BP02T24_BIT_OFS  48
#define   BP02T24_VALUE_TYPE   _uint16_t

/* BP03_T01_04 */
#define   BP03_T01_04_ID   0x76c
#define   BP03_T01_04_PERIOD   100
#define   BP03_T01_04_DLC  8
/*  Values  of BP03_T01_04 */
/* BP03T01 (little_endian)*/
#define   BP03T01_BIT_OFS  0
#define   BP03T01_VALUE_TYPE   _uint16_t
/* BP03T02 (little_endian)*/
#define   BP03T02_BIT_OFS  16
#define   BP03T02_VALUE_TYPE   _uint16_t
/* BP03T03 (little_endian)*/
#define   BP03T03_BIT_OFS  32
#define   BP03T03_VALUE_TYPE   _uint16_t
/* BP03T04 (little_endian)*/
#define   BP03T04_BIT_OFS  48
#define   BP03T04_VALUE_TYPE   _uint16_t

/* BP03_T05_08 */
#define   BP03_T05_08_ID   0x76d
#define   BP03_T05_08_PERIOD   100
#define   BP03_T05_08_DLC  8
/*  Values  of BP03_T05_08 */
/* BP03T05 (little_endian)*/
#define   BP03T05_BIT_OFS  0
#define   BP03T05_VALUE_TYPE   _uint16_t
/* BP03T06 (little_endian)*/
#define   BP03T06_BIT_OFS  16
#define   BP03T06_VALUE_TYPE   _uint16_t
/* BP03T07 (little_endian)*/
#define   BP03T07_BIT_OFS  32
#define   BP03T07_VALUE_TYPE   _uint16_t
/* BP03T08 (little_endian)*/
#define   BP03T08_BIT_OFS  48
#define   BP03T08_VALUE_TYPE   _uint16_t

/* BP03_T09_12 */
#define   BP03_T09_12_ID   0x76e
#define   BP03_T09_12_PERIOD   100
#define   BP03_T09_12_DLC  8
/*  Values  of BP03_T09_12 */
/* BP03T09 (little_endian)*/
#define   BP03T09_BIT_OFS  0
#define   BP03T09_VALUE_TYPE   _uint16_t
/* BP03T10 (little_endian)*/
#define   BP03T10_BIT_OFS  16
#define   BP03T10_VALUE_TYPE   _uint16_t
/* BP03T11 (little_endian)*/
#define   BP03T11_BIT_OFS  32
#define   BP03T11_VALUE_TYPE   _uint16_t
/* BP03T12 (little_endian)*/
#define   BP03T12_BIT_OFS  48
#define   BP03T12_VALUE_TYPE   _uint16_t

/* BP03_T13_16 */
#define   BP03_T13_16_ID   0x76f
#define   BP03_T13_16_PERIOD   100
#define   BP03_T13_16_DLC  8
/*  Values  of BP03_T13_16 */
/* BP03T13 (little_endian)*/
#define   BP03T13_BIT_OFS  0
#define   BP03T13_VALUE_TYPE   _uint16_t
/* BP03T14 (little_endian)*/
#define   BP03T14_BIT_OFS  16
#define   BP03T14_VALUE_TYPE   _uint16_t
/* BP03T15 (little_endian)*/
#define   BP03T15_BIT_OFS  32
#define   BP03T15_VALUE_TYPE   _uint16_t
/* BP03T16 (little_endian)*/
#define   BP03T16_BIT_OFS  48
#define   BP03T16_VALUE_TYPE   _uint16_t

/* BP03_T17_20 */
#define   BP03_T17_20_ID   0x770
#define   BP03_T17_20_PERIOD   100
#define   BP03_T17_20_DLC  8
/*  Values  of BP03_T17_20 */
/* BP03T17 (little_endian)*/
#define   BP03T17_BIT_OFS  0
#define   BP03T17_VALUE_TYPE   _uint16_t
/* BP03T18 (little_endian)*/
#define   BP03T18_BIT_OFS  16
#define   BP03T18_VALUE_TYPE   _uint16_t
/* BP03T19 (little_endian)*/
#define   BP03T19_BIT_OFS  32
#define   BP03T19_VALUE_TYPE   _uint16_t
/* BP03T20 (little_endian)*/
#define   BP03T20_BIT_OFS  48
#define   BP03T20_VALUE_TYPE   _uint16_t

/* BP03_T21_24 */
#define   BP03_T21_24_ID   0x771
#define   BP03_T21_24_PERIOD   100
#define   BP03_T21_24_DLC  8
/*  Values  of BP03_T21_24 */
/* BP03T21 (little_endian)*/
#define   BP03T21_BIT_OFS  0
#define   BP03T21_VALUE_TYPE   _uint16_t
/* BP03T22 (little_endian)*/
#define   BP03T22_BIT_OFS  16
#define   BP03T22_VALUE_TYPE   _uint16_t
/* BP03T23 (little_endian)*/
#define   BP03T23_BIT_OFS  32
#define   BP03T23_VALUE_TYPE   _uint16_t
/* BP03T24 (little_endian)*/
#define   BP03T24_BIT_OFS  48
#define   BP03T24_VALUE_TYPE   _uint16_t

/* BP04_T01_04 */
#define   BP04_T01_04_ID   0x772
#define   BP04_T01_04_PERIOD   100
#define   BP04_T01_04_DLC  8
/*  Values  of BP04_T01_04 */
/* BP04T01 (little_endian)*/
#define   BP04T01_BIT_OFS  0
#define   BP04T01_VALUE_TYPE   _uint16_t
/* BP04T02 (little_endian)*/
#define   BP04T02_BIT_OFS  16
#define   BP04T02_VALUE_TYPE   _uint16_t
/* BP04T03 (little_endian)*/
#define   BP04T03_BIT_OFS  32
#define   BP04T03_VALUE_TYPE   _uint16_t
/* BP04T04 (little_endian)*/
#define   BP04T04_BIT_OFS  48
#define   BP04T04_VALUE_TYPE   _uint16_t

/* BP04_T05_08 */
#define   BP04_T05_08_ID   0x773
#define   BP04_T05_08_PERIOD   100
#define   BP04_T05_08_DLC  8
/*  Values  of BP04_T05_08 */
/* BP04T05 (little_endian)*/
#define   BP04T05_BIT_OFS  0
#define   BP04T05_VALUE_TYPE   _uint16_t
/* BP04T06 (little_endian)*/
#define   BP04T06_BIT_OFS  16
#define   BP04T06_VALUE_TYPE   _uint16_t
/* BP04T07 (little_endian)*/
#define   BP04T07_BIT_OFS  32
#define   BP04T07_VALUE_TYPE   _uint16_t
/* BP04T08 (little_endian)*/
#define   BP04T08_BIT_OFS  48
#define   BP04T08_VALUE_TYPE   _uint16_t

/* BP04_T09_12 */
#define   BP04_T09_12_ID   0x774
#define   BP04_T09_12_PERIOD   100
#define   BP04_T09_12_DLC  8
/*  Values  of BP04_T09_12 */
/* BP04T09 (little_endian)*/
#define   BP04T09_BIT_OFS  0
#define   BP04T09_VALUE_TYPE   _uint16_t
/* BP04T10 (little_endian)*/
#define   BP04T10_BIT_OFS  16
#define   BP04T10_VALUE_TYPE   _uint16_t
/* BP04T11 (little_endian)*/
#define   BP04T11_BIT_OFS  32
#define   BP04T11_VALUE_TYPE   _uint16_t
/* BP04T12 (little_endian)*/
#define   BP04T12_BIT_OFS  48
#define   BP04T12_VALUE_TYPE   _uint16_t

/* BP04_T13_16 */
#define   BP04_T13_16_ID   0x775
#define   BP04_T13_16_PERIOD   100
#define   BP04_T13_16_DLC  8
/*  Values  of BP04_T13_16 */
/* BP04T13 (little_endian)*/
#define   BP04T13_BIT_OFS  0
#define   BP04T13_VALUE_TYPE   _uint16_t
/* BP04T14 (little_endian)*/
#define   BP04T14_BIT_OFS  16
#define   BP04T14_VALUE_TYPE   _uint16_t
/* BP04T15 (little_endian)*/
#define   BP04T15_BIT_OFS  32
#define   BP04T15_VALUE_TYPE   _uint16_t
/* BP04T16 (little_endian)*/
#define   BP04T16_BIT_OFS  48
#define   BP04T16_VALUE_TYPE   _uint16_t

/* BP04_T17_20 */
#define   BP04_T17_20_ID   0x776
#define   BP04_T17_20_PERIOD   100
#define   BP04_T17_20_DLC  8
/*  Values  of BP04_T17_20 */
/* BP04T17 (little_endian)*/
#define   BP04T17_BIT_OFS  0
#define   BP04T17_VALUE_TYPE   _uint16_t
/* BP04T18 (little_endian)*/
#define   BP04T18_BIT_OFS  16
#define   BP04T18_VALUE_TYPE   _uint16_t
/* BP04T19 (little_endian)*/
#define   BP04T19_BIT_OFS  32
#define   BP04T19_VALUE_TYPE   _uint16_t
/* BP04T20 (little_endian)*/
#define   BP04T20_BIT_OFS  48
#define   BP04T20_VALUE_TYPE   _uint16_t

/* BP04_T21_24 */
#define   BP04_T21_24_ID   0x777
#define   BP04_T21_24_PERIOD   100
#define   BP04_T21_24_DLC  8
/*  Values  of BP04_T21_24 */
/* BP04T21 (little_endian)*/
#define   BP04T21_BIT_OFS  0
#define   BP04T21_VALUE_TYPE   _uint16_t
/* BP04T22 (little_endian)*/
#define   BP04T22_BIT_OFS  16
#define   BP04T22_VALUE_TYPE   _uint16_t
/* BP04T23 (little_endian)*/
#define   BP04T23_BIT_OFS  32
#define   BP04T23_VALUE_TYPE   _uint16_t
/* BP04T24 (little_endian)*/
#define   BP04T24_BIT_OFS  48
#define   BP04T24_VALUE_TYPE   _uint16_t

/* BP05_T01_04 */
#define   BP05_T01_04_ID   0x778
#define   BP05_T01_04_PERIOD   100
#define   BP05_T01_04_DLC  8
/*  Values  of BP05_T01_04 */
/* BP05T01 (little_endian)*/
#define   BP05T01_BIT_OFS  0
#define   BP05T01_VALUE_TYPE   _uint16_t
/* BP05T02 (little_endian)*/
#define   BP05T02_BIT_OFS  16
#define   BP05T02_VALUE_TYPE   _uint16_t
/* BP05T03 (little_endian)*/
#define   BP05T03_BIT_OFS  32
#define   BP05T03_VALUE_TYPE   _uint16_t
/* BP05T04 (little_endian)*/
#define   BP05T04_BIT_OFS  48
#define   BP05T04_VALUE_TYPE   _uint16_t

/* BP05_T05_08 */
#define   BP05_T05_08_ID   0x779
#define   BP05_T05_08_PERIOD   100
#define   BP05_T05_08_DLC  8
/*  Values  of BP05_T05_08 */
/* BP05T05 (little_endian)*/
#define   BP05T05_BIT_OFS  0
#define   BP05T05_VALUE_TYPE   _uint16_t
/* BP05T06 (little_endian)*/
#define   BP05T06_BIT_OFS  16
#define   BP05T06_VALUE_TYPE   _uint16_t
/* BP05T07 (little_endian)*/
#define   BP05T07_BIT_OFS  32
#define   BP05T07_VALUE_TYPE   _uint16_t
/* BP05T08 (little_endian)*/
#define   BP05T08_BIT_OFS  48
#define   BP05T08_VALUE_TYPE   _uint16_t

/* BP05_T09_12 */
#define   BP05_T09_12_ID   0x77a
#define   BP05_T09_12_PERIOD   100
#define   BP05_T09_12_DLC  8
/*  Values  of BP05_T09_12 */
/* BP05T09 (little_endian)*/
#define   BP05T09_BIT_OFS  0
#define   BP05T09_VALUE_TYPE   _uint16_t
/* BP05T10 (little_endian)*/
#define   BP05T10_BIT_OFS  16
#define   BP05T10_VALUE_TYPE   _uint16_t
/* BP05T11 (little_endian)*/
#define   BP05T11_BIT_OFS  32
#define   BP05T11_VALUE_TYPE   _uint16_t
/* BP05T12 (little_endian)*/
#define   BP05T12_BIT_OFS  48
#define   BP05T12_VALUE_TYPE   _uint16_t

/* BP05_T13_16 */
#define   BP05_T13_16_ID   0x77b
#define   BP05_T13_16_PERIOD   100
#define   BP05_T13_16_DLC  8
/*  Values  of BP05_T13_16 */
/* BP05T13 (little_endian)*/
#define   BP05T13_BIT_OFS  0
#define   BP05T13_VALUE_TYPE   _uint16_t
/* BP05T14 (little_endian)*/
#define   BP05T14_BIT_OFS  16
#define   BP05T14_VALUE_TYPE   _uint16_t
/* BP05T15 (little_endian)*/
#define   BP05T15_BIT_OFS  32
#define   BP05T15_VALUE_TYPE   _uint16_t
/* BP05T16 (little_endian)*/
#define   BP05T16_BIT_OFS  48
#define   BP05T16_VALUE_TYPE   _uint16_t

/* BP05_T17_20 */
#define   BP05_T17_20_ID   0x77c
#define   BP05_T17_20_PERIOD   100
#define   BP05_T17_20_DLC  8
/*  Values  of BP05_T17_20 */
/* BP05T17 (little_endian)*/
#define   BP05T17_BIT_OFS  0
#define   BP05T17_VALUE_TYPE   _uint16_t
/* BP05T18 (little_endian)*/
#define   BP05T18_BIT_OFS  16
#define   BP05T18_VALUE_TYPE   _uint16_t
/* BP05T19 (little_endian)*/
#define   BP05T19_BIT_OFS  32
#define   BP05T19_VALUE_TYPE   _uint16_t
/* BP05T20 (little_endian)*/
#define   BP05T20_BIT_OFS  48
#define   BP05T20_VALUE_TYPE   _uint16_t

/* BP05_T21_24 */
#define   BP05_T21_24_ID   0x77d
#define   BP05_T21_24_PERIOD   100
#define   BP05_T21_24_DLC  8
/*  Values  of BP05_T21_24 */
/* BP05T21 (little_endian)*/
#define   BP05T21_BIT_OFS  0
#define   BP05T21_VALUE_TYPE   _uint16_t
/* BP05T22 (little_endian)*/
#define   BP05T22_BIT_OFS  16
#define   BP05T22_VALUE_TYPE   _uint16_t
/* BP05T23 (little_endian)*/
#define   BP05T23_BIT_OFS  32
#define   BP05T23_VALUE_TYPE   _uint16_t
/* BP05T24 (little_endian)*/
#define   BP05T24_BIT_OFS  48
#define   BP05T24_VALUE_TYPE   _uint16_t

/* BP06_T01_04 */
#define   BP06_T01_04_ID   0x77e
#define   BP06_T01_04_PERIOD   100
#define   BP06_T01_04_DLC  8
/*  Values  of BP06_T01_04 */
/* BP06T01 (little_endian)*/
#define   BP06T01_BIT_OFS  0
#define   BP06T01_VALUE_TYPE   _uint16_t
/* BP06T02 (little_endian)*/
#define   BP06T02_BIT_OFS  16
#define   BP06T02_VALUE_TYPE   _uint16_t
/* BP06T03 (little_endian)*/
#define   BP06T03_BIT_OFS  32
#define   BP06T03_VALUE_TYPE   _uint16_t
/* BP06T04 (little_endian)*/
#define   BP06T04_BIT_OFS  48
#define   BP06T04_VALUE_TYPE   _uint16_t

/* BP06_T05_08 */
#define   BP06_T05_08_ID   0x77f
#define   BP06_T05_08_PERIOD   100
#define   BP06_T05_08_DLC  8
/*  Values  of BP06_T05_08 */
/* BP06T05 (little_endian)*/
#define   BP06T05_BIT_OFS  0
#define   BP06T05_VALUE_TYPE   _uint16_t
/* BP06T06 (little_endian)*/
#define   BP06T06_BIT_OFS  16
#define   BP06T06_VALUE_TYPE   _uint16_t
/* BP06T07 (little_endian)*/
#define   BP06T07_BIT_OFS  32
#define   BP06T07_VALUE_TYPE   _uint16_t
/* BP06T08 (little_endian)*/
#define   BP06T08_BIT_OFS  48
#define   BP06T08_VALUE_TYPE   _uint16_t

/* BP06_T09_12 */
#define   BP06_T09_12_ID   0x780
#define   BP06_T09_12_PERIOD   100
#define   BP06_T09_12_DLC  8
/*  Values  of BP06_T09_12 */
/* BP06T09 (little_endian)*/
#define   BP06T09_BIT_OFS  0
#define   BP06T09_VALUE_TYPE   _uint16_t
/* BP06T10 (little_endian)*/
#define   BP06T10_BIT_OFS  16
#define   BP06T10_VALUE_TYPE   _uint16_t
/* BP06T11 (little_endian)*/
#define   BP06T11_BIT_OFS  32
#define   BP06T11_VALUE_TYPE   _uint16_t
/* BP06T12 (little_endian)*/
#define   BP06T12_BIT_OFS  48
#define   BP06T12_VALUE_TYPE   _uint16_t

/* BP06_T13_16 */
#define   BP06_T13_16_ID   0x781
#define   BP06_T13_16_PERIOD   100
#define   BP06_T13_16_DLC  8
/*  Values  of BP06_T13_16 */
/* BP06T13 (little_endian)*/
#define   BP06T13_BIT_OFS  0
#define   BP06T13_VALUE_TYPE   _uint16_t
/* BP06T14 (little_endian)*/
#define   BP06T14_BIT_OFS  16
#define   BP06T14_VALUE_TYPE   _uint16_t
/* BP06T15 (little_endian)*/
#define   BP06T15_BIT_OFS  32
#define   BP06T15_VALUE_TYPE   _uint16_t
/* BP06T16 (little_endian)*/
#define   BP06T16_BIT_OFS  48
#define   BP06T16_VALUE_TYPE   _uint16_t

/* BP06_T17_20 */
#define   BP06_T17_20_ID   0x782
#define   BP06_T17_20_PERIOD   100
#define   BP06_T17_20_DLC  8
/*  Values  of BP06_T17_20 */
/* BP06T17 (little_endian)*/
#define   BP06T17_BIT_OFS  0
#define   BP06T17_VALUE_TYPE   _uint16_t
/* BP06T18 (little_endian)*/
#define   BP06T18_BIT_OFS  16
#define   BP06T18_VALUE_TYPE   _uint16_t
/* BP06T19 (little_endian)*/
#define   BP06T19_BIT_OFS  32
#define   BP06T19_VALUE_TYPE   _uint16_t
/* BP06T20 (little_endian)*/
#define   BP06T20_BIT_OFS  48
#define   BP06T20_VALUE_TYPE   _uint16_t

/* BP06_T21_24 */
#define   BP06_T21_24_ID   0x783
#define   BP06_T21_24_PERIOD   100
#define   BP06_T21_24_DLC  8
/*  Values  of BP06_T21_24 */
/* BP06T21 (little_endian)*/
#define   BP06T21_BIT_OFS  0
#define   BP06T21_VALUE_TYPE   _uint16_t
/* BP06T22 (little_endian)*/
#define   BP06T22_BIT_OFS  16
#define   BP06T22_VALUE_TYPE   _uint16_t
/* BP06T23 (little_endian)*/
#define   BP06T23_BIT_OFS  32
#define   BP06T23_VALUE_TYPE   _uint16_t
/* BP06T24 (little_endian)*/
#define   BP06T24_BIT_OFS  48
#define   BP06T24_VALUE_TYPE   _uint16_t

/* BP07_T01_04 */
#define   BP07_T01_04_ID   0x784
#define   BP07_T01_04_PERIOD   100
#define   BP07_T01_04_DLC  8
/*  Values  of BP07_T01_04 */
/* BP07T01 (little_endian)*/
#define   BP07T01_BIT_OFS  0
#define   BP07T01_VALUE_TYPE   _uint16_t
/* BP07T02 (little_endian)*/
#define   BP07T02_BIT_OFS  16
#define   BP07T02_VALUE_TYPE   _uint16_t
/* BP07T03 (little_endian)*/
#define   BP07T03_BIT_OFS  32
#define   BP07T03_VALUE_TYPE   _uint16_t
/* BP07T04 (little_endian)*/
#define   BP07T04_BIT_OFS  48
#define   BP07T04_VALUE_TYPE   _uint16_t

/* BP07_T05_08 */
#define   BP07_T05_08_ID   0x785
#define   BP07_T05_08_PERIOD   100
#define   BP07_T05_08_DLC  8
/*  Values  of BP07_T05_08 */
/* BP07T05 (little_endian)*/
#define   BP07T05_BIT_OFS  0
#define   BP07T05_VALUE_TYPE   _uint16_t
/* BP07T06 (little_endian)*/
#define   BP07T06_BIT_OFS  16
#define   BP07T06_VALUE_TYPE   _uint16_t
/* BP07T07 (little_endian)*/
#define   BP07T07_BIT_OFS  32
#define   BP07T07_VALUE_TYPE   _uint16_t
/* BP07T08 (little_endian)*/
#define   BP07T08_BIT_OFS  48
#define   BP07T08_VALUE_TYPE   _uint16_t

/* BP07_T09_12 */
#define   BP07_T09_12_ID   0x786
#define   BP07_T09_12_PERIOD   100
#define   BP07_T09_12_DLC  8
/*  Values  of BP07_T09_12 */
/* BP07T09 (little_endian)*/
#define   BP07T09_BIT_OFS  0
#define   BP07T09_VALUE_TYPE   _uint16_t
/* BP07T10 (little_endian)*/
#define   BP07T10_BIT_OFS  16
#define   BP07T10_VALUE_TYPE   _uint16_t
/* BP07T11 (little_endian)*/
#define   BP07T11_BIT_OFS  32
#define   BP07T11_VALUE_TYPE   _uint16_t
/* BP07T12 (little_endian)*/
#define   BP07T12_BIT_OFS  48
#define   BP07T12_VALUE_TYPE   _uint16_t

/* BP07_T13_16 */
#define   BP07_T13_16_ID   0x787
#define   BP07_T13_16_PERIOD   100
#define   BP07_T13_16_DLC  8
/*  Values  of BP07_T13_16 */
/* BP07T13 (little_endian)*/
#define   BP07T13_BIT_OFS  0
#define   BP07T13_VALUE_TYPE   _uint16_t
/* BP07T14 (little_endian)*/
#define   BP07T14_BIT_OFS  16
#define   BP07T14_VALUE_TYPE   _uint16_t
/* BP07T15 (little_endian)*/
#define   BP07T15_BIT_OFS  32
#define   BP07T15_VALUE_TYPE   _uint16_t
/* BP07T16 (little_endian)*/
#define   BP07T16_BIT_OFS  48
#define   BP07T16_VALUE_TYPE   _uint16_t

/* BP07_T17_20 */
#define   BP07_T17_20_ID   0x788
#define   BP07_T17_20_PERIOD   100
#define   BP07_T17_20_DLC  8
/*  Values  of BP07_T17_20 */
/* BP07T17 (little_endian)*/
#define   BP07T17_BIT_OFS  0
#define   BP07T17_VALUE_TYPE   _uint16_t
/* BP07T18 (little_endian)*/
#define   BP07T18_BIT_OFS  16
#define   BP07T18_VALUE_TYPE   _uint16_t
/* BP07T19 (little_endian)*/
#define   BP07T19_BIT_OFS  32
#define   BP07T19_VALUE_TYPE   _uint16_t
/* BP07T20 (little_endian)*/
#define   BP07T20_BIT_OFS  48
#define   BP07T20_VALUE_TYPE   _uint16_t

/* BP07_T21_24 */
#define   BP07_T21_24_ID   0x789
#define   BP07_T21_24_PERIOD   100
#define   BP07_T21_24_DLC  8
/*  Values  of BP07_T21_24 */
/* BP07T21 (little_endian)*/
#define   BP07T21_BIT_OFS  0
#define   BP07T21_VALUE_TYPE   _uint16_t
/* BP07T22 (little_endian)*/
#define   BP07T22_BIT_OFS  16
#define   BP07T22_VALUE_TYPE   _uint16_t
/* BP07T23 (little_endian)*/
#define   BP07T23_BIT_OFS  32
#define   BP07T23_VALUE_TYPE   _uint16_t
/* BP07T24 (little_endian)*/
#define   BP07T24_BIT_OFS  48
#define   BP07T24_VALUE_TYPE   _uint16_t

/* BP08_T01_04 */
#define   BP08_T01_04_ID   0x78a
#define   BP08_T01_04_PERIOD   100
#define   BP08_T01_04_DLC  8
/*  Values  of BP08_T01_04 */
/* BP08T01 (little_endian)*/
#define   BP08T01_BIT_OFS  0
#define   BP08T01_VALUE_TYPE   _uint16_t
/* BP08T02 (little_endian)*/
#define   BP08T02_BIT_OFS  16
#define   BP08T02_VALUE_TYPE   _uint16_t
/* BP08T03 (little_endian)*/
#define   BP08T03_BIT_OFS  32
#define   BP08T03_VALUE_TYPE   _uint16_t
/* BP08T04 (little_endian)*/
#define   BP08T04_BIT_OFS  48
#define   BP08T04_VALUE_TYPE   _uint16_t

/* BP08_T05_08 */
#define   BP08_T05_08_ID   0x78b
#define   BP08_T05_08_PERIOD   100
#define   BP08_T05_08_DLC  8
/*  Values  of BP08_T05_08 */
/* BP08T05 (little_endian)*/
#define   BP08T05_BIT_OFS  0
#define   BP08T05_VALUE_TYPE   _uint16_t
/* BP08T06 (little_endian)*/
#define   BP08T06_BIT_OFS  16
#define   BP08T06_VALUE_TYPE   _uint16_t
/* BP08T07 (little_endian)*/
#define   BP08T07_BIT_OFS  32
#define   BP08T07_VALUE_TYPE   _uint16_t
/* BP08T08 (little_endian)*/
#define   BP08T08_BIT_OFS  48
#define   BP08T08_VALUE_TYPE   _uint16_t

/* BP08_T09_12 */
#define   BP08_T09_12_ID   0x78c
#define   BP08_T09_12_PERIOD   100
#define   BP08_T09_12_DLC  8
/*  Values  of BP08_T09_12 */
/* BP08T09 (little_endian)*/
#define   BP08T09_BIT_OFS  0
#define   BP08T09_VALUE_TYPE   _uint16_t
/* BP08T10 (little_endian)*/
#define   BP08T10_BIT_OFS  16
#define   BP08T10_VALUE_TYPE   _uint16_t
/* BP08T11 (little_endian)*/
#define   BP08T11_BIT_OFS  32
#define   BP08T11_VALUE_TYPE   _uint16_t
/* BP08T12 (little_endian)*/
#define   BP08T12_BIT_OFS  48
#define   BP08T12_VALUE_TYPE   _uint16_t

/* BP08_T13_16 */
#define   BP08_T13_16_ID   0x78d
#define   BP08_T13_16_PERIOD   100
#define   BP08_T13_16_DLC  8
/*  Values  of BP08_T13_16 */
/* BP08T13 (little_endian)*/
#define   BP08T13_BIT_OFS  0
#define   BP08T13_VALUE_TYPE   _uint16_t
/* BP08T14 (little_endian)*/
#define   BP08T14_BIT_OFS  16
#define   BP08T14_VALUE_TYPE   _uint16_t
/* BP08T15 (little_endian)*/
#define   BP08T15_BIT_OFS  32
#define   BP08T15_VALUE_TYPE   _uint16_t
/* BP08T16 (little_endian)*/
#define   BP08T16_BIT_OFS  48
#define   BP08T16_VALUE_TYPE   _uint16_t

/* BP08_T17_20 */
#define   BP08_T17_20_ID   0x78e
#define   BP08_T17_20_PERIOD   100
#define   BP08_T17_20_DLC  8
/*  Values  of BP08_T17_20 */
/* BP08T17 (little_endian)*/
#define   BP08T17_BIT_OFS  0
#define   BP08T17_VALUE_TYPE   _uint16_t
/* BP08T18 (little_endian)*/
#define   BP08T18_BIT_OFS  16
#define   BP08T18_VALUE_TYPE   _uint16_t
/* BP08T19 (little_endian)*/
#define   BP08T19_BIT_OFS  32
#define   BP08T19_VALUE_TYPE   _uint16_t
/* BP08T20 (little_endian)*/
#define   BP08T20_BIT_OFS  48
#define   BP08T20_VALUE_TYPE   _uint16_t

/* BP08_T21_24 */
#define   BP08_T21_24_ID   0x78f
#define   BP08_T21_24_PERIOD   100
#define   BP08_T21_24_DLC  8
/*  Values  of BP08_T21_24 */
/* BP08T21 (little_endian)*/
#define   BP08T21_BIT_OFS  0
#define   BP08T21_VALUE_TYPE   _uint16_t
/* BP08T22 (little_endian)*/
#define   BP08T22_BIT_OFS  16
#define   BP08T22_VALUE_TYPE   _uint16_t
/* BP08T23 (little_endian)*/
#define   BP08T23_BIT_OFS  32
#define   BP08T23_VALUE_TYPE   _uint16_t
/* BP08T24 (little_endian)*/
#define   BP08T24_BIT_OFS  48
#define   BP08T24_VALUE_TYPE   _uint16_t

/* BP09_T01_04 */
#define   BP09_T01_04_ID   0x790
#define   BP09_T01_04_PERIOD   100
#define   BP09_T01_04_DLC  8
/*  Values  of BP09_T01_04 */
/* BP09T01 (little_endian)*/
#define   BP09T01_BIT_OFS  0
#define   BP09T01_VALUE_TYPE   _uint16_t
/* BP09T02 (little_endian)*/
#define   BP09T02_BIT_OFS  16
#define   BP09T02_VALUE_TYPE   _uint16_t
/* BP09T03 (little_endian)*/
#define   BP09T03_BIT_OFS  32
#define   BP09T03_VALUE_TYPE   _uint16_t
/* BP09T04 (little_endian)*/
#define   BP09T04_BIT_OFS  48
#define   BP09T04_VALUE_TYPE   _uint16_t

/* BP09_T05_08 */
#define   BP09_T05_08_ID   0x791
#define   BP09_T05_08_PERIOD   100
#define   BP09_T05_08_DLC  8
/*  Values  of BP09_T05_08 */
/* BP09T05 (little_endian)*/
#define   BP09T05_BIT_OFS  0
#define   BP09T05_VALUE_TYPE   _uint16_t
/* BP09T06 (little_endian)*/
#define   BP09T06_BIT_OFS  16
#define   BP09T06_VALUE_TYPE   _uint16_t
/* BP09T07 (little_endian)*/
#define   BP09T07_BIT_OFS  32
#define   BP09T07_VALUE_TYPE   _uint16_t
/* BP09T08 (little_endian)*/
#define   BP09T08_BIT_OFS  48
#define   BP09T08_VALUE_TYPE   _uint16_t

/* BP09_T09_12 */
#define   BP09_T09_12_ID   0x792
#define   BP09_T09_12_PERIOD   100
#define   BP09_T09_12_DLC  8
/*  Values  of BP09_T09_12 */
/* BP09T09 (little_endian)*/
#define   BP09T09_BIT_OFS  0
#define   BP09T09_VALUE_TYPE   _uint16_t
/* BP09T10 (little_endian)*/
#define   BP09T10_BIT_OFS  16
#define   BP09T10_VALUE_TYPE   _uint16_t
/* BP09T11 (little_endian)*/
#define   BP09T11_BIT_OFS  32
#define   BP09T11_VALUE_TYPE   _uint16_t
/* BP09T12 (little_endian)*/
#define   BP09T12_BIT_OFS  48
#define   BP09T12_VALUE_TYPE   _uint16_t

/* BP09_T13_16 */
#define   BP09_T13_16_ID   0x793
#define   BP09_T13_16_PERIOD   100
#define   BP09_T13_16_DLC  8
/*  Values  of BP09_T13_16 */
/* BP09T13 (little_endian)*/
#define   BP09T13_BIT_OFS  0
#define   BP09T13_VALUE_TYPE   _uint16_t
/* BP09T14 (little_endian)*/
#define   BP09T14_BIT_OFS  16
#define   BP09T14_VALUE_TYPE   _uint16_t
/* BP09T15 (little_endian)*/
#define   BP09T15_BIT_OFS  32
#define   BP09T15_VALUE_TYPE   _uint16_t
/* BP09T16 (little_endian)*/
#define   BP09T16_BIT_OFS  48
#define   BP09T16_VALUE_TYPE   _uint16_t

/* BP09_T17_20 */
#define   BP09_T17_20_ID   0x794
#define   BP09_T17_20_PERIOD   100
#define   BP09_T17_20_DLC  8
/*  Values  of BP09_T17_20 */
/* BP09T17 (little_endian)*/
#define   BP09T17_BIT_OFS  0
#define   BP09T17_VALUE_TYPE   _uint16_t
/* BP09T18 (little_endian)*/
#define   BP09T18_BIT_OFS  16
#define   BP09T18_VALUE_TYPE   _uint16_t
/* BP09T19 (little_endian)*/
#define   BP09T19_BIT_OFS  32
#define   BP09T19_VALUE_TYPE   _uint16_t
/* BP09T20 (little_endian)*/
#define   BP09T20_BIT_OFS  48
#define   BP09T20_VALUE_TYPE   _uint16_t

/* BP09_T21_24 */
#define   BP09_T21_24_ID   0x795
#define   BP09_T21_24_PERIOD   100
#define   BP09_T21_24_DLC  8
/*  Values  of BP09_T21_24 */
/* BP09T21 (little_endian)*/
#define   BP09T21_BIT_OFS  0
#define   BP09T21_VALUE_TYPE   _uint16_t
/* BP09T22 (little_endian)*/
#define   BP09T22_BIT_OFS  16
#define   BP09T22_VALUE_TYPE   _uint16_t
/* BP09T23 (little_endian)*/
#define   BP09T23_BIT_OFS  32
#define   BP09T23_VALUE_TYPE   _uint16_t
/* BP09T24 (little_endian)*/
#define   BP09T24_BIT_OFS  48
#define   BP09T24_VALUE_TYPE   _uint16_t

/* BP10_T01_04 */
#define   BP10_T01_04_ID   0x796
#define   BP10_T01_04_PERIOD   100
#define   BP10_T01_04_DLC  8
/*  Values  of BP10_T01_04 */
/* BP10T01 (little_endian)*/
#define   BP10T01_BIT_OFS  0
#define   BP10T01_VALUE_TYPE   _uint16_t
/* BP10T02 (little_endian)*/
#define   BP10T02_BIT_OFS  16
#define   BP10T02_VALUE_TYPE   _uint16_t
/* BP10T03 (little_endian)*/
#define   BP10T03_BIT_OFS  32
#define   BP10T03_VALUE_TYPE   _uint16_t
/* BP10T04 (little_endian)*/
#define   BP10T04_BIT_OFS  48
#define   BP10T04_VALUE_TYPE   _uint16_t

/* BP10_T05_08 */
#define   BP10_T05_08_ID   0x797
#define   BP10_T05_08_PERIOD   100
#define   BP10_T05_08_DLC  8
/*  Values  of BP10_T05_08 */
/* BP10T05 (little_endian)*/
#define   BP10T05_BIT_OFS  0
#define   BP10T05_VALUE_TYPE   _uint16_t
/* BP10T06 (little_endian)*/
#define   BP10T06_BIT_OFS  16
#define   BP10T06_VALUE_TYPE   _uint16_t
/* BP10T07 (little_endian)*/
#define   BP10T07_BIT_OFS  32
#define   BP10T07_VALUE_TYPE   _uint16_t
/* BP10T08 (little_endian)*/
#define   BP10T08_BIT_OFS  48
#define   BP10T08_VALUE_TYPE   _uint16_t

/* BP10_T09_12 */
#define   BP10_T09_12_ID   0x798
#define   BP10_T09_12_PERIOD   100
#define   BP10_T09_12_DLC  8
/*  Values  of BP10_T09_12 */
/* BP10T09 (little_endian)*/
#define   BP10T09_BIT_OFS  0
#define   BP10T09_VALUE_TYPE   _uint16_t
/* BP10T10 (little_endian)*/
#define   BP10T10_BIT_OFS  16
#define   BP10T10_VALUE_TYPE   _uint16_t
/* BP10T11 (little_endian)*/
#define   BP10T11_BIT_OFS  32
#define   BP10T11_VALUE_TYPE   _uint16_t
/* BP10T12 (little_endian)*/
#define   BP10T12_BIT_OFS  48
#define   BP10T12_VALUE_TYPE   _uint16_t

/* BP10_T13_16 */
#define   BP10_T13_16_ID   0x799
#define   BP10_T13_16_PERIOD   100
#define   BP10_T13_16_DLC  8
/*  Values  of BP10_T13_16 */
/* BP10T13 (little_endian)*/
#define   BP10T13_BIT_OFS  0
#define   BP10T13_VALUE_TYPE   _uint16_t
/* BP10T14 (little_endian)*/
#define   BP10T14_BIT_OFS  16
#define   BP10T14_VALUE_TYPE   _uint16_t
/* BP10T15 (little_endian)*/
#define   BP10T15_BIT_OFS  32
#define   BP10T15_VALUE_TYPE   _uint16_t
/* BP10T16 (little_endian)*/
#define   BP10T16_BIT_OFS  48
#define   BP10T16_VALUE_TYPE   _uint16_t

/* BP10_T17_20 */
#define   BP10_T17_20_ID   0x79a
#define   BP10_T17_20_PERIOD   100
#define   BP10_T17_20_DLC  8
/*  Values  of BP10_T17_20 */
/* BP10T17 (little_endian)*/
#define   BP10T17_BIT_OFS  0
#define   BP10T17_VALUE_TYPE   _uint16_t
/* BP10T18 (little_endian)*/
#define   BP10T18_BIT_OFS  16
#define   BP10T18_VALUE_TYPE   _uint16_t
/* BP10T19 (little_endian)*/
#define   BP10T19_BIT_OFS  32
#define   BP10T19_VALUE_TYPE   _uint16_t
/* BP10T20 (little_endian)*/
#define   BP10T20_BIT_OFS  48
#define   BP10T20_VALUE_TYPE   _uint16_t

/* BP10_T21_24 */
#define   BP10_T21_24_ID   0x79b
#define   BP10_T21_24_PERIOD   100
#define   BP10_T21_24_DLC  8
/*  Values  of BP10_T21_24 */
/* BP10T21 (little_endian)*/
#define   BP10T21_BIT_OFS  0
#define   BP10T21_VALUE_TYPE   _uint16_t
/* BP10T22 (little_endian)*/
#define   BP10T22_BIT_OFS  16
#define   BP10T22_VALUE_TYPE   _uint16_t
/* BP10T23 (little_endian)*/
#define   BP10T23_BIT_OFS  32
#define   BP10T23_VALUE_TYPE   _uint16_t
/* BP10T24 (little_endian)*/
#define   BP10T24_BIT_OFS  48
#define   BP10T24_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS_13_16 */
#define   AREO_PRESSURE_SENSORS_13_16_ID   0x1c9
#define   AREO_PRESSURE_SENSORS_13_16_PERIOD   100
#define   AREO_PRESSURE_SENSORS_13_16_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS_13_16 */
/* AreoP13 (big_endian)*/
#define   AREOP13_BIT_OFS  0
#define   AREOP13_VALUE_TYPE   _uint16_t
/* AreoP14 (big_endian)*/
#define   AREOP14_BIT_OFS  16
#define   AREOP14_VALUE_TYPE   _uint16_t
/* AreoP15 (big_endian)*/
#define   AREOP15_BIT_OFS  32
#define   AREOP15_VALUE_TYPE   _uint16_t
/* AreoP16 (big_endian)*/
#define   AREOP16_BIT_OFS  48
#define   AREOP16_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS_09_12 */
#define   AREO_PRESSURE_SENSORS_09_12_ID   0x1c8
#define   AREO_PRESSURE_SENSORS_09_12_PERIOD   100
#define   AREO_PRESSURE_SENSORS_09_12_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS_09_12 */
/* AreoP10 (big_endian)*/
#define   AREOP10_BIT_OFS  0
#define   AREOP10_VALUE_TYPE   _uint16_t
/* AreoP11 (big_endian)*/
#define   AREOP11_BIT_OFS  16
#define   AREOP11_VALUE_TYPE   _uint16_t
/* AreoP12 (big_endian)*/
#define   AREOP12_BIT_OFS  32
#define   AREOP12_VALUE_TYPE   _uint16_t
/* AreoP09 (big_endian)*/
#define   AREOP09_BIT_OFS  48
#define   AREOP09_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS_05_08 */
#define   AREO_PRESSURE_SENSORS_05_08_ID   0x1c7
#define   AREO_PRESSURE_SENSORS_05_08_PERIOD   100
#define   AREO_PRESSURE_SENSORS_05_08_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS_05_08 */
/* AreoP05 (big_endian)*/
#define   AREOP05_BIT_OFS  0
#define   AREOP05_VALUE_TYPE   _uint16_t
/* AreoP06 (big_endian)*/
#define   AREOP06_BIT_OFS  16
#define   AREOP06_VALUE_TYPE   _uint16_t
/* AreoP07 (big_endian)*/
#define   AREOP07_BIT_OFS  32
#define   AREOP07_VALUE_TYPE   _uint16_t
/* AreoP08 (big_endian)*/
#define   AREOP08_BIT_OFS  48
#define   AREOP08_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS_01_04 */
#define   AREO_PRESSURE_SENSORS_01_04_ID   0x1c6
#define   AREO_PRESSURE_SENSORS_01_04_PERIOD   100
#define   AREO_PRESSURE_SENSORS_01_04_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS_01_04 */
/* AreoP01 (big_endian)*/
#define   AREOP01_BIT_OFS  0
#define   AREOP01_VALUE_TYPE   _uint16_t
/* AreoP02 (big_endian)*/
#define   AREOP02_BIT_OFS  16
#define   AREOP02_VALUE_TYPE   _uint16_t
/* AreoP03 (big_endian)*/
#define   AREOP03_BIT_OFS  32
#define   AREOP03_VALUE_TYPE   _uint16_t
/* AreoP04 (big_endian)*/
#define   AREOP04_BIT_OFS  48
#define   AREOP04_VALUE_TYPE   _uint16_t