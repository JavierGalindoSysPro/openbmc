// Expander error codes are defined in document "OpenBMC_GrandCanyon_Spec_v0.3 3.3.14.2"
char *exp_error_code_description[] = {
	"No error",                          // Error Code 0
	"Expander I2C bus 1 crash",
	"Expander I2C bus 2 crash",
	"Expander I2C bus 3 crash",
	"Expander I2C bus 4 crash",
	"Expander I2C bus 5 crash",
	"Expander I2C bus 6 crash",
	"Expander I2C bus 7 crash",
	"Expander I2C bus 0 crash",
	"IOC HeartBeat loss",
	"Expander Reserved",                 // Error Code 10
	"SCC voltage critical",
	"SCC_HSC voltage critical",
	"DPB voltage critical",
	"DPB_HSC voltage critical",
	"PTB_HSC_CLIP voltage critical",
	"HDD X voltage critical",
	"SCC current critical",
	"DPB current critical",
	"PTB_HSC_CLIP current critical",
	"Expander Reserved",                 // Error Code 20
	"SCC_Expander_Temp critical",
	"Expander Reserved",
	"SCC_Temp1 critical",
	"SCC_Temp2 critical",
	"DPB_INLET_Temp1 critical",
	"DPB_INLET_Temp2 critical",
	"DPB_OUTLET_Temp critical",
	"HDD X SMART Temp critical",
	"UIC_Temp critical",
	"HDD0 fault request",                // Error Code 30
	"HDD1 fault request",
	"HDD2 fault request",
	"HDD3 fault request",
	"HDD4 fault request",
	"HDD5 fault request",
	"HDD6 fault request",
	"HDD7 fault request",
	"HDD8 fault request",
	"HDD9 fault request",
	"HDD10 fault request",               // Error Code 40
	"HDD11 fault request",
	"HDD12 fault request",
	"HDD13 fault request",
	"HDD14 fault request",
	"HDD15 fault request",
	"HDD16 fault request",
	"HDD17 fault request",
	"HDD18 fault request",
	"HDD19 fault request",
	"HDD20 fault request",               // Error Code 50
	"HDD21 fault request",
	"HDD22 fault request",
	"HDD23 fault request",
	"HDD24 fault request",
	"HDD25 fault request",
	"HDD26 fault request",
	"HDD27 fault request",
	"HDD28 fault request",
	"HDD29 fault request",
	"HDD30 fault request",               // Error Code 60
	"HDD31 fault request",
	"HDD32 fault request",
	"HDD33 fault request",
	"HDD34 fault request",
	"HDD35 fault request",
	"HDD X fault request",
	"Expander Reserved",
	"Expander Reserved",
	"Expander Reserved",
	"Internal Mini-SAS Link Loss",       // Error Code 70
	"Internal SAS Link Loss",
	"SCC I2C device loss",
	"DPB I2C device loss",
	"PTB I2C device loss",
	"UIC I2C device loss",
	"Expander Reserved",
	"Fan 0 front fault",
	"Fan 0 rear fault",
	"Fan 1 front fault",
	"Fan 1 rear fault",                  // Error Code 80
	"Fan 2 front fault",
	"Fan 2 rear fault",
	"Fan 3 front fault",
	"Fan 3 rear fault",
	"Expander Reserved",
	"Expander Reserved",
	"Expander Reserved",
	"Drawer Pull out",
	"Peer SCC Plug out",
	"UICA Plug out",                     // Error Code 90
	"UICB Plug out",
	"Fan 0 Plug out",
	"Fan 1 Plug out",
	"Fan 2 Plug out",
	"Fan 3 Plug out",
	"Expander Reserved",
	"Expander Reserved",
	"Expander Reserved",
	"H/W Configuration/Type Not Match",  // Error Code 99
};

// BMC error codes are defined in document "GrandCanyon_BMC_Feature_List_v0.6 - Events"
char *bmc_error_code_description[] = {
	"BMC CPU Utilization exceeded",  // Error Code 0xCE
	"BMC Memory Utilization exceeded",
	"BMC Reserved", // Error Code 0xD0
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved", // Error Code 0xDA
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"BMC Reserved",
	"ECC Recoverable Error",  // Error Code 0xE0
	"ECC Un-recoverable Error",
	"Barton Springs Missing",
	"SCC Missing",
	"NIC Missing",
	"E1.S Missing",
	"IOC Module Missing",
	"BMC I2C bus 0 hang",
	"BMC I2C bus 1 hang",
	"BMC I2C bus 2 hang",
	"BMC I2C bus 3 hang",  // Error Code 0xEA
	"BMC I2C bus 4 hang",
	"BMC I2C bus 5 hang",
	"BMC I2C bus 6 hang",
	"BMC I2C bus 7 hang",
	"BMC I2C bus 8 hang",
	"BMC I2C bus 9 hang",  // Error Code 0xF0
	"BMC I2C bus 10 hang",
	"BMC I2C bus 11 hang",
	"BMC I2C bus 12 hang",
	"BMC I2C bus 13 hang",
	"BMC I2C bus 14 hang",
	"BMC I2C bus 15 hang",
	"Server health is bad",
	"UIC health is bad",
	"DPB health is bad",
	"SCC health is bad",  // Error Code 0xFA
	"NIC health is bad",
	"BMC remote heartbeat is abnormal",
	"SCC local heartbeat is abnormal",
	"SCC remote heartbeat is abnormal",
	"BIC heartbeat is abnormal", // Error Code 0xFF
};
