
/*  ASState  types */
typedef enum
{
 AS_state_finish = 5,
 AS_state_emergency_brake = 4,
 AS_state_driving  = 3,
 AS_state_ready = 2,
 AS_state_off = 1,
} ASState_t;

/*  EBSState  types */
typedef enum
{
 EBS_state_activated = 3,
 EBS_state_armed = 2,
 EBS_state_unavailable = 1,
} EBSState_t;

/*  AMIState  types */
typedef enum
{
 AMI_state_autocross = 6,
 AMI_state_inspection = 5,
 AMI_state_braketest = 4,
 AMI_state_trackdrive = 3,
 AMI_state_skidpad = 2,
 AMI_state_acceleration = 1,
} AMIState_t;

/*  ServiceBrakeStateEngaged  types */
typedef enum
{
 Service_brake_state_available = 3,
 Service_brake_state_engaged = 2,
 Service_brake_state_disengaged = 1,
} ServiceBrakeStateEngaged_t;
