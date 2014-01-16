
#ifndef _NO_STATICS

char* tremolo_name		= "tremolo";
char* tremolo_copyright	= "";
char* tremolo_engine	= "";
char* tremolo_created	= "";
char* tremolo_comment	= "";
char* tremolo_guid		= "12456744-56ec-8904-960f-44e461f818d0";

int tremolo_itramsize	= 0x00000; // 0.00 msec (0 samples)
int tremolo_xtramsize	= 0x00000; // 0 msec (0 samples)

#define R(i)
#define _	0xFFFF,
efx_register_info tremolo_info[] =
{
R(0)	{"in1", 		0x4000u, 0x07, _ 0x00000000},	// input
R(1)	{"in2", 		0x4001u, 0x07, _ 0x00000000},	// input
R(2)	{"out1", 		0x8000u, 0x08, _ 0x00000000},	// output
R(3)	{"out2", 		0x8001u, 0x08, _ 0x00000000},	// output
R(4)	{"ENV_", 		0x8002u, 0x08, _ 0x00000000},	// output
R(5)	{"TRG_", 		0x8003u, 0x08, _ 0x00000000},	// output
R(6)	{"RMP_", 		0x8004u, 0x08, _ 0x00000000},	// output
R(7)	{"LFO1_", 		0x8005u, 0x08, _ 0x00000000},	// output
R(8)	{"LFO2_", 		0x8006u, 0x08, _ 0x00000000},	// output
R(9)	{"s1", 			0x8007u, 0x01, _ 0x00000000},	// static
R(10)	{"s2", 			0x8008u, 0x01, _ 0x00000000},	// static
R(11)	{"lfo_ramp", 	0x8009u, 0x01, _ 0x00000000},	// static
R(12)	{"env", 		0x800Au, 0x01, _ 0x00000000},	// static
R(13)	{"env_time", 	0x800Bu, 0x01, _ 0x00000000},	// static
R(14)	{"trg_time", 	0x800Cu, 0x01, _ 0x00000000},	// static
R(15)	{"trg_ramp", 	0x800Du, 0x01, _ 0x00000000},	// static
R(16)	{"trg_trash", 	0x800Eu, 0x01, _ 0x00000000},	// static
R(17)	{"m1", 			0x800Fu, 0x01, _ 0x00000000},	// static
R(18)	{"m2", 			0x8010u, 0x01, _ 0x00000000},	// static
R(19)	{"f", 			0x8011u, 0x01, _ 0x00000000},	// static
R(20)	{"p", 			0x8012u, 0x01, _ 0x00000000},	// static
R(21)	{"e", 			0x8013u, 0x01, _ 0x00000000},	// static
R(22)	{"u", 			0x8014u, 0x01, _ 0x00000000},	// static
R(23)	{"ramp_time", 	0x8015u, 0x01, _ 0x00000000},	// static
R(24)	{"depth", 		0x8016u, 0x01, _ 0x00000000},	// static
R(25)	{"gain", 		0x8017u, 0x01, _ 0x00000000},	// static
R(26)	{"_AC200", 		0x8018u, 0x01, _ 0x00000200},	// const
R(27)	{"x", 			0x8019u, 0x03, _ 0x00000000},	// temp
};
#undef _
#undef R

#define I(i)
efx_code tremolo_code[] =
{
I(0)	{0x0, 0x8019u, 0x2040u, 0x4000u, 0x4000u},	// {macs,	R_X, 0x2040u, R_IN1, R_IN1	},
I(1)	{0xE, 0x800Au, 0x8019u, 0x800Bu, 0x800Au},	// {interp,	R_ENV, R_X, R_ENV_TIME, R_ENV	},
I(2)	{0x0, 0x800Du, 0x800Du, 0x800Cu, 0x204Fu},	// {macs,	R_TRG_RAMP, R_TRG_RAMP, R_TRG_TIME, 0x204Fu	},
I(3)	{0xA, 0x2040u, 0x800Au, 0x800Du, 0x800Eu},	// {limit,	0x2040u, R_ENV, R_TRG_RAMP, R_TRG_TRASH	},
I(4)	{0xF, 0x2057u, 0x2057u, 0x8018u, 0x2043u},	// {skip,	0x2057u, 0x2057u, R__AC200, 0x2043u	},
I(5)	{0x0, 0x800Du, 0x2040u, 0x2040u, 0x2040u},	// {macs,	R_TRG_RAMP, 0x2040u, 0x2040u, 0x2040u	},
I(6)	{0x0, 0x8009u, 0x2040u, 0x2040u, 0x2040u},	// {macs,	R_LFO_RAMP, 0x2040u, 0x2040u, 0x2040u	},
I(7)	{0x0, 0x8007u, 0x2040u, 0x2040u, 0x2040u},	// {macs,	R_S1, 0x2040u, 0x2040u, 0x2040u	},
I(8)	{0x2, 0x8007u, 0x8007u, 0x8011u, 0x204Eu},	// {macw,	R_S1, R_S1, R_F, 0x204Eu	},
I(9)	{0x2, 0x8008u, 0x8007u, 0x8012u, 0x204Fu},	// {macw,	R_S2, R_S1, R_P, 0x204Fu	},
I(10)	{0x0, 0x8019u, 0x204Du, 0x8007u, 0x204Du},	// {macs,	R_X, 0x204Du, R_S1, 0x204Du	},
I(11)	{0xE, 0x800Fu, 0x800Fu, 0x8009u, 0x8019u},	// {interp,	R_M1, R_M1, R_LFO_RAMP, R_X	},
I(12)	{0x0, 0x8019u, 0x204Du, 0x8008u, 0x204Du},	// {macs,	R_X, 0x204Du, R_S2, 0x204Du	},
I(13)	{0xE, 0x8010u, 0x8010u, 0x8009u, 0x8019u},	// {interp,	R_M2, R_M2, R_LFO_RAMP, R_X	},
I(14)	{0x0, 0x2040u, 0x2040u, 0x2040u, 0x2040u},	// {macs,	0x2040u, 0x2040u, 0x2040u, 0x2040u	},
I(15)	{0x0, 0x2040u, 0x2040u, 0x2040u, 0x2040u},	// {macs,	0x2040u, 0x2040u, 0x2040u, 0x2040u	},
I(16)	{0x0, 0x8009u, 0x8009u, 0x8015u, 0x204Fu},	// {macs,	R_LFO_RAMP, R_LFO_RAMP, R_RAMP_TIME, 0x204Fu	},
I(17)	{0xE, 0x8019u, 0x2054u, 0x8016u, 0x800Fu},	// {interp,	R_X, 0x2054u, R_DEPTH, R_M1	},
I(18)	{0x0, 0x8019u, 0x2040u, 0x4000u, 0x8019u},	// {macs,	R_X, 0x2040u, R_IN1, R_X	},
I(19)	{0x0, 0x8000u, 0x8019u, 0x8019u, 0x8017u},	// {macs,	R_OUT1, R_X, R_X, R_GAIN	},
I(20)	{0xE, 0x8019u, 0x2054u, 0x8016u, 0x8010u},	// {interp,	R_X, 0x2054u, R_DEPTH, R_M2	},
I(21)	{0x0, 0x8019u, 0x2040u, 0x4001u, 0x8019u},	// {macs,	R_X, 0x2040u, R_IN2, R_X	},
I(22)	{0x0, 0x8001u, 0x8019u, 0x8019u, 0x8017u},	// {macs,	R_OUT2, R_X, R_X, R_GAIN	},
I(23)	{0x0, 0x8002u, 0x2040u, 0x800Au, 0x204Cu},	// {macs,	R_ENV_, 0x2040u, R_ENV, 0x204Cu	},
I(24)	{0x0, 0x8003u, 0x2040u, 0x800Du, 0x204Cu},	// {macs,	R_TRG_, 0x2040u, R_TRG_RAMP, 0x204Cu	},
I(25)	{0x0, 0x8004u, 0x2040u, 0x8009u, 0x204Cu},	// {macs,	R_RMP_, 0x2040u, R_LFO_RAMP, 0x204Cu	},
I(26)	{0x0, 0x8005u, 0x2040u, 0x800Fu, 0x204Cu},	// {macs,	R_LFO1_, 0x2040u, R_M1, 0x204Cu	},
I(27)	{0x0, 0x8006u, 0x2040u, 0x8010u, 0x204Cu},	// {macs,	R_LFO2_, 0x2040u, R_M2, 0x204Cu	},
};
#undef I

#endif

// register ids
#define R_IN1		0x4000u
#define R_IN2		0x4001u
#define R_OUT1		0x8000u
#define R_OUT2		0x8001u
#define R_ENV_		0x8002u
#define R_TRG_		0x8003u
#define R_RMP_		0x8004u
#define R_LFO1_		0x8005u
#define R_LFO2_		0x8006u
#define R_S1		0x8007u
#define R_S2		0x8008u
#define R_LFO_RAMP		0x8009u
#define R_ENV		0x800Au
#define R_ENV_TIME		0x800Bu
#define R_TRG_TIME		0x800Cu
#define R_TRG_RAMP		0x800Du
#define R_TRG_TRASH		0x800Eu
#define R_M1		0x800Fu
#define R_M2		0x8010u
#define R_F		0x8011u
#define R_P		0x8012u
#define R_E		0x8013u
#define R_U		0x8014u
#define R_RAMP_TIME		0x8015u
#define R_DEPTH		0x8016u
#define R_GAIN		0x8017u
#define R__AC200		0x8018u
#define R_X		0x8019u