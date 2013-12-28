// kX DSP Generated file

// 10kX microcode
// Patch name: 'mixy'

char *mixy_copyright="Copyright (c) 2004.";
// NOTE: The present DSP microcode dump is protected by the 
// license agreement bundled with the appropriate software 
// package containing this microcode,
// regardless the particular copyright notice is present in the dump.

char *mixy_engine="kX";
char *mixy_comment="";
char *mixy_created="01/26/2005";
char *mixy_guid="3cafebdd-8704-479b-8034-1a5f4adb69f1";

char *mixy_name="Mixy 4x2";
int mixy_itramsize=0,mixy_xtramsize=0;

dsp_register_info mixy_info[]={
	{ "in1",0x4000,0x7,0xffff,0x0 },
	{ "in2",0x4001,0x7,0xffff,0x0 },
	{ "in3",0x4002,0x7,0xffff,0x0 },
	{ "in4",0x4003,0x7,0xffff,0x0 },
	{ "in5",0x4004,0x7,0xffff,0x0 },
	{ "in6",0x4005,0x7,0xffff,0x0 },
	{ "in7",0x4006,0x7,0xffff,0x0 },
	{ "in8",0x4007,0x7,0xffff,0x0 },
	{ "out1",0x8000,0x8,0xffff,0x0 },
	{ "out2",0x8001,0x8,0xffff,0x0 },
	{ "pan1a",0x8002,0x4,0xffff,0x1fffffff },
	{ "pan2a",0x8003,0x4,0xffff,0x0 },
	{ "pan3a",0x8004,0x4,0xffff,0x1fffffff },
	{ "pan4a",0x8005,0x4,0xffff,0x0 },
	{ "pan5a",0x8006,0x4,0xffff,0x1fffffff },
	{ "pan6a",0x8007,0x4,0xffff,0x0 },
	{ "pan7a",0x8008,0x4,0xffff,0x1fffffff },
	{ "pan8a",0x8009,0x4,0xffff,0x0 },
	{ "pan9a",0x800a,0x4,0xffff,0x1fffffff },
	{ "pan10a",0x800b,0x4,0xffff,0x0 },
	{ "pan1b",0x800c,0x4,0xffff,0x0 },
	{ "pan2b",0x800d,0x4,0xffff,0x1fffffff },
	{ "pan3b",0x800e,0x4,0xffff,0x0 },
	{ "pan4b",0x800f,0x4,0xffff,0x1fffffff },
	{ "pan5b",0x8010,0x4,0xffff,0x0 },
	{ "pan6b",0x8011,0x4,0xffff,0x1fffffff },
	{ "pan7b",0x8012,0x4,0xffff,0x0 },
	{ "pan8b",0x8013,0x4,0xffff,0x1fffffff },
	{ "pan9b",0x8014,0x4,0xffff,0x0 },
	{ "pan10b",0x8015,0x4,0xffff,0x1fffffff },
	{ "result_1",0x8016,0x1,0xffff,0x0 },
	{ "result_2",0x8017,0x1,0xffff,0x0 },
	{ "result_3",0x8018,0x1,0xffff,0x0 },
	{ "result_4",0x8019,0x1,0xffff,0x0 },
	{ "result_5",0x801a,0x1,0xffff,0x0 },
	{ "result_6",0x801b,0x1,0xffff,0x0 },
	{ "result_7",0x801c,0x1,0xffff,0x0 },
	{ "result_8",0x801d,0x1,0xffff,0x0 },
	{ "result_9",0x801e,0x1,0xffff,0x0 },
	{ "result_10",0x801f,0x1,0xffff,0x0 },
	{ "resolution",0x8020,0x1,0xffff,0x1f },
	{ "proca",0x8021,0x3,0xffff,0x0 },
	{ "procb",0x8022,0x3,0xffff,0x0 },
	{ "acuma",0x8023,0x3,0xffff,0x0 },
	{ "acumb",0x8024,0x3,0xffff,0x0 },
};

dsp_code mixy_code[]={	
	{ 0x0,0x8021,0x2040,0x4000,0x8002 },
	{ 0x0,0x8021,0x8021,0x4001,0x800c },
	{ 0x4,0x8021,0x2040,0x8021,0x2044 },
	{ 0x0,0x8022,0x2040,0x4001,0x800d },
	{ 0x0,0x8022,0x8022,0x4000,0x8003 },
	{ 0x4,0x8022,0x2040,0x8022,0x2044 },
	{ 0x6,0x8023,0x2040,0x8021,0x2040 },
	{ 0x6,0x8024,0x2040,0x8022,0x2040 },
	{ 0xc,0x8021,0x8021,0x8020,0x2041 },
	{ 0xc,0x8022,0x8022,0x8020,0x2041 },
	{ 0xa,0x8016,0x8021,0x8021,0x8016 },
	{ 0xa,0x8017,0x8022,0x8022,0x8017 },
	{ 0x0,0x8021,0x2040,0x4002,0x8004 },
	{ 0x0,0x8021,0x8021,0x4003,0x800e },
	{ 0x4,0x8021,0x2040,0x8021,0x2044 },
	{ 0x0,0x8022,0x2040,0x4003,0x800f },
	{ 0x0,0x8022,0x8022,0x4002,0x8005 },
	{ 0x4,0x8022,0x2040,0x8022,0x2044 },
	{ 0x6,0x8023,0x8023,0x8021,0x2040 },
	{ 0x6,0x8024,0x8024,0x8022,0x2040 },
	{ 0xc,0x8021,0x8021,0x8020,0x2041 },
	{ 0xc,0x8022,0x8022,0x8020,0x2041 },
	{ 0xa,0x8018,0x8021,0x8021,0x8018 },
	{ 0xa,0x8019,0x8022,0x8022,0x8019 },
	{ 0x0,0x8021,0x2040,0x4004,0x8006 },
	{ 0x0,0x8021,0x8021,0x4005,0x8010 },
	{ 0x4,0x8021,0x2040,0x8021,0x2044 },
	{ 0x0,0x8022,0x2040,0x4005,0x8011 },
	{ 0x0,0x8022,0x8022,0x4004,0x8007 },
	{ 0x4,0x8022,0x2040,0x8022,0x2044 },
	{ 0x6,0x8023,0x8023,0x8021,0x2040 },
	{ 0x6,0x8024,0x8024,0x8022,0x2040 },
	{ 0xc,0x8021,0x8021,0x8020,0x2041 },
	{ 0xc,0x8022,0x8022,0x8020,0x2041 },
	{ 0xa,0x801a,0x8021,0x8021,0x801a },
	{ 0xa,0x801b,0x8022,0x8022,0x801b },
	{ 0x0,0x8021,0x2040,0x4006,0x8008 },
	{ 0x0,0x8021,0x8021,0x4007,0x8012 },
	{ 0x4,0x8021,0x2040,0x8021,0x2044 },
	{ 0x0,0x8022,0x2040,0x4007,0x8013 },
	{ 0x0,0x8022,0x8022,0x4006,0x8009 },
	{ 0x4,0x8022,0x2040,0x8022,0x2044 },
	{ 0x6,0x8023,0x8023,0x8021,0x2040 },
	{ 0x6,0x8024,0x8024,0x8022,0x2040 },
	{ 0xc,0x8021,0x8021,0x8020,0x2041 },
	{ 0xc,0x8022,0x8022,0x8020,0x2041 },
	{ 0xa,0x801c,0x8021,0x8021,0x801c },
	{ 0xa,0x801d,0x8022,0x8022,0x801d },
	{ 0x0,0x8021,0x2040,0x8023,0x800a },
	{ 0x0,0x8021,0x8021,0x8024,0x8014 },
	{ 0x0,0x8022,0x2040,0x8024,0x8015 },
	{ 0x0,0x8022,0x8022,0x8023,0x800b },
	{ 0x4,0x8023,0x2040,0x8021,0x2044 },
	{ 0x4,0x8024,0x2040,0x8022,0x2044 },
	{ 0x4,0x8000,0x2040,0x8023,0x2041 },
	{ 0x4,0x8001,0x2040,0x8024,0x2041 },
	{ 0xc,0x8021,0x8000,0x8020,0x2041 },
	{ 0xc,0x8022,0x8001,0x8020,0x2041 },
	{ 0xa,0x801e,0x8021,0x8021,0x801e },
	{ 0xa,0x801f,0x8022,0x8022,0x801f },
};


