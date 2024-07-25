
/* CAN DATABASE HEADER */
/* parsed from: C:\Users\kubak\Desktop\dbc\Can\RTE30\RTE_3.0_CAN1.dbc */
/* 23/07/2024 14:17:43 */


/* ACCU_FAN_SPEED_REQUEST */
#define   ACCU_FAN_SPEED_REQUEST_ID   0x6
#define   ACCU_FAN_SPEED_REQUEST_PERIOD   10000
#define   ACCU_FAN_SPEED_REQUEST_DLC  1
/*  Values  of ACCU_FAN_SPEED_REQUEST */
/* AccuFunSpeedIncrease (little_endian)*/
#define   ACCUFUNSPEEDINCREASE_BIT_OFS  0
#define   ACCUFUNSPEEDINCREASE_VALUE_TYPE   _int8_t

/* ACCU_FAN_SPEED */
#define   ACCU_FAN_SPEED_ID   0x1c
#define   ACCU_FAN_SPEED_PERIOD   1000
#define   ACCU_FAN_SPEED_DLC  1
/*  Values  of ACCU_FAN_SPEED */
/* AccuFunSpeed (little_endian)*/
#define   ACCUFUNSPEED_BIT_OFS  0
#define   ACCUFUNSPEED_VALUE_TYPE   _uint8_t

/* MAIN_DRIVER_FLAGS */
#define   MAIN_DRIVER_FLAGS_ID   0x1f
#define   MAIN_DRIVER_FLAGS_PERIOD   100
#define   MAIN_DRIVER_FLAGS_DLC  8
/*  Values  of MAIN_DRIVER_FLAGS */
/* currentDriver (little_endian)*/
#define   CURRENTDRIVER_BIT_OFS  0
#define   CURRENTDRIVER_VALUE_TYPE   _uint8_t
/* amkModuleFlags (little_endian)*/
#define   AMKMODULEFLAGS_BIT_OFS  8
#define   AMKMODULEFLAGS_VALUE_TYPE   _uint8_t

/* MAIN_PBALANCE_OSTEER */
#define   MAIN_PBALANCE_OSTEER_ID   0x27
#define   MAIN_PBALANCE_OSTEER_PERIOD   100
#define   MAIN_PBALANCE_OSTEER_DLC  8
/*  Values  of MAIN_PBALANCE_OSTEER */
/* powerBalance (little_endian)*/
#define   POWERBALANCE_BIT_OFS  0
#define   POWERBALANCE_VALUE_TYPE   _uint32_t
/* oversteer (little_endian)*/
#define   OVERSTEER_BIT_OFS  32
#define   OVERSTEER_VALUE_TYPE   _uint32_t

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

/* MAIN_YAWSET_TVSPEED */
#define   MAIN_YAWSET_TVSPEED_ID   0x24
#define   MAIN_YAWSET_TVSPEED_PERIOD   100
#define   MAIN_YAWSET_TVSPEED_DLC  8
/*  Values  of MAIN_YAWSET_TVSPEED */
/* yawSetpoint (little_endian)*/
#define   YAWSETPOINT_BIT_OFS  0
#define   YAWSETPOINT_VALUE_TYPE   _uint32_t
/* TVStartSpeed (little_endian)*/
#define   TVSTARTSPEED_BIT_OFS  32
#define   TVSTARTSPEED_VALUE_TYPE   _uint32_t

/* MAIN_CFILTER_PLIMIT */
#define   MAIN_CFILTER_PLIMIT_ID   0x23
#define   MAIN_CFILTER_PLIMIT_PERIOD   100
#define   MAIN_CFILTER_PLIMIT_DLC  8
/*  Values  of MAIN_CFILTER_PLIMIT */
/* complFilter (little_endian)*/
#define   COMPLFILTER_BIT_OFS  0
#define   COMPLFILTER_VALUE_TYPE   _uint32_t
/* powerLimit (little_endian)*/
#define   POWERLIMIT_BIT_OFS  32
#define   POWERLIMIT_VALUE_TYPE   _uint32_t

/* MAIN_KD */
#define   MAIN_KD_ID   0x22
#define   MAIN_KD_PERIOD   100
#define   MAIN_KD_DLC  8
/*  Values  of MAIN_KD */
/* TVKd (little_endian)*/
#define   TVKD_BIT_OFS  0
#define   TVKD_VALUE_TYPE   _uint32_t
/* TCkd (little_endian)*/
#define   TCKD_BIT_OFS  32
#define   TCKD_VALUE_TYPE   _uint32_t

/* MAIN_KI */
#define   MAIN_KI_ID   0x21
#define   MAIN_KI_PERIOD   100
#define   MAIN_KI_DLC  8
/*  Values  of MAIN_KI */
/* TVKi (little_endian)*/
#define   TVKI_BIT_OFS  0
#define   TVKI_VALUE_TYPE   _uint32_t
/* TCKi (little_endian)*/
#define   TCKI_BIT_OFS  32
#define   TCKI_VALUE_TYPE   _uint32_t

/* MAIN_KP */
#define   MAIN_KP_ID   0x20
#define   MAIN_KP_PERIOD   100
#define   MAIN_KP_DLC  8
/*  Values  of MAIN_KP */
/* TVKp (little_endian)*/
#define   TVKP_BIT_OFS  0
#define   TVKP_VALUE_TYPE   _uint32_t
/* TCKp (little_endian)*/
#define   TCKP_BIT_OFS  32
#define   TCKP_VALUE_TYPE   _uint32_t

/* LV_BMS_REQUEST_FRAME */
#define   LV_BMS_REQUEST_FRAME_ID   0x40a
#define   LV_BMS_REQUEST_FRAME_PERIOD   10000
#define   LV_BMS_REQUEST_FRAME_DLC  1
/*  Values  of LV_BMS_REQUEST_FRAME */
/* LV_BMS_REQUEST_PowerCycle (little_endian)*/
#define   LV_BMS_REQUEST_POWERCYCLE_BIT_OFS  0
#define   LV_BMS_REQUEST_POWERCYCLE_VALUE_TYPE   _uint8_t

/* JAGGORACY_PROC */
#define   JAGGORACY_PROC_ID   0x530
#define   JAGGORACY_PROC_PERIOD   1000
#define   JAGGORACY_PROC_DLC  8
/*  Values  of JAGGORACY_PROC */
/* JAGGORACY_PROC (little_endian)*/
#define   JAGGORACY_PROC_BIT_OFS  0
#define   JAGGORACY_PROC_VALUE_TYPE   _int8_t

/* POWER_MODULE_REQUEST_ID */
#define   POWER_MODULE_REQUEST_ID_ID   0x40f
#define   POWER_MODULE_REQUEST_ID_PERIOD   200
#define   POWER_MODULE_REQUEST_ID_DLC  8
/*  Values  of POWER_MODULE_REQUEST_ID */
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
/* AS_state (big_endian)*/
#define   AS_STATE_BIT_OFS  7
#define   AS_STATE_VALUE_TYPE   _uint3_t
/* EBS_state (big_endian)*/
#define   EBS_STATE_BIT_OFS  4
#define   EBS_STATE_VALUE_TYPE   _uint2_t
/* AMI_state (big_endian)*/
#define   AMI_STATE_BIT_OFS  2
#define   AMI_STATE_VALUE_TYPE   _uint3_t
/* Steering_state (big_endian)*/
#define   STEERING_STATE_BIT_OFS  15
#define   STEERING_STATE_VALUE_TYPE   _uint1_t
/* Service_brake_state_engaged (big_endian)*/
#define   SERVICE_BRAKE_STATE_ENGAGED_BIT_OFS  14
#define   SERVICE_BRAKE_STATE_ENGAGED_VALUE_TYPE   _uint2_t
/* Lap_counter (big_endian)*/
#define   LAP_COUNTER_BIT_OFS  12
#define   LAP_COUNTER_VALUE_TYPE   _uint4_t
/* Cones_count_actual (big_endian)*/
#define   CONES_COUNT_ACTUAL_BIT_OFS  1
#define   CONES_COUNT_ACTUAL_VALUE_TYPE   _uint8_t
/* Cones_count_all (big_endian)*/
#define   CONES_COUNT_ALL_BIT_OFS  9
#define   CONES_COUNT_ALL_VALUE_TYPE   _uint17_t

/* DV_DRIVING_DYNAMICS2 */
#define   DV_DRIVING_DYNAMICS2_ID   0x501
#define   DV_DRIVING_DYNAMICS2_PERIOD   100
#define   DV_DRIVING_DYNAMICS2_DLC  6
/*  Values  of DV_DRIVING_DYNAMICS2 */
/* Acceleration_longitudinal (big_endian)*/
#define   ACCELERATION_LONGITUDINAL_BIT_OFS  0
#define   ACCELERATION_LONGITUDINAL_VALUE_TYPE   _int16_t
/* Acceleration_lateral (big_endian)*/
#define   ACCELERATION_LATERAL_BIT_OFS  16
#define   ACCELERATION_LATERAL_VALUE_TYPE   _int16_t
/* Yaw_rate (big_endian)*/
#define   YAW_RATE_BIT_OFS  32
#define   YAW_RATE_VALUE_TYPE   _int16_t

/* DV_DRIVING_DYNAMICS1 */
#define   DV_DRIVING_DYNAMICS1_ID   0x500
#define   DV_DRIVING_DYNAMICS1_PERIOD   100
#define   DV_DRIVING_DYNAMICS1_DLC  8
/*  Values  of DV_DRIVING_DYNAMICS1 */
/* Speed_actual (big_endian)*/
#define   SPEED_ACTUAL_BIT_OFS  0
#define   SPEED_ACTUAL_VALUE_TYPE   _uint8_t
/* Speed_target (big_endian)*/
#define   SPEED_TARGET_BIT_OFS  8
#define   SPEED_TARGET_VALUE_TYPE   _uint8_t
/* Steering_angle_actual (big_endian)*/
#define   STEERING_ANGLE_ACTUAL_BIT_OFS  16
#define   STEERING_ANGLE_ACTUAL_VALUE_TYPE   _int8_t
/* Steering_angle_target (big_endian)*/
#define   STEERING_ANGLE_TARGET_BIT_OFS  24
#define   STEERING_ANGLE_TARGET_VALUE_TYPE   _int8_t
/* Brake_hydr_actual (big_endian)*/
#define   BRAKE_HYDR_ACTUAL_BIT_OFS  32
#define   BRAKE_HYDR_ACTUAL_VALUE_TYPE   _uint8_t
/* Brake_hydr_target (big_endian)*/
#define   BRAKE_HYDR_TARGET_BIT_OFS  40
#define   BRAKE_HYDR_TARGET_VALUE_TYPE   _uint8_t
/* Motor_moment_actual (big_endian)*/
#define   MOTOR_MOMENT_ACTUAL_BIT_OFS  48
#define   MOTOR_MOMENT_ACTUAL_VALUE_TYPE   _int8_t
/* Motor_moment_target (big_endian)*/
#define   MOTOR_MOMENT_TARGET_BIT_OFS  56
#define   MOTOR_MOMENT_TARGET_VALUE_TYPE   _int8_t

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
/* ANGLE_RL (big_endian)*/
#define   ANGLE_RL_BIT_OFS  0
#define   ANGLE_RL_VALUE_TYPE   _int32_t
/* ANGLE_RL_Error (big_endian)*/
#define   ANGLE_RL_ERROR_BIT_OFS  32
#define   ANGLE_RL_ERROR_VALUE_TYPE   _uint8_t
/* WAS_ANGLE_RL_Error (big_endian)*/
#define   WAS_ANGLE_RL_ERROR_BIT_OFS  40
#define   WAS_ANGLE_RL_ERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_RR */
#define   ANGLE_SENSOR_RR_ID   0x52a
#define   ANGLE_SENSOR_RR_PERIOD   5
#define   ANGLE_SENSOR_RR_DLC  8
/*  Values  of ANGLE_SENSOR_RR */
/* ANGLE_RR (big_endian)*/
#define   ANGLE_RR_BIT_OFS  0
#define   ANGLE_RR_VALUE_TYPE   _int32_t
/* ANGLE_RR_Error (big_endian)*/
#define   ANGLE_RR_ERROR_BIT_OFS  32
#define   ANGLE_RR_ERROR_VALUE_TYPE   _uint8_t
/* WAS_ANGLE_RR_Error (big_endian)*/
#define   WAS_ANGLE_RR_ERROR_BIT_OFS  40
#define   WAS_ANGLE_RR_ERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_FL */
#define   ANGLE_SENSOR_FL_ID   0x529
#define   ANGLE_SENSOR_FL_PERIOD   5
#define   ANGLE_SENSOR_FL_DLC  8
/*  Values  of ANGLE_SENSOR_FL */
/* ANGLE_FL (big_endian)*/
#define   ANGLE_FL_BIT_OFS  0
#define   ANGLE_FL_VALUE_TYPE   _int32_t
/* ANGLE_FL_Error (big_endian)*/
#define   ANGLE_FL_ERROR_BIT_OFS  32
#define   ANGLE_FL_ERROR_VALUE_TYPE   _uint8_t
/* WAS_ANGLE_FL_Error (big_endian)*/
#define   WAS_ANGLE_FL_ERROR_BIT_OFS  40
#define   WAS_ANGLE_FL_ERROR_VALUE_TYPE   _uint8_t

/* ANGLE_SENSOR_FR */
#define   ANGLE_SENSOR_FR_ID   0x528
#define   ANGLE_SENSOR_FR_PERIOD   5
#define   ANGLE_SENSOR_FR_DLC  8
/*  Values  of ANGLE_SENSOR_FR */
/* ANGLE_FR (big_endian)*/
#define   ANGLE_FR_BIT_OFS  0
#define   ANGLE_FR_VALUE_TYPE   _int32_t
/* ANGLE_FR_Error (big_endian)*/
#define   ANGLE_FR_ERROR_BIT_OFS  32
#define   ANGLE_FR_ERROR_VALUE_TYPE   _uint8_t
/* WAS_ANGLE_FR_Error (big_endian)*/
#define   WAS_ANGLE_FR_ERROR_BIT_OFS  40
#define   WAS_ANGLE_FR_ERROR_VALUE_TYPE   _uint8_t

/* SW_SENSOR */
#define   SW_SENSOR_ID   0x527
#define   SW_SENSOR_PERIOD   5
#define   SW_SENSOR_DLC  8
/*  Values  of SW_SENSOR */
/* Angle (big_endian)*/
#define   ANGLE_BIT_OFS  0
#define   ANGLE_VALUE_TYPE   _int32_t
/* ANGLE_Error (big_endian)*/
#define   ANGLE_ERROR_BIT_OFS  32
#define   ANGLE_ERROR_VALUE_TYPE   _uint8_t
/* WAS_ANGLE_SW_Error (big_endian)*/
#define   WAS_ANGLE_SW_ERROR_BIT_OFS  40
#define   WAS_ANGLE_SW_ERROR_VALUE_TYPE   _uint8_t

/* BRAKE_LIGHT_FRAME */
#define   BRAKE_LIGHT_FRAME_ID   0x526
#define   BRAKE_LIGHT_FRAME_PERIOD   100
#define   BRAKE_LIGHT_FRAME_DLC  1
/*  Values  of BRAKE_LIGHT_FRAME */
/* BRAKE_LIGHT_enable (little_endian)*/
#define   BRAKE_LIGHT_ENABLE_BIT_OFS  0
#define   BRAKE_LIGHT_ENABLE_VALUE_TYPE   _int8_t

/* BUZZER_FRAME */
#define   BUZZER_FRAME_ID   0x525
#define   BUZZER_FRAME_PERIOD   200
#define   BUZZER_FRAME_DLC  1
/*  Values  of BUZZER_FRAME */
/* BUZZER_enable (little_endian)*/
#define   BUZZER_ENABLE_BIT_OFS  0
#define   BUZZER_ENABLE_VALUE_TYPE   _uint8_t

/* IVT_V3 */
#define   IVT_V3_ID   0x524
#define   IVT_V3_PERIOD   4
#define   IVT_V3_DLC  8
/*  Values  of IVT_V3 */
/* IVT_V3_Value (little_endian)*/
#define   IVT_V3_VALUE_BIT_OFS  16
#define   IVT_V3_VALUE_VALUE_TYPE   _int32_t

/* IVT_V2 */
#define   IVT_V2_ID   0x523
#define   IVT_V2_PERIOD   4
#define   IVT_V2_DLC  8
/*  Values  of IVT_V2 */
/* IVT_V2_Value (little_endian)*/
#define   IVT_V2_VALUE_BIT_OFS  16
#define   IVT_V2_VALUE_VALUE_TYPE   _int32_t

/* IVT_V1 */
#define   IVT_V1_ID   0x522
#define   IVT_V1_PERIOD   4
#define   IVT_V1_DLC  8
/*  Values  of IVT_V1 */
/* IVT_V1_Value (little_endian)*/
#define   IVT_V1_VALUE_BIT_OFS  16
#define   IVT_V1_VALUE_VALUE_TYPE   _int32_t

/* IVT_I */
#define   IVT_I_ID   0x521
#define   IVT_I_PERIOD   4
#define   IVT_I_DLC  8
/*  Values  of IVT_I */
/* IVT_I_Value (little_endian)*/
#define   IVT_I_VALUE_BIT_OFS  16
#define   IVT_I_VALUE_VALUE_TYPE   _int32_t

/* SW_MAIN_REQ_FRAME */
#define   SW_MAIN_REQ_FRAME_ID   0x720
#define   SW_MAIN_REQ_FRAME_PERIOD   100
#define   SW_MAIN_REQ_FRAME_DLC  8
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
/* LV_temp0 (big_endian)*/
#define   LV_TEMP0_BIT_OFS  0
#define   LV_TEMP0_VALUE_TYPE   _uint8_t
/* LV_temp1 (big_endian)*/
#define   LV_TEMP1_BIT_OFS  8
#define   LV_TEMP1_VALUE_TYPE   _uint8_t
/* LV_temp2 (big_endian)*/
#define   LV_TEMP2_BIT_OFS  16
#define   LV_TEMP2_VALUE_TYPE   _uint8_t
/* LV_temp3 (big_endian)*/
#define   LV_TEMP3_BIT_OFS  24
#define   LV_TEMP3_VALUE_TYPE   _uint8_t
/* LV_temp4 (big_endian)*/
#define   LV_TEMP4_BIT_OFS  32
#define   LV_TEMP4_VALUE_TYPE   _uint8_t
/* LV_temp5 (big_endian)*/
#define   LV_TEMP5_BIT_OFS  40
#define   LV_TEMP5_VALUE_TYPE   _uint8_t
/* LV_BMS_state (big_endian)*/
#define   LV_BMS_STATE_BIT_OFS  48
#define   LV_BMS_STATE_VALUE_TYPE   _uint8_t
/* LV_BMS_ERROR_frame (big_endian)*/
#define   LV_BMS_ERROR_FRAME_BIT_OFS  56
#define   LV_BMS_ERROR_FRAME_VALUE_TYPE   _uint8_t

/* LV_BMS_VOLTAGE_FRAME */
#define   LV_BMS_VOLTAGE_FRAME_ID   0x40b
#define   LV_BMS_VOLTAGE_FRAME_PERIOD   200
#define   LV_BMS_VOLTAGE_FRAME_DLC  8
/*  Values  of LV_BMS_VOLTAGE_FRAME */
/* LV_voltage0 (big_endian)*/
#define   LV_VOLTAGE0_BIT_OFS  0
#define   LV_VOLTAGE0_VALUE_TYPE   _uint9_t
/* LV_voltage1 (big_endian)*/
#define   LV_VOLTAGE1_BIT_OFS  7
#define   LV_VOLTAGE1_VALUE_TYPE   _uint9_t
/* LV_voltage2 (big_endian)*/
#define   LV_VOLTAGE2_BIT_OFS  14
#define   LV_VOLTAGE2_VALUE_TYPE   _uint9_t
/* LV_voltage3 (big_endian)*/
#define   LV_VOLTAGE3_BIT_OFS  21
#define   LV_VOLTAGE3_VALUE_TYPE   _uint9_t
/* LV_voltage4 (big_endian)*/
#define   LV_VOLTAGE4_BIT_OFS  28
#define   LV_VOLTAGE4_VALUE_TYPE   _uint9_t
/* LV_voltage5 (big_endian)*/
#define   LV_VOLTAGE5_BIT_OFS  35
#define   LV_VOLTAGE5_VALUE_TYPE   _uint9_t

/* POWER_MODULE_ERROR_ID */
#define   POWER_MODULE_ERROR_ID_ID   0x40e
#define   POWER_MODULE_ERROR_ID_PERIOD   200
#define   POWER_MODULE_ERROR_ID_DLC  1
/*  Values  of POWER_MODULE_ERROR_ID */
/* PowerModule_Error (big_endian)*/
#define   POWERMODULE_ERROR_BIT_OFS  0
#define   POWERMODULE_ERROR_VALUE_TYPE   _uint8_t

/* V_T_REQUEST_FRAME */
#define   V_T_REQUEST_FRAME_ID   0x57f
#define   V_T_REQUEST_FRAME_PERIOD   10000
#define   V_T_REQUEST_FRAME_DLC  8
/*  Values  of V_T_REQUEST_FRAME */
/* Print_V_T (little_endian)*/
#define   PRINT_V_T_BIT_OFS  0
#define   PRINT_V_T_VALUE_TYPE   _uint8_t

/* HV_PWR_LIMITS_FRAME */
#define   HV_PWR_LIMITS_FRAME_ID   0x5f
#define   HV_PWR_LIMITS_FRAME_PERIOD   4
#define   HV_PWR_LIMITS_FRAME_DLC  4
/*  Values  of HV_PWR_LIMITS_FRAME */
/* Discharge_current_limit (little_endian)*/
#define   DISCHARGE_CURRENT_LIMIT_BIT_OFS  0
#define   DISCHARGE_CURRENT_LIMIT_VALUE_TYPE   _uint16_t
/* Charge_current_limit (little_endian)*/
#define   CHARGE_CURRENT_LIMIT_BIT_OFS  16
#define   CHARGE_CURRENT_LIMIT_VALUE_TYPE   _uint16_t

/* HV_BMS_STATUS_FRAME */
#define   HV_BMS_STATUS_FRAME_ID   0x60
#define   HV_BMS_STATUS_FRAME_PERIOD   100
#define   HV_BMS_STATUS_FRAME_DLC  8
/*  Values  of HV_BMS_STATUS_FRAME */
/* HVBMS_bms_state (big_endian)*/
#define   HVBMS_BMS_STATE_BIT_OFS  0
#define   HVBMS_BMS_STATE_VALUE_TYPE   _uint8_t
/* HVBMS_error_code (big_endian)*/
#define   HVBMS_ERROR_CODE_BIT_OFS  8
#define   HVBMS_ERROR_CODE_VALUE_TYPE   _uint8_t
/* HVBMS_state_of_charge (big_endian)*/
#define   HVBMS_STATE_OF_CHARGE_BIT_OFS  16
#define   HVBMS_STATE_OF_CHARGE_VALUE_TYPE   _uint8_t
/* HVBMS_SHD_state (big_endian)*/
#define   HVBMS_SHD_STATE_BIT_OFS  24
#define   HVBMS_SHD_STATE_VALUE_TYPE   _uint8_t

/* HV_BMS_ERROR */
#define   HV_BMS_ERROR_ID   0x61
#define   HV_BMS_ERROR_PERIOD   100
#define   HV_BMS_ERROR_DLC  8
/*  Values  of HV_BMS_ERROR */
/* AMS_ERROR (little_endian)*/
#define   AMS_ERROR_BIT_OFS  0
#define   AMS_ERROR_VALUE_TYPE   _uint32_t
/* AMS_Warrnig (little_endian)*/
#define   AMS_WARRNIG_BIT_OFS  32
#define   AMS_WARRNIG_VALUE_TYPE   _uint32_t

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
/* HV_BMS_command (big_endian)*/
#define   HV_BMS_COMMAND_BIT_OFS  0
#define   HV_BMS_COMMAND_VALUE_TYPE   _uint8_t

/* SW_PEDALS_REQ_FRAME */
#define   SW_PEDALS_REQ_FRAME_ID   0x701
#define   SW_PEDALS_REQ_FRAME_PERIOD   100
#define   SW_PEDALS_REQ_FRAME_DLC  8
/*  Values  of SW_PEDALS_REQ_FRAME */
/* bb_update (big_endian)*/
#define   BB_UPDATE_BIT_OFS  0
#define   BB_UPDATE_VALUE_TYPE   _uint8_t
/* pedals_calib (big_endian)*/
#define   PEDALS_CALIB_BIT_OFS  8
#define   PEDALS_CALIB_VALUE_TYPE   _uint8_t

/* PEDALS_DEBUG_ID */
#define   PEDALS_DEBUG_ID_ID   0x64
#define   PEDALS_DEBUG_ID_PERIOD   100
#define   PEDALS_DEBUG_ID_DLC  8
/*  Values  of PEDALS_DEBUG_ID */
/* apps1_adc (big_endian)*/
#define   APPS1_ADC_BIT_OFS  0
#define   APPS1_ADC_VALUE_TYPE   _uint16_t
/* apps2_adc (big_endian)*/
#define   APPS2_ADC_BIT_OFS  16
#define   APPS2_ADC_VALUE_TYPE   _uint16_t
/* apps_diff (big_endian)*/
#define   APPS_DIFF_BIT_OFS  32
#define   APPS_DIFF_VALUE_TYPE   _int16_t
/* Pedals_errcode (big_endian)*/
#define   PEDALS_ERRCODE_BIT_OFS  48
#define   PEDALS_ERRCODE_VALUE_TYPE   _uint16_t

/* IMU_ACCELERATION_FRAME */
#define   IMU_ACCELERATION_FRAME_ID   0x409
#define   IMU_ACCELERATION_FRAME_PERIOD   10
#define   IMU_ACCELERATION_FRAME_DLC  6
/*  Values  of IMU_ACCELERATION_FRAME */
/* HR_X_accel (big_endian)*/
#define   HR_X_ACCEL_BIT_OFS  0
#define   HR_X_ACCEL_VALUE_TYPE   _int16_t
/* HR_Y_accel (big_endian)*/
#define   HR_Y_ACCEL_BIT_OFS  16
#define   HR_Y_ACCEL_VALUE_TYPE   _int16_t
/* HR_Z_accel (big_endian)*/
#define   HR_Z_ACCEL_BIT_OFS  32
#define   HR_Z_ACCEL_VALUE_TYPE   _int16_t

/* IMU_ANGULAR_FRAME */
#define   IMU_ANGULAR_FRAME_ID   0x408
#define   IMU_ANGULAR_FRAME_PERIOD   10
#define   IMU_ANGULAR_FRAME_DLC  6
/*  Values  of IMU_ANGULAR_FRAME */
/* HR_X_ang_rate (big_endian)*/
#define   HR_X_ANG_RATE_BIT_OFS  0
#define   HR_X_ANG_RATE_VALUE_TYPE   _int16_t
/* HR_Y_ang_rate (big_endian)*/
#define   HR_Y_ANG_RATE_BIT_OFS  16
#define   HR_Y_ANG_RATE_VALUE_TYPE   _int16_t
/* HR_Z_ang_rate (big_endian)*/
#define   HR_Z_ANG_RATE_BIT_OFS  32
#define   HR_Z_ANG_RATE_VALUE_TYPE   _int16_t

/* GPS_FRAME_4 */
#define   GPS_FRAME_4_ID   0x404
#define   GPS_FRAME_4_PERIOD   100
#define   GPS_FRAME_4_DLC  8
/*  Values  of GPS_FRAME_4 */
/* UTC_year (big_endian)*/
#define   UTC_YEAR_BIT_OFS  0
#define   UTC_YEAR_VALUE_TYPE   _uint8_t
/* UTC_month (big_endian)*/
#define   UTC_MONTH_BIT_OFS  8
#define   UTC_MONTH_VALUE_TYPE   _uint8_t
/* UTC_day (big_endian)*/
#define   UTC_DAY_BIT_OFS  16
#define   UTC_DAY_VALUE_TYPE   _uint8_t
/* UTC_hour (big_endian)*/
#define   UTC_HOUR_BIT_OFS  24
#define   UTC_HOUR_VALUE_TYPE   _uint8_t
/* UTC_minute (big_endian)*/
#define   UTC_MINUTE_BIT_OFS  32
#define   UTC_MINUTE_VALUE_TYPE   _uint8_t
/* UTC_second (big_endian)*/
#define   UTC_SECOND_BIT_OFS  40
#define   UTC_SECOND_VALUE_TYPE   _uint8_t
/* UTC_millisecond (big_endian)*/
#define   UTC_MILLISECOND_BIT_OFS  48
#define   UTC_MILLISECOND_VALUE_TYPE   _uint16_t

/* GPS_FRAME_3 */
#define   GPS_FRAME_3_ID   0x403
#define   GPS_FRAME_3_PERIOD   100
#define   GPS_FRAME_3_DLC  8
/*  Values  of GPS_FRAME_3 */
/* Z_angle_rate (big_endian)*/
#define   Z_ANGLE_RATE_BIT_OFS  0
#define   Z_ANGLE_RATE_VALUE_TYPE   _int16_t
/* X_acceleration (big_endian)*/
#define   X_ACCELERATION_BIT_OFS  16
#define   X_ACCELERATION_VALUE_TYPE   _int16_t
/* Y_acceleration (big_endian)*/
#define   Y_ACCELERATION_BIT_OFS  32
#define   Y_ACCELERATION_VALUE_TYPE   _int16_t
/* Z_acceleration (big_endian)*/
#define   Z_ACCELERATION_BIT_OFS  48
#define   Z_ACCELERATION_VALUE_TYPE   _int16_t

/* GPS_FRAME_2 */
#define   GPS_FRAME_2_ID   0x402
#define   GPS_FRAME_2_PERIOD   100
#define   GPS_FRAME_2_DLC  8
/*  Values  of GPS_FRAME_2 */
/* Heading_motion (big_endian)*/
#define   HEADING_MOTION_BIT_OFS  0
#define   HEADING_MOTION_VALUE_TYPE   _uint16_t
/* Heading_vehicle_1 (big_endian)*/
#define   HEADING_VEHICLE_1_BIT_OFS  16
#define   HEADING_VEHICLE_1_VALUE_TYPE   _uint16_t
/* X_angle_rate (big_endian)*/
#define   X_ANGLE_RATE_BIT_OFS  32
#define   X_ANGLE_RATE_VALUE_TYPE   _int16_t
/* Y_angle_rate (big_endian)*/
#define   Y_ANGLE_RATE_BIT_OFS  48
#define   Y_ANGLE_RATE_VALUE_TYPE   _int16_t

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
/* Satellites_number (big_endian)*/
#define   SATELLITES_NUMBER_BIT_OFS  40
#define   SATELLITES_NUMBER_VALUE_TYPE   _uint8_t
/* GPS_frame_index (big_endian)*/
#define   GPS_FRAME_INDEX_BIT_OFS  55
#define   GPS_FRAME_INDEX_VALUE_TYPE   _uint4_t
/* Empty_frame_index (big_endian)*/
#define   EMPTY_FRAME_INDEX_BIT_OFS  51
#define   EMPTY_FRAME_INDEX_VALUE_TYPE   _uint4_t
/* GPS_status (big_endian)*/
#define   GPS_STATUS_BIT_OFS  63
#define   GPS_STATUS_VALUE_TYPE   _uint3_t
/* IMU_fusion_status (big_endian)*/
#define   IMU_FUSION_STATUS_BIT_OFS  60
#define   IMU_FUSION_STATUS_VALUE_TYPE   _uint3_t

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

/* STARTBUTTONS */
#define   STARTBUTTONS_ID   0x11
#define   STARTBUTTONS_PERIOD   100
#define   STARTBUTTONS_DLC  2
/*  Values  of STARTBUTTONS */
/* Hv_on (little_endian)*/
#define   HV_ON_BIT_OFS  0
#define   HV_ON_VALUE_TYPE   _uint8_t
/* TS_on (little_endian)*/
#define   TS_ON_BIT_OFS  8
#define   TS_ON_VALUE_TYPE   _uint8_t

/* SW_DISPLAYED_CONFIG_FRAME_3 */
#define   SW_DISPLAYED_CONFIG_FRAME_3_ID   0xa
#define   SW_DISPLAYED_CONFIG_FRAME_3_PERIOD   100
#define   SW_DISPLAYED_CONFIG_FRAME_3_DLC  8
/*  Values  of SW_DISPLAYED_CONFIG_FRAME_3 */
/* c_TCKp (big_endian)*/
#define   C_TCKP_BIT_OFS  0
#define   C_TCKP_VALUE_TYPE   _uint8_t
/* c_TCKi (big_endian)*/
#define   C_TCKI_BIT_OFS  8
#define   C_TCKI_VALUE_TYPE   _uint8_t
/* c_TCKd (big_endian)*/
#define   C_TCKD_BIT_OFS  16
#define   C_TCKD_VALUE_TYPE   _uint8_t
/* c_tractionControlEnable (big_endian)*/
#define   C_TRACTIONCONTROLENABLE_BIT_OFS  24
#define   C_TRACTIONCONTROLENABLE_VALUE_TYPE   _uint8_t

/* SW_DISPLAYED_CONFIG_FRAME_2 */
#define   SW_DISPLAYED_CONFIG_FRAME_2_ID   0x9
#define   SW_DISPLAYED_CONFIG_FRAME_2_PERIOD   100
#define   SW_DISPLAYED_CONFIG_FRAME_2_DLC  8
/*  Values  of SW_DISPLAYED_CONFIG_FRAME_2 */
/* c_TVKp (big_endian)*/
#define   C_TVKP_BIT_OFS  0
#define   C_TVKP_VALUE_TYPE   _uint8_t
/* c_TVKi (big_endian)*/
#define   C_TVKI_BIT_OFS  8
#define   C_TVKI_VALUE_TYPE   _uint8_t
/* c_TVKd (big_endian)*/
#define   C_TVKD_BIT_OFS  16
#define   C_TVKD_VALUE_TYPE   _uint8_t
/* c_torqueVectoringEnable (big_endian)*/
#define   C_TORQUEVECTORINGENABLE_BIT_OFS  24
#define   C_TORQUEVECTORINGENABLE_VALUE_TYPE   _uint8_t

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

/* INV_RP */
#define   INV_RP_ID   0x1b
#define   INV_RP_PERIOD   100
#define   INV_RP_DLC  8
/*  Values  of INV_RP */
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

/* SW_DISPLAYED_CONFIG_FRAME_1 */
#define   SW_DISPLAYED_CONFIG_FRAME_1_ID   0x8
#define   SW_DISPLAYED_CONFIG_FRAME_1_PERIOD   100
#define   SW_DISPLAYED_CONFIG_FRAME_1_DLC  8
/*  Values  of SW_DISPLAYED_CONFIG_FRAME_1 */
/* c_currentDriver (big_endian)*/
#define   C_CURRENTDRIVER_BIT_OFS  0
#define   C_CURRENTDRIVER_VALUE_TYPE   _uint8_t
/* c_currentPowerBalance (big_endian)*/
#define   C_CURRENTPOWERBALANCE_BIT_OFS  8
#define   C_CURRENTPOWERBALANCE_VALUE_TYPE   _int8_t
/* c_currentPowerLimit (big_endian)*/
#define   C_CURRENTPOWERLIMIT_BIT_OFS  16
#define   C_CURRENTPOWERLIMIT_VALUE_TYPE   _uint8_t
/* c_ePedalBrakeThreshold (big_endian)*/
#define   C_EPEDALBRAKETHRESHOLD_BIT_OFS  24
#define   C_EPEDALBRAKETHRESHOLD_VALUE_TYPE   _uint8_t
/* c_ePedalAcceleratorThreshold (big_endian)*/
#define   C_EPEDALACCELERATORTHRESHOLD_BIT_OFS  32
#define   C_EPEDALACCELERATORTHRESHOLD_VALUE_TYPE   _uint8_t
/* c_complementaryFilter (big_endian)*/
#define   C_COMPLEMENTARYFILTER_BIT_OFS  40
#define   C_COMPLEMENTARYFILTER_VALUE_TYPE   _uint8_t
/* UnderOverSteer (big_endian)*/
#define   UNDEROVERSTEER_BIT_OFS  48
#define   UNDEROVERSTEER_VALUE_TYPE   _uint8_t
/* VelocityCoefficient (big_endian)*/
#define   VELOCITYCOEFFICIENT_BIT_OFS  56
#define   VELOCITYCOEFFICIENT_VALUE_TYPE   _uint8_t

/* MAIN_STATUS_FRAME */
#define   MAIN_STATUS_FRAME_ID   0x66
#define   MAIN_STATUS_FRAME_PERIOD   100
#define   MAIN_STATUS_FRAME_DLC  8
/*  Values  of MAIN_STATUS_FRAME */
/* c_MainState (big_endian)*/
#define   C_MAINSTATE_BIT_OFS  0
#define   C_MAINSTATE_VALUE_TYPE   _uint8_t
/* c_Buzzer (big_endian)*/
#define   C_BUZZER_BIT_OFS  8
#define   C_BUZZER_VALUE_TYPE   _uint8_t
/* c_TSOff (big_endian)*/
#define   C_TSOFF_BIT_OFS  23
#define   C_TSOFF_VALUE_TYPE   _uint1_t
/* c_IMD (big_endian)*/
#define   C_IMD_BIT_OFS  22
#define   C_IMD_VALUE_TYPE   _uint1_t
/* c_AMS (big_endian)*/
#define   C_AMS_BIT_OFS  21
#define   C_AMS_VALUE_TYPE   _uint1_t
/* c_AMKError (big_endian)*/
#define   C_AMKERROR_BIT_OFS  24
#define   C_AMKERROR_VALUE_TYPE   _uint8_t
/* c_CurrentDriverProfile (big_endian)*/
#define   C_CURRENTDRIVERPROFILE_BIT_OFS  32
#define   C_CURRENTDRIVERPROFILE_VALUE_TYPE   _uint8_t

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

/* POWER_MODULE_ID */
#define   POWER_MODULE_ID_ID   0x40d
#define   POWER_MODULE_ID_PERIOD   200
#define   POWER_MODULE_ID_DLC  8
/*  Values  of POWER_MODULE_ID */
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
/* CAN_Curr (little_endian)*/
#define   CAN_CURR_BIT_OFS  40
#define   CAN_CURR_VALUE_TYPE   _uint8_t

/* BP1_V01_04 */
#define   BP1_V01_04_ID   0x550
#define   BP1_V01_04_PERIOD   100
#define   BP1_V01_04_DLC  8
/*  Values  of BP1_V01_04 */
/* BP1V01 (little_endian)*/
#define   BP1V01_BIT_OFS  0
#define   BP1V01_VALUE_TYPE   _uint16_t
/* BP1V02 (little_endian)*/
#define   BP1V02_BIT_OFS  16
#define   BP1V02_VALUE_TYPE   _uint16_t
/* BP1V03 (little_endian)*/
#define   BP1V03_BIT_OFS  32
#define   BP1V03_VALUE_TYPE   _uint16_t
/* BP1V04 (little_endian)*/
#define   BP1V04_BIT_OFS  48
#define   BP1V04_VALUE_TYPE   _uint16_t

/* BP1_V05_08 */
#define   BP1_V05_08_ID   0x551
#define   BP1_V05_08_PERIOD   100
#define   BP1_V05_08_DLC  8
/*  Values  of BP1_V05_08 */
/* BP1V05 (little_endian)*/
#define   BP1V05_BIT_OFS  0
#define   BP1V05_VALUE_TYPE   _uint16_t
/* BP1V06 (little_endian)*/
#define   BP1V06_BIT_OFS  16
#define   BP1V06_VALUE_TYPE   _uint16_t
/* BP1V07 (little_endian)*/
#define   BP1V07_BIT_OFS  32
#define   BP1V07_VALUE_TYPE   _uint16_t
/* BP1V08 (little_endian)*/
#define   BP1V08_BIT_OFS  48
#define   BP1V08_VALUE_TYPE   _uint16_t

/* BP1_V09_12 */
#define   BP1_V09_12_ID   0x552
#define   BP1_V09_12_PERIOD   100
#define   BP1_V09_12_DLC  8
/*  Values  of BP1_V09_12 */
/* BP1V09 (little_endian)*/
#define   BP1V09_BIT_OFS  0
#define   BP1V09_VALUE_TYPE   _uint16_t
/* BP1V10 (little_endian)*/
#define   BP1V10_BIT_OFS  16
#define   BP1V10_VALUE_TYPE   _uint16_t
/* BP1V11 (little_endian)*/
#define   BP1V11_BIT_OFS  32
#define   BP1V11_VALUE_TYPE   _uint16_t
/* BP1V12 (little_endian)*/
#define   BP1V12_BIT_OFS  48
#define   BP1V12_VALUE_TYPE   _uint16_t

/* BP1_V13_14 */
#define   BP1_V13_14_ID   0x553
#define   BP1_V13_14_PERIOD   100
#define   BP1_V13_14_DLC  8
/*  Values  of BP1_V13_14 */
/* BP1V13 (little_endian)*/
#define   BP1V13_BIT_OFS  0
#define   BP1V13_VALUE_TYPE   _uint16_t
/* BP1V14 (little_endian)*/
#define   BP1V14_BIT_OFS  16
#define   BP1V14_VALUE_TYPE   _uint16_t

/* BP2_V01_04 */
#define   BP2_V01_04_ID   0x554
#define   BP2_V01_04_PERIOD   100
#define   BP2_V01_04_DLC  8
/*  Values  of BP2_V01_04 */
/* BP2V01 (little_endian)*/
#define   BP2V01_BIT_OFS  0
#define   BP2V01_VALUE_TYPE   _uint16_t
/* BP2V02 (little_endian)*/
#define   BP2V02_BIT_OFS  16
#define   BP2V02_VALUE_TYPE   _uint16_t
/* BP2V03 (little_endian)*/
#define   BP2V03_BIT_OFS  32
#define   BP2V03_VALUE_TYPE   _uint16_t
/* BP2V04 (little_endian)*/
#define   BP2V04_BIT_OFS  48
#define   BP2V04_VALUE_TYPE   _uint16_t

/* BP2_V05_08 */
#define   BP2_V05_08_ID   0x555
#define   BP2_V05_08_PERIOD   100
#define   BP2_V05_08_DLC  8
/*  Values  of BP2_V05_08 */
/* BP2V05 (little_endian)*/
#define   BP2V05_BIT_OFS  0
#define   BP2V05_VALUE_TYPE   _uint16_t
/* BP2V06 (little_endian)*/
#define   BP2V06_BIT_OFS  16
#define   BP2V06_VALUE_TYPE   _uint16_t
/* BP2V07 (little_endian)*/
#define   BP2V07_BIT_OFS  32
#define   BP2V07_VALUE_TYPE   _uint16_t
/* BP2V08 (little_endian)*/
#define   BP2V08_BIT_OFS  48
#define   BP2V08_VALUE_TYPE   _uint16_t

/* BP2_V09_12 */
#define   BP2_V09_12_ID   0x556
#define   BP2_V09_12_PERIOD   100
#define   BP2_V09_12_DLC  8
/*  Values  of BP2_V09_12 */
/* BP2V09 (little_endian)*/
#define   BP2V09_BIT_OFS  0
#define   BP2V09_VALUE_TYPE   _uint16_t
/* BP2V10 (little_endian)*/
#define   BP2V10_BIT_OFS  16
#define   BP2V10_VALUE_TYPE   _uint16_t
/* BP2V11 (little_endian)*/
#define   BP2V11_BIT_OFS  32
#define   BP2V11_VALUE_TYPE   _uint16_t
/* BP2V12 (little_endian)*/
#define   BP2V12_BIT_OFS  48
#define   BP2V12_VALUE_TYPE   _uint16_t

/* BP2_V13_14 */
#define   BP2_V13_14_ID   0x557
#define   BP2_V13_14_PERIOD   100
#define   BP2_V13_14_DLC  8
/*  Values  of BP2_V13_14 */
/* BP2V13 (little_endian)*/
#define   BP2V13_BIT_OFS  0
#define   BP2V13_VALUE_TYPE   _uint16_t
/* BP2V14 (little_endian)*/
#define   BP2V14_BIT_OFS  16
#define   BP2V14_VALUE_TYPE   _uint16_t

/* BP3_V01_04 */
#define   BP3_V01_04_ID   0x558
#define   BP3_V01_04_PERIOD   100
#define   BP3_V01_04_DLC  8
/*  Values  of BP3_V01_04 */
/* BP3V01 (little_endian)*/
#define   BP3V01_BIT_OFS  0
#define   BP3V01_VALUE_TYPE   _uint16_t
/* BP3V02 (little_endian)*/
#define   BP3V02_BIT_OFS  16
#define   BP3V02_VALUE_TYPE   _uint16_t
/* BP3V03 (little_endian)*/
#define   BP3V03_BIT_OFS  32
#define   BP3V03_VALUE_TYPE   _uint16_t
/* BP3V04 (little_endian)*/
#define   BP3V04_BIT_OFS  48
#define   BP3V04_VALUE_TYPE   _uint16_t

/* BP3_V05_08 */
#define   BP3_V05_08_ID   0x559
#define   BP3_V05_08_PERIOD   100
#define   BP3_V05_08_DLC  8
/*  Values  of BP3_V05_08 */
/* BP3V05 (little_endian)*/
#define   BP3V05_BIT_OFS  0
#define   BP3V05_VALUE_TYPE   _uint16_t
/* BP3V06 (little_endian)*/
#define   BP3V06_BIT_OFS  16
#define   BP3V06_VALUE_TYPE   _uint16_t
/* BP3V07 (little_endian)*/
#define   BP3V07_BIT_OFS  32
#define   BP3V07_VALUE_TYPE   _uint16_t
/* BP3V08 (little_endian)*/
#define   BP3V08_BIT_OFS  48
#define   BP3V08_VALUE_TYPE   _uint16_t

/* BP3_V09_12 */
#define   BP3_V09_12_ID   0x55a
#define   BP3_V09_12_PERIOD   100
#define   BP3_V09_12_DLC  8
/*  Values  of BP3_V09_12 */
/* BP3V09 (little_endian)*/
#define   BP3V09_BIT_OFS  0
#define   BP3V09_VALUE_TYPE   _uint16_t
/* BP3V10 (little_endian)*/
#define   BP3V10_BIT_OFS  16
#define   BP3V10_VALUE_TYPE   _uint16_t
/* BP3V11 (little_endian)*/
#define   BP3V11_BIT_OFS  32
#define   BP3V11_VALUE_TYPE   _uint16_t
/* BP3V12 (little_endian)*/
#define   BP3V12_BIT_OFS  48
#define   BP3V12_VALUE_TYPE   _uint16_t

/* BP3_V13_14 */
#define   BP3_V13_14_ID   0x55b
#define   BP3_V13_14_PERIOD   100
#define   BP3_V13_14_DLC  8
/*  Values  of BP3_V13_14 */
/* BP3V13 (little_endian)*/
#define   BP3V13_BIT_OFS  0
#define   BP3V13_VALUE_TYPE   _uint16_t
/* BP3V14 (little_endian)*/
#define   BP3V14_BIT_OFS  16
#define   BP3V14_VALUE_TYPE   _uint16_t

/* BP4_V01_04 */
#define   BP4_V01_04_ID   0x55c
#define   BP4_V01_04_PERIOD   100
#define   BP4_V01_04_DLC  8
/*  Values  of BP4_V01_04 */
/* BP4V01 (little_endian)*/
#define   BP4V01_BIT_OFS  0
#define   BP4V01_VALUE_TYPE   _uint16_t
/* BP4V02 (little_endian)*/
#define   BP4V02_BIT_OFS  16
#define   BP4V02_VALUE_TYPE   _uint16_t
/* BP4V03 (little_endian)*/
#define   BP4V03_BIT_OFS  32
#define   BP4V03_VALUE_TYPE   _uint16_t
/* BP4V04 (little_endian)*/
#define   BP4V04_BIT_OFS  48
#define   BP4V04_VALUE_TYPE   _uint16_t

/* BP4_V05_08 */
#define   BP4_V05_08_ID   0x55d
#define   BP4_V05_08_PERIOD   100
#define   BP4_V05_08_DLC  8
/*  Values  of BP4_V05_08 */
/* BP4V05 (little_endian)*/
#define   BP4V05_BIT_OFS  0
#define   BP4V05_VALUE_TYPE   _uint16_t
/* BP4V06 (little_endian)*/
#define   BP4V06_BIT_OFS  16
#define   BP4V06_VALUE_TYPE   _uint16_t
/* BP4V07 (little_endian)*/
#define   BP4V07_BIT_OFS  32
#define   BP4V07_VALUE_TYPE   _uint16_t
/* BP4V08 (little_endian)*/
#define   BP4V08_BIT_OFS  48
#define   BP4V08_VALUE_TYPE   _uint16_t

/* BP4_V09_12 */
#define   BP4_V09_12_ID   0x55e
#define   BP4_V09_12_PERIOD   100
#define   BP4_V09_12_DLC  8
/*  Values  of BP4_V09_12 */
/* BP4V09 (little_endian)*/
#define   BP4V09_BIT_OFS  0
#define   BP4V09_VALUE_TYPE   _uint16_t
/* BP4V10 (little_endian)*/
#define   BP4V10_BIT_OFS  16
#define   BP4V10_VALUE_TYPE   _uint16_t
/* BP4V11 (little_endian)*/
#define   BP4V11_BIT_OFS  32
#define   BP4V11_VALUE_TYPE   _uint16_t
/* BP4V12 (little_endian)*/
#define   BP4V12_BIT_OFS  48
#define   BP4V12_VALUE_TYPE   _uint16_t

/* BP4_V13_14 */
#define   BP4_V13_14_ID   0x55f
#define   BP4_V13_14_PERIOD   100
#define   BP4_V13_14_DLC  8
/*  Values  of BP4_V13_14 */
/* BP4V13 (little_endian)*/
#define   BP4V13_BIT_OFS  0
#define   BP4V13_VALUE_TYPE   _uint16_t
/* BP4V14 (little_endian)*/
#define   BP4V14_BIT_OFS  16
#define   BP4V14_VALUE_TYPE   _uint16_t

/* BP5_V01_04 */
#define   BP5_V01_04_ID   0x560
#define   BP5_V01_04_PERIOD   100
#define   BP5_V01_04_DLC  8
/*  Values  of BP5_V01_04 */
/* BP5V01 (little_endian)*/
#define   BP5V01_BIT_OFS  0
#define   BP5V01_VALUE_TYPE   _uint16_t
/* BP5V02 (little_endian)*/
#define   BP5V02_BIT_OFS  16
#define   BP5V02_VALUE_TYPE   _uint16_t
/* BP5V03 (little_endian)*/
#define   BP5V03_BIT_OFS  32
#define   BP5V03_VALUE_TYPE   _uint16_t
/* BP5V04 (little_endian)*/
#define   BP5V04_BIT_OFS  48
#define   BP5V04_VALUE_TYPE   _uint16_t

/* BP5_V05_08 */
#define   BP5_V05_08_ID   0x561
#define   BP5_V05_08_PERIOD   100
#define   BP5_V05_08_DLC  8
/*  Values  of BP5_V05_08 */
/* BP5V05 (little_endian)*/
#define   BP5V05_BIT_OFS  0
#define   BP5V05_VALUE_TYPE   _uint16_t
/* BP5V06 (little_endian)*/
#define   BP5V06_BIT_OFS  16
#define   BP5V06_VALUE_TYPE   _uint16_t
/* BP5V07 (little_endian)*/
#define   BP5V07_BIT_OFS  32
#define   BP5V07_VALUE_TYPE   _uint16_t
/* BP5V08 (little_endian)*/
#define   BP5V08_BIT_OFS  48
#define   BP5V08_VALUE_TYPE   _uint16_t

/* BP5_V09_12 */
#define   BP5_V09_12_ID   0x562
#define   BP5_V09_12_PERIOD   100
#define   BP5_V09_12_DLC  8
/*  Values  of BP5_V09_12 */
/* BP5V09 (little_endian)*/
#define   BP5V09_BIT_OFS  0
#define   BP5V09_VALUE_TYPE   _uint16_t
/* BP5V10 (little_endian)*/
#define   BP5V10_BIT_OFS  16
#define   BP5V10_VALUE_TYPE   _uint16_t
/* BP5V11 (little_endian)*/
#define   BP5V11_BIT_OFS  32
#define   BP5V11_VALUE_TYPE   _uint16_t
/* BP5V12 (little_endian)*/
#define   BP5V12_BIT_OFS  48
#define   BP5V12_VALUE_TYPE   _uint16_t

/* BP5_V13_14 */
#define   BP5_V13_14_ID   0x563
#define   BP5_V13_14_PERIOD   100
#define   BP5_V13_14_DLC  8
/*  Values  of BP5_V13_14 */
/* BP5V13 (little_endian)*/
#define   BP5V13_BIT_OFS  0
#define   BP5V13_VALUE_TYPE   _uint16_t
/* BP5V14 (little_endian)*/
#define   BP5V14_BIT_OFS  16
#define   BP5V14_VALUE_TYPE   _uint16_t

/* BP6_V01_04 */
#define   BP6_V01_04_ID   0x564
#define   BP6_V01_04_PERIOD   100
#define   BP6_V01_04_DLC  8
/*  Values  of BP6_V01_04 */
/* BP6V01 (little_endian)*/
#define   BP6V01_BIT_OFS  0
#define   BP6V01_VALUE_TYPE   _uint16_t
/* BP6V02 (little_endian)*/
#define   BP6V02_BIT_OFS  16
#define   BP6V02_VALUE_TYPE   _uint16_t
/* BP6V03 (little_endian)*/
#define   BP6V03_BIT_OFS  32
#define   BP6V03_VALUE_TYPE   _uint16_t
/* BP6V04 (little_endian)*/
#define   BP6V04_BIT_OFS  48
#define   BP6V04_VALUE_TYPE   _uint16_t

/* BP6_V05_08 */
#define   BP6_V05_08_ID   0x565
#define   BP6_V05_08_PERIOD   100
#define   BP6_V05_08_DLC  8
/*  Values  of BP6_V05_08 */
/* BP6V05 (little_endian)*/
#define   BP6V05_BIT_OFS  0
#define   BP6V05_VALUE_TYPE   _uint16_t
/* BP6V06 (little_endian)*/
#define   BP6V06_BIT_OFS  16
#define   BP6V06_VALUE_TYPE   _uint16_t
/* BP6V07 (little_endian)*/
#define   BP6V07_BIT_OFS  32
#define   BP6V07_VALUE_TYPE   _uint16_t
/* BP6V08 (little_endian)*/
#define   BP6V08_BIT_OFS  48
#define   BP6V08_VALUE_TYPE   _uint16_t

/* BP6_V09_12 */
#define   BP6_V09_12_ID   0x566
#define   BP6_V09_12_PERIOD   100
#define   BP6_V09_12_DLC  8
/*  Values  of BP6_V09_12 */
/* BP6V09 (little_endian)*/
#define   BP6V09_BIT_OFS  0
#define   BP6V09_VALUE_TYPE   _uint16_t
/* BP6V10 (little_endian)*/
#define   BP6V10_BIT_OFS  16
#define   BP6V10_VALUE_TYPE   _uint16_t
/* BP6V11 (little_endian)*/
#define   BP6V11_BIT_OFS  32
#define   BP6V11_VALUE_TYPE   _uint16_t
/* BP6V12 (little_endian)*/
#define   BP6V12_BIT_OFS  48
#define   BP6V12_VALUE_TYPE   _uint16_t

/* BP6_V13_14 */
#define   BP6_V13_14_ID   0x567
#define   BP6_V13_14_PERIOD   100
#define   BP6_V13_14_DLC  8
/*  Values  of BP6_V13_14 */
/* BP6V13 (little_endian)*/
#define   BP6V13_BIT_OFS  0
#define   BP6V13_VALUE_TYPE   _uint16_t
/* BP6V14 (little_endian)*/
#define   BP6V14_BIT_OFS  16
#define   BP6V14_VALUE_TYPE   _uint16_t

/* BP7_V01_04 */
#define   BP7_V01_04_ID   0x568
#define   BP7_V01_04_PERIOD   100
#define   BP7_V01_04_DLC  8
/*  Values  of BP7_V01_04 */
/* BP7V01 (little_endian)*/
#define   BP7V01_BIT_OFS  0
#define   BP7V01_VALUE_TYPE   _uint16_t
/* BP7V02 (little_endian)*/
#define   BP7V02_BIT_OFS  16
#define   BP7V02_VALUE_TYPE   _uint16_t
/* BP7V03 (little_endian)*/
#define   BP7V03_BIT_OFS  32
#define   BP7V03_VALUE_TYPE   _uint16_t
/* BP7V04 (little_endian)*/
#define   BP7V04_BIT_OFS  48
#define   BP7V04_VALUE_TYPE   _uint16_t

/* BP7_V05_08 */
#define   BP7_V05_08_ID   0x569
#define   BP7_V05_08_PERIOD   100
#define   BP7_V05_08_DLC  8
/*  Values  of BP7_V05_08 */
/* BP7V05 (little_endian)*/
#define   BP7V05_BIT_OFS  0
#define   BP7V05_VALUE_TYPE   _uint16_t
/* BP7V06 (little_endian)*/
#define   BP7V06_BIT_OFS  16
#define   BP7V06_VALUE_TYPE   _uint16_t
/* BP7V07 (little_endian)*/
#define   BP7V07_BIT_OFS  32
#define   BP7V07_VALUE_TYPE   _uint16_t
/* BP7V08 (little_endian)*/
#define   BP7V08_BIT_OFS  48
#define   BP7V08_VALUE_TYPE   _uint16_t

/* BP7_V09_12 */
#define   BP7_V09_12_ID   0x56a
#define   BP7_V09_12_PERIOD   100
#define   BP7_V09_12_DLC  8
/*  Values  of BP7_V09_12 */
/* BP7V09 (little_endian)*/
#define   BP7V09_BIT_OFS  0
#define   BP7V09_VALUE_TYPE   _uint16_t
/* BP7V10 (little_endian)*/
#define   BP7V10_BIT_OFS  16
#define   BP7V10_VALUE_TYPE   _uint16_t
/* BP7V11 (little_endian)*/
#define   BP7V11_BIT_OFS  32
#define   BP7V11_VALUE_TYPE   _uint16_t
/* BP7V12 (little_endian)*/
#define   BP7V12_BIT_OFS  48
#define   BP7V12_VALUE_TYPE   _uint16_t

/* BP7_V13_14 */
#define   BP7_V13_14_ID   0x56b
#define   BP7_V13_14_PERIOD   100
#define   BP7_V13_14_DLC  8
/*  Values  of BP7_V13_14 */
/* BP7V13 (little_endian)*/
#define   BP7V13_BIT_OFS  0
#define   BP7V13_VALUE_TYPE   _uint16_t
/* BP7V14 (little_endian)*/
#define   BP7V14_BIT_OFS  16
#define   BP7V14_VALUE_TYPE   _uint16_t

/* BP8_V01_04 */
#define   BP8_V01_04_ID   0x56c
#define   BP8_V01_04_PERIOD   100
#define   BP8_V01_04_DLC  8
/*  Values  of BP8_V01_04 */
/* BP8V01 (little_endian)*/
#define   BP8V01_BIT_OFS  0
#define   BP8V01_VALUE_TYPE   _uint16_t
/* BP8V02 (little_endian)*/
#define   BP8V02_BIT_OFS  16
#define   BP8V02_VALUE_TYPE   _uint16_t
/* BP8V03 (little_endian)*/
#define   BP8V03_BIT_OFS  32
#define   BP8V03_VALUE_TYPE   _uint16_t
/* BP8V04 (little_endian)*/
#define   BP8V04_BIT_OFS  48
#define   BP8V04_VALUE_TYPE   _uint16_t

/* BP8_V05_08 */
#define   BP8_V05_08_ID   0x56d
#define   BP8_V05_08_PERIOD   100
#define   BP8_V05_08_DLC  8
/*  Values  of BP8_V05_08 */
/* BP8V05 (little_endian)*/
#define   BP8V05_BIT_OFS  0
#define   BP8V05_VALUE_TYPE   _uint16_t
/* BP8V06 (little_endian)*/
#define   BP8V06_BIT_OFS  16
#define   BP8V06_VALUE_TYPE   _uint16_t
/* BP8V07 (little_endian)*/
#define   BP8V07_BIT_OFS  32
#define   BP8V07_VALUE_TYPE   _uint16_t
/* BP8V08 (little_endian)*/
#define   BP8V08_BIT_OFS  48
#define   BP8V08_VALUE_TYPE   _uint16_t

/* BP8_V09_12 */
#define   BP8_V09_12_ID   0x56e
#define   BP8_V09_12_PERIOD   100
#define   BP8_V09_12_DLC  8
/*  Values  of BP8_V09_12 */
/* BP8V09 (little_endian)*/
#define   BP8V09_BIT_OFS  0
#define   BP8V09_VALUE_TYPE   _uint16_t
/* BP8V10 (little_endian)*/
#define   BP8V10_BIT_OFS  16
#define   BP8V10_VALUE_TYPE   _uint16_t
/* BP8V11 (little_endian)*/
#define   BP8V11_BIT_OFS  32
#define   BP8V11_VALUE_TYPE   _uint16_t
/* BP8V12 (little_endian)*/
#define   BP8V12_BIT_OFS  48
#define   BP8V12_VALUE_TYPE   _uint16_t

/* BP8_V13_14 */
#define   BP8_V13_14_ID   0x56f
#define   BP8_V13_14_PERIOD   100
#define   BP8_V13_14_DLC  8
/*  Values  of BP8_V13_14 */
/* BP8V13 (little_endian)*/
#define   BP8V13_BIT_OFS  0
#define   BP8V13_VALUE_TYPE   _uint16_t
/* BP8V14 (little_endian)*/
#define   BP8V14_BIT_OFS  16
#define   BP8V14_VALUE_TYPE   _uint16_t

/* BP9_V01_04 */
#define   BP9_V01_04_ID   0x570
#define   BP9_V01_04_PERIOD   100
#define   BP9_V01_04_DLC  8
/*  Values  of BP9_V01_04 */
/* BP9V01 (little_endian)*/
#define   BP9V01_BIT_OFS  0
#define   BP9V01_VALUE_TYPE   _uint16_t
/* BP9V02 (little_endian)*/
#define   BP9V02_BIT_OFS  16
#define   BP9V02_VALUE_TYPE   _uint16_t
/* BP9V03 (little_endian)*/
#define   BP9V03_BIT_OFS  32
#define   BP9V03_VALUE_TYPE   _uint16_t
/* BP9V04 (little_endian)*/
#define   BP9V04_BIT_OFS  48
#define   BP9V04_VALUE_TYPE   _uint16_t

/* BP9_V05_08 */
#define   BP9_V05_08_ID   0x571
#define   BP9_V05_08_PERIOD   100
#define   BP9_V05_08_DLC  8
/*  Values  of BP9_V05_08 */
/* BP9V05 (little_endian)*/
#define   BP9V05_BIT_OFS  0
#define   BP9V05_VALUE_TYPE   _uint16_t
/* BP9V06 (little_endian)*/
#define   BP9V06_BIT_OFS  16
#define   BP9V06_VALUE_TYPE   _uint16_t
/* BP9V07 (little_endian)*/
#define   BP9V07_BIT_OFS  32
#define   BP9V07_VALUE_TYPE   _uint16_t
/* BP9V08 (little_endian)*/
#define   BP9V08_BIT_OFS  48
#define   BP9V08_VALUE_TYPE   _uint16_t

/* BP9_V09_12 */
#define   BP9_V09_12_ID   0x572
#define   BP9_V09_12_PERIOD   100
#define   BP9_V09_12_DLC  8
/*  Values  of BP9_V09_12 */
/* BP9V09 (little_endian)*/
#define   BP9V09_BIT_OFS  0
#define   BP9V09_VALUE_TYPE   _uint16_t
/* BP9V10 (little_endian)*/
#define   BP9V10_BIT_OFS  16
#define   BP9V10_VALUE_TYPE   _uint16_t
/* BP9V11 (little_endian)*/
#define   BP9V11_BIT_OFS  32
#define   BP9V11_VALUE_TYPE   _uint16_t
/* BP9V12 (little_endian)*/
#define   BP9V12_BIT_OFS  48
#define   BP9V12_VALUE_TYPE   _uint16_t

/* BP9_V13_14 */
#define   BP9_V13_14_ID   0x573
#define   BP9_V13_14_PERIOD   100
#define   BP9_V13_14_DLC  8
/*  Values  of BP9_V13_14 */
/* BP9V13 (little_endian)*/
#define   BP9V13_BIT_OFS  0
#define   BP9V13_VALUE_TYPE   _uint16_t
/* BP9V14 (little_endian)*/
#define   BP9V14_BIT_OFS  16
#define   BP9V14_VALUE_TYPE   _uint16_t

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
/* Status_Ready (little_endian)*/
#define   STATUS_READY_BIT_OFS  8
#define   STATUS_READY_VALUE_TYPE   _int1_t
/* Status_Logging (little_endian)*/
#define   STATUS_LOGGING_BIT_OFS  9
#define   STATUS_LOGGING_VALUE_TYPE   _int1_t
/* Status_Triggered_Voltage (little_endian)*/
#define   STATUS_TRIGGERED_VOLTAGE_BIT_OFS  10
#define   STATUS_TRIGGERED_VOLTAGE_VALUE_TYPE   _int1_t
/* Status_Triggered_Current (little_endian)*/
#define   STATUS_TRIGGERED_CURRENT_BIT_OFS  11
#define   STATUS_TRIGGERED_CURRENT_VALUE_TYPE   _int1_t
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

/* AREO_PRESSURE_SENSORS13_16 */
#define   AREO_PRESSURE_SENSORS13_16_ID   0x1c9
#define   AREO_PRESSURE_SENSORS13_16_PERIOD   100
#define   AREO_PRESSURE_SENSORS13_16_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS13_16 */
/* AREO_p13 (big_endian)*/
#define   AREO_P13_BIT_OFS  0
#define   AREO_P13_VALUE_TYPE   _uint16_t
/* AREO_p14 (big_endian)*/
#define   AREO_P14_BIT_OFS  16
#define   AREO_P14_VALUE_TYPE   _uint16_t
/* AREO_p15 (big_endian)*/
#define   AREO_P15_BIT_OFS  32
#define   AREO_P15_VALUE_TYPE   _uint16_t
/* AREO_p16 (big_endian)*/
#define   AREO_P16_BIT_OFS  48
#define   AREO_P16_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS09_12 */
#define   AREO_PRESSURE_SENSORS09_12_ID   0x1c8
#define   AREO_PRESSURE_SENSORS09_12_PERIOD   100
#define   AREO_PRESSURE_SENSORS09_12_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS09_12 */
/* AREO_p10 (big_endian)*/
#define   AREO_P10_BIT_OFS  0
#define   AREO_P10_VALUE_TYPE   _uint16_t
/* AREO_p11 (big_endian)*/
#define   AREO_P11_BIT_OFS  16
#define   AREO_P11_VALUE_TYPE   _uint16_t
/* AREO_p12 (big_endian)*/
#define   AREO_P12_BIT_OFS  32
#define   AREO_P12_VALUE_TYPE   _uint16_t
/* AREO_p9 (big_endian)*/
#define   AREO_P9_BIT_OFS  48
#define   AREO_P9_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS05_08 */
#define   AREO_PRESSURE_SENSORS05_08_ID   0x1c7
#define   AREO_PRESSURE_SENSORS05_08_PERIOD   100
#define   AREO_PRESSURE_SENSORS05_08_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS05_08 */
/* AREO_p5 (big_endian)*/
#define   AREO_P5_BIT_OFS  0
#define   AREO_P5_VALUE_TYPE   _uint16_t
/* AREO_p6 (big_endian)*/
#define   AREO_P6_BIT_OFS  16
#define   AREO_P6_VALUE_TYPE   _uint16_t
/* AREO_p7 (big_endian)*/
#define   AREO_P7_BIT_OFS  32
#define   AREO_P7_VALUE_TYPE   _uint16_t
/* AREO_p8 (big_endian)*/
#define   AREO_P8_BIT_OFS  48
#define   AREO_P8_VALUE_TYPE   _uint16_t

/* AREO_PRESSURE_SENSORS01_04 */
#define   AREO_PRESSURE_SENSORS01_04_ID   0x1c6
#define   AREO_PRESSURE_SENSORS01_04_PERIOD   100
#define   AREO_PRESSURE_SENSORS01_04_DLC  8
/*  Values  of AREO_PRESSURE_SENSORS01_04 */
/* AREO_p1 (big_endian)*/
#define   AREO_P1_BIT_OFS  0
#define   AREO_P1_VALUE_TYPE   _uint16_t
/* AREO_p2 (big_endian)*/
#define   AREO_P2_BIT_OFS  16
#define   AREO_P2_VALUE_TYPE   _uint16_t
/* AREO_p3 (big_endian)*/
#define   AREO_P3_BIT_OFS  32
#define   AREO_P3_VALUE_TYPE   _uint16_t
/* AREO_p4 (big_endian)*/
#define   AREO_P4_BIT_OFS  48
#define   AREO_P4_VALUE_TYPE   _uint16_t