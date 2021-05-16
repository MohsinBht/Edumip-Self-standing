/**
 * rc_balance_team7_2_FOO_v_defs.h
 *
 * Contains the settings for configuration of rc_balance_team7_2_FOO_v.c
 */

#ifndef RC_BALANCE_CONFIG
#define RC_BALANCE_CONFIG

#define SAMPLE_RATE_HZ		100	// main filter and control loop speed
#define DT			0.01			// 1/sample_rate

// Structural properties of eduMiP
#define BOARD_MOUNT_ANGLE	0.49 // increase if mip tends to roll forward
#define GEARBOX			35.5770
#define ENCODER_RES		60
#define WHEEL_RADIUS_M		0.034
#define TRACK_WIDTH_M		0.035
#define V_NOMINAL		7.4

// inner loop controller 100hz
#define D1_GAIN			1.05
#define D1_ORDER		2
#define D1_NUM			{-4.945, 8.862, -3.967}
#define D1_DEN			{ 1.000, -1.481, 0.4812}
#define D1_NUM_LEN		3
#define D1_DEN_LEN		3
#define D1_SATURATION_TIMEOUT	0.4


// outer loop controller 100hz
#define D2_GAIN			0.9
#define	D2_ORDER		2
#define D2_NUM			{0.18856,  -0.37209,  0.18354}
#define D2_DEN			{1.00000,  -1.86046,   0.86046}
#define D2_NUM_LEN		3
#define D2_DEN_LEN		3
#define THETA_REF_MAX		0.33

// steering controller
#define D3_KP			1.0
#define D3_KI			0.3
#define D3_KD			0.05
#define STEERING_INPUT_MAX	0.5

// electrical hookups
#define MOTOR_CHANNEL_L		3
#define MOTOR_CHANNEL_R		2
#define MOTOR_POLARITY_L	1
#define MOTOR_POLARITY_R	-1
#define ENCODER_CHANNEL_L	3
#define ENCODER_CHANNEL_R	2
#define ENCODER_POLARITY_L	1
#define ENCODER_POLARITY_R	-1

//	drive speeds when using remote control (dsm2)
#define DRIVE_RATE_NOVICE	16
#define TURN_RATE_NOVICE	6
#define DRIVE_RATE_ADVANCED	26
#define TURN_RATE_ADVANCED	10

//  Voice Command
#define SPEAK_UP            10
#define SPEAK_TURN          3.1416/2
// DSM channel config
#define DSM_DRIVE_POL		1
#define DSM_TURN_POL		1
#define DSM_DRIVE_CH		3
#define DSM_TURN_CH			2
#define DSM_DEAD_ZONE		0.04

// Thread Loop Rates
#define BATTERY_CHECK_HZ	5
#define SETPOINT_MANAGER_HZ	100
#define PRINTF_HZ			50

// other 0.3
#define TIP_ANGLE		0.85
#define START_ANGLE		0.5
#define START_DELAY		0.3
#define PICKUP_DETECTION_TIME	0.6
#define ENABLE_POSITION_HOLD	1
#define SOFT_START_SEC		    0.7

//#define ACTION_MESURES      {-1.729, -0.173, -0.027}
//#define ACTION_ENTREE       6.133
//#define ACTION_FEEDBACK     0.741
//#define LOO                 {0.002, 0.423, 0.027}


// state space speed controller
#define N_s				-0.009
#define KS 			{-1.212,   -0.052,   -0.052}//{-0.563, 0.011, -0.043} //{-4.182, -0.285, -0.139}

//parameters for calculation of the full order observer 
#define LFOO_THETA	{0.811,0.012,0.113}
#define LFOO_THETA_DOT	{11.620,1.327,0.058}
#define LFOO_PHI	{-0.171,0.034,0.781}
#define LFOO_PHI_DOT	{-1.059,3.651,0.267}
#define BFOO	{-0.018,-3.340,0.025,4.721}
#define AFOO_THETA	{1.008,0.009,0.000,0.001}
#define AFOO_THETA_DOT	{1.613,0.867,0.000,0.141}
#define AFOO_PHI	{-0.006,0.001,1.000,0.009}
#define AFOO_PHI_DOT	{-1.045,0.194,0.000,0.801}

#endif	// endif RC_BALANCE_CONFIG