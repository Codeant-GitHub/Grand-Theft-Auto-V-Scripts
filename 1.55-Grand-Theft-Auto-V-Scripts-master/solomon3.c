#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_285[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_461[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_637[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_813[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	float fLocal_992 = 0f;
	float fLocal_993[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1029[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1065[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1101[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1137[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1173[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1209[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1225[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1241[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1257[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1273 = 0f;
	float fLocal_1274 = 0f;
	float fLocal_1275 = 0f;
	float fLocal_1276 = 0f;
	float fLocal_1277 = 0f;
	float fLocal_1278 = 0f;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	float fLocal_1293 = 0f;
	int iLocal_1294[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1470[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1646[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1822[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1858[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1894[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1930[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	struct<3> Local_1963[175];
	struct<3> Local_2489[15];
	struct<3> Local_2535[35];
	struct<3> Local_2641 = { 0, 0, 0 } ;
	struct<3> Local_2644 = { 0, 0, 0 } ;
	struct<3> Local_2647 = { 0, 0, 0 } ;
	struct<3> Local_2650 = { 0, 0, 0 } ;
	struct<3> Local_2653 = { 0, 0, 0 } ;
	struct<3> Local_2656 = { 0, 0, 0 } ;
	struct<3> Local_2659 = { 0, 0, 0 } ;
	struct<3> Local_2662 = { 0, 0, 0 } ;
	struct<3> Local_2665 = { 0, 0, 0 } ;
	char cLocal_2668[64] = "";
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	int iLocal_2684 = 0;
	int iLocal_2685[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2861[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2877[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915 = 0;
	int iLocal_2916[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3092[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3105[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3121[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3157[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	var uLocal_3167 = 12;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	var uLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	var uLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223[4] = { 0, 0, 0, 0 };
	int iLocal_3228 = 0;
	var uLocal_3229[3] = { 0, 0, 0 };
	int iLocal_3233[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int iLocal_3251[2] = { 0, 0 };
	int iLocal_3254[2] = { 0, 0 };
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260[2] = { 0, 0 };
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267 = 0;
	int iLocal_3268[2] = { 0, 0 };
	int iLocal_3271 = 0;
	int iLocal_3272[2] = { 0, 0 };
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278 = 0;
	int iLocal_3279[2] = { 0, 0 };
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	struct<3> Local_3294 = { 0, 0, 0 } ;
	struct<3> Local_3297 = { 0, 0, 0 } ;
	struct<3> Local_3300 = { 0, 0, 0 } ;
	struct<3> Local_3303 = { 0, 0, 0 } ;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	struct<3> Local_3312 = { 0, 0, 0 } ;
	struct<3> Local_3315 = { 0, 0, 0 } ;
	struct<3> Local_3318 = { 0, 0, 0 } ;
	float fLocal_3321 = 0f;
	float fLocal_3322 = 0f;
	float fLocal_3323 = 0f;
	float fLocal_3324 = 0f;
	float fLocal_3325 = 0f;
	float fLocal_3326 = 0f;
	int iLocal_3327 = 0;
	int iLocal_3328 = 0;
	var uLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
	int iLocal_3334 = 0;
	int iLocal_3335 = 0;
	int iLocal_3336 = 0;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int iLocal_3365[3] = { 0, 0, 0 };
	int iLocal_3369[2] = { 0, 0 };
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382 = 0;
	int iLocal_3383 = 0;
	int iLocal_3384 = 0;
	int iLocal_3385 = 0;
	int iLocal_3386 = 0;
	int iLocal_3387 = 0;
	int iLocal_3388 = 0;
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	var uLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int iLocal_3404[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	int iLocal_3444 = 0;
	int iLocal_3445[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479 = 0;
	int iLocal_3480[2] = { 0, 0 };
	int iLocal_3483[2] = { 0, 0 };
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int iLocal_3490[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3498[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int iLocal_3516[3] = { 0, 0, 0 };
	int iLocal_3520[2] = { 0, 0 };
	int iLocal_3523 = 0;
	int iLocal_3524[4] = { 0, 0, 0, 0 };
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542 = 0;
	int iLocal_3543[3] = { 0, 0, 0 };
	int iLocal_3547[3] = { 0, 0, 0 };
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570 = 0;
	int iLocal_3571[4] = { 0, 0, 0, 0 };
	int iLocal_3576 = 0;
	char* sLocal_3577 = NULL;
	var uLocal_3578 = 16;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 21;
	var uLocal_3751 = 6;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755[3] = { 0, 0, 0 };
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	uLocal_73 = unk_0xB967AFE724ADAEB1();
	uLocal_74 = unk_0x7EA43B6762051EA2();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0.3f;
	fLocal_1292 = 0.5f;
	fLocal_1293 = 50f;
	iLocal_1949 = -1;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	Local_3294 = { -1024.1f, -485.3321f, 35.9816f };
	Local_3297 = { -428.0263f, -2153.577f, 9.2997f };
	Local_3300 = { -498.7f, -2136.5f, 8.4f };
	Local_3312 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_3321 = 209.7233f;
	fLocal_3322 = 90.947f;
	fLocal_3325 = 46.7161f;
	if (func_432(0))
	{
		func_425(24, 0);
	}
	unk_0x9783B77820E7F699(0);
	unk_0x3FD146795EFB335A("EXTRASUNNY", 20f);
	if (unk_0x4210287E2833D44B(3))
	{
		func_423(unk_0x7D2B9E6A64637269(), 0);
		unk_0xFB8A6909539A30B1("TRV4_FAIL");
		func_421();
		func_419();
	}
	func_418(1);
	unk_0xC189FA1CE4E3B2A5(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		unk_0xE9F487B66E055135("M_LegalTrouble", 0);
		if (iLocal_3207 > unk_0xDFB7BFA6482FEE1E())
		{
			unk_0xFFCFF4576AE8F21E();
		}
		func_414();
		func_413();
		func_411();
		func_407();
		func_406();
		switch (iLocal_3180)
		{
			case 0:
				func_402();
				break;
			
			case 1:
				func_357();
				break;
			
			case 2:
				func_351();
				break;
			
			case 3:
				func_348();
				break;
			
			case 4:
				func_247();
				break;
			
			case 5:
				func_235();
				break;
			
			case 6:
				func_229();
				break;
			
			case 7:
				func_219();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3443 == 0)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			func_4(unk_0x7D2B9E6A64637269(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (iLocal_3444 == 0)
			{
				iLocal_3275 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if (unk_0x419E13582192CFEA(iLocal_3275))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3275, 0))
					{
						func_3(iLocal_3275, -1);
						func_4(iLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1)
			{
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0)
	{
		if (unk_0x419E13582192CFEA(uLocal_3229[0]))
		{
			if (unk_0xECEC7528A52B4EE8(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (unk_0x419E13582192CFEA(uLocal_3229[1]))
		{
			if (unk_0xECEC7528A52B4EE8(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (unk_0x419E13582192CFEA(uLocal_3229[2]))
		{
			if (unk_0xECEC7528A52B4EE8(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[0]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[1]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[2]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[3]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[4]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[5]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[6]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[7]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[8]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[9]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[10]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3248))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3249))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3250))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3251[0]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) != 0)
		{
			if (iLocal_3465 == 0)
			{
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_62108 = iParam0;
	if (!Global_62106)
	{
		Global_62106 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_74194[iVar0 /*9*/] == iParam0)
			{
				Global_74194[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_62109 = iParam0;
	Global_62110 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_62111 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_74193)
	{
		if (iParam1 == -1 || Global_74194[iVar0 /*9*/] == iParam1)
		{
			if (Global_74194[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_74194[iVar0 /*9*/].f_6 = iParam0;
				Global_74194[iVar0 /*9*/].f_7 = 1;
				Global_74194[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0x8B6A925F148E0E94())
	{
		if (unk_0x419E13582192CFEA(iLocal_3267))
		{
			unk_0x94F15E506D091111(iLocal_3267, 0, 0, 1);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		unk_0x068BDE31F7D112BB("Misssolomon_3");
		unk_0x16E516CA9C88FF48(joaat("oracle2"));
		unk_0x16E516CA9C88FF48(joaat("baller2"));
		if (unk_0x575B7C28D81C0B4D(uLocal_3285))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_3285);
		}
		if (unk_0x9745FAC5B3E4C8B8("Trev4_5"))
		{
			unk_0xB3081038630E7D72("Trev4_5", 0, 1f, 1f);
			unk_0xD0AC51DF5D1C2659("Trev4_5");
		}
		if (unk_0x419E13582192CFEA(iLocal_3259))
		{
			unk_0x795957CD3A0042C8(&iLocal_3259);
		}
		SYSTEM::SETTIMERA(0);
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_24())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		if (unk_0x419E13582192CFEA(iLocal_3228))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
			{
				unk_0x1D7A4E9E23D306D6(iLocal_3228, 1);
				unk_0xBE91B077ADADE97F(iLocal_3228, 0);
			}
		}
		unk_0xFB8A6909539A30B1("TRV4_LOSE_COPS");
		if (!unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS"))
		{
			unk_0xB84B43B766630B5C("SOL_3_LOSE_COPS");
		}
		unk_0x1036762BD3781C84();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0xB30CD10E2CD1B67D("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xC0BBE340BE2AA02D("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_3221 = unk_0xD5504E3827DE12F9(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0x419E13582192CFEA(iLocal_3266))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
			{
				unk_0x9EDEEA994698960E(iLocal_3266, 0);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3267))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3267, 0))
			{
				unk_0x9EDEEA994698960E(iLocal_3267, 0);
			}
		}
		unk_0x20D884FB6567BAD5(5);
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 3, 0);
		unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		unk_0x8FF71A24509DA743("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_3279[0]))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("oracle2")))
				{
					iLocal_3279[0] = unk_0x170478CC84C8AE2F(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1, 0);
					unk_0x46EDFC827DC67D89(iLocal_3279[0], 1, 1);
					unk_0x47D0DDD8833C5E5F(iLocal_3279[0], 1084227584);
					unk_0x824F744352C8BC82(joaat("oracle2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_3279[1]))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("baller2")))
				{
					iLocal_3279[1] = unk_0x170478CC84C8AE2F(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1, 0);
					unk_0x46EDFC827DC67D89(iLocal_3279[1], 1, 1);
					unk_0x47D0DDD8833C5E5F(iLocal_3279[1], 1084227584);
					unk_0x824F744352C8BC82(joaat("baller2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3279[0]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3279[0], 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3279[0], 0))
				{
					if (!unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xB84B43B766630B5C("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3279[0], 1) > 200f || unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3279[0], 0))
			{
				unk_0x795957CD3A0042C8(&(iLocal_3279[0]));
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3279[1]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3279[1], 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3279[1], 0))
				{
					if (!unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xB84B43B766630B5C("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3279[1], 1) > 200f || unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3279[1], 0))
			{
				unk_0x795957CD3A0042C8(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3268[0], 0))
				{
					unk_0x069557E67CC67C29(iLocal_3268[0], 68, "BB_Chase", 1);
					unk_0x6460C026D98259A7(iLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_3268[1], 0))
				{
					unk_0x069557E67CC67C29(iLocal_3268[1], 69, "BB_Chase", 1);
					unk_0x6460C026D98259A7(iLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3268[0], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3268[0]))
				{
					if (unk_0x730551DCA699D643(iLocal_3268[0]) > 5000f)
					{
						if (unk_0x8879B2803A5F8682(iLocal_3268[0]))
						{
							unk_0x50B76EE36FBE865F(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3233[6]))
					{
						unk_0xBE91B077ADADE97F(iLocal_3233[6], 0);
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_3233[7]))
					{
						unk_0xBE91B077ADADE97F(iLocal_3233[7], 0);
					}
					iLocal_3375 = 1;
				}
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3268[1], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3268[1]))
				{
					if (unk_0x730551DCA699D643(iLocal_3268[1]) > 5000f)
					{
						if (unk_0x8879B2803A5F8682(iLocal_3268[1]))
						{
							unk_0x50B76EE36FBE865F(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3233[8]))
					{
						unk_0xBE91B077ADADE97F(iLocal_3233[8], 0);
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_3233[9]))
					{
						unk_0xBE91B077ADADE97F(iLocal_3233[9], 0);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3267))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3267, 0))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3267, 0))
					{
						unk_0xFB8A6909539A30B1("TRV4_JET_ENTERED");
						if (!unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xB84B43B766630B5C("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x2DC2890038BFF758(4f, 15f, 4);
						unk_0x795957CD3A0042C8(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3267, 1) > 200f)
					{
						unk_0x795957CD3A0042C8(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3267))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3267, 0))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3267, 0))
					{
						if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xFB8A6909539A30B1("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = unk_0xDFB7BFA6482FEE1E();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3193 + 3500)
				{
					if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS"))
					{
						unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS");
					}
					if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0xFB8A6909539A30B1("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3477 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_419();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_62100)
	{
		Global_62100 = iParam1;
	}
	if (bParam0)
	{
		if ((func_432(0) && Global_77494.f_1 == 1) && func_9(Global_77494))
		{
		}
		else
		{
			Global_62098 = 1;
		}
	}
	if (Global_112293.f_9083 || func_432(0))
	{
		iVar0 = func_8();
		iVar1 = Global_90122[iVar0 /*5*/];
		uVar2 = Global_77517.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_112293.f_9083)
			{
			}
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 4);
		unk_0x191DDA30577F440A(&Global_77496, 1);
		Global_77512 = uVar2;
		Global_77513 = unk_0xDFB7BFA6482FEE1E();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74193)
	{
		if (Global_74194[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_74194[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_74194[iVar0 /*9*/].f_1 = (Global_74194[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_74194[iVar0 /*9*/] != -1)
	{
		if (Global_62323[Global_74194[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_74194[iVar0 /*9*/].f_1 > 1)
			{
				Global_74194[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_74194[iVar0 /*9*/].f_1 < 0)
			{
				Global_74194[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_62106)
	{
	}
	Global_62106 = 0;
	if (bParam0)
	{
		Global_62107 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_62323[Global_74194[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_74194[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_74194[iVar0 /*9*/] > 0)
			{
				if (Global_74194[iVar0 /*9*/] == iParam1)
				{
					Global_74194[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[iLocal_3189]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3233[iLocal_3189]))
			{
				if (!unk_0xC49311A2A500FF09(iLocal_3233[iLocal_3189], 0))
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[iLocal_3189]) > 200f)
						{
							unk_0xCA089CD1A17D76DF(iLocal_3233[iLocal_3189]);
							unk_0x0F3BD19FF11738D3(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								unk_0xF77EA5B6EAF40F43(iLocal_3233[iLocal_3189], unk_0x7D2B9E6A64637269(), unk_0x7D2B9E6A64637269(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							unk_0x9DA29013F33252A6(iLocal_3233[iLocal_3189], unk_0x7D2B9E6A64637269(), 0, 16);
							unk_0xA415F00D0E0DFBCE(iLocal_3233[iLocal_3189], 50, 1);
						}
					}
					else if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[iLocal_3189]) > 200f)
					{
						unk_0x0F3BD19FF11738D3(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							unk_0xF77EA5B6EAF40F43(iLocal_3233[iLocal_3189], unk_0x7D2B9E6A64637269(), unk_0x7D2B9E6A64637269(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0x4E8DA737B686529A(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						unk_0x9DA29013F33252A6(iLocal_3233[iLocal_3189], unk_0x7D2B9E6A64637269(), 0, 16);
						unk_0xA415F00D0E0DFBCE(iLocal_3233[iLocal_3189], 50, 1);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1)
	{
		if (iLocal_3346 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3268[0]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3268[0], 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3268[0]))
					{
					}
					else
					{
						if (unk_0x419E13582192CFEA(iLocal_3233[6]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3233[6]))
							{
								unk_0xBE91B077ADADE97F(iLocal_3233[6], 0);
								unk_0xCA089CD1A17D76DF(iLocal_3233[6]);
								unk_0x5C679902079A7E80(&uLocal_3292);
								unk_0xEDC0317C5B604BB1(0, iLocal_3268[0], 256);
								unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0x1BBD0A5729AB1226(uLocal_3292);
								unk_0x8A1AC8EBC73850C8(iLocal_3233[6], uLocal_3292);
								unk_0x8D5B447F21217223(&uLocal_3292);
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_3233[7]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3233[7]))
							{
								unk_0xBE91B077ADADE97F(iLocal_3233[7], 0);
								unk_0xCA089CD1A17D76DF(iLocal_3233[7]);
								unk_0x5C679902079A7E80(&uLocal_3292);
								unk_0xEDC0317C5B604BB1(0, iLocal_3268[0], 256);
								unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0x1BBD0A5729AB1226(uLocal_3292);
								unk_0x8A1AC8EBC73850C8(iLocal_3233[7], uLocal_3292);
								unk_0x8D5B447F21217223(&uLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3268[0]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3268[0], 0))
				{
					if (unk_0x419E13582192CFEA(iLocal_3233[6]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3233[6]))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[6]) < 20f)
								{
									func_14(iLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3268[1]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3268[1], 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3268[1]))
					{
					}
					else
					{
						if (unk_0x419E13582192CFEA(iLocal_3233[8]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3233[8]))
							{
								unk_0xBE91B077ADADE97F(iLocal_3233[8], 0);
								unk_0xCA089CD1A17D76DF(iLocal_3233[8]);
								unk_0x5C679902079A7E80(&uLocal_3292);
								unk_0xEDC0317C5B604BB1(0, iLocal_3268[1], 256);
								unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0x1BBD0A5729AB1226(uLocal_3292);
								unk_0x8A1AC8EBC73850C8(iLocal_3233[8], uLocal_3292);
								unk_0x8D5B447F21217223(&uLocal_3292);
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_3233[9]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3233[9]))
							{
								unk_0xBE91B077ADADE97F(iLocal_3233[9], 0);
								unk_0xCA089CD1A17D76DF(iLocal_3233[9]);
								unk_0x5C679902079A7E80(&uLocal_3292);
								unk_0xEDC0317C5B604BB1(0, iLocal_3268[1], 256);
								unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0x1BBD0A5729AB1226(uLocal_3292);
								unk_0x8A1AC8EBC73850C8(iLocal_3233[9], uLocal_3292);
								unk_0x8D5B447F21217223(&uLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3233[10]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3233[10]))
			{
				if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3233[10]) > 200f)
				{
					unk_0x0F3BD19FF11738D3(&(iLocal_3233[iLocal_3189]));
					unk_0xF9135F131C423364("misssolomon_3");
				}
				else if (unk_0x0EC2B29D4172D225("misssolomon_3"))
				{
					if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3233[10]))
						{
							unk_0xCA089CD1A17D76DF(iLocal_3233[10]);
							unk_0x5C679902079A7E80(&uLocal_3292);
							unk_0x4261814A9A26E86F(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
							unk_0x1BBD0A5729AB1226(uLocal_3292);
							unk_0x8A1AC8EBC73850C8(iLocal_3233[10], uLocal_3292);
							unk_0x8D5B447F21217223(&uLocal_3292);
							iLocal_3348 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(var uParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(uParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_16(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var3, iParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (unk_0x234B68AC2E35ED5A(Global_31504, iParam0))
	{
		if (!bParam1)
		{
			unk_0xC664C0067EEAB8D1(&Global_31504, iParam0);
			StringCopy(&(Global_31505[iParam0 /*6*/]), "NULL", 24);
			Global_31560[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_31504, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_99365 != 6)
		{
			SYSTEM::WAIT(0);
		}
		unk_0x543F5B2D3F90CA6D(0);
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x419E13582192CFEA(iParam0))
				{
					if (unk_0xBFCE58B2B3249999(iParam0, 0))
					{
						if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
						{
							unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iParam0, iParam1);
							unk_0x3A13FD2813C8251F(0f, 1065353216);
							unk_0xDF23DCD7A3E1B7A5(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
			}
		}
		unk_0x87C9692CDE8B3A8D();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 13);
	}
}

int func_23()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xDA654EB115F9FF7D("FinaleC2", unk_0x471C98FD94C0A5FD()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_99407)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_99407)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_119(1);
		if (iParam0 <= Global_99407)
		{
		}
		iVar1 = func_117(unk_0x471C98FD94C0A5FD(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_112293.f_9083.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_115(iVar1);
			cVar3 = { Global_90158[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_112293.f_9083.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xB1DADBFE243A3F87(&cVar3, uVar2, Global_99407, iParam0);
		}
		else
		{
			iVar5 = func_110(unk_0x471C98FD94C0A5FD(), 1);
			if (iVar5 != -1)
			{
				Global_112293.f_18572[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_109(iVar5)}, 4);
				unk_0xB1DADBFE243A3F87(&uVar6, 0, Global_99407, iParam0);
			}
			else
			{
				iVar10 = func_108(&(Global_99370.f_3));
				if (iVar10 > -1)
				{
					Global_112293.f_24984.f_4[iVar10] = 0;
				}
			}
		}
		Global_93548 = iParam2;
		Global_99407 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xDA654EB115F9FF7D(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_99407)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_105842, unk_0x471C98FD94C0A5FD(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_107();
	uParam0->f_1 = func_96();
	unk_0xCDEE919CA17BB8B0(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(unk_0x7D2B9E6A64637269());
		func_60(unk_0x7D2B9E6A64637269(), 0);
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_112293.f_2361.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_50(unk_0x7D2B9E6A64637269(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_99095[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_99095[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_99095[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_99095[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_99095[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_99095[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_99095[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_99095[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_99095[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_99095[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_112293.f_2361.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_112293.f_2361.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD885BEFA31A18D47(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_112293.f_20562.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_59272[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_112293.f_2361.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_112293.f_2361.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_112293.f_2361.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_112293.f_2361.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_112293.f_2361.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_112293.f_2361[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_112293.f_2361[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD885BEFA31A18D47(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xD885BEFA31A18D47(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xD885BEFA31A18D47(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_95219;
	uParam0->f_1 = Global_95220;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x7D2B9E6A64637269();
	}
	if (unk_0x419E13582192CFEA(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x419E13582192CFEA(iVar0))
	{
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xEACFC87E44438F24(iVar0, joaat("skylift")) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xBFCE58B2B3249999(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_99370.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
		uParam0->f_6 = unk_0xA8D713A937F31250(iParam1);
		uParam0->f_3 = { unk_0x9F2928DF31D785C7(iParam1) };
		if (unk_0x8954E9D0A9F6F8CF(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76971 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]))
		{
			if (iParam0 == Global_76066.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 145;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				return Global_96711[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96711[iVar0])
				{
					if (iParam2 == 0 || unk_0x6471F4759775FCA4(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112293.f_9083.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112293.f_9083.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x6471F4759775FCA4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x0B676D4511ABB729(iParam0), 16);
		*uParam1 = unk_0x8F77FF37B3B66EE9(iParam0);
		unk_0x63316D59F2B56D9A(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x39A17B456BB9800A(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xDCC81D0196B6BB05(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x3763A95FD16BF2D0(iParam0);
		uParam1->f_67 = unk_0x91A6237658B4DA68(iParam0);
		uParam1->f_69 = unk_0x1D74385CEC17951D(iParam0);
		uParam1->f_70 = unk_0xAFD2714E8B5AEB9F(iParam0);
		unk_0x67CF1352CC692A08(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x0CC8B4C581022F66(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0602C700974DF696(iParam0, 2))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 28);
		}
		if (unk_0x0602C700974DF696(iParam0, 3))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 29);
		}
		if (unk_0x0602C700974DF696(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 30);
		}
		if (unk_0x0602C700974DF696(iParam0, 1))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x334291A8490E5BCB(iParam0);
		}
		if (unk_0x48E10529AEAE00F9(uParam1->f_66))
		{
			if (unk_0x4D79903AC2C62A29(iParam0))
			{
				switch (unk_0xC504A6173BF90791(iParam0))
				{
					case 3:
					case 0:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0x191DDA30577F440A(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7EB56EF7F2EC63A6(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 9);
		}
		if (unk_0x44CD355F587F467C(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 10);
		}
		if (unk_0x06B95C5D3415375D(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 13);
			unk_0xD1C8CE12A38AA6D0(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x89FF0171FDDB2246(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xE3C9546BB1ECEC04(iParam0, iVar0 + 1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x88CF23F322C9687A(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 11);
		}
		if (unk_0x5B38E054B758C032(iParam0, "IgnoredByQuickSave") && unk_0xCDB2D643EC18E75E(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 27);
		}
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_41(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				switch (unk_0x64CF0B1FED5D2D23(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xB51972B58BF40F96(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			if (iParam0 == unk_0x7D2B9E6A64637269())
			{
				*uParam1 = unk_0x0BF0F8F3AD0993F6();
			}
			else
			{
				*uParam1 = unk_0x75B58B38E45C6F9A(iParam0, 1);
			}
			if (unk_0x419E13582192CFEA(*uParam1))
			{
				if (unk_0xBFCE58B2B3249999(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(*uParam1, 1), unk_0xD6E677FAD7521410(iParam0, 1), 1) < 100f)
					{
						if (unk_0xEACFC87E44438F24(*uParam1, joaat("taxi")))
						{
							if (unk_0x27FC1B0077581B37(*uParam1, -1, 0) != iParam0 && unk_0x27FC1B0077581B37(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_107(), 1))
						{
							sVar0 = unk_0x471C98FD94C0A5FD();
							if (!unk_0xDA654EB115F9FF7D(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xC49311A2A500FF09(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x5B38E054B758C032(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xCDB2D643EC18E75E(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xEACFC87E44438F24(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iVar9], 0))
		{
			if (unk_0xC5C459033A48B1E4(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_50(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x02BFF15CAA701972() && unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
			uParam1->f_60 = func_51(754, iParam3, 0);
			uParam1->f_61 = func_51(755, iParam3, 0);
		}
		if (unk_0x02BFF15CAA701972() && iParam0 == unk_0x7D2B9E6A64637269())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_52(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_53()
{
	return Global_1312763;
}

int func_54(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x228A4ED518554B3F(iParam0, iParam1);
		*uParam3 = unk_0x64F7E3FF8F40315D(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xB22628F56B3EAA2E(iParam0) && unk_0xEABC48138FE58714(iParam0) != -1)
				{
					*uParam2 = unk_0xEABC48138FE58714(iParam0);
					*uParam3 = unk_0x79D810B8C4DF88FC(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x094C1D2DFE050D6E(iParam0, iParam1);
		*uParam3 = unk_0x288277F22D527487(iParam0, iParam1);
		*uParam4 = unk_0xEE2FD6984DD352B8(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_48(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_47(unk_0x7D2B9E6A64637269());
			if (func_38(iVar0) && (!func_59(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_38(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_59(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (iParam0 == unk_0x7D2B9E6A64637269())
		{
			func_61(iParam0, &(Global_112293.f_2361.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_112293.f_2361.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x827505E659355200(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x554296A515FE935E();
					if (Global_112293.f_2361.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_112293.f_2361.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xCDA6BA7E76D2CE61(unk_0x1146A9AE09CE2B14(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xAC4FD27671081628(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xAC4FD27671081628(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xAC4FD27671081628(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x2CBBA235A635CC58(iParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x0F6DF91234DB95B0(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x44AF25C80C878F6D(iParam0, Var4);
					Var4.f_4 = unk_0x85ADAF0E704499F4(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0AF4DB9B23D44B88(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_64(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x2B8CB30532811E62(iParam0, Var4, iVar2))
						{
							unk_0x191DDA30577F440A(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4D6FB5FCCA634B35();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xF98B272A945FAE61(iVar9, &Var11) && !func_63(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0xD1ABD511D9C326A3(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x0F6DF91234DB95B0(iParam0, Var4);
					if (unk_0x6CEA35622FBD9702(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x44AF25C80C878F6D(iParam0, Var4);
						Var4.f_4 = unk_0x85ADAF0E704499F4(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0AF4DB9B23D44B88(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x314A1AB56764C12D(iVar9))
					{
						if (unk_0x57CE058547D78C25(iVar9, iVar1, &Var50))
						{
							if (!func_62(Var50.f_3))
							{
								if (unk_0x2B8CB30532811E62(iParam0, Var4, Var50.f_3))
								{
									unk_0x191DDA30577F440A(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x6CEA35622FBD9702(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x0846333BC725A766(iVar1))
					{
						if (unk_0x9C54B5A3D8EE1518(iVar1, iVar2, &Var43))
						{
							if (!func_62(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xB3E2CBD7C8448401();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x0466DAD8CA6C1EAD(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xECEC7528A52B4EE8(iParam0))
	{
		Global_112293.f_2361.f_539.f_294[iVar0] = unk_0x96637387D970AEFC(iParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	uParam0->f_3 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
	uParam0->f_5 = unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269());
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		uParam0->f_4 = unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x636F1F53CC61D2C9(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_77496, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_77496, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_77496, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_77496, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xFA82BD1142427E0F(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_107();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_69(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1078E3E6E7C301E8(Param0))
	{
		iVar0 = unk_0xFA82BD1142427E0F(Param4, sParam3);
		if (!unk_0xE75EE67F14EAAE37(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x6307EBFB74CAFA98(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_72(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_95())
		{
			*uParam0 = func_78(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x234B68AC2E35ED5A(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_76() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_51(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

int func_76()
{
	return Global_31345;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 55)
	{
		if (iParam3 == 6 || iParam3 == func_94(iVar0))
		{
			if (!bParam5 || func_93(iVar0))
			{
				fVar1 = unk_0x0BABEFEA577FCFA4(Param0, func_79(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_90(Global_101476);
			break;
		
		case 46:
			if (Global_1590745 != func_89())
			{
				if (func_88(Global_1590745))
				{
					return func_81(2, 2);
				}
				else if (func_80(Global_1590745))
				{
					return func_81(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1703091;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_80(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_81(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590745 != func_89())
	{
		if (iParam1 == 3)
		{
			if (func_82(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 4))
			{
				if (func_82(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 5))
			{
				if (func_82(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_87(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_87(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_85(iParam0) };
	}
	else
	{
		Var12 = { func_84(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_83(Var18, -Var0.f_3.f_2) };
	Var18 = { func_83(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x26C2ACB261895E70(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_83(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.x * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_85(int iParam0)
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_89()
{
	return -1;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_91() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_91()
{
	return func_92(unk_0x1146A9AE09CE2B14());
}

var func_92(int iParam0)
{
	return unk_0xC844146213F10F48(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

int func_93(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
	}
	return 6;
}

bool func_95()
{
	return Global_99422.f_363 > 0;
}

var func_96()
{
	var uVar0;
	
	func_106(&uVar0, unk_0x1947D86A2BB06F8D());
	func_105(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_104(&uVar0, unk_0xCA86FAB7FADC8353());
	func_99(&uVar0, unk_0x9E6858A319A1F6F2());
	func_98(&uVar0, unk_0xA91C851005050418());
	func_97(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_97(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(*uParam0);
	iVar1 = func_101(*uParam0);
	if (iParam1 < 1 || iParam1 > func_100(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_101(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_102(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_103(int iParam0)
{
	return iParam0 & 15;
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_105(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_107()
{
	func_58();
	return Global_112293.f_2361.f_539.f_4321;
}

int func_108(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_109(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_110(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x15173FB88ABC94F9(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_111(iVar0, &sVar1);
		if (unk_0x15173FB88ABC94F9(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(uParam1, "Abigail1", func_114(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 1:
			func_112(uParam1, "Abigail2", func_114(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 2:
			func_112(uParam1, "Barry1", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 3:
			func_112(uParam1, "Barry2", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 4:
			func_112(uParam1, "Barry3", func_114(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 5:
			func_112(uParam1, "Barry3A", func_114(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 6:
			func_112(uParam1, "Barry3C", func_114(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 7:
			func_112(uParam1, "Barry4", func_114(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		
		case 8:
			func_112(uParam1, "Dreyfuss1", func_114(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 9:
			func_112(uParam1, "Epsilon1", func_114(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 10:
			func_112(uParam1, "Epsilon2", func_114(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 11:
			func_112(uParam1, "Epsilon3", func_114(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 12:
			func_112(uParam1, "Epsilon4", func_114(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 13:
			func_112(uParam1, "Epsilon5", func_114(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 14:
			func_112(uParam1, "Epsilon6", func_114(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 15:
			func_112(uParam1, "Epsilon7", func_114(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 16:
			func_112(uParam1, "Epsilon8", func_114(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 17:
			func_112(uParam1, "Extreme1", func_114(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 18:
			func_112(uParam1, "Extreme2", func_114(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 19:
			func_112(uParam1, "Extreme3", func_114(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 20:
			func_112(uParam1, "Extreme4", func_114(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 21:
			func_112(uParam1, "Fanatic1", func_114(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 22:
			func_112(uParam1, "Fanatic2", func_114(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 23:
			func_112(uParam1, "Fanatic3", func_114(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		
		case 24:
			func_112(uParam1, "Hao1", func_114(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		
		case 25:
			func_112(uParam1, "Hunting1", func_114(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 26:
			func_112(uParam1, "Hunting2", func_114(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 27:
			func_112(uParam1, "Josh1", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 28:
			func_112(uParam1, "Josh2", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 29:
			func_112(uParam1, "Josh3", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 30:
			func_112(uParam1, "Josh4", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 31:
			func_112(uParam1, "Maude1", func_114(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 32:
			func_112(uParam1, "Minute1", func_114(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 33:
			func_112(uParam1, "Minute2", func_114(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 34:
			func_112(uParam1, "Minute3", func_114(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 35:
			func_112(uParam1, "MrsPhilips1", func_114(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 36:
			func_112(uParam1, "MrsPhilips2", func_114(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 37:
			func_112(uParam1, "Nigel1", func_114(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 38:
			func_112(uParam1, "Nigel1A", func_114(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 39:
			func_112(uParam1, "Nigel1B", func_114(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 40:
			func_112(uParam1, "Nigel1C", func_114(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 41:
			func_112(uParam1, "Nigel1D", func_114(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 42:
			func_112(uParam1, "Nigel2", func_114(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 43:
			func_112(uParam1, "Nigel3", func_114(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 44:
			func_112(uParam1, "Omega1", func_114(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 45:
			func_112(uParam1, "Omega2", func_114(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 46:
			func_112(uParam1, "Paparazzo1", func_114(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 47:
			func_112(uParam1, "Paparazzo2", func_114(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 48:
			func_112(uParam1, "Paparazzo3", func_114(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 49:
			func_112(uParam1, "Paparazzo3A", func_114(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 50:
			func_112(uParam1, "Paparazzo3B", func_114(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 51:
			func_112(uParam1, "Paparazzo4", func_114(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 52:
			func_112(uParam1, "Rampage1", func_114(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 54:
			func_112(uParam1, "Rampage3", func_114(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 55:
			func_112(uParam1, "Rampage4", func_114(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 56:
			func_112(uParam1, "Rampage5", func_114(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 53:
			func_112(uParam1, "Rampage2", func_114(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 57:
			func_112(uParam1, "TheLastOne", func_114(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 58:
			func_112(uParam1, "Tonya1", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 59:
			func_112(uParam1, "Tonya2", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 60:
			func_112(uParam1, "Tonya3", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 61:
			func_112(uParam1, "Tonya4", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 62:
			func_112(uParam1, "Tonya5", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_114(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_109(iParam0) };
	if (unk_0xAB6A270F84A8781E(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_116(Global_112293.f_9083.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_116(Global_112293.f_9083.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_116(Global_112293.f_9083.f_99.f_205[11]);
			break;
		
		case 90:
			return func_116(Global_112293.f_9083.f_99.f_205[7]);
			break;
		
		case 93:
			return func_116(Global_112293.f_9083.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_117(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x15173FB88ABC94F9(sParam0);
	iVar1 = func_118(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_118(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_90158[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_119(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_120()
{
	unk_0x873EC65453DE323F("EXTRASUNNY");
	func_216();
	func_188();
	func_122();
	if (!func_24())
	{
		func_121();
	}
	iLocal_3351 = 1;
	unk_0xDF23DCD7A3E1B7A5(0f);
}

void func_121()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 93.7701f);
			break;
		
		case 3:
			if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3259, 0))
				{
					unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iLocal_3259, -1);
				}
				unk_0xC595907BB71C921D(iLocal_3259, 3000, 0);
				unk_0x3A653D4F5FA4B665(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 178.466f);
			unk_0x46EDFC827DC67D89(unk_0x7D2B9E6A64637269(), 1, 1);
			break;
		
		case 8:
			unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 111.5016f);
			unk_0x46EDFC827DC67D89(unk_0x7D2B9E6A64637269(), 1, 1);
			break;
	}
}

void func_122()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			unk_0x6AF7EE4DD9F8B944(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			unk_0x86DA8A407ED8A381(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			unk_0x016587321D096AED(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0x16E516CA9C88FF48(joaat("rapidgt"));
			unk_0x16E516CA9C88FF48(joaat("surano"));
			unk_0x16E516CA9C88FF48(joaat("carbonizzare"));
			while ((!unk_0xA9C0BBFB9CBB66F1(joaat("rapidgt")) || !unk_0xA9C0BBFB9CBB66F1(joaat("surano"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				unk_0x6AF7EE4DD9F8B944(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3259, 112, 112);
				unk_0xC595907BB71C921D(iLocal_3259, 3000, 0);
				unk_0xAC2B08493719B297(iLocal_3259, 1);
				unk_0x824F744352C8BC82(joaat("rapidgt"));
				unk_0x16C6E55F8C91ED24(joaat("rapidgt"), 1);
				unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3276))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("surano")))
				{
					unk_0x6AF7EE4DD9F8B944(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0x170478CC84C8AE2F(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0xC612552622E74D36(iLocal_3276, 0, 0);
					unk_0xC595907BB71C921D(iLocal_3276, 3000, 0);
					unk_0xAC2B08493719B297(iLocal_3276, 1);
					unk_0x824F744352C8BC82(joaat("surano"));
					unk_0x16C6E55F8C91ED24(joaat("surano"), 1);
					unk_0xD4DF29F3D7B97053(iLocal_3276, 1);
				}
			}
			if (!unk_0x419E13582192CFEA(iLocal_3277))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("carbonizzare")))
				{
					unk_0x6AF7EE4DD9F8B944(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0x170478CC84C8AE2F(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0xC612552622E74D36(iLocal_3277, 89, 89);
					unk_0xC595907BB71C921D(iLocal_3277, 3000, 0);
					unk_0xAC2B08493719B297(iLocal_3277, 1);
					unk_0x824F744352C8BC82(joaat("carbonizzare"));
					unk_0x16C6E55F8C91ED24(joaat("carbonizzare"), 1);
					unk_0xD4DF29F3D7B97053(iLocal_3277, 1);
				}
			}
			break;
		
		case 3:
			unk_0x8A54885A635DC8D1("TRV4_CHASE");
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			func_185();
			unk_0x6AF7EE4DD9F8B944(Local_3297, 200f, 1, 0, 0, 0);
			if (!unk_0x419E13582192CFEA(iLocal_3258))
			{
				iLocal_3258 = unk_0x170478CC84C8AE2F(joaat("cogcabrio"), Local_3297, fLocal_3322, 1, 1, 0);
				unk_0x3A653D4F5FA4B665(iLocal_3258, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0xC612552622E74D36(iLocal_3258, 27, 27);
				unk_0x824F744352C8BC82(joaat("cogcabrio"));
				unk_0x01BF36BDFE0F82AC(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3222))
			{
				iLocal_3222 = unk_0x42F3C85A00B4FC7B(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3222, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x8F160110753EB17B(iLocal_3222, 1);
				unk_0x1D7A4E9E23D306D6(iLocal_3222, 0);
				unk_0x824F744352C8BC82(joaat("ig_molly"));
				unk_0x2271ED1E65FB75EE(iLocal_3222, 1862763509);
			}
			if (func_23())
			{
				if (!unk_0x419E13582192CFEA(iLocal_3259))
				{
					if (func_184())
					{
						if (!unk_0xE267416B80E7921F(func_183()) && !unk_0x48E10529AEAE00F9(func_183()))
						{
							iLocal_3259 = func_143(Local_3312, fLocal_3325);
							unk_0x824F744352C8BC82(func_183());
							unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
						}
						else
						{
							iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
							unk_0xC612552622E74D36(iLocal_3259, 112, 112);
						}
					}
					else
					{
						iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
						unk_0xC612552622E74D36(iLocal_3259, 112, 112);
					}
					unk_0xC595907BB71C921D(iLocal_3259, 3000, 0);
					unk_0xAC2B08493719B297(iLocal_3259, 1);
					unk_0x3A653D4F5FA4B665(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
					unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
					unk_0x824F744352C8BC82(joaat("rapidgt"));
					unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
				}
			}
			else if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3259, 112, 112);
				unk_0x824F744352C8BC82(joaat("rapidgt"));
				unk_0xC595907BB71C921D(iLocal_3259, 3000, 0);
				unk_0xAC2B08493719B297(iLocal_3259, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
			break;
		
		case 5:
			iLocal_3352 = 0;
			unk_0x6AF7EE4DD9F8B944(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			unk_0x16E516CA9C88FF48(joaat("jet"));
			unk_0x16E516CA9C88FF48(joaat("shamal"));
			unk_0x1594E542FF3D23EF("BB_MOLLY_2");
			unk_0x16E516CA9C88FF48(joaat("s_m_y_airworker"));
			unk_0x16E516CA9C88FF48(joaat("s_m_y_cop_01"));
			unk_0x16E516CA9C88FF48(joaat("police3"));
			unk_0x16E516CA9C88FF48(joaat("ig_molly"));
			unk_0x16E516CA9C88FF48(joaat("cogcabrio"));
			unk_0x16E516CA9C88FF48(joaat("rapidgt"));
			unk_0x16E516CA9C88FF48(joaat("prop_cs_film_reel_01"));
			unk_0x498685EB9132AF88(68, "BB_Chase");
			unk_0x498685EB9132AF88(69, "BB_Chase");
			unk_0x1594E542FF3D23EF("Trev4_5");
			unk_0x7C0019321F1FC821();
			unk_0x068BDE31F7D112BB("move_f@film_reel_arms");
			unk_0x068BDE31F7D112BB("misssolomon_3");
			while (((((((((((((((!unk_0xA9C0BBFB9CBB66F1(joaat("jet")) || !unk_0xA9C0BBFB9CBB66F1(joaat("shamal"))) || !unk_0x9745FAC5B3E4C8B8("BB_MOLLY_2")) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_airworker"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_cop_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("police3"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("ig_molly"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("cogcabrio"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("rapidgt"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("prop_cs_film_reel_01"))) || !unk_0x9CF7186A344D26A9(68, "BB_Chase")) || !unk_0x9CF7186A344D26A9(69, "BB_Chase")) || !unk_0x9745FAC5B3E4C8B8("Trev4_5")) || !unk_0xB4C12EFC62A8536A()) || !unk_0x0EC2B29D4172D225("move_f@film_reel_arms")) || !unk_0x0EC2B29D4172D225("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3222))
			{
				iLocal_3222 = unk_0x0FDCFECB2EF2BC1C(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				unk_0x8F160110753EB17B(iLocal_3222, 1);
				unk_0x1D7A4E9E23D306D6(iLocal_3222, 0);
				unk_0xBE91B077ADADE97F(iLocal_3222, 1);
				unk_0x824F744352C8BC82(joaat("ig_molly"));
				unk_0x46EDFC827DC67D89(iLocal_3222, 1, 1);
				unk_0x2271ED1E65FB75EE(iLocal_3222, 1862763509);
			}
			iLocal_3283 = unk_0x795434E153F90E41(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			unk_0x0F1058706D5A58B4(iLocal_3283, iLocal_3222, unk_0xA79DFB802C09F5F5(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0x419E13582192CFEA(iLocal_3266))
			{
				iLocal_3266 = unk_0x170478CC84C8AE2F(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xF7E38415C6027209(iLocal_3266, 2);
				unk_0x764D10CFB2EDD065(iLocal_3266, 0);
				unk_0xA2C015B68CE01357(iLocal_3266, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x824F744352C8BC82(joaat("jet"));
				unk_0x83E421E5A4A2A512(iLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!unk_0x419E13582192CFEA(iLocal_3259))
				{
					if (func_184())
					{
						iLocal_3259 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
						unk_0x824F744352C8BC82(func_183());
						unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0xC612552622E74D36(iLocal_3259, 112, 112);
						unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
						unk_0x824F744352C8BC82(joaat("rapidgt"));
						unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3259, 112, 112);
				unk_0x824F744352C8BC82(joaat("rapidgt"));
				unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3258))
			{
				iLocal_3258 = unk_0x170478CC84C8AE2F(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3258, 27, 27);
				unk_0x824F744352C8BC82(joaat("cogcabrio"));
			}
			if (!unk_0x419E13582192CFEA(iLocal_3263))
			{
				iLocal_3263 = unk_0x170478CC84C8AE2F(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3248))
			{
				iLocal_3248 = unk_0x0FDCFECB2EF2BC1C(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xD82D50E4AC0D46B9(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_127(iLocal_3248, 0);
				unk_0x824F744352C8BC82(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			func_126(2, 1);
			iLocal_3360 = 1;
			break;
		
		case 8:
			unk_0x6AF7EE4DD9F8B944(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			unk_0x16E516CA9C88FF48(joaat("jet"));
			unk_0x16E516CA9C88FF48(joaat("s_m_y_airworker"));
			unk_0x16E516CA9C88FF48(joaat("shamal"));
			unk_0x16E516CA9C88FF48(joaat("s_m_y_cop_01"));
			unk_0x16E516CA9C88FF48(joaat("police3"));
			unk_0x16E516CA9C88FF48(joaat("cogcabrio"));
			unk_0x16E516CA9C88FF48(joaat("rapidgt"));
			unk_0x16E516CA9C88FF48(joaat("prop_jet_bloodsplat_01"));
			unk_0x498685EB9132AF88(68, "BB_Chase");
			unk_0x498685EB9132AF88(69, "BB_Chase");
			unk_0x7C0019321F1FC821();
			while ((((((((((!unk_0xA9C0BBFB9CBB66F1(joaat("jet")) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_airworker"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("shamal"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_cop_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("police3"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("cogcabrio"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("rapidgt"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("prop_jet_bloodsplat_01"))) || !unk_0x9CF7186A344D26A9(68, "BB_Chase")) || !unk_0x9CF7186A344D26A9(69, "BB_Chase")) || !unk_0xB4C12EFC62A8536A())
			{
				SYSTEM::WAIT(0);
			}
			func_125();
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!unk_0x419E13582192CFEA(iLocal_3259))
				{
					if (func_184())
					{
						iLocal_3259 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
						unk_0x824F744352C8BC82(func_183());
						unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0xC612552622E74D36(iLocal_3259, 112, 112);
						unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
						unk_0x824F744352C8BC82(joaat("rapidgt"));
						unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3259, 112, 112);
				unk_0x824F744352C8BC82(joaat("rapidgt"));
				unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3258))
			{
				iLocal_3258 = unk_0x170478CC84C8AE2F(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3258, 27, 27);
				unk_0x824F744352C8BC82(joaat("cogcabrio"));
			}
			if (!unk_0x419E13582192CFEA(iLocal_3263))
			{
				iLocal_3263 = unk_0x170478CC84C8AE2F(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3248))
			{
				iLocal_3248 = unk_0x0FDCFECB2EF2BC1C(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xD82D50E4AC0D46B9(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_127(iLocal_3248, 0);
				unk_0x824F744352C8BC82(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x419E13582192CFEA(iLocal_3282))
			{
				iLocal_3282 = unk_0x795434E153F90E41(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				unk_0xBDDCDEC7B6205897(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x824F744352C8BC82(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x419E13582192CFEA(iLocal_3266))
			{
				iLocal_3266 = unk_0x170478CC84C8AE2F(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xF7E38415C6027209(iLocal_3266, 2);
				unk_0x764D10CFB2EDD065(iLocal_3266, 0);
				unk_0xA2C015B68CE01357(iLocal_3266, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x824F744352C8BC82(joaat("jet"));
				uLocal_3763 = unk_0x48558536A19BA88A("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0x83E421E5A4A2A512(iLocal_3266, 500);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3228))
			{
				iLocal_3228 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				unk_0x824F744352C8BC82(joaat("s_m_y_airworker"));
				unk_0x1D7A4E9E23D306D6(iLocal_3228, 1);
				unk_0xBE91B077ADADE97F(iLocal_3228, 1);
				unk_0x1DC2BF231DE6A016(iLocal_3228, unk_0x7D2B9E6A64637269(), 150f, -1, 0, 0);
				unk_0x504B26425DFF773C(iLocal_3228, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x0F3BD19FF11738D3(&iLocal_3228);
			}
			if (func_124(0) == 0 || func_124(0) == joaat("weapon_unarmed"))
			{
				func_123(1);
			}
			break;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iVar0 = unk_0x0EB79601C726307D(unk_0x7D2B9E6A64637269(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), iVar0, iParam0);
		}
	}
}

int func_124(int iParam0)
{
	if (Global_99407 > 0)
	{
		return Global_105842.f_21[iParam0];
	}
	return Global_102858.f_21[iParam0];
}

void func_125()
{
	if (iLocal_3339 == 0)
	{
		if (!unk_0x419E13582192CFEA(iLocal_3268[0]))
		{
			iLocal_3268[0] = unk_0x170478CC84C8AE2F(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1, 0);
			unk_0x9F6498B97F642B82(iLocal_3268[0], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[0]))
		{
			iLocal_3233[0] = unk_0x0FDCFECB2EF2BC1C(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[0], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[0], 1, 1);
			unk_0x2AA99ECF9FBD1E5D(iLocal_3233[0], unk_0x7D2B9E6A64637269(), -1, 1);
			func_127(iLocal_3233[0], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3267))
		{
			iLocal_3267 = unk_0x170478CC84C8AE2F(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
			unk_0x47D0DDD8833C5E5F(iLocal_3267, 1084227584);
			unk_0x824F744352C8BC82(joaat("shamal"));
			unk_0xC595907BB71C921D(iLocal_3267, 2000, 0);
			unk_0x94F15E506D091111(iLocal_3267, 0, 0, 1);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[6]))
		{
			iLocal_3233[6] = unk_0x42F3C85A00B4FC7B(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[6], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[6], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[6], 1, 1);
			unk_0xBE91B077ADADE97F(iLocal_3233[6], 1);
			func_127(iLocal_3233[6], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[7]))
		{
			iLocal_3233[7] = unk_0x42F3C85A00B4FC7B(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[7], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[7], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[7], 1, 1);
			unk_0xBE91B077ADADE97F(iLocal_3233[7], 1);
			func_127(iLocal_3233[7], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3268[1]))
		{
			iLocal_3268[1] = unk_0x170478CC84C8AE2F(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1, 0);
			unk_0x9F6498B97F642B82(iLocal_3268[1], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[8]))
		{
			iLocal_3233[8] = unk_0x42F3C85A00B4FC7B(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[8], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[8], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[8], 1, 1);
			unk_0xBE91B077ADADE97F(iLocal_3233[8], 1);
			func_127(iLocal_3233[8], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[9]))
		{
			iLocal_3233[9] = unk_0x42F3C85A00B4FC7B(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[9], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[9], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[9], 1, 1);
			unk_0xBE91B077ADADE97F(iLocal_3233[9], 1);
			func_127(iLocal_3233[9], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[10]))
		{
			iLocal_3233[10] = unk_0x0FDCFECB2EF2BC1C(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			unk_0xD82D50E4AC0D46B9(iLocal_3233[10], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xF8207455457B967E(iLocal_3233[10], 20);
			unk_0x46EDFC827DC67D89(iLocal_3233[10], 1, 1);
			unk_0xBE91B077ADADE97F(iLocal_3233[10], 1);
			func_127(iLocal_3233[10], 0);
			unk_0xB0008BCA992FE670(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_126(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&Global_31504, iParam0);
	StringCopy(&(Global_31505[iParam0 /*6*/]), unk_0x471C98FD94C0A5FD(), 24);
	Global_31560[iParam0] = iParam1;
}

void func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_62128[iVar0 /*2*/] != 0)
			{
				if (Global_62128[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_62127)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_62128[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_62128[iVar1 /*2*/] = iParam0;
	Global_62128[iVar1 /*2*/].f_1 = 7;
	Global_62127++;
}

bool func_128()
{
	return func_129(&(Global_105842.f_2890));
}

int func_129(var uParam0)
{
	if (func_130(uParam0))
	{
		if (unk_0xA9C0BBFB9CBB66F1(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_130(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_132(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_131(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_131(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_140())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_139() && !func_138()) && !func_137()) && !func_136()) && !func_140())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_137())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_135(iParam0))
		{
			return 0;
		}
	}
	if (!func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_134()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1244461404)
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2038480341)
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -291021213)
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -452604007)
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1540373595)
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1858654120)
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 579912970)
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1193912403)
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1377217886)
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1755697647)
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 426742808)
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1582061455)
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1507230520)
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 736672010)
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1416471345)
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1304459735)
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1726022652)
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_136()
{
	return 0;
}

int func_137()
{
	return 1;
}

int func_138()
{
	return 1;
}

int func_139()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					uVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&uVar0, 0);
					unk_0x0E32F508F8A14DE9(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_141()
{
	func_142(&(Global_105842.f_2890));
}

void func_142(var uParam0)
{
	if (func_130(uParam0))
	{
		unk_0x16E516CA9C88FF48(uParam0->f_12.f_66);
	}
}

int func_143(struct<3> Param0, float fParam3)
{
	return func_144(&(Global_105842.f_2890), Param0, fParam3, 0);
}

int func_144(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_130(uParam0))
	{
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x09C4C80EA1D5B2F7(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_129(uParam0))
		{
			unk_0x6AF7EE4DD9F8B944(Param1, 5f, 1, 0, 0, 0);
			func_182(Param1, 5f, 0);
			iVar0 = unk_0x170478CC84C8AE2F(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				Var1 = { unk_0xD6E677FAD7521410(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xDB8D6815E13996A9(iVar0, Param1, 0, 0, 1);
				}
				func_165(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x8D367F0B53916265(uParam0->f_12.f_66) || unk_0xFD04BD7FA7FDC8C0(uParam0->f_12.f_66))
				{
					if (!unk_0xD13544ADC6A3F165(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iVar0)))
						{
							func_164(uParam0->f_11, 1);
						}
						else if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar0)))
						{
							func_164(uParam0->f_11, 2);
						}
					}
					unk_0xDC252CD3A5DA5F65(iVar0, 0);
					unk_0x9F6498B97F642B82(iVar0, 0);
					unk_0xD4DF29F3D7B97053(iVar0, 1);
					func_163(iVar0, uParam0->f_11);
				}
				else if ((!func_161(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xDA654EB115F9FF7D(unk_0x471C98FD94C0A5FD(), "startup_positioning"))
				{
					iVar8 = func_160(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_155(iVar8);
					}
				}
				if (((Global_99370 != 13 && Global_99370 != 10) && Global_99370 != 11) && Global_99370 != 12)
				{
					if (unk_0x15173FB88ABC94F9(&(Global_99370.f_3)) == Global_77054)
					{
						if (uParam0->f_12.f_66 == Global_112293.f_32747.f_69[21 /*78*/].f_66)
						{
							func_152(24, 0);
							func_155(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_145(iVar0, uParam0->f_11);
				}
				unk_0x824F744352C8BC82(uParam0->f_12.f_66);
				Var1 = { unk_0xD6E677FAD7521410(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_146(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0x419E13582192CFEA(iVar0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, -1);
		}
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xECEC7528A52B4EE8(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112293.f_2361.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112293.f_32747.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112293.f_32747.f_5590 = iParam1;
	Global_76971 = iParam0;
	Global_112293.f_32747.f_5588 = 1;
	func_39(iParam0, &(Global_112293.f_32747.f_5510));
}

int func_146(int iParam0)
{
	if ((((((((((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || !func_147(unk_0x6471F4759775FCA4(iParam0)))
	{
		if (func_150(iParam0))
		{
		}
		if (func_150(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_147(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_132(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x8D367F0B53916265(iParam0) || unk_0x48E10529AEAE00F9(iParam0)) || unk_0xE267416B80E7921F(iParam0)) || unk_0x8C6BE3ED9638F314(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	sVar1 = unk_0x0B676D4511ABB729(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xDA654EB115F9FF7D(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_132(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x419E13582192CFEA(Global_96731[iVar0]))
		{
			if (Global_96731[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				if (Global_96701[iVar0] == iParam0 && unk_0x6471F4759775FCA4(Global_96701[iVar0]) == unk_0x6471F4759775FCA4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(Global_76066.f_484[24]))
	{
		if (iParam0 == Global_76066.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76066.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_152(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_154(iParam0, 0))
		{
			func_153(iParam0, 1, 0);
			func_153(iParam0, 2, 0);
			func_153(iParam0, 3, 0);
			func_153(iParam0, 4, 0);
			func_153(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_153(iParam0, 0, 0);
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_32747[iParam0]), iParam1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_32747[iParam0]), iParam1);
	}
}

bool func_154(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

void func_155(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xBFCE58B2B3249999(Global_76066.f_139[iParam0], 0))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_76066.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
				unk_0x5420D0D520CF44D0(&(Global_76066.f_139[iParam0]));
			}
		}
		Global_76066[iParam0] = 1;
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_154(iParam0, 0)) && Global_76975.f_66 == 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] != 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] > 3) && (!func_157(0, Global_76066.f_555[0 /*21*/].f_12) || !func_157(1, Global_76066.f_555[0 /*21*/].f_12)))
			{
				func_156(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), &Global_76975);
				Global_77053 = Global_112293.f_32747.f_5591;
			}
			func_152(iParam0, 0);
		}
	}
}

void func_156(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_158(&(Global_112293.f_32747.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_132(Global_112293.f_32747.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_158(var uParam0)
{
	return *uParam0;
}

int func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112293.f_32747.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_71(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112293.f_32747.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112293.f_32747.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 19))
	{
		if (!func_71(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_71(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_76066.f_484[iVar0], 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[iVar0], 0))
		{
			unk_0x63316D59F2B56D9A(iParam0, &iVar1, &iVar2);
			unk_0x63316D59F2B56D9A(Global_76066.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(Global_76066.f_484[iVar0]) && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_161(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_162(iParam0, Global_76066.f_139[38], 0))
			{
				func_155(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_162(iParam0, Global_76066.f_139[43], 1))
			{
				func_155(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xBC28F9DB06EBE19C(unk_0x7D2B9E6A64637269(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_162(iParam0, uVar1[iVar6], 1) && func_131(unk_0xD6E677FAD7521410(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_71(Param1, 0f, 0f, 0f, 0)) || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x5420D0D520CF44D0(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x419E13582192CFEA(Global_76066.f_484[14]) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[14], 0))
			{
				if (unk_0x6471F4759775FCA4(Global_76066.f_484[14]) == joaat("luxor2") && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[14]))
				{
					func_155(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x419E13582192CFEA(Global_76066.f_484[20]) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[20], 0))
			{
				if (unk_0x6471F4759775FCA4(Global_76066.f_484[20]) == joaat("swift2") && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[20]))
				{
					func_155(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x419E13582192CFEA(iParam1) && !unk_0xE50EB54E0F21BED0(iParam1, 0)) && unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x63316D59F2B56D9A(iParam0, &iVar0, &iVar1);
			unk_0x63316D59F2B56D9A(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			Global_96701[iVar0] = iParam0;
			Global_96711[iVar0] = iParam1;
			Global_96721[iVar0] = unk_0x6471F4759775FCA4(iParam0);
			if (unk_0xB480C9C35514775A(Global_96721[iVar0]))
			{
				Global_96749[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96749[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (iParam0 == 145 || Global_96711[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6471F4759775FCA4(Global_96701[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_96701[iVar0], 0))
					{
						unk_0x4985CD0720AFD468(Global_96701[iVar0], 0, 1);
						unk_0x5420D0D520CF44D0(&(Global_96701[iVar0]));
						Global_96711[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_165(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_174(iParam0))
		{
			if (unk_0x15173FB88ABC94F9(&(uParam1->f_1)) != 0)
			{
				unk_0xFA4E6005E549B59C(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xF8A80F26627AA333())
			{
				unk_0xCF882B151A34557C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(4)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 10) != 0)
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), func_40(1));
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xAA707B921102DC82(iParam0, 0);
			if (unk_0xB51972B58BF40F96(iParam0, 5) != -1)
			{
				unk_0xAA707B921102DC82(iParam0, 1);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 13))
		{
			unk_0x5527519A6ADC0506(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF03ACE54462622C9(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 12))
		{
			unk_0x18709FF6990F23CC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x9327D4C0D6DF2D4A(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC612552622E74D36(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xA2FEFE3BBCD9FB23(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x234B68AC2E35ED5A(uParam1->f_77, 15) || func_173(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_172())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xD18C8678B41DB690(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
		}
		else
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
			unk_0x64058BD9F4A43D49(iParam0, uParam1->f_65);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 9))
		{
			unk_0xED4E91A1FC7ABBF6(iParam0, 0);
			unk_0x5AC79C98C5C17F05(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x5C052A30B9FCA449(iParam0, uParam1->f_70);
		}
		unk_0xEDE3A270F1277EA3(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAB256D7C8D6A4AC9(iParam0, 2, unk_0x234B68AC2E35ED5A(uParam1->f_77, 28));
		unk_0xAB256D7C8D6A4AC9(iParam0, 3, unk_0x234B68AC2E35ED5A(uParam1->f_77, 29));
		unk_0xAB256D7C8D6A4AC9(iParam0, 0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 30));
		unk_0xAB256D7C8D6A4AC9(iParam0, 1, unk_0x234B68AC2E35ED5A(uParam1->f_77, 31));
		unk_0x2AC1ECA957EB9158(iParam0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 10));
		if (unk_0x8F37B08BFE649B87(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xF7E38415C6027209(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iParam0)))
			{
				if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_171(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_171(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x6E74C4FAEF001064(iParam0, 1);
			}
			else
			{
				unk_0x149D9B4375AB4239(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_166(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE267416B80E7921F(uParam1->f_66) && !unk_0x8D367F0B53916265(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_40(iVar5 + 1)))
				{
					if (!unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
					{
						unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
				{
					unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((unk_0x6471F4759775FCA4(iParam0) == joaat("sheava") || unk_0x6471F4759775FCA4(iParam0) == joaat("omnis")) || unk_0x6471F4759775FCA4(iParam0) == joaat("le7b"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 0) == -1)
			{
				unk_0xB021D5C8EC8634FA(iParam0, 1, 0);
			}
		}
		if (((unk_0x48E10529AEAE00F9(uParam1->f_66) && unk_0x1C4692901D44F0EE(iParam0)) && !unk_0xEACFC87E44438F24(iParam0, joaat("avenger"))) && !((((Global_4456448.f_76587 == 6 || Global_4456448.f_76587 == 7) || Global_4456448.f_76587 == 18) || Global_4456448.f_76587 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_77, 23))
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 22))
				{
					unk_0x0DF115F2DFB9476F(iParam0, 2);
				}
				else
				{
					unk_0x0DF115F2DFB9476F(iParam0, 3);
				}
			}
			else
			{
				unk_0x0DF115F2DFB9476F(iParam0, 4);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 27))
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_166(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x7D867CDA26E248C7(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0DCD513510DC5D8A(*iParam0, 255);
				}
				else
				{
					unk_0x0DCD513510DC5D8A(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xB51972B58BF40F96(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD6844D3104C3ABBF(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_170(unk_0x6471F4759775FCA4(*iParam0), 1) && unk_0xB51972B58BF40F96(*iParam0, 24) != func_169(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6895CB0D4F2E7CDC(*iParam0, 24, func_169(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_168(iParam0);
	if (func_167(*iParam0))
	{
		unk_0xAC2B08493719B297(*iParam0, 1);
		unk_0xD4DF29F3D7B97053(*iParam0, 1);
	}
	return 1;
}

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xB51972B58BF40F96(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x00BA91AE0048DAC9(iParam0, iVar1, unk_0xB51972B58BF40F96(iParam0, iVar1)), 32);
				iVar2 = unk_0x15173FB88ABC94F9(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x15173FB88ABC94F9("MNU_CAGE") || iVar2 == unk_0x15173FB88ABC94F9("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_168(var uParam0)
{
	switch (unk_0x6471F4759775FCA4(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xB51972B58BF40F96(*uParam0, 4) == 0)
			{
				unk_0x6895CB0D4F2E7CDC(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD6844D3104C3ABBF(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6895CB0D4F2E7CDC(*uParam0, 24, 3, false);
			break;
	}
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x622E46C9F30FB60D(iParam0, 38);
		iVar1 = unk_0x622E46C9F30FB60D(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18848)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18850)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18854)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18851)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18858)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18856)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18861)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20806)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20807)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_171(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = unk_0xB51972B58BF40F96(iParam0, 24);
		iVar1 = unk_0xB7A74982A8F639B9(iParam0, 24);
		unk_0x29CE559068C8CC1D(iParam0, uParam1);
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("tornado6") || unk_0x6471F4759775FCA4(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 24);
		}
		else
		{
			unk_0x6895CB0D4F2E7CDC(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_172()
{
	return unk_0x14FA206D9CE730A9(-1691188696);
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
			{
				if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
				}
				return unk_0x234B68AC2E35ED5A(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!func_180(unk_0x1146A9AE09CE2B14(), -1))
		{
			iParam0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (func_176(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (func_175(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("FMDeliverableID", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "FMDeliverableID"))
		{
			return unk_0x05351AF95891EE5C(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_176(int iParam0)
{
	if (func_179(iParam0) == 233)
	{
		return func_177(iParam0);
	}
	return -1;
}

int func_177(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_178(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_181(iParam0, 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x7D2B9E6A64637269() == unk_0x27FC1B0077581B37(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_182(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_159(&(Global_76066.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0BABEFEA577FCFA4(Param0, Global_76066.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_155(iVar0);
			}
		}
		iVar0++;
	}
}

var func_183()
{
	return Global_105842.f_2890.f_12.f_66;
}

bool func_184()
{
	return func_130(&(Global_105842.f_2890));
}

void func_185()
{
	uLocal_3293 = unk_0x42AA2CCF0B61DCD8("BREAKING_NEWS");
	unk_0x16E516CA9C88FF48(joaat("jet"));
	unk_0x16E516CA9C88FF48(joaat("police3"));
	unk_0x16E516CA9C88FF48(joaat("maverick"));
	unk_0x16E516CA9C88FF48(joaat("bison"));
	unk_0x16E516CA9C88FF48(joaat("blista"));
	unk_0x16E516CA9C88FF48(joaat("ig_molly"));
	unk_0x16E516CA9C88FF48(joaat("cogcabrio"));
	unk_0x16E516CA9C88FF48(joaat("rapidgt"));
	unk_0x498685EB9132AF88(45, "BB_Chase");
	unk_0x498685EB9132AF88(35, "BB_Chase");
	unk_0x498685EB9132AF88(2, "BB_Chase");
	unk_0x498685EB9132AF88(54, "BB_Chase");
	unk_0x498685EB9132AF88(55, "BB_Chase");
	unk_0x498685EB9132AF88(67, "BB_Chase");
	func_187(1, "BB_Chase");
	if (func_23())
	{
		if (func_184())
		{
			if (!unk_0xE267416B80E7921F(func_183()) && !unk_0x48E10529AEAE00F9(func_183()))
			{
				func_141();
				while (!func_128())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!unk_0xA9C0BBFB9CBB66F1(joaat("jet")) || !unk_0xA9C0BBFB9CBB66F1(joaat("police3"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("maverick"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("bison"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("blista"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("ig_molly"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("cogcabrio"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!unk_0xDAE4BC89A198A6AF(uLocal_3293) || !func_186(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!unk_0x9CF7186A344D26A9(45, "BB_Chase") || !unk_0x9CF7186A344D26A9(35, "BB_Chase")) || !unk_0x9CF7186A344D26A9(2, "BB_Chase")) || !unk_0x9CF7186A344D26A9(54, "BB_Chase")) || !unk_0x9CF7186A344D26A9(55, "BB_Chase")) || !unk_0x9CF7186A344D26A9(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_186(int iParam0, char* sParam1)
{
	return unk_0x9CF7186A344D26A9(iParam0, sParam1);
}

void func_187(int iParam0, char* sParam1)
{
	unk_0x498685EB9132AF88(iParam0, sParam1);
}

void func_188()
{
	func_214();
	func_212();
	unk_0x1036762BD3781C84();
	unk_0x985CACB900CBBF03(0);
	unk_0xF5AFB6AFBDD3C8FD(0);
	unk_0xD6ABECE3CBB224B0(1);
	if (unk_0x4336DC3297C47528(iLocal_3220))
	{
		unk_0x23AD9DB85DF0B50D(iLocal_3220);
	}
	if (unk_0xA66693527106D3DF(uLocal_3221))
	{
		unk_0xF5A3E4A97D6F6DD4(uLocal_3221);
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 93.7701f);
	}
	if (unk_0x419E13582192CFEA(iLocal_3259))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3259))
			{
				unk_0x50B76EE36FBE865F(iLocal_3259);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3258))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
		{
			unk_0x0097E1CD6A252D2C(iLocal_3258, 0);
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
			{
				unk_0x50B76EE36FBE865F(iLocal_3258);
			}
		}
	}
	if (unk_0x176066ACB1B41C48(uLocal_3759))
	{
		unk_0x39448B5909AEB658(uLocal_3759, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3760))
	{
		unk_0x39448B5909AEB658(uLocal_3760, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3761))
	{
		unk_0x39448B5909AEB658(uLocal_3761, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3762))
	{
		unk_0x39448B5909AEB658(uLocal_3762, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3763))
	{
		unk_0x39448B5909AEB658(uLocal_3763, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3755[0]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[0], 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3755[1]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[1], 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3755[2]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[2], 0);
	}
	unk_0x4D2B6680250EFCC8();
	if (unk_0x419E13582192CFEA(iLocal_3222))
	{
		unk_0xC606AE2A3209945E(&iLocal_3222);
	}
	if (unk_0x419E13582192CFEA(iLocal_3228))
	{
		unk_0xC606AE2A3209945E(&iLocal_3228);
	}
	if (unk_0x419E13582192CFEA(iLocal_3245))
	{
		unk_0xC606AE2A3209945E(&iLocal_3245);
	}
	if (unk_0x419E13582192CFEA(iLocal_3246))
	{
		unk_0xC606AE2A3209945E(&iLocal_3246);
	}
	if (unk_0x419E13582192CFEA(iLocal_3247))
	{
		unk_0xC606AE2A3209945E(&iLocal_3247);
	}
	if (unk_0x419E13582192CFEA(iLocal_3248))
	{
		unk_0xC606AE2A3209945E(&iLocal_3248);
	}
	if (unk_0x419E13582192CFEA(iLocal_3249))
	{
		unk_0xC606AE2A3209945E(&iLocal_3249);
	}
	if (unk_0x419E13582192CFEA(iLocal_3250))
	{
		unk_0xC606AE2A3209945E(&iLocal_3250);
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[0]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3223[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[1]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3223[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[2]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3223[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[3]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3223[3]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[0]))
	{
		unk_0xC606AE2A3209945E(&(uLocal_3229[0]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[1]))
	{
		unk_0xC606AE2A3209945E(&(uLocal_3229[1]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[2]))
	{
		unk_0xC606AE2A3209945E(&(uLocal_3229[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[0]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[1]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[2]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[3]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[3]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[4]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[4]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[5]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[5]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[6]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[6]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[7]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[7]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[8]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[8]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[9]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[9]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[10]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3233[10]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3251[0]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3251[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3254[0]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3254[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3254[1]))
	{
		unk_0xC606AE2A3209945E(&(iLocal_3254[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3258))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3258);
	}
	if (unk_0x419E13582192CFEA(iLocal_3259))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iLocal_3259))
		{
			unk_0x4985CD0720AFD468(iLocal_3259, 1, 0);
		}
		unk_0x5420D0D520CF44D0(&iLocal_3259);
	}
	if (unk_0x419E13582192CFEA(iLocal_3264))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3264);
	}
	if (unk_0x419E13582192CFEA(iLocal_3265))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3265);
	}
	if (unk_0x419E13582192CFEA(iLocal_3266))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3266);
	}
	if (unk_0x419E13582192CFEA(iLocal_3267))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3267);
	}
	if (unk_0x419E13582192CFEA(iLocal_3271))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3271);
	}
	if (unk_0x419E13582192CFEA(iLocal_3275))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3275);
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[0]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3279[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[1]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3279[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[0]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3260[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[1]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3260[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[0]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3279[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[1]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3279[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3268[0]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3268[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3268[1]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3268[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3272[0]))
	{
		unk_0x5420D0D520CF44D0(&(iLocal_3272[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3263))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3263);
	}
	if (unk_0x419E13582192CFEA(iLocal_3282))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_3282);
	}
	if (unk_0x419E13582192CFEA(iLocal_3283))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_3283);
	}
	if (unk_0x419E13582192CFEA(iLocal_3284))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_3284);
	}
	unk_0xE76ABB7DC1AD1626();
	if (unk_0xB30CD10E2CD1B67D("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_MAIN_CHASE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_MAIN_CHASE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_CHOPPER_CAM"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_CHOPPER_CAM");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0xB30CD10E2CD1B67D("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xC0BBE340BE2AA02D("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x791B4C3811D53DFA(iLocal_3211);
	unk_0x791B4C3811D53DFA(iLocal_3213);
	unk_0x791B4C3811D53DFA(iLocal_3214);
	unk_0x791B4C3811D53DFA(iLocal_3215);
	unk_0x791B4C3811D53DFA(iLocal_3216);
	unk_0x791B4C3811D53DFA(iLocal_3217);
	unk_0x791B4C3811D53DFA(iLocal_3218);
	unk_0x791B4C3811D53DFA(iLocal_3219);
	unk_0x791B4C3811D53DFA(iLocal_3212);
	func_210(&uLocal_28, 0, 0);
	if (unk_0x0E8572B08CEB6A11(uLocal_3289))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_3289, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uLocal_3290))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_3290, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uLocal_3291))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_3291, 0);
	}
	func_189(1, 1);
	unk_0xF9135F131C423364("misssolomon_3");
	unk_0xF9135F131C423364("amb@world_human_clipboard@male@base");
	unk_0xF9135F131C423364("missheist_agency3aig_lift_waitped_a");
	unk_0x7B6B41ECBE4B733F(1, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(2, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(9, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(35, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(45, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(54, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(55, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(61, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(63, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(64, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(67, "BB_Chase");
	unk_0x7B6B41ECBE4B733F(68, "BB_CHASE");
	unk_0x7B6B41ECBE4B733F(69, "BB_Chase");
	unk_0x3D9BC07C93913E04(&uLocal_3293);
	unk_0xB5F867E143F78583("digitalOverlay");
}

void func_189(bool bParam0, bool bParam1)
{
	if (!unk_0xAB6A270F84A8781E(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_209();
		unk_0x45881466B05A8703(iLocal_2684);
		unk_0xE99504CC51D09E54(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x7BFD277DA739DB2B(unk_0x1146A9AE09CE2B14(), 1f);
			unk_0xF310607047A538D0(unk_0x1146A9AE09CE2B14(), 1);
			unk_0x817486F19ADBF54A(1);
		}
		if (bLocal_107)
		{
			unk_0x824F744352C8BC82(func_208());
		}
		unk_0x824F744352C8BC82(func_207());
		unk_0x824F744352C8BC82(func_206());
		unk_0x824F744352C8BC82(func_205());
		if (!unk_0x8B6A925F148E0E94() && !bParam0)
		{
			func_204();
			func_203();
			func_200();
		}
		else
		{
			func_196();
			func_195();
		}
		if (bParam1)
		{
			func_190(0);
		}
	}
}

void func_190(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 56)
	{
		func_191(iVar0, bParam0);
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_194(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_192(iParam0, 2, 1);
	}
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xC664C0067EEAB8D1(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_76() == 0)
		{
			uVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0xC664C0067EEAB8D1(&uVar0, iParam1);
			func_193(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_193(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, iParam3);
	}
}

void func_194(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_76() == 0)
		{
			uVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x191DDA30577F440A(&uVar0, iParam1);
			func_193(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2916[iVar0] = 0;
		Local_1963[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3105[iVar0] = 0;
		Local_2489[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3121[iVar0] = 0;
		Local_2535[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
}

void func_196()
{
	func_199();
	func_198();
	func_197();
}

void func_197()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[iVar0]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[iVar0]))
				{
					unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
				}
				iVar1 = unk_0x27FC1B0077581B37(iLocal_3121[iVar0], -1, 0);
				if (unk_0x419E13582192CFEA(iVar1) && iVar1 != unk_0x7D2B9E6A64637269())
				{
					if (unk_0xEE1D92A39CF8E1E6(iVar1))
					{
						unk_0xC606AE2A3209945E(&iVar1);
					}
				}
			}
			if (unk_0xEE1D92A39CF8E1E6(iLocal_3121[iVar0]))
			{
				unk_0x5420D0D520CF44D0(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0x7B6B41ECBE4B733F(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

void func_198()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x419E13582192CFEA(iLocal_3105[iVar0]))
		{
			if (unk_0xEE1D92A39CF8E1E6(iLocal_3105[iVar0]))
			{
				unk_0x5420D0D520CF44D0(&(iLocal_3105[iVar0]));
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_199()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x419E13582192CFEA(iLocal_2916[iVar0]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_2916[iVar0], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_2916[iVar0]))
				{
					unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
				}
				iVar1 = unk_0x27FC1B0077581B37(iLocal_2916[iVar0], -1, 0);
				if (unk_0x419E13582192CFEA(iVar1) && iVar1 != unk_0x7D2B9E6A64637269())
				{
					if (unk_0xEE1D92A39CF8E1E6(iVar1))
					{
						unk_0xC606AE2A3209945E(&iVar1);
					}
				}
			}
			if (unk_0xEE1D92A39CF8E1E6(iLocal_2916[iVar0]))
			{
				unk_0x5420D0D520CF44D0(&(iLocal_2916[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0x7B6B41ECBE4B733F(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[iVar0]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[iVar0]))
				{
					unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
				}
			}
			func_202(iLocal_3121[iVar0]);
			func_201(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0x7B6B41ECBE4B733F(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_201(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		unk_0x795957CD3A0042C8(&iParam0);
	}
}

void func_202(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar1 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0xECEC7528A52B4EE8(iVar1))
		{
			if (!iVar1 == unk_0x7D2B9E6A64637269())
			{
				fVar0 = unk_0x4DDAC4C80BACF92C(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x7B5530AB21BFC748(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0x82D2BB48A39F1E88(iVar1, 8192, 1);
				if (bLocal_108)
				{
					unk_0x82D2BB48A39F1E88(iVar1, 65536, 1);
					unk_0x82D2BB48A39F1E88(iVar1, 2, 0);
				}
				unk_0xA415F00D0E0DFBCE(iVar1, 6, 0);
			}
		}
	}
}

void func_203()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x419E13582192CFEA(iLocal_3105[iVar0]))
		{
			if (!unk_0xE50EB54E0F21BED0(iLocal_3105[iVar0], 0))
			{
				unk_0x3CBE9F07524C242D(iLocal_3105[iVar0], 1, 0);
			}
			func_201(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_204()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x419E13582192CFEA(iLocal_2916[iVar0]))
		{
			if (!unk_0xE50EB54E0F21BED0(iLocal_2916[iVar0], 0))
			{
				unk_0x3CBE9F07524C242D(iLocal_2916[iVar0], 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_2916[iVar0], 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_2916[iVar0]))
				{
					unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
				}
			}
			func_202(iLocal_2916[iVar0]);
			func_201(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0x7B6B41ECBE4B733F(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x824F744352C8BC82(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

int func_205()
{
	return joaat("s_m_y_cop_01");
}

int func_206()
{
	return joaat("police");
}

int func_207()
{
	return joaat("sultan");
}

int func_208()
{
	if (iLocal_2913 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2913;
}

void func_209()
{
	unk_0x3A28409F83158983();
	unk_0xE4158E25735AAF13(-1);
	unk_0xD510EA8DF3CF65AC(1);
	unk_0x64A84F7738997E3F(1);
	unk_0xCAFB54B99BF4F907(1f);
	unk_0xC460A3A85FF669A4(3);
	unk_0xA1515A94D43946F1(3);
}

void func_210(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
		{
			return;
		}
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD20D31BC4E3A72D3(iParam2);
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xD6ABECE3CBB224B0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4030103C8B148AFC(sVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4030103C8B148AFC(uParam0->f_3))
	{
		if (func_211(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_211(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

bool func_211(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_212()
{
	Global_19991 = 0;
	func_213();
}

void func_213()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_214()
{
	Global_19991 = 0;
	func_215();
}

void func_215()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_216()
{
	if (unk_0x575B7C28D81C0B4D(uLocal_3285))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_3285);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_3286))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_3286);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_3287))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_3287);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_3288))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_3288);
	}
}

void func_217()
{
	if (iLocal_3570 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3228))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
			{
				if (unk_0xA6E8FBD68548675F(iLocal_3228, unk_0x7D2B9E6A64637269(), 0))
				{
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0)
	{
		if (iLocal_3534 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3228))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
				{
					if (unk_0x419E13582192CFEA(iLocal_3222))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
						{
							if (unk_0xBF779C7C48AED2CE(iLocal_3222))
							{
								if (unk_0x620752C0B6B59FF1(iLocal_3222) > 18)
								{
									if (unk_0x419E13582192CFEA(iLocal_3284))
									{
										if (unk_0x5976053523EA16C8(iLocal_3284))
										{
											unk_0x3211C35423263392(iLocal_3284, 1, 1);
										}
									}
									uLocal_3210 = unk_0xD955F1CC0BCABC78(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0xAD844C8843FC405C(iLocal_3228, uLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x8ADA462BC5F42FD8(iLocal_3228, unk_0x7D2B9E6A64637269(), 9000, 1024, 3);
									iLocal_3534 = 1;
									iLocal_3535 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3228))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
				{
					if (unk_0xEEC203A73BC92E7E(uLocal_3210))
					{
						if (!iLocal_3535)
						{
							if (unk_0x0BC8768247440B3A(uLocal_3210) > 0.25f)
							{
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_218(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (unk_0x0BC8768247440B3A(uLocal_3210) > 0.99f)
						{
							uLocal_3210 = unk_0xD955F1CC0BCABC78(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0xAD844C8843FC405C(iLocal_3228, uLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3228))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
				{
					if (unk_0xEEC203A73BC92E7E(uLocal_3210))
					{
						if (unk_0x0E497F28E1A4E3F6(iLocal_3228, unk_0x15173FB88ABC94F9("ENDS_IN_RUN")))
						{
							unk_0x5C679902079A7E80(&uLocal_3292);
							unk_0xD9655A906159641D(0, -1115154469, 0);
							unk_0x28A5BAF912B4E14D(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_3292);
							unk_0x8A1AC8EBC73850C8(iLocal_3228, uLocal_3292);
							unk_0x8D5B447F21217223(&uLocal_3292);
							unk_0xEE90D1369E1800A2(iLocal_3228, -1115154469, 0, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3228))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
			{
				unk_0x5C679902079A7E80(&uLocal_3292);
				unk_0x28A5BAF912B4E14D(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_3292);
				unk_0x8A1AC8EBC73850C8(iLocal_3228, uLocal_3292);
				unk_0x8D5B447F21217223(&uLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_218(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_219()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = unk_0x5AD02BBC63E31E46();
		unk_0xA566E488BA0A0A4C("TRV_4_MCS_2", 8);
		unk_0x16E516CA9C88FF48(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x9745FAC5B3E4C8B8("Trev4_5"))
		{
			unk_0xB3081038630E7D72("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!unk_0x3E2C7717C449F4CB())
				{
					SYSTEM::WAIT(0);
				}
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_3222, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_3228, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_3266, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_220(1, 1, 1, 0, 0, 0, 0);
				unk_0xFB8A6909539A30B1("TRV4_SUCK_CS");
				unk_0x7E1C1B2FCF372776(0);
				iLocal_3183++;
				break;
			
			case 1:
				func_125();
				if (unk_0x30700B4AA35835FD("JET_TRV4", joaat("jet")))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
					{
						if (!unk_0xE50EB54E0F21BED0(iLocal_3266, 0))
						{
							unk_0xA2C015B68CE01357(iLocal_3266, 1);
						}
					}
				}
				if (unk_0x30700B4AA35835FD("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
					{
						unk_0xBE91B077ADADE97F(iLocal_3228, 1);
						unk_0x1DC2BF231DE6A016(iLocal_3228, unk_0x7D2B9E6A64637269(), 150f, -1, 0, 0);
						unk_0x8F160110753EB17B(iLocal_3228, 0);
						unk_0x1D7A4E9E23D306D6(iLocal_3228, 1);
						unk_0x3A653D4F5FA4B665(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (unk_0x30700B4AA35835FD("Michael", 0))
				{
					func_125();
					func_123(1);
				}
				if (!unk_0x43DDCE9C73E22D9D())
				{
					iLocal_3338 = 1;
					if (!unk_0x419E13582192CFEA(iLocal_3282))
					{
						if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3282 = unk_0x795434E153F90E41(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							unk_0xBDDCDEC7B6205897(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
							unk_0x79C3AEC4C7C91A54(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x824F744352C8BC82(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0x0513A10C6415B57C(0);
					func_220(0, 1, 1, 0, 0, 0, 0);
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
					if (!unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), 0, 2))
					{
						unk_0xD82D50E4AC0D46B9(unk_0x7D2B9E6A64637269(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_3181 = 2;
				}
				break;
			}
	}
	if (iLocal_3181 == 2)
	{
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

void func_220(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_228(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_227())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_226(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_228(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_226(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_224(unk_0x1146A9AE09CE2B14())) && !func_222(unk_0x1146A9AE09CE2B14(), 0)) && !func_221()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_224(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_221()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_222(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_223(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_224(int iParam0)
{
	if (func_222(iParam0, 0))
	{
		return 1;
	}
	if (func_225())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_225()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && iParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_227()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 13);
	}
}

void func_229()
{
	if (iLocal_3511 == 0)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		unk_0x366E7F593105797F(0, 22, 1);
		unk_0x366E7F593105797F(0, 25, 1);
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			unk_0x1A1227D4CEE3DA07(unk_0x7D2B9E6A64637269(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.975f);
			unk_0x1A1227D4CEE3DA07(unk_0x7D2B9E6A64637269(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		unk_0x16E516CA9C88FF48(joaat("prop_jet_bloodsplat_01"));
		unk_0xB2A9D75BBC6A614B("V_60_HangerRm");
		unk_0x20D884FB6567BAD5(5);
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 3, 0);
		unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		if (unk_0x419E13582192CFEA(iLocal_3222))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
			{
				if (unk_0xBF779C7C48AED2CE(iLocal_3222))
				{
					unk_0x3D7BB320AD56D5E3(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (unk_0x952AB441FA24BF16("Trv_4_747", 0, -1))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (unk_0xBF779C7C48AED2CE(iLocal_3222))
					{
						if (unk_0x620752C0B6B59FF1(iLocal_3222) > 20)
						{
							if (unk_0x419E13582192CFEA(iLocal_3266))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
								{
									func_234(&iLocal_3266);
									unk_0x4569EA65F1B056ED(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0x89E171705EA920DA(iLocal_3266, 1, 0, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (unk_0xBF779C7C48AED2CE(iLocal_3222))
					{
						if (unk_0x620752C0B6B59FF1(iLocal_3222) > 23)
						{
							unk_0xCA089CD1A17D76DF(iLocal_3222);
							if (unk_0x419E13582192CFEA(iLocal_3266))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
								{
									if (!unk_0xB30CD10E2CD1B67D("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xB84B43B766630B5C("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_3209 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0xADAE2D0345EF09F9(uLocal_3209, iLocal_3266, unk_0xED5AD56E2C551D1E(iLocal_3266, "chassis_Control"));
									unk_0xAD844C8843FC405C(iLocal_3222, uLocal_3209, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0x1C6FA6A93BF99EA4(uLocal_3209, 1);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						Local_3318 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
						if (Local_3318.f_1 < -2965f)
						{
							unk_0x48A41E0B6D206A79(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
							unk_0xB0C1A43193C25F7A(unk_0x7D2B9E6A64637269(), iLocal_3222, 0);
							unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_3222))
			{
				unk_0xD20D31BC4E3A72D3(0);
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
				if (unk_0x419E13582192CFEA(iLocal_3233[0]))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3233[0]))
					{
						unk_0xCA089CD1A17D76DF(iLocal_3233[0]);
						unk_0xBE91B077ADADE97F(iLocal_3233[0], 0);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (unk_0x419E13582192CFEA(iLocal_3283))
					{
						if (unk_0xDA872572A987B2AD(iLocal_3283, iLocal_3222))
						{
							if (unk_0x698F51FB33ADAF7B(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0x0BC8768247440B3A(uLocal_3209) > 0.59f)
								{
									unk_0x3211C35423263392(iLocal_3283, 1, 1);
									if (unk_0x575B7C28D81C0B4D(uLocal_3285))
									{
										unk_0x1AD5BCFEC31BB8D9(&uLocal_3285);
									}
									if (!unk_0x575B7C28D81C0B4D(uLocal_3288))
									{
										func_218(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0xB30CD10E2CD1B67D("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xC0BBE340BE2AA02D("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0xB30CD10E2CD1B67D("SOL_3_LOSE_COPS"))
										{
											unk_0xB84B43B766630B5C("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0)
		{
			if (iLocal_3473 == 1 && SYSTEM::TIMERB() > 2500)
			{
				uLocal_3288 = func_231(iLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0)
		{
			if (iLocal_3515 == 1 && iLocal_3514 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					unk_0x2DC2890038BFF758(10f, 2f, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
			{
				if (unk_0x698F51FB33ADAF7B(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0x0BC8768247440B3A(uLocal_3209) > 0.89f)
					{
						if (unk_0x419E13582192CFEA(iLocal_3266))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
							{
								unk_0xC606AE2A3209945E(&iLocal_3222);
								unk_0x4A95E0F654DD603E("scr_trev4_747_blood_impact", iLocal_3266, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_3764 = unk_0x48558536A19BA88A("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0x4569EA65F1B056ED(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3192 = unk_0xDFB7BFA6482FEE1E();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 574)
			{
				if (!unk_0x419E13582192CFEA(iLocal_3282))
				{
					if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3282 = unk_0x795434E153F90E41(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						unk_0xBDDCDEC7B6205897(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						unk_0x79C3AEC4C7C91A54(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x824F744352C8BC82(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3568 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_3266))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
						{
							unk_0x4A95E0F654DD603E("scr_trev4_747_engine_debris", iLocal_3266, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0x89E171705EA920DA(iLocal_3266, 0, 0, 0);
							func_230();
							unk_0x791B4C3811D53DFA(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 300)
				{
					if (unk_0x176066ACB1B41C48(uLocal_3764))
					{
						unk_0x39448B5909AEB658(uLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 700)
				{
					if (unk_0x419E13582192CFEA(iLocal_3266))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0x48558536A19BA88A("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 1000)
				{
					if (unk_0x176066ACB1B41C48(uLocal_3764))
					{
						unk_0x39448B5909AEB658(uLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 1400)
				{
					if (unk_0x419E13582192CFEA(iLocal_3266))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0x48558536A19BA88A("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_3763 = unk_0x48558536A19BA88A("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3192 + 3500)
				{
					if (unk_0x176066ACB1B41C48(uLocal_3764))
					{
						unk_0x39448B5909AEB658(uLocal_3764, 0);
					}
					if (unk_0x419E13582192CFEA(iLocal_3266))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3266, 0))
						{
							unk_0x3A653D4F5FA4B665(iLocal_3266, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0)
		{
			if (iLocal_3473 == 1)
			{
				if (iLocal_3538 == 0)
				{
					if (!unk_0x397C98A5552886EB(iLocal_3283))
					{
						iLocal_3202 = unk_0xDFB7BFA6482FEE1E();
						iLocal_3538 = 1;
					}
				}
				else if (unk_0xDFB7BFA6482FEE1E() > iLocal_3202 + 2000)
				{
					unk_0xA2C015B68CE01357(iLocal_3283, 1);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (unk_0x419E13582192CFEA(iLocal_3266))
				{
					unk_0xA2C015B68CE01357(iLocal_3266, 0);
					iLocal_3542 = 1;
				}
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3283))
		{
			if (unk_0x575B7C28D81C0B4D(uLocal_3288))
			{
				if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3283, 1) < 1.5f && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0x9B0169E27978C1A2(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x1AD5BCFEC31BB8D9(&uLocal_3288);
					unk_0x04F4D55F2C0C756D(&iLocal_3283);
					func_125();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_230()
{
	if (unk_0x176066ACB1B41C48(uLocal_3759))
	{
		unk_0x39448B5909AEB658(uLocal_3759, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3760))
	{
		unk_0x39448B5909AEB658(uLocal_3760, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3761))
	{
		unk_0x39448B5909AEB658(uLocal_3761, 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3762))
	{
		unk_0x39448B5909AEB658(uLocal_3762, 0);
	}
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1, 0);
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_233(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, iParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_233(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, iParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_233(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_234(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xE50EB54E0F21BED0(*iParam0, 0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		uLocal_3759 = unk_0x48558536A19BA88A("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1065353216, 0, 0, 0);
		uLocal_3760 = unk_0x48558536A19BA88A("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1065353216, 0, 0, 0);
		uLocal_3761 = unk_0x48558536A19BA88A("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1065353216, 0, 0, 0);
		uLocal_3762 = unk_0x48558536A19BA88A("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1065353216, 0, 0, 0);
	}
}

void func_235()
{
	if (unk_0x419E13582192CFEA(iLocal_3222))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
		{
			if (unk_0xBF779C7C48AED2CE(iLocal_3222))
			{
				if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3222, 1) < 17f)
				{
					unk_0x3D7BB320AD56D5E3(iLocal_3222, 3f, 1);
				}
				if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3222, 1) < 22f && func_16(unk_0x7D2B9E6A64637269(), iLocal_3222, 1) > 17f)
				{
					unk_0x3D7BB320AD56D5E3(iLocal_3222, 2f, 1);
				}
				if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !unk_0xB4E725A8915BDF60(iLocal_3222))
				{
					if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3222, 1) > 22f)
					{
						unk_0x3D7BB320AD56D5E3(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3222, 1) > 22f)
				{
					unk_0x3D7BB320AD56D5E3(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			unk_0x366E7F593105797F(0, 22, 1);
			unk_0x366E7F593105797F(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.98f);
			unk_0x1A1227D4CEE3DA07(unk_0x7D2B9E6A64637269(), fLocal_3326);
		}
		if (!unk_0x419E13582192CFEA(iLocal_3266))
		{
			unk_0x16E516CA9C88FF48(joaat("jet"));
			if (unk_0xA9C0BBFB9CBB66F1(joaat("jet")))
			{
				iLocal_3266 = unk_0x170478CC84C8AE2F(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xF7E38415C6027209(iLocal_3266, 2);
				unk_0x764D10CFB2EDD065(iLocal_3266, 0);
				unk_0xA2C015B68CE01357(iLocal_3266, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x824F744352C8BC82(joaat("jet"));
				unk_0x83E421E5A4A2A512(iLocal_3266, 500);
			}
		}
		if (!unk_0x419E13582192CFEA(iLocal_3228))
		{
			unk_0x16E516CA9C88FF48(joaat("s_m_y_airworker"));
			unk_0x068BDE31F7D112BB("misssolomon_3");
			unk_0x16E516CA9C88FF48(joaat("p_amb_clipboard_01"));
			if ((unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_airworker")) && unk_0x0EC2B29D4172D225("misssolomon_3")) && unk_0xA9C0BBFB9CBB66F1(joaat("p_amb_clipboard_01")))
			{
				iLocal_3228 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				unk_0x3A653D4F5FA4B665(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x1D7A4E9E23D306D6(iLocal_3228, 0);
				unk_0xBE91B077ADADE97F(iLocal_3228, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 = unk_0x795434E153F90E41(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				unk_0x0F1058706D5A58B4(iLocal_3284, iLocal_3228, unk_0xA79DFB802C09F5F5(iLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_3210 = unk_0xD955F1CC0BCABC78(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0xAD844C8843FC405C(iLocal_3228, uLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x824F744352C8BC82(joaat("s_m_y_airworker"));
				unk_0x824F744352C8BC82(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x419E13582192CFEA(iLocal_3233[0]))
		{
			unk_0x16E516CA9C88FF48(joaat("s_m_y_cop_01"));
			if (unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_cop_01")))
			{
				iLocal_3233[0] = unk_0x0FDCFECB2EF2BC1C(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				unk_0xD82D50E4AC0D46B9(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xF8207455457B967E(iLocal_3233[0], 20);
				unk_0x46EDFC827DC67D89(iLocal_3233[0], 1, 1);
				unk_0xBE91B077ADADE97F(iLocal_3233[0], 1);
				unk_0x2AA99ECF9FBD1E5D(iLocal_3233[0], unk_0x7D2B9E6A64637269(), -1, 1);
				func_127(iLocal_3233[0], 0);
			}
		}
		if (!unk_0x419E13582192CFEA(iLocal_3267))
		{
			unk_0x16E516CA9C88FF48(joaat("shamal"));
			if (unk_0xA9C0BBFB9CBB66F1(joaat("shamal")))
			{
				iLocal_3267 = unk_0x170478CC84C8AE2F(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
				unk_0x94F15E506D091111(iLocal_3267, 0, 0, 1);
				unk_0x47D0DDD8833C5E5F(iLocal_3267, 1084227584);
				unk_0x824F744352C8BC82(joaat("shamal"));
				unk_0xC595907BB71C921D(iLocal_3267, 2000, 0);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3267))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3267, 0))
			{
				if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3267, 1) > 5f)
				{
					unk_0x94F15E506D091111(iLocal_3267, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				unk_0x8BA9BCDD56AA7115(0);
			}
			func_120();
			func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_189(0, 1);
		unk_0x7B6B41ECBE4B733F(45, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(35, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(2, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(54, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(1, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(9, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(61, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(63, "BB_CHASE");
		unk_0x7B6B41ECBE4B733F(64, "BB_CHASE");
		unk_0x3D9BC07C93913E04(&uLocal_3293);
		unk_0xB5F867E143F78583("digitalOverlay");
		if (unk_0x419E13582192CFEA(iLocal_3258))
		{
			unk_0x0097E1CD6A252D2C(iLocal_3258, 0);
			unk_0x795957CD3A0042C8(&iLocal_3258);
		}
		if (unk_0x419E13582192CFEA(iLocal_3271))
		{
			unk_0x5420D0D520CF44D0(&iLocal_3271);
		}
		if (unk_0x419E13582192CFEA(iLocal_3254[0]))
		{
			unk_0xC606AE2A3209945E(&(iLocal_3254[0]));
		}
		if (unk_0x419E13582192CFEA(iLocal_3260[0]))
		{
			unk_0x5420D0D520CF44D0(&(iLocal_3260[0]));
		}
		unk_0xDA025166B7151B37(0);
		unk_0x39880245189173A7(1);
		if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
		{
			if (!unk_0x575B7C28D81C0B4D(uLocal_3285))
			{
				uLocal_3285 = unk_0xB20BB447C131B310(iLocal_3222);
				unk_0xB592493CDC7124C3(uLocal_3285, 1);
			}
		}
		unk_0x8FF71A24509DA743("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!unk_0x964C4D363AF812CB(iLocal_3219))
			{
				unk_0x791B4C3811D53DFA(iLocal_3219);
			}
			unk_0xBAB6F7501A822416(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		unk_0x20D884FB6567BAD5(5);
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 3, 0);
		unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		unk_0xFB8A6909539A30B1("TRV4_RUN");
		if (!unk_0x419E13582192CFEA(iLocal_3266))
		{
			unk_0x16E516CA9C88FF48(joaat("jet"));
		}
		if (!unk_0x419E13582192CFEA(iLocal_3228))
		{
			unk_0x16E516CA9C88FF48(joaat("s_m_y_airworker"));
		}
		unk_0x16E516CA9C88FF48(joaat("shamal"));
		unk_0x16E516CA9C88FF48(joaat("s_m_y_cop_01"));
		unk_0x16E516CA9C88FF48(joaat("police3"));
		unk_0x16E516CA9C88FF48(joaat("p_amb_clipboard_01"));
		unk_0x498685EB9132AF88(68, "BB_Chase");
		unk_0x498685EB9132AF88(69, "BB_Chase");
		unk_0x068BDE31F7D112BB("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (unk_0x9745FAC5B3E4C8B8("Trev4_5"))
		{
			unk_0xB3081038630E7D72("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_24())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
			{
				if (!unk_0xBF779C7C48AED2CE(iLocal_3222))
				{
					unk_0xD9F4B63D8750476C(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					unk_0x4261814A9A26E86F(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
		{
			if (unk_0xBF779C7C48AED2CE(iLocal_3222))
			{
				if (unk_0x620752C0B6B59FF1(iLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					unk_0x3D7BB320AD56D5E3(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
			{
				unk_0x16D66F11FE644901(iLocal_3222);
				unk_0x78CDDD1E6367978D(iLocal_3222, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				unk_0xD9F4B63D8750476C(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				unk_0x4261814A9A26E86F(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_236(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (iLocal_3336)
		{
			func_226(0, 1, 1, 0);
			unk_0x6FA8221C9D2ECB46(uLocal_3289, 0);
			unk_0x09F9466B03D29D2D(false, 0, 3000, 1, 0, 0);
			unk_0xDD7C2F9844E745B1(1);
			if (unk_0xB30CD10E2CD1B67D("SOL_3_CHOPPER_CAM"))
			{
				unk_0xC0BBE340BE2AA02D("SOL_3_CHOPPER_CAM");
			}
			unk_0x791B4C3811D53DFA(iLocal_3219);
			func_246();
			unk_0x39880245189173A7(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		unk_0xFB8A6909539A30B1("TRV4_FAIL");
		sLocal_3577 = sParam0;
		unk_0x1036762BD3781C84();
		func_214();
		func_212();
		func_237(sLocal_3577);
		iLocal_3437 = 1;
	}
}

void func_237(char* sParam0)
{
	func_245(sParam0);
	func_238(0);
}

void func_238(int iParam0)
{
	int iVar0;
	
	if (Global_112293.f_9083 || func_432(0))
	{
		iVar0 = func_8();
		if (!func_239(iVar0))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
		Global_99406 = iParam0;
	}
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_244();
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xD91B27582ECB3B74(5000);
	}
	iVar0 = Global_90122[iParam0 /*5*/];
	iVar1 = Global_77517.f_109[iVar0 /*4*/];
	func_243(iVar1, 1);
	unk_0xEB25B6CFBE0FD35C(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	func_240(&(Global_112293.f_2361.f_539), iVar1);
	if (Global_93545 == Global_99407)
	{
		Global_112293.f_9083.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_90158[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x79B648063E94A67F(0);
		}
	}
	Global_112293.f_9083.f_330[iVar1 /*6*/].f_2++;
	Global_93545 = Global_99407;
	if (iParam0 == -1)
	{
		if (Global_112293.f_9083)
		{
		}
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_240(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_112293.f_18531[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_242(Global_112293.f_18531[iVar0], &Var2, &fVar5))
			{
				Global_112293.f_18531[iVar0] = 318;
				func_241(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96760[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_9 = 0f;
				Global_96760[iVar0 /*29*/].f_12 = 0f;
				Global_96760[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_10 = 0f;
				Global_96760[iVar0 /*29*/].f_13 = 0f;
				Global_96760[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_11 = 0f;
				Global_96760[iVar0 /*29*/].f_14 = 0f;
				Global_96760[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_26 = 0f;
				Global_96760[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_27 = 0f;
				Global_96760[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	*uParam0 = -15;
}

int func_242(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_242(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_242(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_243(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93355[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93355[iParam0 /*2*/] = 0;
	}
}

void func_244()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_107())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
	}
	else if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_107())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 25);
	}
}

void func_245(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		if (unk_0xA3A3E3B836DB6D5B(sParam0) <= 16)
		{
			StringCopy(&Global_77480, sParam0, 16);
			StringCopy(&Global_77484, "", 16);
			if (unk_0x2D54F00919E36B63())
			{
				unk_0xAD9DFA8200EA2A8A();
			}
		}
	}
}

void func_246()
{
	Global_62105 = 0;
}

void func_247()
{
	if (!unk_0x419E13582192CFEA(iLocal_3266))
	{
		if (unk_0x419E13582192CFEA(iLocal_3258))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 30000f)
					{
						unk_0x16E516CA9C88FF48(joaat("jet"));
						if (unk_0xA9C0BBFB9CBB66F1(joaat("jet")))
						{
							iLocal_3266 = unk_0x170478CC84C8AE2F(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
							unk_0xF7E38415C6027209(iLocal_3266, 2);
							unk_0x764D10CFB2EDD065(iLocal_3266, 0);
							unk_0xA2C015B68CE01357(iLocal_3266, 1);
							unk_0x3A653D4F5FA4B665(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
							unk_0x824F744352C8BC82(joaat("jet"));
							unk_0x83E421E5A4A2A512(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_347();
	if (unk_0x575B7C28D81C0B4D(uLocal_3285))
	{
		func_346(uLocal_3285, iLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			unk_0x99E30C16BD6C3847(unk_0x7D2B9E6A64637269(), 0);
		}
		func_345();
		func_313();
		if (iLocal_3402 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[20]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3121[20], 0))
				{
					unk_0x89E171705EA920DA(iLocal_3121[20], 1, 1, 0);
					unk_0x4B43AFBD2CEE7724(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_312();
		func_311();
		if (iLocal_3349 == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						func_310(uLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
			{
				func_309(uLocal_3289, iLocal_3271, fLocal_3323);
				unk_0xEF20E9A7B745D17A(uLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if ((unk_0x730551DCA699D643(iLocal_3258) > 15000f && unk_0x730551DCA699D643(iLocal_3258) < 125464f) && func_301(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							unk_0x66AE54CE92457FEE(1);
							func_300("TRV4_HELP1", -1);
							func_293(1);
							func_210(&uLocal_28, 0, 0);
							unk_0xD6ABECE3CBB224B0(0);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
			{
				if (unk_0xDAE4BC89A198A6AF(uLocal_3293) && func_186(1, "BB_Chase"))
				{
					if (((unk_0x730551DCA699D643(iLocal_3258) > 15000f && unk_0x730551DCA699D643(iLocal_3258) < 125464f) && iLocal_3437 == 0) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						func_271();
					}
					if (unk_0x730551DCA699D643(iLocal_3258) > 125464f || !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (iLocal_3336)
						{
							unk_0x66AE54CE92457FEE(1);
							func_226(0, 1, 1, 0);
							unk_0x6FA8221C9D2ECB46(uLocal_3289, 0);
							unk_0x09F9466B03D29D2D(false, 0, 3000, 1, 0, 0);
							unk_0xDD7C2F9844E745B1(1);
							if (unk_0xB30CD10E2CD1B67D("SOL_3_CHOPPER_CAM"))
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_CHOPPER_CAM");
							}
							unk_0x791B4C3811D53DFA(iLocal_3219);
							func_246();
							unk_0x39880245189173A7(1);
							iLocal_3365[2] = 0;
							iLocal_3336 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3182)
		{
			case 0:
				if (iLocal_3571[0] == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 44255f && unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								unk_0x2DC2890038BFF758(10f, 2f, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 52875f && unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								unk_0x2DC2890038BFF758(6f, 2f, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 87085f && unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								unk_0x2DC2890038BFF758(10f, 2f, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_270();
				func_269();
				if (!unk_0xB30CD10E2CD1B67D("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 64280f && unk_0x730551DCA699D643(iLocal_3258) < 72000f)
								{
									if (unk_0x0BABEFEA577FCFA4(-1149.6f, -2323.7f, 22.5f, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1) < 130f)
									{
										unk_0xB84B43B766630B5C("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 72500f)
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 78000f && unk_0x730551DCA699D643(iLocal_3258) < 85000f)
								{
									unk_0xB84B43B766630B5C("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 85500f)
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 100000f && unk_0x730551DCA699D643(iLocal_3258) < 107000f)
								{
									unk_0xB84B43B766630B5C("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 107500f)
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) < 10000f)
							{
								func_268();
							}
						}
					}
				}
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) < 30000f)
						{
							func_267(iLocal_3258, unk_0x730551DCA699D643(iLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 22000f)
							{
								unk_0x8A54885A635DC8D1("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						unk_0xFB8A6909539A30B1("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (func_16(iLocal_3258, unk_0x7D2B9E6A64637269(), 1) < 170f && unk_0xB4E725A8915BDF60(iLocal_3258))
						{
							if (unk_0x575B7C28D81C0B4D(uLocal_3287))
							{
								unk_0x1AD5BCFEC31BB8D9(&uLocal_3287);
							}
							if (unk_0xB30CD10E2CD1B67D("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0xB30CD10E2CD1B67D("SOL_3_MAIN_CHASE"))
							{
								unk_0xB84B43B766630B5C("SOL_3_MAIN_CHASE");
							}
							if (!unk_0x575B7C28D81C0B4D(uLocal_3285))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
								{
									uLocal_3285 = unk_0xB20BB447C131B310(iLocal_3222);
									unk_0xB592493CDC7124C3(uLocal_3285, 1);
								}
							}
							unk_0xA2A7DE2914591E35();
							if (!unk_0x123480158F10FA67())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0xFB8A6909539A30B1("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (unk_0x575B7C28D81C0B4D(uLocal_3287))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_3287);
						}
						if (!unk_0x575B7C28D81C0B4D(uLocal_3285))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
							{
								uLocal_3285 = unk_0xB20BB447C131B310(iLocal_3222);
								unk_0xB592493CDC7124C3(uLocal_3285, 1);
							}
						}
						unk_0xA2A7DE2914591E35();
						if (!unk_0x123480158F10FA67())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0xFB8A6909539A30B1("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					unk_0x16E516CA9C88FF48(joaat("jet"));
					if (unk_0xA9C0BBFB9CBB66F1(joaat("jet")))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 18490f)
								{
									iLocal_3260[1] = unk_0x170478CC84C8AE2F(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1, 0);
									unk_0x069557E67CC67C29(iLocal_3260[1], 2, "BB_Chase", 1);
									unk_0x824F744352C8BC82(joaat("jet"));
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3260[1]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3260[1], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3260[1]))
						{
							unk_0xEA5C7C61843816D5(iLocal_3260[1], fLocal_3323);
							if (unk_0x730551DCA699D643(iLocal_3260[1]) > 20000f)
							{
								if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3260[1], 1) > 200f && !unk_0xB4E725A8915BDF60(iLocal_3260[1]))
								{
									unk_0x50B76EE36FBE865F(iLocal_3260[1]);
									if (unk_0x419E13582192CFEA(iLocal_3254[1]))
									{
										unk_0xC606AE2A3209945E(&(iLocal_3254[1]));
									}
									unk_0x5420D0D520CF44D0(&(iLocal_3260[1]));
									iLocal_3207 = unk_0xDFB7BFA6482FEE1E() + 1000;
								}
							}
							if (unk_0x419E13582192CFEA(iLocal_3260[1]))
							{
								if (unk_0x730551DCA699D643(iLocal_3260[1]) > 31543f)
								{
									unk_0x50B76EE36FBE865F(iLocal_3260[1]);
									unk_0xA2C015B68CE01357(iLocal_3260[1], 1);
								}
							}
						}
						else if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3260[1], 1) > 200f && !unk_0xB4E725A8915BDF60(iLocal_3260[1]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3254[1]))
							{
								unk_0xC606AE2A3209945E(&(iLocal_3254[1]));
							}
							unk_0x5420D0D520CF44D0(&(iLocal_3260[1]));
							iLocal_3207 = unk_0xDFB7BFA6482FEE1E() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!unk_0x419E13582192CFEA(iLocal_3265))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 23000f)
								{
									unk_0x16E516CA9C88FF48(joaat("tanker"));
									if (unk_0xA9C0BBFB9CBB66F1(joaat("tanker")))
									{
										iLocal_3265 = unk_0x170478CC84C8AE2F(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1, 0);
										unk_0x824F744352C8BC82(joaat("tanker"));
										unk_0xC612552622E74D36(iLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[1]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[1], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[1]))
						{
							if (unk_0x730551DCA699D643(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0.5f;
									iLocal_3245 = unk_0x27FC1B0077581B37(iLocal_3121[1], -1, 0);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					unk_0xF96EF441E3943DF4(-1325f, -2779f, 14f);
					if (unk_0x419E13582192CFEA(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							unk_0xC612552622E74D36(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (unk_0x419E13582192CFEA(iLocal_3265))
						{
							if (!unk_0xE50EB54E0F21BED0(iLocal_3121[1], 0))
							{
								if (!unk_0xE50EB54E0F21BED0(iLocal_3265, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[1]))
									{
										unk_0xC08E749A208F1CB3(iLocal_3121[1], iLocal_3265, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_3265))
					{
						if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 41430f)
									{
										unk_0x3211C35423263392(iLocal_3265, 1, 1);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[1], 0))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 42700f)
								{
									if (unk_0x419E13582192CFEA(iLocal_3245))
									{
										if (!unk_0xECEC7528A52B4EE8(iLocal_3245))
										{
											unk_0xC595907BB71C921D(iLocal_3245, 0, 0);
										}
									}
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[1]))
									{
										unk_0x50B76EE36FBE865F(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 38000f)
								{
									if (unk_0x419E13582192CFEA(iLocal_3121[1]) && unk_0xBFCE58B2B3249999(iLocal_3121[1], 0))
									{
										unk_0xE2D24A37AFCF27BF(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, 0, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 39000f)
								{
									if (!unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xB84B43B766630B5C("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										unk_0x3A653D4F5FA4B665(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 41611f)
								{
									if (unk_0x419E13582192CFEA(iLocal_3265))
									{
										if (!unk_0xE50EB54E0F21BED0(iLocal_3265, 0))
										{
											if (unk_0x419E13582192CFEA(iLocal_3121[7]))
											{
												if (!unk_0xE50EB54E0F21BED0(iLocal_3121[7], 0))
												{
													unk_0xE2D24A37AFCF27BF(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3265, 0, 0, 0);
													unk_0x50B76EE36FBE865F(iLocal_3121[7]);
													unk_0xF4C21F6414CF1653(iLocal_3121[7], 1, 0);
													unk_0xF4C21F6414CF1653(iLocal_3265, 1, 0);
													unk_0x8B84CFCA87CEA22E(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0x8B84CFCA87CEA22E(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0x795957CD3A0042C8(&iLocal_3265);
													unk_0x795957CD3A0042C8(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 43204f)
								{
									if (unk_0xB30CD10E2CD1B67D("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xC0BBE340BE2AA02D("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x315DA2F7337A8638("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										unk_0x3A653D4F5FA4B665(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0xB30CD10E2CD1B67D("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[0]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[0], 0))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 36000f && unk_0x730551DCA699D643(iLocal_3258) < 40000f)
										{
											unk_0xB84B43B766630B5C("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3121[0]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[0], 0))
					{
						if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 43204f)
									{
										unk_0xC0BBE340BE2AA02D("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 60500f)
							{
								unk_0x16E516CA9C88FF48(joaat("jet"));
							}
							if (unk_0x730551DCA699D643(iLocal_3258) > 66500f)
							{
								if (unk_0xA9C0BBFB9CBB66F1(joaat("jet")))
								{
									iLocal_3260[0] = unk_0x170478CC84C8AE2F(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1, 0);
									unk_0x8F160110753EB17B(iLocal_3260[0], 1);
									unk_0xF7E38415C6027209(iLocal_3260[0], 2);
									unk_0x069557E67CC67C29(iLocal_3260[0], 35, "BB_Chase", 1);
									unk_0x2978CEBD6EE3E821(iLocal_3260[0], 3491f);
									unk_0x824F744352C8BC82(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3260[0]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3260[0], 0))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3260[0]))
								{
									unk_0xEA5C7C61843816D5(iLocal_3260[0], fLocal_3323);
									if (unk_0x730551DCA699D643(iLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], unk_0x7D2B9E6A64637269(), 1) > 200f)
										{
											unk_0x50B76EE36FBE865F(iLocal_3260[0]);
										}
									}
								}
								else if (unk_0x730551DCA699D643(iLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], unk_0x7D2B9E6A64637269(), 1) > 200f && !unk_0xB4E725A8915BDF60(iLocal_3260[0]))
									{
										if (unk_0x419E13582192CFEA(iLocal_3254[0]))
										{
											unk_0xC606AE2A3209945E(&(iLocal_3254[0]));
										}
										unk_0x5420D0D520CF44D0(&(iLocal_3260[0]));
										iLocal_3207 = unk_0xDFB7BFA6482FEE1E() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3399 == 0)
				{
					if (iLocal_3398 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 50000f)
									{
										unk_0x16E516CA9C88FF48(joaat("s_m_y_airworker"));
										unk_0x068BDE31F7D112BB("misstrevor4");
										if (unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_airworker")))
										{
											iLocal_3246 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_3247 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											unk_0xBE91B077ADADE97F(iLocal_3246, 1);
											unk_0xBE91B077ADADE97F(iLocal_3247, 1);
											unk_0x824F744352C8BC82(joaat("s_m_y_airworker"));
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 58000f)
								{
									if (!unk_0xECEC7528A52B4EE8(iLocal_3246))
									{
										if (unk_0x0EC2B29D4172D225("misstrevor4"))
										{
											if (!unk_0x698F51FB33ADAF7B(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0x4261814A9A26E86F(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0xECEC7528A52B4EE8(iLocal_3247))
									{
										if (unk_0x0EC2B29D4172D225("misstrevor4"))
										{
											if (!unk_0x698F51FB33ADAF7B(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0x4261814A9A26E86F(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_3246))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3246))
					{
						if (!unk_0x698F51FB33ADAF7B(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x419E13582192CFEA(iLocal_3247))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_3247))
								{
									if (!unk_0x698F51FB33ADAF7B(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0xF9135F131C423364("misstrevor4");
										unk_0x0F3BD19FF11738D3(&iLocal_3246);
										unk_0x0F3BD19FF11738D3(&iLocal_3247);
									}
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[8]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[8]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												unk_0xEA5C7C61843816D5(iLocal_3121[8], 1f);
												if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3121[8], 1) < 100f)
												{
													unk_0x36BB8F00E3205417(0.3f);
													iLocal_3373 = 0;
													if (!unk_0xB30CD10E2CD1B67D("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xB84B43B766630B5C("SOL_3_CAR_JET_ENGINE");
													}
													unk_0x813E6E9F3A82143F(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0x46EDFC827DC67D89(iLocal_3121[8], 1, 1);
												unk_0x66B785A2E38AFE05(iLocal_3121[8], 1, 0);
												unk_0xE2D24A37AFCF27BF(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], 0, 0, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (unk_0xB30CD10E2CD1B67D("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xC0BBE340BE2AA02D("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x36BB8F00E3205417(1f);
												iLocal_3373 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												unk_0x50B76EE36FBE865F(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 50200f)
									{
										if (!unk_0x397C98A5552886EB(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												unk_0xE2D24A37AFCF27BF(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], 0, 0, 0);
												unk_0xF4C21F6414CF1653(iLocal_3121[8], 1, 0);
												iLocal_3385 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3373 == 0)
					{
						if (iLocal_3330 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (unk_0xB30CD10E2CD1B67D("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xC0BBE340BE2AA02D("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x36BB8F00E3205417(1f);
								iLocal_3373 = 1;
							}
						}
					}
				}
				else if (iLocal_3373 == 0)
				{
					if (iLocal_3330 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (unk_0xB30CD10E2CD1B67D("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xC0BBE340BE2AA02D("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x36BB8F00E3205417(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[11]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[11], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[11]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												unk_0xE2D24A37AFCF27BF(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], 0, 0, 0);
												iLocal_3331 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3331 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!unk_0x397C98A5552886EB(iLocal_3121[11]))
													{
														unk_0x50B76EE36FBE865F(iLocal_3121[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!unk_0x397C98A5552886EB(iLocal_3121[11]))
								{
									unk_0xE2D24A37AFCF27BF(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], 0, 0, 0);
									unk_0xF4C21F6414CF1653(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[12]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[12], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[12]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												unk_0xE2D24A37AFCF27BF(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], 0, 0, 0);
												iLocal_3332 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3332 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!unk_0x397C98A5552886EB(iLocal_3121[12]))
													{
														unk_0x50B76EE36FBE865F(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[12]))
								{
									if (unk_0x730551DCA699D643(iLocal_3121[12]) > 22216f && func_16(iLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										unk_0x36BB8F00E3205417(0.3f);
										unk_0x813E6E9F3A82143F(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = unk_0xDFB7BFA6482FEE1E();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!unk_0x397C98A5552886EB(iLocal_3121[12]))
								{
									unk_0xE2D24A37AFCF27BF(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], 0, 0, 0);
									unk_0xF4C21F6414CF1653(iLocal_3121[12], 1, 0);
									iLocal_3387 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3541 == 1)
				{
				}
				if (iLocal_3540 == 0 && iLocal_3541 == 1)
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[12]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[12], 0))
						{
							Local_3315 = { unk_0xD6E677FAD7521410(iLocal_3121[12], 1) };
						}
					}
					Local_3318 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
					if (unk_0xDFB7BFA6482FEE1E() > iLocal_3203 + 1579 || Local_3318.f_1 < Local_3315.f_1)
					{
						unk_0x36BB8F00E3205417(1f);
						unk_0xD20D31BC4E3A72D3(0);
						iLocal_3540 = 1;
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 105000f && unk_0x730551DCA699D643(iLocal_3258) < 113000f)
							{
								unk_0xF96EF441E3943DF4(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[13]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[13], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[13]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 108830f)
										{
											unk_0x510B8B2F51ECC627(iLocal_3121[13], 0);
											unk_0x46EDFC827DC67D89(iLocal_3121[13], 1, 1);
											unk_0x8B58E7AC53EED9F1(iLocal_3121[13], 0);
											SYSTEM::SETTIMERA(0);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							unk_0xC595907BB71C921D(iLocal_3121[13], 0, 0);
							unk_0x84AD61D029E3B23C(iLocal_3121[13], 1);
							unk_0xC595907BB71C921D(unk_0x27FC1B0077581B37(iLocal_3121[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[5]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[5], 0))
						{
							unk_0xF7E38415C6027209(iLocal_3121[5], 0);
							unk_0x8F160110753EB17B(iLocal_3121[5], 1);
							iLocal_3478 = 1;
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3121[15]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[15], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[15]))
						{
							if (unk_0x419E13582192CFEA(iLocal_3258))
							{
								if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
								{
									if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 104989f)
										{
											unk_0x50B76EE36FBE865F(iLocal_3121[15]);
											func_265(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_265(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0xF4C21F6414CF1653(iLocal_3121[15], 1, 0);
											unk_0x2DC2890038BFF758(4f, 4f, 4);
											unk_0xE2D24A37AFCF27BF(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], 0, 0, 0);
											unk_0x315DA2F7337A8638("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3258))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) > 112000f)
							{
								unk_0x1594E542FF3D23EF("BB_MOLLY_2");
								unk_0x068BDE31F7D112BB("misssolomon_3");
								unk_0x068BDE31F7D112BB("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3508 == 0)
				{
					if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3272[0]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3272[0], 0))
					{
						unk_0x0097E1CD6A252D2C(iLocal_3272[0], 0);
						unk_0x795957CD3A0042C8(&(iLocal_3272[0]));
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_3251[0]))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3251[0]))
					{
						unk_0xCA089CD1A17D76DF(iLocal_3251[0]);
						unk_0x0F3BD19FF11738D3(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 115000f)
								{
									unk_0x1594E542FF3D23EF("Trev4_5");
									unk_0x16E516CA9C88FF48(joaat("prop_cs_film_reel_01"));
									if (!unk_0xCE84F8AB9BD41C13())
									{
										unk_0x22C43B6780E8FE5B(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x730551DCA699D643(iLocal_3258) > 120000f)
								{
									if (!unk_0xB30CD10E2CD1B67D("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xB84B43B766630B5C("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0xFCF2996A0E9DEDF6(iLocal_3258);
								}
								if (unk_0x730551DCA699D643(iLocal_3258) > 125513f)
								{
									unk_0x50B76EE36FBE865F(iLocal_3258);
									unk_0xA2C015B68CE01357(iLocal_3258, 1);
									func_264();
									unk_0x36C2CA307C00F187();
									unk_0x9469E3DA4B5A7A39(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									unk_0xC0BBE340BE2AA02D("TREVOR_4_MAIN_CHASE");
									if (!unk_0x0E8572B08CEB6A11(uLocal_3291))
									{
										uLocal_3291 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!unk_0x0E8572B08CEB6A11(uLocal_3290))
									{
										uLocal_3290 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_3194 = unk_0xDFB7BFA6482FEE1E();
									unk_0xD6ABECE3CBB224B0(1);
									unk_0x985CACB900CBBF03(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3318 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				unk_0xFCF2996A0E9DEDF6(iLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0x0BABEFEA577FCFA4(Local_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xB4E725A8915BDF60(iLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (unk_0xDFB7BFA6482FEE1E() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xCE84F8AB9BD41C13())
				{
					unk_0xED93DAC36CA89AF2();
				}
				unk_0xFCF2996A0E9DEDF6(iLocal_3258);
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (!unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (unk_0x0EC2B29D4172D225("misssolomon_3"))
								{
									if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
									{
										if (!unk_0x419E13582192CFEA(iLocal_3283))
										{
											if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3283 = unk_0x795434E153F90E41(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												unk_0x0F1058706D5A58B4(iLocal_3283, iLocal_3222, unk_0xA79DFB802C09F5F5(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0xA2C015B68CE01357(iLocal_3258, 0);
											uLocal_3208 = unk_0xD955F1CC0BCABC78(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0xED3365BAA5895E01(iLocal_3258, uLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0xAD844C8843FC405C(iLocal_3222, uLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0x1C6FA6A93BF99EA4(uLocal_3208, 0);
											unk_0xFB8A6909539A30B1("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3466 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3468 == 0)
				{
					if (iLocal_3466 == 1)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
						{
							if (unk_0x8954E9D0A9F6F8CF(iLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x90ED32458AC2D129(iLocal_3222, -1000f, 1);
								}
								unk_0x16D66F11FE644901(iLocal_3222);
								unk_0xBE91B077ADADE97F(iLocal_3222, 1);
								unk_0x78CDDD1E6367978D(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(iLocal_3222, 236.5739f);
								unk_0xD9F4B63D8750476C(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0x0EC2B29D4172D225("move_f@film_reel_arms"))
								{
									unk_0x4261814A9A26E86F(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3468 = 1;
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (iLocal_3476 == 0)
					{
						if (iLocal_3475 == 0)
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
							{
								if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0x0BC8768247440B3A(uLocal_3208) > 0.18f || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							unk_0xE9F487B66E055135("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									unk_0xFD866EC0672D68D5(uLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0xFD866EC0672D68D5(uLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0x32279DAB93C9A9FA(uLocal_3290, uLocal_3291, 4000, 1, 1);
									unk_0xDD7C2F9844E745B1(0);
									unk_0x4200138CBB376D4D(0);
									unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
									if (unk_0x419E13582192CFEA(iLocal_3271))
									{
										unk_0x5420D0D520CF44D0(&iLocal_3271);
									}
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										unk_0x78CDDD1E6367978D(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0xCD37A28258D70638(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 47.9465f);
									}
									else
									{
										unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 47.9465f);
									}
									if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
									{
										func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
										unk_0x9328727FD6F1A390(iLocal_3222, 1);
									}
									unk_0x2DC2890038BFF758(4f, 0f, 3);
									unk_0xEBDFE18B261316C1(4);
									unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
									iLocal_3529 = 0;
									iLocal_3183++;
									break;
								
								case 1:
									if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
									{
										if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (unk_0x0BC8768247440B3A(uLocal_3208) > 0.3f)
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x2DC2890038BFF758(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (unk_0x0BC8768247440B3A(uLocal_3208) > 0.5f)
											{
												unk_0xFD866EC0672D68D5(uLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0xFD866EC0672D68D5(uLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0x32279DAB93C9A9FA(uLocal_3290, uLocal_3291, 4000, 1, 1);
												iLocal_3206 = unk_0xDFB7BFA6482FEE1E();
												iLocal_3183++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
									{
										if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && unk_0x5F95E51ABC3FC59A(0) == 4) && (unk_0xDFB7BFA6482FEE1E() - iLocal_3206) >= 2230)
											{
												unk_0x9673FB069F90F6B9("CamPushInNeutral", 0, 0);
												unk_0x9B0169E27978C1A2(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3206 = -1;
											}
											if (unk_0x0BC8768247440B3A(uLocal_3208) > 0.85f)
											{
												unk_0x4200138CBB376D4D(1);
												unk_0xDD7C2F9844E745B1(1);
												unk_0x09F9466B03D29D2D(false, 0, 3000, 1, 0, 0);
												unk_0xDF23DCD7A3E1B7A5(0f);
												iLocal_3220 = 346732587;
												unk_0x94F284E4B5633B45(iLocal_3220, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0x9A347B86DBED8192(iLocal_3220, 1f, 0, 1);
												unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
												if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
												{
													unk_0xEDC0317C5B604BB1(unk_0x7D2B9E6A64637269(), unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0);
													if (unk_0x5F95E51ABC3FC59A(1) != 4 && unk_0x5F95E51ABC3FC59A(0) == 4)
													{
														unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 1, 0);
													}
												}
												unk_0x9328727FD6F1A390(iLocal_3222, 0);
												unk_0xC7EF1AC7845F532D();
												unk_0x2DC2890038BFF758(0f, 4f, 3);
												iLocal_3195 = unk_0xDFB7BFA6482FEE1E();
												iLocal_3475 = 0;
												iLocal_3476 = 1;
												iLocal_3183++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_3476 == 1)
				{
					unk_0x1EA8B94F4F446F35(iLocal_3220, 5, 0, 1);
					if (iLocal_3552 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_3222))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
							{
								if (unk_0x591190E69BE43117(iLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									unk_0x4569EA65F1B056ED(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3552 = 1;
								}
							}
						}
					}
				}
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (unk_0xB30CD10E2CD1B67D("SOL_3_MAIN_CHASE"))
					{
						unk_0xC0BBE340BE2AA02D("SOL_3_MAIN_CHASE");
					}
					if (unk_0xB30CD10E2CD1B67D("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xC0BBE340BE2AA02D("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0xB30CD10E2CD1B67D("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xB84B43B766630B5C("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					func_248();
				}
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_3468 == 0)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
						{
							if (unk_0x698F51FB33ADAF7B(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x90ED32458AC2D129(iLocal_3222, -1000f, 1);
							}
							unk_0x16D66F11FE644901(iLocal_3222);
							unk_0xBE91B077ADADE97F(iLocal_3222, 1);
							unk_0x78CDDD1E6367978D(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(iLocal_3222, 236.5739f);
							unk_0xD9F4B63D8750476C(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0x0EC2B29D4172D225("move_f@film_reel_arms"))
							{
								unk_0x4261814A9A26E86F(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3468 = 1;
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_3266))
					{
						unk_0x5420D0D520CF44D0(&iLocal_3266);
					}
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 5;
				}
				break;
			}
	}
}

void func_248()
{
	if (iLocal_3433 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[14]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[14], 0))
			{
				iLocal_3248 = unk_0x27FC1B0077581B37(iLocal_3121[14], -1, 0);
				unk_0xD82D50E4AC0D46B9(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				unk_0x4985CD0720AFD468(iLocal_3248, 1, 0);
				unk_0xBE91B077ADADE97F(iLocal_3248, 1);
				unk_0xF8207455457B967E(iLocal_3248, 5);
				unk_0xC595907BB71C921D(iLocal_3248, 150, 0);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3248))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3248))
			{
				unk_0xCA089CD1A17D76DF(iLocal_3248);
				unk_0xD478F2D087D53713(iLocal_3248, unk_0xD6E677FAD7521410(iLocal_3248, 1), 5f, 0, 0);
				unk_0x5C679902079A7E80(&uLocal_3292);
				unk_0xCC5ED49CF9C9215F(0, 0, 0);
				unk_0x199AF8DA5732869E(0, unk_0x7D2B9E6A64637269(), 5000, 1);
				unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
				unk_0x1BBD0A5729AB1226(uLocal_3292);
				unk_0x8A1AC8EBC73850C8(iLocal_3248, uLocal_3292);
				unk_0x8D5B447F21217223(&uLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3248))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_3248))
			{
				if (!unk_0xC49311A2A500FF09(iLocal_3248, 0) && func_13(unk_0x7D2B9E6A64637269(), iLocal_3248) < 20f)
				{
					if (!func_262())
					{
						if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
						{
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_249(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 1;
	Global_22118 = 0;
	Global_22122 = 0;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_250(sParam2, iParam4, 0);
}

int func_250(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_215();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_260(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_259();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_258();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_257())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_227())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_256();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_255();
		func_251();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_215();
	}
	return 0;
}

void func_251()
{
	if (!func_252())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_252()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_89())
	{
		return 0;
	}
	if (func_253(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_253(int iParam0)
{
	return func_254(iParam0, 20);
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_255()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_256()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_257()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_258()
{
	if (func_59(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_107();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

void func_259()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

void func_261(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

int func_262()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

bool func_263(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_250(sParam2, iParam3, 0);
}

void func_264()
{
	if (unk_0x176066ACB1B41C48(uLocal_3755[0]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[0], 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3755[1]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[1], 0);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3755[2]))
	{
		unk_0x39448B5909AEB658(uLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		unk_0xBAB6F7501A822416(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_265(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0xAB0BB1BDD76B67DC(iParam0))
		{
			unk_0x50B76EE36FBE865F(iParam0);
		}
		Var3 = { unk_0xD6E677FAD7521410(iParam0, 1) };
		if (bParam8)
		{
			Var0 = { unk_0x9E695CE384C77EF0(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { func_266(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		unk_0xBC5268D1B5C5B73B(iParam0, 3, Var6, Param4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_266(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_267(int iParam0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_1956 < 15)
	{
		if (iLocal_1956 == 0)
		{
			Local_2656 = { 99999.9f, 99999.9f, 99999.9f };
			Local_2659 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iParam0))
			{
				iVar0 = unk_0x62CB2C6F27D37CA6(iParam0);
				Var1 = { unk_0x40A7E0E65D62E5D2(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_1956 - 1)) * 2000f))) };
				if (Var1.x < Local_2656.x)
				{
					Local_2656.x = Var1.x;
				}
				if (Var1.f_1 < Local_2656.f_1)
				{
					Local_2656.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_2656.f_2)
				{
					Local_2656.f_2 = Var1.f_2;
				}
				if (Var1.x > Local_2659.x)
				{
					Local_2659.x = Var1.x;
				}
				if (Var1.f_1 > Local_2659.f_1)
				{
					Local_2659.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_2659.f_2)
				{
					Local_2659.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!bLocal_106)
	{
		unk_0xE99504CC51D09E54(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2656 = { Local_2656 + Vector((fLocal_1293 * -1f), (fLocal_1293 * -1f), (fLocal_1293 * -1f)) };
		Local_2659 = { Local_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
		Local_2650 = { Local_2656 };
		Local_2653 = { Local_2659 };
		unk_0x6F21DC8C6FD88FCF(Local_2650, Local_2653, 0, 0);
		iLocal_1956 = 0;
	}
}

void func_268()
{
	iLocal_89 = 1;
}

void func_269()
{
	if (iLocal_3333 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3258))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
			{
				if (unk_0x730551DCA699D643(iLocal_3258) > 55000f)
				{
					unk_0x16E516CA9C88FF48(joaat("firetruk"));
					unk_0x16E516CA9C88FF48(joaat("s_m_y_fireman_01"));
					unk_0x068BDE31F7D112BB("missheist_agency3aig_lift_waitped_a");
					if ((unk_0xA9C0BBFB9CBB66F1(joaat("firetruk")) && unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_fireman_01"))) && unk_0x0EC2B29D4172D225("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x419E13582192CFEA(iLocal_3264))
						{
							unk_0x6AF7EE4DD9F8B944(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3264 = unk_0x170478CC84C8AE2F(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1, 0);
						}
						uLocal_3755[0] = unk_0x2614BD180D42D9AF("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3388 == 0)
						{
							unk_0x4569EA65F1B056ED(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3388 = 1;
						}
						uLocal_3755[1] = unk_0x2614BD180D42D9AF("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3755[2] = unk_0x2614BD180D42D9AF("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0x419E13582192CFEA(iLocal_3223[0]))
						{
							iLocal_3223[0] = unk_0x42F3C85A00B4FC7B(iLocal_3264, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							unk_0xBE91B077ADADE97F(iLocal_3223[0], 1);
							unk_0x504B26425DFF773C(iLocal_3223[0], 1);
							unk_0xA4B1CF85F7018E78(iLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0x419E13582192CFEA(iLocal_3223[1]))
						{
							iLocal_3223[1] = unk_0x0FDCFECB2EF2BC1C(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							unk_0x4261814A9A26E86F(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xBE91B077ADADE97F(iLocal_3223[1], 1);
							unk_0x504B26425DFF773C(iLocal_3223[1], 1);
						}
						if (!unk_0x419E13582192CFEA(iLocal_3223[2]))
						{
							iLocal_3223[2] = unk_0x0FDCFECB2EF2BC1C(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							unk_0x4261814A9A26E86F(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xBE91B077ADADE97F(iLocal_3223[2], 1);
							unk_0x504B26425DFF773C(iLocal_3223[2], 1);
						}
						if (!unk_0x419E13582192CFEA(iLocal_3223[3]))
						{
							iLocal_3223[3] = unk_0x0FDCFECB2EF2BC1C(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							unk_0x4261814A9A26E86F(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xBE91B077ADADE97F(iLocal_3223[3], 1);
							unk_0x504B26425DFF773C(iLocal_3223[3], 1);
						}
						unk_0x824F744352C8BC82(joaat("s_m_y_fireman_01"));
						unk_0x824F744352C8BC82(joaat("firetruk"));
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1)
	{
		if (iLocal_3543[0] == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3223[1]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (unk_0x698F51FB33ADAF7B(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!unk_0x698F51FB33ADAF7B(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0x37DE87D06B5C195D(iLocal_3223[1], -1);
							unk_0x504B26425DFF773C(iLocal_3223[1], 1);
							unk_0xBE91B077ADADE97F(iLocal_3223[1], 0);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3223[2]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (unk_0x698F51FB33ADAF7B(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!unk_0x698F51FB33ADAF7B(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0x37DE87D06B5C195D(iLocal_3223[2], -1);
							unk_0x504B26425DFF773C(iLocal_3223[2], 1);
							unk_0xBE91B077ADADE97F(iLocal_3223[2], 0);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3223[3]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (unk_0x698F51FB33ADAF7B(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!unk_0x698F51FB33ADAF7B(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0x37DE87D06B5C195D(iLocal_3223[3], -1);
							unk_0x504B26425DFF773C(iLocal_3223[3], 1);
							unk_0xBE91B077ADADE97F(iLocal_3223[3], 0);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_270()
{
	if (iLocal_3434 == 0)
	{
		unk_0x16E516CA9C88FF48(joaat("police3"));
		unk_0x16E516CA9C88FF48(joaat("s_m_y_cop_01"));
		unk_0x498685EB9132AF88(1, "BB_AIChase");
		if (unk_0xA9C0BBFB9CBB66F1(joaat("police3")) && unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_cop_01")))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 15500f)
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
						iLocal_3272[0] = unk_0x170478CC84C8AE2F(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1, 0);
						iLocal_3251[0] = unk_0x42F3C85A00B4FC7B(iLocal_3272[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						unk_0xBE91B077ADADE97F(iLocal_3251[0], 1);
						unk_0x01BF36BDFE0F82AC(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_127(iLocal_3251[0], 0);
						unk_0x89E171705EA920DA(iLocal_3272[0], 1, 1, 0);
						unk_0x069557E67CC67C29(iLocal_3272[0], 1, "BB_AIChase", 1);
						unk_0xD82D50E4AC0D46B9(iLocal_3251[0], joaat("weapon_pistol"), 1000, 1, 1);
						unk_0xE3F32DF0088B1EA4(iLocal_3272[0], 1);
						unk_0x824F744352C8BC82(joaat("police3"));
						unk_0x824F744352C8BC82(joaat("s_m_y_cop_01"));
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1)
	{
		if (iLocal_3480[0] == 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_3272[0]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3272[0], 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3272[0]))
					{
						unk_0xEA5C7C61843816D5(iLocal_3272[0], fLocal_3323);
						if (unk_0x730551DCA699D643(iLocal_3272[0]) > 13000f)
						{
							unk_0x50B76EE36FBE865F(iLocal_3272[0]);
						}
					}
					else if (unk_0x419E13582192CFEA(iLocal_3251[0]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3251[0]))
						{
							unk_0xBE91B077ADADE97F(iLocal_3251[0], 1);
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								unk_0xFF8EDECFEAFBF5F4(iLocal_3251[0], unk_0x7D2B9E6A64637269());
								unk_0x504B26425DFF773C(iLocal_3251[0], 1);
							}
							else
							{
								unk_0x9DA29013F33252A6(iLocal_3251[0], unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0x504B26425DFF773C(iLocal_3251[0], 1);
							}
							unk_0x7B6B41ECBE4B733F(1, "BB_AIChase");
							iLocal_3196 = unk_0xDFB7BFA6482FEE1E();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0)
		{
			if (iLocal_3480[0] == 1)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3196 + 500)
				{
					if (unk_0x419E13582192CFEA(iLocal_3251[0]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_3251[0]))
						{
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								unk_0x79444732D1763556(iLocal_3251[0], 16, 1);
								unk_0x79444732D1763556(iLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else
							{
								iLocal_3483[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_271()
{
	if (!iLocal_3335)
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[20], 0))
		{
			uLocal_3289 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x6FA8221C9D2ECB46(uLocal_3289, 1);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_286(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (unk_0xE8FFE38E2BA32BD6())
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_262())
		{
			unk_0x1036762BD3781C84();
			func_212();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!unk_0xB30CD10E2CD1B67D("SOL_3_CHOPPER_CAM"))
			{
				unk_0xB84B43B766630B5C("SOL_3_CHOPPER_CAM");
			}
			unk_0x9B0169E27978C1A2(iLocal_3219, "Trevor_4_747_TV", 0, 1);
			iLocal_3365[2] = 1;
		}
		func_277(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			unk_0x704F8697BB515627(uLocal_3293, "SET_TEXT");
			func_276("TRV4_NEWS1");
			func_276("");
			unk_0x392841D58D2EED1D();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(1f);
			unk_0x82D42F43BE26EB72(0f);
			func_276("TRV4_NEWS2");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(0f);
			unk_0x82D42F43BE26EB72(0f);
			func_276("TRV4_NEWS6");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(0f);
			unk_0x82D42F43BE26EB72(1f);
			func_276("TRV4_NEWS7");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(0f);
			unk_0x82D42F43BE26EB72(2f);
			func_276("TRV4_NEWS8");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(0f);
			unk_0x82D42F43BE26EB72(3f);
			func_276("TRV4_NEWS9");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(0f);
			unk_0x82D42F43BE26EB72(4f);
			func_276("TRV4_NEWS10");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uLocal_3293, "DISPLAY_SCROLL_TEXT");
			unk_0x82D42F43BE26EB72(1f);
			unk_0x82D42F43BE26EB72(0f);
			unk_0x392841D58D2EED1D();
			iLocal_3201 = (unk_0xDFB7BFA6482FEE1E() - 5000);
			iLocal_3355 = 1;
		}
		if (unk_0xDFB7BFA6482FEE1E() > iLocal_3201 + 5000)
		{
			func_275();
			iLocal_3201 = unk_0xDFB7BFA6482FEE1E();
		}
		if (iLocal_3356 == 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 25000f && unk_0x730551DCA699D643(iLocal_3258) < 50000f)
					{
						unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(1f);
						func_276("TRV4_NEWS5");
						unk_0x392841D58D2EED1D();
						unk_0x704F8697BB515627(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(1f);
						unk_0x392841D58D2EED1D();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 77600f && unk_0x730551DCA699D643(iLocal_3258) < 115000f)
					{
						unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(2f);
						func_276("TRV4_NEWS3");
						unk_0x392841D58D2EED1D();
						unk_0x704F8697BB515627(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(2f);
						unk_0x392841D58D2EED1D();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 115000f)
					{
						unk_0x704F8697BB515627(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(3f);
						func_276("TRV4_NEWS4");
						unk_0x392841D58D2EED1D();
						unk_0x704F8697BB515627(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x82D42F43BE26EB72(1f);
						unk_0x82D42F43BE26EB72(3f);
						unk_0x392841D58D2EED1D();
						iLocal_3358 = 1;
					}
				}
			}
		}
		unk_0x27DA7E2B98AB7899(uLocal_3184);
		unk_0x44EF5678D6916481(uLocal_3293, 255, 255, 255, 0, 0);
		if (iLocal_3336 == 0)
		{
			func_226(1, 1, 1, 0);
			unk_0x9C9EC7CC88D050FA(uLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x6FA8221C9D2ECB46(uLocal_3289, 1);
			unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
			unk_0xDD7C2F9844E745B1(0);
			unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
			func_274();
			iLocal_3336 = 1;
		}
		func_272();
		unk_0xEFD424FDD55A6EC7(6);
		unk_0xEFD424FDD55A6EC7(7);
		unk_0xEFD424FDD55A6EC7(8);
		unk_0xEFD424FDD55A6EC7(9);
		unk_0xEFD424FDD55A6EC7(1);
		unk_0xEFD424FDD55A6EC7(2);
		unk_0xEFD424FDD55A6EC7(15);
		unk_0xEFD424FDD55A6EC7(3);
		unk_0x366E7F593105797F(0, 85, 1);
		unk_0x39880245189173A7(0);
	}
	else if (iLocal_3336)
	{
		func_226(0, 1, 1, 0);
		unk_0x6FA8221C9D2ECB46(uLocal_3289, 0);
		unk_0x09F9466B03D29D2D(false, 0, 3000, 1, 0, 0);
		unk_0xDD7C2F9844E745B1(1);
		if (unk_0xB30CD10E2CD1B67D("SOL_3_CHOPPER_CAM"))
		{
			unk_0xC0BBE340BE2AA02D("SOL_3_CHOPPER_CAM");
		}
		unk_0x791B4C3811D53DFA(iLocal_3219);
		func_246();
		unk_0x39880245189173A7(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

void func_272()
{
	unk_0xDA81FB7770247CC0();
	func_273();
}

void func_273()
{
	Global_22531.f_134 = 1;
}

void func_274()
{
	Global_62105 = 1;
}

void func_275()
{
	if (iLocal_3186 > 4)
	{
		iLocal_3186 = 0;
	}
	unk_0x704F8697BB515627(uLocal_3293, "DISPLAY_SCROLL_TEXT");
	unk_0x9E3D03981E2E9AD9(0);
	unk_0x9E3D03981E2E9AD9(iLocal_3186);
	unk_0x392841D58D2EED1D();
	iLocal_3186++;
}

void func_276(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_277(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_284(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_281(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0xB36B8558948EA7A8(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_281(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_278(1, 40, 1, 1, 1);
		}
	}
}

void func_278(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_280(0))
			{
				func_279(0);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_280(1))
			{
				func_279(1);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_280(2))
			{
				func_279(2);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_279(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0x191DDA30577F440A(&iLocal_54, iParam0);
	}
}

int func_280(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(iLocal_54, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_281(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		iLocal_46 = func_283(5);
		iLocal_45 = unk_0xB36B8558948EA7A8(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_283(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_280(3))
			{
				func_279(3);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_280(4))
			{
				func_279(4);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_280(5))
			{
				func_279(5);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_280(6))
			{
				func_279(6);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_280(7))
			{
				func_279(7);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_282(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_283(int iParam0)
{
	if (unk_0xB36B8558948EA7A8(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0xB36B8558948EA7A8(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0xB36B8558948EA7A8(0, iParam0);
}

void func_284(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				unk_0xDDD5C8D7152E128F("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_285()
{
	unk_0xA08F3C300F9E3468("digitalOverlay", 0);
	if (unk_0xAD9D75DD073BF477("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_290(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_291(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (func_289(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_290(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_287();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_287()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

int func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xDFB7BFA6482FEE1E()
		{
			return 1;
		}
	}
	return 0;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		func_299();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_298(0))
		{
			func_294(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_294(int iParam0)
{
	if (func_297())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_296())
		{
			func_295(1, 1);
		}
		else
		{
			func_295(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_227())
	{
		Global_19798.f_1 = 3;
	}
}

void func_295(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_298(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_296()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_297()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_298(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_299()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_300(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	if (func_298(0))
	{
		return 0;
	}
	if (func_308())
	{
		return 0;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_59279)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
		{
			if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				return 0;
			}
			if (unk_0x7F827BDD9A88B58D())
			{
				return 0;
			}
		}
	}
	if ((func_307() || func_306(Global_4456448.f_133963)) || func_305())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_304(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_303(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_302(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_181(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_181(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x622E46C9F30FB60D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xC49311A2A500FF09(iParam0, iParam1))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(iParam0, iParam1);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				iVar1 = unk_0xEF6894DFD91DE23D(unk_0x6471F4759775FCA4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9B73EB6255D4AE81(iVar0, iVar3, 0))
					{
						if (unk_0x27FC1B0077581B37(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_305()
{
	return Global_2453009.f_19;
}

bool func_306(int iParam0)
{
	return iParam0 == 51;
}

var func_307()
{
	return Global_2453009.f_18;
}

bool func_308()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

void func_309(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (unk_0xAB0BB1BDD76B67DC(iParam1))
		{
			unk_0xEA5C7C61843816D5(iParam1, fParam2);
			Var0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
			Var3 = { unk_0x4BB6BF4A85268A22(iParam1, 2) };
			unk_0x7508AE96782B0441(uParam0, Var0);
			unk_0xBD833AA6EB59C81B(uParam0, Var3, 2);
		}
	}
}

void func_310(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		unk_0x4603196EEEA2355C(iParam1, 0, 0);
		unk_0x3CBE9F07524C242D(iParam1, 0, 0);
		unk_0x8F160110753EB17B(iParam1, 1);
		unk_0x3A653D4F5FA4B665(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x069557E67CC67C29(iParam1, iParam3, sParam2, 1);
		Var0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
		unk_0x7508AE96782B0441(uParam0, Var0);
		unk_0xBD833AA6EB59C81B(uParam0, unk_0x4BB6BF4A85268A22(iParam1, 2), 2);
	}
}

void func_311()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				unk_0xBAB6F7501A822416(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3383 == 0)
			{
				unk_0xBAB6F7501A822416(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3390 == 1)
		{
			if (iLocal_3372 == 0)
			{
				unk_0xBAB6F7501A822416(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3382 == 0)
			{
				unk_0xBAB6F7501A822416(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1)
	{
		if (iLocal_3387 == 1)
		{
			if (iLocal_3384 == 0)
			{
				unk_0xBAB6F7501A822416(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_312()
{
	if (unk_0x419E13582192CFEA(iLocal_3121[19]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[19], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[19]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[19], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[7]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[7], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[7]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[7], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[8]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[8], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[8]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[8], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[9]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[9], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[9]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[9], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[10]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[10], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[10]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[10], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[11]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[11], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[11]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[11], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[13]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[13], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[13]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[13], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[14]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[14], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[14]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[14], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[15]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[15], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[15]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[15], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[16]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[16], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[16]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[16], 1);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[17]))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3121[17], 0))
		{
			if (!unk_0xA47A27C1733E0E64(iLocal_3121[17]))
			{
				unk_0xE3F32DF0088B1EA4(iLocal_3121[17], 1);
			}
		}
	}
}

void func_313()
{
	if (func_344())
	{
		fLocal_3324 = 0.5f;
	}
	else if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xACBF3CDEE04E0AEC(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) > 40f)
		{
			fLocal_3324 = 0.85f;
		}
		else
		{
			fLocal_3324 = 0.9f;
		}
	}
	else
	{
		fLocal_3324 = 0.9f;
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_3258, 0))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (unk_0x730551DCA699D643(iLocal_3258) < 10000f)
					{
						if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3258, 1) < 100f || unk_0xB4E725A8915BDF60(iLocal_3258))
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3258, 1) > 175f)
				{
					fLocal_3323 = 0.6f;
					unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				else if (unk_0x730551DCA699D643(iLocal_3258) < 10000f)
				{
					func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3324, 0);
					unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 10000f && unk_0x730551DCA699D643(iLocal_3258) < 23000f)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 23000f && unk_0x730551DCA699D643(iLocal_3258) < 32000f)
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[7]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else if (unk_0x419E13582192CFEA(iLocal_3121[8]))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
							{
								func_340(iLocal_3121[8], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
								unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
								func_314(iLocal_3258, fLocal_3323);
							}
							else
							{
								func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
								unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
								func_314(iLocal_3258, fLocal_3323);
							}
						}
						else
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else if (unk_0x419E13582192CFEA(iLocal_3121[8]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
						{
							func_340(iLocal_3121[8], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 32000f && unk_0x730551DCA699D643(iLocal_3258) < 39000f)
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[7]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 39000f && unk_0x730551DCA699D643(iLocal_3258) < 56000f)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 56000f && unk_0x730551DCA699D643(iLocal_3258) < 65000f)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[11], 0))
					{
						func_340(iLocal_3121[11], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 65000f && unk_0x730551DCA699D643(iLocal_3258) < 90000f)
				{
					if (unk_0x419E13582192CFEA(iLocal_3121[13]))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[13], 0))
						{
							func_340(iLocal_3121[13], unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 90000f && unk_0x730551DCA699D643(iLocal_3258) < 110000f)
				{
					func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3324, 1);
					unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				if (unk_0x730551DCA699D643(iLocal_3258) > 110000f)
				{
					func_340(iLocal_3258, unk_0x7D2B9E6A64637269(), &fLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3324, 0);
					unk_0xEA5C7C61843816D5(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
			}
		}
	}
}

void func_314(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = unk_0x7FF6ACE380ED166C();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_339();
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				unk_0x6AF7EE4DD9F8B944(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_209();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0xCAFB54B99BF4F907(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_1278 = 0f;
		}
		else
		{
			fLocal_1278 = 1f;
		}
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iParam0))
			{
				if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
				{
					if (func_338(unk_0x7D2B9E6A64637269(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = unk_0x730551DCA699D643(iParam0);
				unk_0xEA5C7C61843816D5(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278));
				if (bLocal_85)
				{
					func_337(iParam0, fLocal_1275);
					func_336(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_335(iParam0, fLocal_1285);
						}
						fVar0 = ((fLocal_1275 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1962) * 2000f));
						func_334(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = 0;
						fLocal_1280 = (fLocal_1280 + (unk_0x7FF6ACE380ED166C() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || unk_0x8B6A925F148E0E94())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_331(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_330(iParam0);
			}
			if (!iLocal_75)
			{
				func_317(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iLocal_3164 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					Local_2641 = { unk_0xD6E677FAD7521410(iLocal_3164, 1) };
					unk_0x5B0E6CBD7C611C82(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0x419E13582192CFEA(iLocal_3164))
			{
				func_201(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3165, 0))
			{
				unk_0x78CDDD1E6367978D(iLocal_3165, Local_2641, 1, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_315(&iParam0, fLocal_1274))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_315(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_196();
		if (unk_0xBFCE58B2B3249999(*iParam0, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(*iParam0))
			{
				unk_0x50B76EE36FBE865F(*iParam0);
				unk_0x037561EBFB8F7D13(*iParam0);
			}
			if (!iLocal_1949 == -1)
			{
				while (!func_316(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xBFCE58B2B3249999(*iParam0, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(*iParam0))
			{
				unk_0xEA5C7C61843816D5(*iParam0, ((1f * fLocal_1276) * fLocal_1278));
				func_316(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_317(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_331(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_330(*iParam0);
		if ((iLocal_1953 == 0 && iLocal_1954 == 0) && iLocal_1955 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_316(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x498685EB9132AF88(iParam1, &cLocal_2668);
		if (unk_0x9CF7186A344D26A9(iParam1, &cLocal_2668))
		{
			if (unk_0xBFCE58B2B3249999(*uParam0, 0))
			{
				if (!unk_0xAB0BB1BDD76B67DC(*uParam0))
				{
					unk_0xA2C015B68CE01357(*uParam0, 0);
					if (bParam4)
					{
						unk_0xC5E8919401B3C049(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
						{
							if (bParam7)
							{
								unk_0x9C6D92A07D6159B7(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x9C6D92A07D6159B7(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x069557E67CC67C29(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							unk_0x069557E67CC67C29(*uParam0, iParam1, &cLocal_2668, 1);
						}
						unk_0x2978CEBD6EE3E821(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0xD4A2115EEBB4C00A(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x62CB2C6F27D37CA6(*uParam0) == unk_0xC4989A5366317AA4(iParam1, &cLocal_2668))
				{
					fVar0 = unk_0x730551DCA699D643(*uParam0);
					unk_0x2978CEBD6EE3E821(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x50B76EE36FBE865F(*uParam0);
						unk_0x498685EB9132AF88(iParam1, &cLocal_2668);
					}
					if (bParam5)
					{
						unk_0xD4A2115EEBB4C00A(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x50B76EE36FBE865F(*uParam0);
					unk_0xA2C015B68CE01357(*uParam0, 0);
					if (bParam4)
					{
						unk_0xC5E8919401B3C049(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
					{
						if (bParam7)
						{
							unk_0x9C6D92A07D6159B7(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x9C6D92A07D6159B7(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x069557E67CC67C29(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						unk_0x069557E67CC67C29(*uParam0, iParam1, &cLocal_2668, 1);
					}
					unk_0x2978CEBD6EE3E821(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0xD4A2115EEBB4C00A(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_317(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14());
	uVar16 = unk_0xE0BF3CFAB30C64FB();
	uVar17 = unk_0x57D8512F9DA74735();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
		Var9 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar0 = iLocal_1952;
		while (iVar0 < 35)
		{
			if (iLocal_1858[iVar0] != 99)
			{
				if (iLocal_1858[iVar0] == 0)
				{
					if (iLocal_1822[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 > (fLocal_1137[iVar0] - (7000f * fParam1)))
							{
								if (func_329(iLocal_2877[iVar0]))
								{
									unk_0x191DDA30577F440A(&(iLocal_1894[iVar0]), 0);
								}
								else if (unk_0x69AF387D1A91914C(iLocal_2877[iVar0]))
								{
									unk_0x191DDA30577F440A(&(iLocal_1894[iVar0]), 2);
								}
								unk_0xC664C0067EEAB8D1(&(iLocal_1894[iVar0]), 1);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else
						{
							fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
							fVar12 = (fVar12 * fLocal_1173[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_328(iLocal_1822[iVar0]))
								{
									if (func_329(iLocal_2877[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1894[iVar0]), 0);
									}
									else if (unk_0x69AF387D1A91914C(iLocal_2877[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1894[iVar0]), 2);
									}
									unk_0xC664C0067EEAB8D1(&(iLocal_1894[iVar0]), 1);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else
								{
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1)
				{
					bVar14 = false;
					unk_0x498685EB9132AF88(iLocal_1822[iVar0], &cLocal_2668);
					if (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 0))
					{
						unk_0x16E516CA9C88FF48(func_205());
						bVar14 = unk_0xA9C0BBFB9CBB66F1(func_205());
					}
					else if (!bLocal_102 && ((!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 2) && uVar16) || (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x16E516CA9C88FF48(func_208());
						bVar14 = unk_0xA9C0BBFB9CBB66F1(func_208());
					}
					if (bVar14)
					{
						if (!unk_0x419E13582192CFEA(iLocal_3121[iVar0]))
						{
							unk_0x16E516CA9C88FF48(iLocal_2877[iVar0]);
							if (unk_0xA9C0BBFB9CBB66F1(iLocal_2877[iVar0]) && unk_0x9CF7186A344D26A9(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= (fLocal_1137[iVar0] - (fLocal_1288 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_327(Local_2535[iVar0 /*3*/], Var9, 5f, fLocal_1286)))
									{
										if (bLocal_85)
										{
											func_326(Local_2535[iVar0 /*3*/], Var9, fLocal_1279);
										}
										iLocal_3121[iVar0] = unk_0x170478CC84C8AE2F(iLocal_2877[iVar0], Local_2535[iVar0 /*3*/], 0f, 0, 0, 0);
										if (iLocal_2877[iVar0] == joaat("polmav"))
										{
											unk_0xF7E38415C6027209(iLocal_3121[iVar0], 0);
										}
										if (uLocal_98 && !unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 0))
										{
											func_325(iLocal_3121[iVar0]);
										}
										if (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 3))
										{
											unk_0x8B58E7AC53EED9F1(iLocal_3121[iVar0], 1);
										}
										unk_0xDB8D6815E13996A9(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
										unk_0x79C3AEC4C7C91A54(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (unk_0xB480C9C35514775A(iLocal_2877[iVar0]) || unk_0x69AF387D1A91914C(iLocal_2877[iVar0]))
										{
											unk_0x47D0DDD8833C5E5F(iLocal_3121[iVar0], 1084227584);
										}
										if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 0))
										{
											unk_0x89E171705EA920DA(iLocal_3121[iVar0], 1, 1, 0);
											if (unk_0xCA86FAB7FADC8353() > 19 || unk_0xCA86FAB7FADC8353() < 7)
											{
												unk_0xC55DA02D18D77322(iLocal_3121[iVar0], 3);
											}
										}
										unk_0xA2C015B68CE01357(iLocal_3121[iVar0], 1);
										unk_0x824F744352C8BC82(iLocal_2877[iVar0]);
										iLocal_1954 = (iLocal_1954 - 1);
										iLocal_1858[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0xE50EB54E0F21BED0(iLocal_3121[iVar0], 0) && unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
						{
							unk_0xDB8D6815E13996A9(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
							unk_0x79C3AEC4C7C91A54(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (unk_0xB480C9C35514775A(iLocal_2877[iVar0]) || unk_0x69AF387D1A91914C(iLocal_2877[iVar0]))
							{
								unk_0x47D0DDD8833C5E5F(iLocal_3121[iVar0], 1084227584);
							}
							unk_0xA2C015B68CE01357(iLocal_3121[iVar0], 1);
							unk_0x824F744352C8BC82(iLocal_2877[iVar0]);
							iLocal_1954 = (iLocal_1954 - 1);
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					unk_0x498685EB9132AF88(iLocal_1822[iVar0], &cLocal_2668);
					if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 0))
						{
							unk_0x16E516CA9C88FF48(func_205());
							bVar14 = unk_0xA9C0BBFB9CBB66F1(func_205());
							iVar19 = 2;
						}
						else if (!bLocal_102 && ((!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 2) && uVar16) || (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x16E516CA9C88FF48(func_208());
							bVar14 = unk_0xA9C0BBFB9CBB66F1(func_208());
							iVar19 = 0;
						}
						if (!unk_0xE50EB54E0F21BED0(iLocal_3121[iVar0], 0))
						{
							if (!bLocal_106 && unk_0x9B73EB6255D4AE81(iLocal_3121[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_3121[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_89)
									{
										func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										unk_0x191DDA30577F440A(&(iLocal_1894[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
								fVar12 = (fVar12 * fLocal_1173[iVar0]);
								if (unk_0x9CF7186A344D26A9(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < unk_0xDC2AF9AB32FB87A8(iLocal_1822[iVar0], &cLocal_2668))
									{
										Var3 = { unk_0xD6E677FAD7521410(iLocal_3121[iVar0], 1) };
										Var6 = { unk_0x3BCD5137CE6A77E2(iLocal_1822[iVar0], fVar12, &cLocal_2668) };
										if (((!func_327(Var3, Var9, 5f, fLocal_1286) && func_327(Var6, Var9, 5f, fLocal_1286)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
											{
												func_323(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_316(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0xEA5C7C61843816D5(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
												if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
												{
													if (unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 0))
													{
														unk_0x89E171705EA920DA(iLocal_3121[iVar0], 1, 1, 0);
														unk_0xE3F32DF0088B1EA4(iLocal_3121[iVar0], 1);
														unk_0xC55DA02D18D77322(iLocal_3121[iVar0], 2);
														if (!unk_0x69AF387D1A91914C(iLocal_2877[iVar0]))
														{
															unk_0xFA5BD1BBE7EA5BD2(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
												{
													func_323(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
										{
											func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
								{
									func_323(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_1894[iVar0], 1))
						{
							func_323(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[iVar0]))
						{
							iVar1 = unk_0x27FC1B0077581B37(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xECEC7528A52B4EE8(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_3121[iVar0])) || func_322(iLocal_3121[iVar0])))
									{
										if (unk_0x419E13582192CFEA(iVar2))
										{
											bVar14 = false;
											if (bLocal_97)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0x4DDAC4C80BACF92C(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0x0BCA9ADE67DF9DD8((fVar13 - unk_0x4DDAC4C80BACF92C(iLocal_3121[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_321(iLocal_3121[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_319(iVar2, iLocal_3121[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_318(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xEA5C7C61843816D5(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
									}
								}
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
							}
						}
						else
						{
							iLocal_1858[iVar0]++;
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
					{
						if (!unk_0xAB0BB1BDD76B67DC(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							iVar1 = unk_0x27FC1B0077581B37(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xECEC7528A52B4EE8(iVar1))
							{
								unk_0xEA5C7C61843816D5(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
							}
							if (unk_0x9CF7186A344D26A9(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_1137[iVar0] + unk_0xDC2AF9AB32FB87A8(iLocal_1822[iVar0], &cLocal_2668)))
								{
									unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
								}
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_3121[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5)
				{
					if (!iLocal_3121[iVar0] == iLocal_3166)
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3121[iVar0], 0))
						{
							iVar1 = unk_0x27FC1B0077581B37(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xECEC7528A52B4EE8(iVar1))
							{
								iVar20 = unk_0x4E8DA737B686529A(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0x4DDAC4C80BACF92C(iLocal_3121[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									unk_0xD5B3E5CB06248A58(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								unk_0x7B6B41ECBE4B733F(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_201(iLocal_3121[iVar0]);
							}
						}
						else if (unk_0x419E13582192CFEA(iLocal_3121[iVar0]))
						{
							unk_0x5420D0D520CF44D0(&(iLocal_3121[iVar0]));
						}
					}
					iLocal_1947 = (iLocal_1947 - 1);
					iLocal_1858[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1952 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_318(int iParam0)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_202(iParam0);
		unk_0x2C7A52191F8DFF00(iParam0, 786603);
	}
}

int func_319(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	if (unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
		if (bParam2)
		{
			Var15 = { unk_0x9F2928DF31D785C7(iParam1) };
			Var12 = { Var15 / FtoV(SYSTEM::VMAG(Var15)) };
		}
		else
		{
			Var6 = { unk_0x9E695CE384C77EF0(iParam1, 0f, 5f, 0f) };
			Var12 = { Var6 - Var3 };
		}
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	if (func_320(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_320(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_321(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		Var0 = { unk_0x5675C422E6519C64(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		Var3 = { unk_0x5675C422E6519C64(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_320(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var3.x, Var3.f_1);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
		{
			iVar2 = unk_0x6471F4759775FCA4(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x83E7671FB1B0EA3F(iVar1))
				{
					if (unk_0xE66018878024055F(iVar1, &iVar0))
					{
						if (unk_0xBFCE58B2B3249999(iVar0, 0))
						{
							if (unk_0x83B12E293561B796(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_323(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(*uParam0, 0))
	{
		if (unk_0x9B73EB6255D4AE81(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x42F3C85A00B4FC7B(*uParam0, 6, func_205(), -1, 0, 0);
				unk_0x2271ED1E65FB75EE(iVar0, iLocal_2684);
				unk_0x824F744352C8BC82(func_205());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x83119D7B5F26F8EE(*uParam0, 1);
				if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*uParam0)))
				{
					unk_0x4C9F834EDF566D4A(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x42F3C85A00B4FC7B(*uParam0, 4, func_208(), -1, 0, 0);
				if (bLocal_107)
				{
					unk_0x824F744352C8BC82(func_208());
				}
			}
			if (bParam2)
			{
				unk_0x1B0723EFE914C031(iVar0, 1);
				unk_0x30B0040AB4AF815E(iVar0, 0);
				unk_0x7B28A83A0D3DD0F9(iVar0, 32, 0);
			}
			if (bLocal_108)
			{
				unk_0x82D2BB48A39F1E88(iVar0, 8192, 1);
				unk_0x82D2BB48A39F1E88(iVar0, 65536, 1);
				unk_0x82D2BB48A39F1E88(iVar0, 2, 0);
				unk_0xADB056FF4873632E(*uParam0, 1);
			}
			unk_0xBE91B077ADADE97F(iVar0, 1);
			func_324(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_324(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		unk_0x0F3BD19FF11738D3(&iParam0);
	}
}

void func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1)
	{
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915)
		{
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1)
	{
		if (iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0xC612552622E74D36(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0xC612552622E74D36(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0xC612552622E74D36(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0xC612552622E74D36(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0xC612552622E74D36(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0xC612552622E74D36(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0xC612552622E74D36(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0xC612552622E74D36(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0xC612552622E74D36(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0xC612552622E74D36(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0xC612552622E74D36(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0xC612552622E74D36(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0xC612552622E74D36(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0xC612552622E74D36(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0xC612552622E74D36(iParam0, 95, 95);
			break;
		
		default:
			unk_0xC612552622E74D36(iParam0, 73, 73);
			break;
	}
}

void func_326(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_327(Param0, Param3, fParam6, 200f))
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				iVar1 = unk_0x0BF0F8F3AD0993F6();
				if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
				{
					if (unk_0x591190E69BE43117(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xB7D390F8F682127B(Param0, fParam6, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_327(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0x8B6A925F148E0E94())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (SYSTEM::VMAG2(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_328(int iParam0)
{
	var uVar0;
	
	unk_0x498685EB9132AF88(iParam0, &cLocal_2668);
	while (!unk_0x9CF7186A344D26A9(iParam0, &cLocal_2668))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = unk_0xDC2AF9AB32FB87A8(iParam0, &cLocal_2668);
	unk_0x7B6B41ECBE4B733F(iParam0, &cLocal_2668);
	return uVar0;
}

int func_329(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_330(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1951;
		while (iVar0 < 15)
		{
			switch (iLocal_1930[iVar0])
			{
				case 0:
					if (!iLocal_2861[iVar0] == 0)
					{
						if (unk_0x591190E69BE43117(iParam0, Local_2489[iVar0 /*3*/], fLocal_1273, fLocal_1273, fLocal_1273, 0, 1, 0))
						{
							iLocal_1953++;
							iLocal_1930[iVar0]++;
						}
					}
					else
					{
						iLocal_1930[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1948)
					{
						if (!unk_0x419E13582192CFEA(iLocal_3105[iVar0]))
						{
							unk_0x16E516CA9C88FF48(iLocal_2861[iVar0]);
							if (unk_0xA9C0BBFB9CBB66F1(iLocal_2861[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_327(Local_2489[iVar0 /*3*/], Var1, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(Local_2489[iVar0 /*3*/], Var1, fLocal_1279);
									}
									iLocal_3105[iVar0] = unk_0x170478CC84C8AE2F(iLocal_2861[iVar0], Local_2489[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_2861[iVar0] == joaat("polmav"))
									{
										unk_0xF7E38415C6027209(iLocal_3105[iVar0], 0);
									}
									unk_0x79C3AEC4C7C91A54(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									unk_0x824F744352C8BC82(iLocal_2861[iVar0]);
									if (unk_0xEACFC87E44438F24(iLocal_3105[iVar0], func_206()))
									{
										unk_0xE3F32DF0088B1EA4(iLocal_3105[iVar0], 1);
										if (!unk_0x69AF387D1A91914C(iLocal_2861[iVar0]))
										{
											unk_0xFA5BD1BBE7EA5BD2(iLocal_3105[iVar0], 1);
										}
									}
									if (unk_0xEACFC87E44438F24(iLocal_3105[iVar0], func_207()))
									{
										unk_0xC612552622E74D36(iLocal_3105[iVar0], 0, 0);
									}
									unk_0x8B58E7AC53EED9F1(iLocal_3105[iVar0], 1);
									iLocal_1953 = (iLocal_1953 - 1);
									iLocal_1948++;
									iLocal_1930[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1948++;
							iLocal_1930[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3105[iVar0], 0))
						{
							Var4 = { unk_0xD6E677FAD7521410(iLocal_3105[iVar0], 1) };
						}
						if (fLocal_1287 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1287 * fLocal_1287))
						{
							if (!func_319(iLocal_3105[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_201(iLocal_3105[iVar0]);
								}
								else
								{
									unk_0x5420D0D520CF44D0(&(iLocal_3105[iVar0]));
								}
								iLocal_1948 = (iLocal_1948 - 1);
								iLocal_1930[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1930[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1951 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_203();
	}
}

void func_331(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14());
	uVar19 = unk_0xE0BF3CFAB30C64FB();
	uVar20 = unk_0x57D8512F9DA74735();
	if (bVar18)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar5 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
		Var12 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	iVar1 = 0;
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0xAB0BB1BDD76B67DC(iParam0))
		{
			fLocal_1275 = unk_0x730551DCA699D643(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1470[iVar0] != 99)
			{
				if (iLocal_1470[iVar0] == 0)
				{
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 < (fLocal_813[iVar0] + 20000f))
							{
								if (fLocal_1275 >= (fLocal_813[iVar0] - (7000f * fParam1)))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x69AF387D1A91914C(iLocal_2685[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1646[iVar0]), 2);
									}
									unk_0xC664C0067EEAB8D1(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_333(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_328(iLocal_1294[iVar0]))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x69AF387D1A91914C(iLocal_2685[iVar0]))
									{
										unk_0x191DDA30577F440A(&(iLocal_1646[iVar0]), 2);
									}
									unk_0xC664C0067EEAB8D1(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else
								{
									func_333(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_333(iVar0, 1090519040);
					}
				}
				else if (iLocal_1470[iVar0] == 1)
				{
					unk_0x498685EB9132AF88(iLocal_1294[iVar0], &cLocal_2668);
					bVar17 = false;
					if (unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 0))
					{
						unk_0x16E516CA9C88FF48(func_205());
						if (unk_0xA9C0BBFB9CBB66F1(func_205()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 2) && uVar19) || (unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x16E516CA9C88FF48(func_208());
						bVar17 = unk_0xA9C0BBFB9CBB66F1(func_208());
					}
					if (!unk_0x419E13582192CFEA(iLocal_2916[iVar0]))
					{
						unk_0x16E516CA9C88FF48(iLocal_2685[iVar0]);
						if ((unk_0xA9C0BBFB9CBB66F1(iLocal_2685[iVar0]) && unk_0x9CF7186A344D26A9(iLocal_1294[iVar0], &cLocal_2668)) && bVar17)
						{
							if (fLocal_1275 >= (fLocal_813[iVar0] - (fLocal_1288 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_327(Local_1963[iVar0 /*3*/], Var12, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(Local_1963[iVar0 /*3*/], Var12, fLocal_1279);
									}
									iLocal_2916[iVar0] = unk_0x170478CC84C8AE2F(iLocal_2685[iVar0], Local_1963[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										unk_0xF7E38415C6027209(iLocal_2916[iVar0], 0);
									}
									if (uLocal_98 && !unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 0))
									{
										func_325(iLocal_2916[iVar0]);
									}
									unk_0xDB8D6815E13996A9(iLocal_2916[iVar0], Local_1963[iVar0 /*3*/], 0, 0, 1);
									unk_0x79C3AEC4C7C91A54(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (unk_0xB480C9C35514775A(iLocal_2685[iVar0]) || unk_0x69AF387D1A91914C(iLocal_2685[iVar0]))
									{
										unk_0x47D0DDD8833C5E5F(iLocal_2916[iVar0], 1084227584);
									}
									if (unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 3))
									{
										unk_0x8B58E7AC53EED9F1(iLocal_2916[iVar0], 1);
									}
									if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 0))
									{
										unk_0x89E171705EA920DA(iLocal_2916[iVar0], 1, 1, 0);
										if (unk_0xCA86FAB7FADC8353() > 19 || unk_0xCA86FAB7FADC8353() < 7)
										{
											unk_0xC55DA02D18D77322(iLocal_2916[iVar0], 3);
										}
									}
									unk_0xA2C015B68CE01357(iLocal_2916[iVar0], 1);
									unk_0x1B0723EFE914C031(iLocal_2916[iVar0], 1);
									unk_0x824F744352C8BC82(iLocal_2685[iVar0]);
									iLocal_1955 = (iLocal_1955 - 1);
									iLocal_1470[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955 = (iLocal_1955 - 1);
									func_333(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0)) || iLocal_89) || iParam2)
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
						{
							if (unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 0))
							{
								unk_0x16E516CA9C88FF48(func_205());
								bVar17 = unk_0xA9C0BBFB9CBB66F1(func_205());
								iVar21 = 2;
							}
							else if (!bLocal_102 && ((!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 2) && uVar19) || (unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x16E516CA9C88FF48(func_208());
								bVar17 = unk_0xA9C0BBFB9CBB66F1(func_208());
								iVar21 = 0;
							}
							if (!unk_0xE50EB54E0F21BED0(iLocal_2916[iVar0], 0))
							{
								if (!bLocal_106 && unk_0x9B73EB6255D4AE81(iLocal_2916[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_2916[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_89)
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											unk_0x191DDA30577F440A(&(iLocal_1646[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xBFCE58B2B3249999(iLocal_2916[iVar0], 0))
						{
							unk_0x498685EB9132AF88(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
									if (unk_0x9CF7186A344D26A9(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < unk_0xDC2AF9AB32FB87A8(iLocal_1294[iVar0], &cLocal_2668))
										{
											Var6 = { unk_0xD6E677FAD7521410(iLocal_2916[iVar0], 1) };
											Var9 = { unk_0x3BCD5137CE6A77E2(iLocal_1294[iVar0], fVar15, &cLocal_2668) };
											if (!func_327(Var6, Var12, 5f, fLocal_1286) && func_327(Var9, Var12, 5f, fLocal_1286))
											{
												if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
												{
													func_323(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_333(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_316(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
													{
														func_323(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													unk_0x3CBE9F07524C242D(iLocal_2916[iVar0], 1, 0);
													unk_0xEA5C7C61843816D5(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
											{
												func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_333(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0xDC2AF9AB32FB87A8(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_333(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
									{
										func_323(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_333(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
								{
									func_323(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_333(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 1))
							{
								func_323(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_333(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_2916[iVar0], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_2916[iVar0]))
						{
							iVar4 = unk_0x27FC1B0077581B37(iLocal_2916[iVar0], -1, 0);
							if (!unk_0xECEC7528A52B4EE8(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_322(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!unk_0xE50EB54E0F21BED0(iVar5, 0))
												{
													bVar17 = false;
													if (!func_332(iLocal_2916[iVar0], iVar5) || func_319(iVar5, iLocal_2916[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0x234B68AC2E35ED5A(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											Var25 = { unk_0x8EB57098C563AB39(iParam0, unk_0xD6E677FAD7521410(iLocal_2916[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0x0BCA9ADE67DF9DD8(Var25.f_1) > unk_0x0BCA9ADE67DF9DD8(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (bVar24)
									{
										func_318(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										unk_0xEA5C7C61843816D5(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
							}
						}
						else
						{
							iLocal_1470[iVar0]++;
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_2916[iVar0], 0))
					{
						if (!unk_0xAB0BB1BDD76B67DC(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							iVar4 = unk_0x27FC1B0077581B37(iLocal_2916[iVar0], -1, 0);
							if (!unk_0xECEC7528A52B4EE8(iVar4))
							{
								unk_0xEA5C7C61843816D5(iLocal_2916[iVar0], fParam1);
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
							}
							if (unk_0x9CF7186A344D26A9(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_813[iVar0] + unk_0xDC2AF9AB32FB87A8(iLocal_1294[iVar0], &cLocal_2668)))
								{
									unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
								}
							}
							else
							{
								unk_0x50B76EE36FBE865F(iLocal_2916[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5)
				{
					if (!unk_0xE50EB54E0F21BED0(iLocal_2916[iVar0], 0))
					{
						fVar16 = unk_0x4DDAC4C80BACF92C(iLocal_2916[iVar0]);
					}
					iLocal_1946 = (iLocal_1946 - 1);
					func_333(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1960 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1961 = 0;
		}
	}
	else
	{
		func_204();
	}
}

int func_332(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		Var0 = { unk_0x5675C422E6519C64(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		Var3 = { unk_0x5675C422E6519C64(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_320(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_333(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2685[iParam0] == 0)
	{
		unk_0x824F744352C8BC82(iLocal_2685[iParam0]);
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_2916[iParam0], 0))
	{
		unk_0x3CBE9F07524C242D(iLocal_2916[iParam0], 1, 0);
		unk_0xA2C015B68CE01357(iLocal_2916[iParam0], 0);
		iVar0 = unk_0x27FC1B0077581B37(iLocal_2916[iParam0], -1, 0);
		if (!unk_0xECEC7528A52B4EE8(iVar0) && iVar0 != unk_0x7D2B9E6A64637269())
		{
			unk_0xBE91B077ADADE97F(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x7B5530AB21BFC748(iVar0, iLocal_2916[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0x82D2BB48A39F1E88(iVar0, 8192, 1);
			if (bLocal_108)
			{
				unk_0x82D2BB48A39F1E88(iVar0, 65536, 1);
				unk_0x82D2BB48A39F1E88(iVar0, 2, 0);
			}
			unk_0xA415F00D0E0DFBCE(iVar0, 6, 0);
			unk_0xD5B3E5CB06248A58(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_324(iVar0);
			func_201(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (unk_0x419E13582192CFEA(iVar0))
		{
			unk_0xC606AE2A3209945E(&iVar0);
		}
		if (unk_0x419E13582192CFEA(iLocal_2916[iParam0]))
		{
			unk_0x5420D0D520CF44D0(&(iLocal_2916[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			unk_0x7B6B41ECBE4B733F(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_334(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		Var10 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0xAB0BB1BDD76B67DC(iParam0))
		{
			uVar0 = unk_0x62CB2C6F27D37CA6(iParam0);
			Var1 = { unk_0x40A7E0E65D62E5D2(uVar0, fParam1) };
			Var4 = { unk_0xD6E677FAD7521410(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_326(Var1, Var10, fVar13);
		}
	}
}

void func_335(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > (fParam1 * fParam1))
				{
					unk_0xC460A3A85FF669A4(1);
				}
				else
				{
					unk_0xC460A3A85FF669A4(0);
				}
			}
		}
	}
}

void func_336(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > (fParam1 * fParam1))
				{
					unk_0xCAFB54B99BF4F907(1f);
				}
				else
				{
					unk_0xCAFB54B99BF4F907(0f);
				}
			}
		}
	}
}

void func_337(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0) && unk_0xAB0BB1BDD76B67DC(iParam0))
	{
		fVar1 = (fLocal_1289 + 2000f);
		fVar2 = (fLocal_1290 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x62CB2C6F27D37CA6(iParam0);
			if (fVar1 <= unk_0x663D87E695D9A60A(uVar0))
			{
				if (iLocal_1956 == 0)
				{
					Local_2656 = { unk_0x40A7E0E65D62E5D2(uVar0, fLocal_1289) };
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					Local_2659 = { unk_0x40A7E0E65D62E5D2(iVar0, fVar1) };
					iLocal_1956++;
				}
				else if (!bLocal_106)
				{
					if (Local_2656.x > Local_2659.x)
					{
						fVar3 = Local_2656.x;
						Local_2656.x = Local_2659.x;
						Local_2659.x = fVar3;
					}
					if (Local_2656.f_1 > Local_2659.f_1)
					{
						fVar3 = Local_2656.f_1;
						Local_2656.f_1 = Local_2659.f_1;
						Local_2659.f_1 = fVar3;
					}
					if (Local_2656.f_2 > Local_2659.f_2)
					{
						fVar3 = Local_2656.f_2;
						Local_2656.f_2 = Local_2659.f_2;
						Local_2659.f_2 = fVar3;
					}
					Local_2656 = { Local_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					Local_2659 = { Local_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					unk_0x6F21DC8C6FD88FCF(Local_2656, Local_2659, 0, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x62CB2C6F27D37CA6(iParam0);
			if (iLocal_1959 == 0)
			{
				Local_2662 = { unk_0x40A7E0E65D62E5D2(iVar0, fLocal_1290) };
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				Local_2665 = { unk_0x40A7E0E65D62E5D2(iVar0, fVar2) };
				iLocal_1959++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (Local_2662.x > Local_2665.x)
				{
					fVar3 = Local_2662.x;
					Local_2662.x = Local_2665.x;
					Local_2665.x = fVar3;
				}
				if (Local_2662.f_1 > Local_2665.f_1)
				{
					fVar3 = Local_2662.f_1;
					Local_2662.f_1 = Local_2665.f_1;
					Local_2665.f_1 = fVar3;
				}
				if (Local_2662.f_2 > Local_2665.f_2)
				{
					fVar3 = Local_2662.f_2;
					Local_2662.f_2 = Local_2665.f_2;
					Local_2665.f_2 = fVar3;
				}
				Local_2662 = { Local_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				Local_2665 = { Local_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				unk_0xE99504CC51D09E54(Local_2662, Local_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

int func_338(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (unk_0xF41EB7643E61A928(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	if (unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
		Var6 = { unk_0x9E695CE384C77EF0(iParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_320(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_339()
{
	unk_0x86DA8A407ED8A381(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0xE4158E25735AAF13(0);
	unk_0xD510EA8DF3CF65AC(0);
	unk_0x64A84F7738997E3F(0);
	unk_0xCAFB54B99BF4F907(0f);
	unk_0xC460A3A85FF669A4(0);
	unk_0xA1515A94D43946F1(3);
}

void func_340(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1284;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_343(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (func_338(iParam1, iParam0))
		{
			if (unk_0xC49311A2A500FF09(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_342(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_341(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x7FF6ACE380ED166C();
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x7FF6ACE380ED166C();
		fVar8 = ((fLocal_1292 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam1))
		{
			if (unk_0xC49311A2A500FF09(iParam1, 0))
			{
				iVar9 = unk_0x75B58B38E45C6F9A(iParam1, 0);
				if (!unk_0xE50EB54E0F21BED0(iVar9, 0))
				{
					iVar10 = unk_0x6471F4759775FCA4(iVar9);
					if (unk_0xB480C9C35514775A(iVar10) || unk_0x69AF387D1A91914C(iVar10))
					{
						if (unk_0xBFCE58B2B3249999(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1282 - fLocal_1283));
							fVar1 = (fVar1 + fLocal_1283);
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283)
							{
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282)
							{
								fLocal_1281 = fLocal_1282;
							}
							unk_0x7BFD277DA739DB2B(unk_0x1146A9AE09CE2B14(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

var func_341(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	int iVar13;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = unk_0x64093E028DB051CB(iParam0);
		Var0.f_1 = unk_0x1BECDB6869A407B9(iParam0);
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
		if (unk_0xC49311A2A500FF09(iParam1, 0))
		{
			iVar13 = unk_0x75B58B38E45C6F9A(iParam1, 0);
			Var9.x = unk_0x64093E028DB051CB(iVar13);
			Var9.f_1 = unk_0x1BECDB6869A407B9(iVar13);
		}
		else
		{
			Var6 = { unk_0x9E695CE384C77EF0(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	uVar12 = unk_0x6EE46314283D3C7D(Var0, Var0.f_1, Var9.x, Var9.f_1);
	return uVar12;
}

float func_342(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = SYSTEM::VMAG(Var6);
	return fVar9;
}

float func_343(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		Var0 = unk_0x64093E028DB051CB(iParam0);
		Var0.f_1 = unk_0x1BECDB6869A407B9(iParam0);
		Var6 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var9 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = unk_0x6EE46314283D3C7D(Var3.x, Var3.f_1, Var0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (SYSTEM::VMAG(Var3) * SYSTEM::SIN(fVar12));
}

int func_344()
{
	if (unk_0x419E13582192CFEA(iLocal_3258))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
		{
			if (!unk_0xB4E725A8915BDF60(iLocal_3258))
			{
				iLocal_3403 = 1;
			}
			else
			{
				iLocal_3403 = 0;
			}
		}
		else
		{
			iLocal_3403 = 1;
		}
	}
	else
	{
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[iLocal_3190]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[iLocal_3190], 0))
			{
				if (!unk_0xB4E725A8915BDF60(iLocal_3121[iLocal_3190]))
				{
					iLocal_3404[iLocal_3190] = 1;
				}
				else
				{
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else
			{
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else
		{
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (((((((((((((((((((((((((iLocal_3403 == 1 && iLocal_3404[0] == 1) && iLocal_3404[1] == 1) && iLocal_3404[2] == 1) && iLocal_3404[3] == 1) && iLocal_3404[4] == 1) && iLocal_3404[5] == 1) && iLocal_3404[6] == 1) && iLocal_3404[7] == 1) && iLocal_3404[8] == 1) && iLocal_3404[9] == 1) && iLocal_3404[10] == 1) && iLocal_3404[11] == 1) && iLocal_3404[12] == 1) && iLocal_3404[13] == 1) && iLocal_3404[14] == 1) && iLocal_3404[15] == 1) && iLocal_3404[16] == 1) && iLocal_3404[17] == 1) && iLocal_3404[18] == 1) && iLocal_3404[19] == 1) && iLocal_3404[20] == 1) && iLocal_3404[21] == 1) && iLocal_3404[22] == 1) && iLocal_3404[23] == 1) && iLocal_3404[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_345()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (unk_0x419E13582192CFEA(iLocal_3121[4]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[4], 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[4]))
			{
				Local_3303 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				Var3 = { unk_0xD6E677FAD7521410(iLocal_3121[4], 1) };
				if (Local_3303.x < (Var3.x - 10f) && !unk_0xB4E725A8915BDF60(iLocal_3121[4]))
				{
					unk_0x50B76EE36FBE865F(iLocal_3121[4]);
					unk_0x795957CD3A0042C8(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[3]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[3], 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[3]))
			{
				Local_3303 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				Var0 = { unk_0xD6E677FAD7521410(iLocal_3121[3], 1) };
				if (Local_3303.x < (Var0.x - 10f) && !unk_0xB4E725A8915BDF60(iLocal_3121[3]))
				{
					unk_0x50B76EE36FBE865F(iLocal_3121[3]);
					unk_0x795957CD3A0042C8(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[21]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[21], 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[21]))
			{
				Local_3303 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				Var6 = { unk_0xD6E677FAD7521410(iLocal_3121[21], 1) };
				if (Local_3303.x < (Var6.x - 10f) && !unk_0xB4E725A8915BDF60(iLocal_3121[21]))
				{
					unk_0x50B76EE36FBE865F(iLocal_3121[21]);
					unk_0x795957CD3A0042C8(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[0]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[0], 0))
		{
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) > 50000f && !unk_0xB4E725A8915BDF60(iLocal_3121[0]))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3121[0]))
							{
								unk_0x50B76EE36FBE865F(iLocal_3121[0]);
							}
							unk_0x795957CD3A0042C8(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3264))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3264, 0))
		{
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) > 90000f && !unk_0xB4E725A8915BDF60(iLocal_3264))
						{
							unk_0x39448B5909AEB658(uLocal_3755[0], 0);
							unk_0x39448B5909AEB658(uLocal_3755[1], 0);
							unk_0x39448B5909AEB658(uLocal_3755[2], 0);
							if (unk_0x419E13582192CFEA(iLocal_3223[0]))
							{
								unk_0x0F3BD19FF11738D3(&(iLocal_3223[0]));
							}
							if (unk_0x419E13582192CFEA(iLocal_3223[1]))
							{
								unk_0x0F3BD19FF11738D3(&(iLocal_3223[1]));
							}
							if (unk_0x419E13582192CFEA(iLocal_3223[2]))
							{
								unk_0x0F3BD19FF11738D3(&(iLocal_3223[2]));
							}
							if (unk_0x419E13582192CFEA(iLocal_3223[3]))
							{
								unk_0x0F3BD19FF11738D3(&(iLocal_3223[3]));
							}
							unk_0x795957CD3A0042C8(&iLocal_3264);
							unk_0xF9135F131C423364("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_346(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		if ((unk_0x419E13582192CFEA(iParam1) && unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269())) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x55F5BD4ABD80B211(iParam1))
			{
				if (unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam1), 0))
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x89936830A493350F(uParam0, 1);
						unk_0x97A41BF3F05FC07D(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x89936830A493350F(uParam0, 0);
						unk_0x97A41BF3F05FC07D(uParam0, 255);
					}
				}
			}
			else if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam1)))
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x89936830A493350F(uParam0, 1);
						unk_0x97A41BF3F05FC07D(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x89936830A493350F(uParam0, 0);
						unk_0x97A41BF3F05FC07D(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_347()
{
	if (unk_0x419E13582192CFEA(iLocal_3121[2]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[2], 0))
		{
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) < 50530f)
						{
							if (!unk_0xDBB5D5416B2AB402(iLocal_3121[2]))
							{
								unk_0x89E171705EA920DA(iLocal_3121[2], 1, 1, 0);
							}
						}
						else if (unk_0xDBB5D5416B2AB402(iLocal_3121[2]))
						{
							unk_0x89E171705EA920DA(iLocal_3121[2], 0, 0, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3121[5]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3121[5], 0))
		{
			if (!unk_0xDBB5D5416B2AB402(iLocal_3121[5]))
			{
				unk_0x89E171705EA920DA(iLocal_3121[5], 1, 1, 0);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[0]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3260[0], 0))
		{
			if (!unk_0xDBB5D5416B2AB402(iLocal_3260[0]))
			{
				unk_0x89E171705EA920DA(iLocal_3260[0], 1, 1, 0);
			}
			if (unk_0x9B73EB6255D4AE81(iLocal_3260[0], -1, 0))
			{
				if (!unk_0x419E13582192CFEA(iLocal_3254[0]))
				{
					unk_0x16E516CA9C88FF48(joaat("s_m_m_gentransport"));
					if (unk_0xA9C0BBFB9CBB66F1(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[0] = unk_0x42F3C85A00B4FC7B(iLocal_3260[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x824F744352C8BC82(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[1]))
	{
		if (unk_0xBFCE58B2B3249999(iLocal_3260[1], 0))
		{
			if (!unk_0xDBB5D5416B2AB402(iLocal_3260[1]))
			{
				unk_0x89E171705EA920DA(iLocal_3260[1], 1, 1, 0);
			}
			if (unk_0x9B73EB6255D4AE81(iLocal_3260[1], -1, 0))
			{
				if (!unk_0x419E13582192CFEA(iLocal_3254[1]))
				{
					unk_0x16E516CA9C88FF48(joaat("s_m_m_gentransport"));
					if (unk_0xA9C0BBFB9CBB66F1(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[1] = unk_0x42F3C85A00B4FC7B(iLocal_3260[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x824F744352C8BC82(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_348()
{
	if (iLocal_3181 == 0)
	{
		unk_0x952AB441FA24BF16("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
		unk_0x952AB441FA24BF16("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
		unk_0x952AB441FA24BF16("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
		unk_0x952AB441FA24BF16("SCRIPT\TV_Monitors", 0, -1);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = unk_0x5AD02BBC63E31E46();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = unk_0x5AD02BBC63E31E46();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = unk_0x5AD02BBC63E31E46();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = unk_0x5AD02BBC63E31E46();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = unk_0x5AD02BBC63E31E46();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = unk_0x5AD02BBC63E31E46();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = unk_0x5AD02BBC63E31E46();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		if (!unk_0x0E8572B08CEB6A11(uLocal_3289))
		{
			uLocal_3289 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 1);
			unk_0xEF20E9A7B745D17A(uLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6)
		{
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		unk_0x7C0019321F1FC821();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_285();
		uLocal_3184 = unk_0xA05F91D121569413();
		unk_0x6AF7EE4DD9F8B944(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		unk_0x494E8A58F41F5F54(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x9469E3DA4B5A7A39(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		unk_0x6F21DC8C6FD88FCF(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_126(2, 1);
		func_350("BB_Chase", 45, 0, 1);
		unk_0x20D884FB6567BAD5(3);
		func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_24())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
		func_349();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!unk_0x419E13582192CFEA(iLocal_3271))
		{
			iLocal_3271 = unk_0x170478CC84C8AE2F(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1, 0);
		}
		while (!unk_0x9CF7186A344D26A9(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (unk_0x8B6A925F148E0E94())
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
			{
				unk_0x89E171705EA920DA(iLocal_3259, 1, 1, 0);
				unk_0x49CB177958B472A8(iLocal_3259, 30f);
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3258))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				unk_0x069557E67CC67C29(iLocal_3258, 45, "BB_Chase", 1);
				SYSTEM::SETTIMERB(0);
				func_268();
				unk_0x985CACB900CBBF03(2);
				if (unk_0x419E13582192CFEA(iLocal_3259))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
					{
						unk_0x795957CD3A0042C8(&iLocal_3259);
					}
				}
				if (!unk_0xE0A6F16F546C8274())
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_349()
{
	Local_2489[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1209[0] = -0.0003f;
	fLocal_1225[0] = -0.0085f;
	fLocal_1241[0] = 0.9998f;
	fLocal_1257[0] = 0.0158f;
	iLocal_2861[0] = joaat("blista");
	Local_1963[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_285[4] = -0.0003f;
	fLocal_461[4] = -0.2526f;
	fLocal_637[4] = 0.9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = joaat("manana");
	Local_2489[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1209[1] = 0.0032f;
	fLocal_1225[1] = -0.0003f;
	fLocal_1241[1] = -0.0255f;
	fLocal_1257[1] = 0.9997f;
	iLocal_2861[1] = joaat("bison2");
	Local_2535[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_993[0] = 0.0018f;
	fLocal_1029[0] = 0.0123f;
	fLocal_1065[0] = 0.9644f;
	fLocal_1101[0] = 0.2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = joaat("buzzard");
	Local_2535[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_993[1] = -0.0012f;
	fLocal_1029[1] = 0.0013f;
	fLocal_1065[1] = 0.8439f;
	fLocal_1101[1] = -0.5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = joaat("packer");
	Local_2535[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_993[2] = 0.0057f;
	fLocal_1029[2] = -0.0014f;
	fLocal_1065[2] = -0.2451f;
	fLocal_1101[2] = 0.9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = joaat("jet");
	Local_2535[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_993[3] = 0.0065f;
	fLocal_1029[3] = 0.0191f;
	fLocal_1065[3] = -0.2629f;
	fLocal_1101[3] = 0.9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = joaat("bus");
	Local_2535[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_993[4] = 0.0043f;
	fLocal_1029[4] = 0.0331f;
	fLocal_1065[4] = -0.3125f;
	fLocal_1101[4] = 0.9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = joaat("bison");
	Local_2535[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_993[5] = 0.0056f;
	fLocal_1029[5] = 0.0029f;
	fLocal_1065[5] = 0.4915f;
	fLocal_1101[5] = 0.8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = joaat("jet");
	Local_2535[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_993[7] = 0.0072f;
	fLocal_1029[7] = 0.0176f;
	fLocal_1065[7] = 0.9739f;
	fLocal_1101[7] = -0.2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = joaat("police3");
	Local_2535[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_993[8] = -0.027f;
	fLocal_1029[8] = 0.0016f;
	fLocal_1065[8] = 0.9169f;
	fLocal_1101[8] = -0.3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = joaat("police3");
	Local_2535[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_993[11] = -0.0022f;
	fLocal_1029[11] = -0.0019f;
	fLocal_1065[11] = 0.928f;
	fLocal_1101[11] = -0.3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = joaat("police3");
	Local_2535[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_993[12] = -0.0083f;
	fLocal_1029[12] = -0.0054f;
	fLocal_1065[12] = 0.55f;
	fLocal_1101[12] = 0.8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = joaat("police3");
	Local_2535[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_993[13] = -0.0086f;
	fLocal_1029[13] = -0.005f;
	fLocal_1065[13] = 0.5052f;
	fLocal_1101[13] = 0.8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = joaat("police3");
	Local_2535[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_993[14] = -0.0083f;
	fLocal_1029[14] = -0.0057f;
	fLocal_1065[14] = 0.6469f;
	fLocal_1101[14] = 0.7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = joaat("police3");
	Local_2535[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_993[15] = -0.0041f;
	fLocal_1029[15] = -0.0091f;
	fLocal_1065[15] = 0.9133f;
	fLocal_1101[15] = 0.4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = joaat("police3");
	Local_2535[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_993[19] = 0.0002f;
	fLocal_1029[19] = 0.0018f;
	fLocal_1065[19] = 0.9611f;
	fLocal_1101[19] = -0.2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = joaat("firetruk");
	Local_2535[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_993[20] = -0.0005f;
	fLocal_1029[20] = 0.0018f;
	fLocal_1065[20] = 0.9559f;
	fLocal_1101[20] = 0.2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = joaat("maverick");
	Local_2535[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_993[21] = -0.0252f;
	fLocal_1029[21] = -0.0034f;
	fLocal_1065[21] = 0.9369f;
	fLocal_1101[21] = 0.3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = joaat("blista");
	Local_2535[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_993[22] = 0.001f;
	fLocal_1029[22] = -0.0004f;
	fLocal_1065[22] = 0.8616f;
	fLocal_1101[22] = 0.5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = joaat("airtug");
	Local_2535[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_993[23] = 0.001f;
	fLocal_1029[23] = -0.0001f;
	fLocal_1065[23] = 0.9749f;
	fLocal_1101[23] = -0.2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = joaat("airtug");
	Local_2535[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_993[24] = -0.0001f;
	fLocal_1029[24] = 0.0018f;
	fLocal_1065[24] = 0.5344f;
	fLocal_1101[24] = 0.8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = joaat("airtug");
}

void func_350(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2668, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		Local_2644.x = (Var0.x - 100f);
		Local_2644.f_1 = (Var0.f_1 - 100f);
		Local_2644.f_2 = (Var0.f_2 - 100f);
		Local_2647.x = (Var0.x + 100f);
		Local_2647.f_1 = (Var0.f_1 + 100f);
		Local_2647.f_2 = (Var0.f_2 + 100f);
		unk_0x6F21DC8C6FD88FCF(Local_2644, Local_2647, 0, 0);
		if (bParam2)
		{
			unk_0xB7D390F8F682127B(Var0, 500f, 0, 0, 0, 0, 0, 0);
		}
	}
	unk_0xF479CA7199C54C8F("rgh_traffic", &iLocal_2684);
	func_339();
	if (bParam3)
	{
		func_190(1);
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xF310607047A538D0(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x817486F19ADBF54A(0);
	}
	func_195();
}

void func_351()
{
	if (iLocal_3181 == 0)
	{
		unk_0x2DC2890038BFF758(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		unk_0xF5AFB6AFBDD3C8FD(1);
		unk_0x6F21DC8C6FD88FCF(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3188 = unk_0xDFB7BFA6482FEE1E();
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_24())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			func_21(0, -1, 1);
			unk_0x795957CD3A0042C8(&iLocal_3259);
			unk_0x795957CD3A0042C8(&iLocal_3276);
			unk_0x795957CD3A0042C8(&iLocal_3277);
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		if (!unk_0x575B7C28D81C0B4D(uLocal_3287))
		{
			uLocal_3287 = func_356(Local_3300, 0);
		}
		unk_0xFB8A6909539A30B1("TRV4_GAMEPLAY_START");
		Local_3318 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_262() || !unk_0x70729B766882A4DF())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_355())
		{
			if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_3300, 1) < 800f)
			{
				iLocal_3187 = unk_0xB36B8558948EA7A8(0, 2);
				if (iLocal_3187 == 0)
				{
					unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x2DC2890038BFF758(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x2DC2890038BFF758(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_3300, 1) < 600f)
		{
			if (!unk_0x419E13582192CFEA(iLocal_3258))
			{
				unk_0x16E516CA9C88FF48(joaat("cogcabrio"));
				if (unk_0xA9C0BBFB9CBB66F1(joaat("cogcabrio")))
				{
					iLocal_3258 = unk_0x170478CC84C8AE2F(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1, 0);
					unk_0x3A653D4F5FA4B665(iLocal_3258, 0, 1, 1, 1, 0, 0, 0, 0);
					unk_0xC612552622E74D36(iLocal_3258, 27, 27);
					unk_0x824F744352C8BC82(joaat("cogcabrio"));
					unk_0x01BF36BDFE0F82AC(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0x419E13582192CFEA(iLocal_3222))
			{
				unk_0x16E516CA9C88FF48(joaat("ig_molly"));
				if (unk_0xA9C0BBFB9CBB66F1(joaat("ig_molly")))
				{
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							iLocal_3222 = unk_0x42F3C85A00B4FC7B(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
							unk_0x8F160110753EB17B(iLocal_3222, 1);
							unk_0x1D7A4E9E23D306D6(iLocal_3222, 0);
							unk_0x824F744352C8BC82(joaat("cogcabrio"));
							unk_0x824F744352C8BC82(joaat("ig_molly"));
							unk_0x2271ED1E65FB75EE(iLocal_3222, 1862763509);
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				unk_0xC606AE2A3209945E(&iLocal_3222);
			}
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				unk_0x5420D0D520CF44D0(&iLocal_3258);
			}
		}
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_3300, 1) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				uLocal_3293 = unk_0x42AA2CCF0B61DCD8("BREAKING_NEWS");
				unk_0x16E516CA9C88FF48(joaat("police3"));
				unk_0x16E516CA9C88FF48(joaat("maverick"));
				unk_0x16E516CA9C88FF48(joaat("bison"));
				unk_0x16E516CA9C88FF48(joaat("blista"));
				unk_0x498685EB9132AF88(45, "BB_Chase");
				unk_0x498685EB9132AF88(35, "BB_Chase");
				unk_0x498685EB9132AF88(2, "BB_Chase");
				unk_0x498685EB9132AF88(54, "BB_Chase");
				unk_0x498685EB9132AF88(55, "BB_Chase");
				unk_0x498685EB9132AF88(67, "BB_Chase");
				func_187(1, "BB_Chase");
				unk_0x8A54885A635DC8D1("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			unk_0x824F744352C8BC82(joaat("police3"));
			unk_0x824F744352C8BC82(joaat("maverick"));
			unk_0x824F744352C8BC82(joaat("bison"));
			unk_0x824F744352C8BC82(joaat("blista"));
			unk_0x7B6B41ECBE4B733F(45, "BB_Chase");
			unk_0x7B6B41ECBE4B733F(35, "BB_Chase");
			unk_0x7B6B41ECBE4B733F(2, "BB_Chase");
			unk_0x7B6B41ECBE4B733F(54, "BB_Chase");
			unk_0x7B6B41ECBE4B733F(55, "BB_Chase");
			unk_0x7B6B41ECBE4B733F(67, "BB_Chase");
			func_354(1, "BB_Chase");
			unk_0x08918C6897982748("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (unk_0xDFB7BFA6482FEE1E() > (iLocal_3188 + 135000))
			{
				unk_0x1036762BD3781C84();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = unk_0xDFB7BFA6482FEE1E();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (unk_0xDFB7BFA6482FEE1E() > (iLocal_3188 + 135000))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xB30CD10E2CD1B67D("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xB84B43B766630B5C("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				unk_0xFB8A6909539A30B1("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				iLocal_3259 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				unk_0x3A653D4F5FA4B665(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0xD3B638D46BF908EE(iLocal_3259);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
		}
		else if (unk_0x419E13582192CFEA(iLocal_3259))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					unk_0x3A653D4F5FA4B665(iLocal_3259, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					unk_0x2020FC50CB5FBFA1(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (unk_0x9984C023D4E57C2E(iLocal_3259, 1))
				{
					unk_0x795957CD3A0042C8(&iLocal_3259);
				}
			}
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (iLocal_3442 == 0)
			{
				unk_0xDC1ACDE6E645E5EF(156, 1, 0);
				unk_0xE6611BC25F4D0CB3(-244f, -1842.74f, 28.48f);
				unk_0xE6611BC25F4D0CB3(-1.5f, -2014.4f, 11.5f);
				unk_0xE6611BC25F4D0CB3(-498.7f, -2136.5f, 8.4f);
				unk_0xBA817770948E3E78(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			unk_0xBA817770948E3E78(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && unk_0x419E13582192CFEA(iLocal_3258)) && unk_0x419E13582192CFEA(iLocal_3222))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x73E0CF006385B59C(iLocal_3258, func_353(unk_0x7D2B9E6A64637269()), 0))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_3258))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), unk_0xD6E677FAD7521410(iLocal_3258, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_3359 = 0;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					unk_0xA2A7DE2914591E35();
					unk_0xF5AFB6AFBDD3C8FD(0);
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_352()
{
	while (((!unk_0xA9C0BBFB9CBB66F1(joaat("police3")) || !unk_0xA9C0BBFB9CBB66F1(joaat("maverick"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("bison"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!unk_0x9CF7186A344D26A9(45, "BB_Chase") || !unk_0x9CF7186A344D26A9(35, "BB_Chase")) || !unk_0x9CF7186A344D26A9(2, "BB_Chase")) || !unk_0x9CF7186A344D26A9(54, "BB_Chase")) || !unk_0x9CF7186A344D26A9(55, "BB_Chase")) || !unk_0x9CF7186A344D26A9(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

var func_353(int iParam0)
{
	var uVar0;
	
	unk_0xBDC364B886846D11(iParam0, &uVar0, 1);
	return uVar0;
}

void func_354(int iParam0, char* sParam1)
{
	unk_0x7B6B41ECBE4B733F(iParam0, sParam1);
}

int func_355()
{
	if (Global_21125 == 4)
	{
		if (unk_0x8820F6FCD373F9F7())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_356(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_233(unk_0x02BFF15CAA701972(), 1f, 1f));
	unk_0x13CC211F9F7ACE7F(uVar0, iParam3);
	return uVar0;
}

void func_357()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			unk_0xE9F487B66E055135("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					unk_0xA566E488BA0A0A4C("sol_3_int", 8);
					if (func_401())
					{
						while (!func_373(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_3438 = 0;
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
						func_220(1, 1, 1, 0, 0, 0, 0);
						unk_0xF2CEEA627AD5A24B(unk_0x7D2B9E6A64637269(), "Michael", 0, 0, 0);
						if (unk_0x419E13582192CFEA(Global_95867[0]))
						{
							if (unk_0xBFCE58B2B3249999(Global_95867[0], 0))
							{
								unk_0x4985CD0720AFD468(Global_95867[0], 1, 1);
								iLocal_3259 = Global_95867[0];
							}
						}
						if (unk_0x419E13582192CFEA(Global_95867[1]))
						{
							if (unk_0xBFCE58B2B3249999(Global_95867[1], 0))
							{
								unk_0x4985CD0720AFD468(Global_95867[1], 1, 1);
								iLocal_3276 = Global_95867[1];
							}
						}
						if (unk_0x419E13582192CFEA(Global_95867[2]))
						{
							if (unk_0xBFCE58B2B3249999(Global_95867[2], 0))
							{
								unk_0x4985CD0720AFD468(Global_95867[2], 1, 1);
								iLocal_3277 = Global_95867[2];
							}
						}
						if (unk_0x419E13582192CFEA(Global_95867[3]))
						{
							if (unk_0xBFCE58B2B3249999(Global_95867[3], 0))
							{
								unk_0x4985CD0720AFD468(Global_95867[3], 1, 1);
								iLocal_3278 = Global_95867[3];
							}
						}
						unk_0x7E1C1B2FCF372776(0);
						unk_0xEBDFE18B261316C1(4);
						func_372();
						if (!unk_0xE0A6F16F546C8274())
						{
							unk_0x6E1E3A5B1F9AB95B(250);
						}
						iLocal_3183++;
					}
					break;
				
				case 1:
					if (iLocal_3467 == 0)
					{
						if (unk_0x43DDCE9C73E22D9D())
						{
							if (iLocal_3506 == 0)
							{
								if (unk_0x419E13582192CFEA(iLocal_3278))
								{
									if (unk_0xBFCE58B2B3249999(iLocal_3278, 0))
									{
										if (unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(iLocal_3278)))
										{
											unk_0x0DF115F2DFB9476F(iLocal_3278, 2);
											unk_0x78CDDD1E6367978D(iLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											unk_0xCD37A28258D70638(iLocal_3278, 357.1288f);
											unk_0x77CF3E92F49E693E(iLocal_3278, 1);
											unk_0x47D0DDD8833C5E5F(iLocal_3278, 1084227584);
											func_362(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iLocal_3278)) || unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iLocal_3278))) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iLocal_3278))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(iLocal_3278)))
										{
											if ((((((((unk_0x6471F4759775FCA4(iLocal_3278) != joaat("bus") && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("pounder")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("packer")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("airbus")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("ambulance")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("barracks")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("barracks2")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("benson")) && unk_0x6471F4759775FCA4(iLocal_3278) != joaat("biff"))
											{
												unk_0x78CDDD1E6367978D(iLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iLocal_3278, 207.7515f);
												unk_0x47D0DDD8833C5E5F(iLocal_3278, 1084227584);
												func_362(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(iLocal_3278)) && !unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iLocal_3278))) && !unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iLocal_3278))) && !unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iLocal_3278))) && !unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(iLocal_3278)))
										{
											unk_0x5420D0D520CF44D0(&iLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_360(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						unk_0xF479CA7199C54C8F("SecGuards", &iLocal_3576);
						unk_0x78B2DF314748056B(5, 1862763509, iLocal_3576);
						unk_0x78B2DF314748056B(5, iLocal_3576, 1862763509);
						unk_0xBB3CDAB62C8773C8("TREV4", 0);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (unk_0x2CA4B93E310C1860())
						{
							unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
							unk_0x45D3E5CF91B9BFB7(unk_0x7D2B9E6A64637269());
							unk_0xE03C640D3E1BE2E2(unk_0x7D2B9E6A64637269());
							if (unk_0x5505579F3F8D58CB() > 120000)
							{
								unk_0xFB8A6909539A30B1("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (unk_0x30700B4AA35835FD("Michael", 0))
					{
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 121.4087f);
						unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 2f, 3000, 0, 1, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
						unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -530524, 0, 0, 0);
					}
					if (unk_0x4C6F400CF30C1680(0))
					{
						unk_0xDF23DCD7A3E1B7A5(0f);
					}
					if (!unk_0x43DDCE9C73E22D9D())
					{
						func_359(61);
						if (iLocal_3488 == 0)
						{
							unk_0xFB8A6909539A30B1("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						unk_0xC7EF1AC7845F532D();
						func_220(0, 1, 1, 0, 0, 0, 0);
						iLocal_3183++;
					}
					break;
				
				case 2:
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
					if (unk_0x419E13582192CFEA(iLocal_3259))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3259, 0))
						{
							if (unk_0x9984C023D4E57C2E(iLocal_3259, 1))
							{
								unk_0x795957CD3A0042C8(&iLocal_3259);
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_3276))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3276, 0))
						{
							if (unk_0x9984C023D4E57C2E(iLocal_3276, 1))
							{
								unk_0x795957CD3A0042C8(&iLocal_3276);
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_3277))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3277, 0))
						{
							if (unk_0x9984C023D4E57C2E(iLocal_3277, 1))
							{
								unk_0x795957CD3A0042C8(&iLocal_3277);
							}
						}
					}
					func_358();
					iLocal_3338 = 0;
					iLocal_3183 = 0;
					iLocal_3181 = 0;
					iLocal_3180 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_358()
{
	Global_62104 = 0;
}

void func_359(int iParam0)
{
	if (Global_96292 != -1)
	{
		if (iParam0 == Global_96292)
		{
			Global_96296 = 1;
			return;
		}
	}
}

void func_360(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()), 64);
	}
	if (!unk_0x2CA4B93E310C1860())
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x603ABA046B239722(unk_0x7D2B9E6A64637269(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xE5AC37B329B31F82(0, 0, 3, 0);
	}
	else
	{
		unk_0x09F9466B03D29D2D(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x66AE54CE92457FEE(1);
	}
	else
	{
		if (unk_0x0E8572B08CEB6A11(uParam0->f_4))
		{
			if (unk_0x2671671BBCC6AD9F(uParam0->f_4))
			{
				unk_0x6FA8221C9D2ECB46(uParam0->f_4, 0);
			}
			unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 1);
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 1, 0);
		}
		iVar0 = unk_0x0BF0F8F3AD0993F6();
		if (unk_0x419E13582192CFEA(iVar0))
		{
			unk_0x4603196EEEA2355C(iVar0, 1, 0);
		}
		unk_0x315DA2F7337A8638("TIME_LAPSE");
		if (unk_0xB30CD10E2CD1B67D("TOD_SHIFT_SCENE"))
		{
			unk_0x791B4C3811D53DFA(uParam0->f_10);
			unk_0x315DA2F7337A8638("TIME_LAPSE");
			unk_0xC0BBE340BE2AA02D("TOD_SHIFT_SCENE");
		}
	}
	func_220(bParam1, 1, 0, 0, 0, 0, 0);
	func_361();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x8B6A925F148E0E94())
		{
			unk_0x6E1E3A5B1F9AB95B(250);
		}
	}
	if (!bParam1)
	{
		if (Global_112293.f_32747.f_4801 != -15)
		{
			Global_112293.f_32747.f_4801 = func_96();
		}
	}
}

void func_361()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xAE77D1668DA754A8(Global_112293.f_14139[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_362(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x419E13582192CFEA(Global_102858.f_4))
	{
		if (unk_0xBFCE58B2B3249999(Global_102858.f_4, 0))
		{
			if (func_371(24) != Global_102858.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_368(unk_0xD6E677FAD7521410(Global_102858.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_363(Global_102858.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_363(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x419E13582192CFEA(Global_76066.f_484[25]) && unk_0xBFCE58B2B3249999(Global_76066.f_484[25], 0))
			{
				if (Global_76066.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x9AAA60D60CB4E5C7(iParam0) || unk_0x6471F4759775FCA4(iParam0) == joaat("bus")) || unk_0x6471F4759775FCA4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_367(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD6E677FAD7521410(iParam0, 1) };
			fParam4 = unk_0xA8D713A937F31250(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) != joaat("vehicle_gen_controller"))
			{
				Global_77054 = unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD());
			}
		}
		func_365(iParam5, &Var0, Param1, fParam4, func_34(iParam0));
		func_364(iParam5, iParam0, 0);
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_159(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 12) && !unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_76066.f_555[0 /*21*/].f_4 != unk_0x6471F4759775FCA4(iParam1))
		{
			return;
		}
	}
	if (Global_76973 != -1 && Global_76973 != iParam0)
	{
		return;
	}
	if (unk_0x419E13582192CFEA(iParam1))
	{
		if (unk_0xBFCE58B2B3249999(iParam1, 0))
		{
			if (!unk_0xEE1D92A39CF8E1E6(iParam1))
			{
				unk_0x4985CD0720AFD468(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_112293.f_32747.f_4801 = func_96();
			}
			if (iParam1 != Global_76066.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_371(iParam0);
					if ((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) && iParam1 != iVar0)
					{
						func_145(iVar0, 145);
					}
				}
				Global_76972 = iParam1;
				Global_76973 = iParam0;
				Global_76974 = iParam2;
			}
		}
	}
}

void func_365(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_159(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
		{
			func_366(iParam0);
			func_156(uParam1, &(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 11))
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_152(iParam0, 1);
		}
	}
}

void func_366(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
			unk_0x795957CD3A0042C8(&(Global_76066.f_139[iParam0]));
			Global_76066.f_139[iParam0] = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			func_152(iParam0, 0);
		}
	}
}

void func_367(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_366(iParam0);
	func_152(iParam0, 0);
}

int func_368(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_369(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_369(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_94408[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_94408[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_370(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Global_94408[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_370(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iParam0], 0);
}

int func_371(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76066.f_139[iParam0];
}

void func_372()
{
	Global_62104 = 1;
}

bool func_373(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_400(iParam0, &Var0);
	func_399(iParam0, &Var0, &(Var0.f_1));
	return func_374(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_374(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_432(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_397(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x936616EE3F524830("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0xAF98B1BA240CE3DB();
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xD29D1374727D1C85(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 0);
			uParam0->f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xEF20E9A7B745D17A(uParam0->f_4, uParam1->f_14);
			unk_0x6FA8221C9D2ECB46(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 0, 0);
				}
				iVar0 = unk_0x0BF0F8F3AD0993F6();
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xEE1D92A39CF8E1E6(iVar0))
					{
						unk_0x4985CD0720AFD468(iVar0, 1, 0);
					}
					unk_0x4603196EEEA2355C(iVar0, 0, 0);
				}
			}
			uVar1 = unk_0xE3AAC517B9D11996(uParam0->f_4);
			unk_0x8D8DE9C78C56165D();
			unk_0x8402ED2BE630F8B6(uParam1->f_2, uVar1, 0);
			unk_0xF22CC2CA28E44D4F(uParam1->f_2, uVar1);
			unk_0x86328A349E5CFC0B(uParam1->f_2, uVar1);
			if (bParam3)
			{
				unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, unk_0x9E6858A319A1F6F2(), unk_0xA91C851005050418(), unk_0x77D50D8E8FF785AC());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_397(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 0);
				uParam0->f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xEF20E9A7B745D17A(uParam0->f_4, uParam1->f_14);
				unk_0x6FA8221C9D2ECB46(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
					{
						unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					iVar2 = unk_0x0BF0F8F3AD0993F6();
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if (!unk_0xEE1D92A39CF8E1E6(iVar2))
						{
							unk_0x4985CD0720AFD468(iVar2, 1, 0);
						}
						unk_0x4603196EEEA2355C(iVar2, 0, 0);
					}
				}
				uVar3 = unk_0xE3AAC517B9D11996(uParam0->f_4);
				unk_0x8D8DE9C78C56165D();
				unk_0x8402ED2BE630F8B6(uParam1->f_2, uVar3, 0);
				unk_0xF22CC2CA28E44D4F(uParam1->f_2, uVar3);
				unk_0x86328A349E5CFC0B(uParam1->f_2, uVar3);
				if (bParam3)
				{
					unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_396(&(uParam0->f_1), 0, 0, 8, unk_0x9E6858A319A1F6F2(), unk_0xA91C851005050418(), unk_0x77D50D8E8FF785AC());
				func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x315DA2F7337A8638("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 0);
			uParam0->f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xEF20E9A7B745D17A(uParam0->f_4, uParam1->f_14);
			unk_0xAB0596591A2DEF66(uParam0->f_4, 3);
			unk_0x6FA8221C9D2ECB46(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 0, 0);
				}
				iVar4 = unk_0x0BF0F8F3AD0993F6();
				if (unk_0x419E13582192CFEA(iVar4))
				{
					if (!unk_0xEE1D92A39CF8E1E6(iVar4))
					{
						unk_0x4985CD0720AFD468(iVar4, 1, 0);
					}
					unk_0x4603196EEEA2355C(iVar4, 0, 0);
				}
			}
			uVar5 = unk_0xE3AAC517B9D11996(uParam0->f_4);
			unk_0x8D8DE9C78C56165D();
			unk_0x8402ED2BE630F8B6(uParam1->f_2, uVar5, 0);
			unk_0xF22CC2CA28E44D4F(uParam1->f_2, uVar5);
			unk_0x86328A349E5CFC0B(uParam1->f_2, uVar5);
			if (bParam3)
			{
				unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, unk_0x9E6858A319A1F6F2(), unk_0xA91C851005050418(), unk_0x77D50D8E8FF785AC());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x315DA2F7337A8638("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_377(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
					unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xEF20E9A7B745D17A(uParam0->f_4, uParam1->f_14);
					unk_0xAB0596591A2DEF66(uParam0->f_4, 3);
					unk_0x6FA8221C9D2ECB46(uParam0->f_4, 1);
					uParam0->f_9 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0xD13758E51A782103(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xEF20E9A7B745D17A(uParam0->f_4, uParam1->f_14);
				unk_0xAB0596591A2DEF66(uParam0->f_4, 3);
				unk_0x6FA8221C9D2ECB46(uParam0->f_4, 1);
				uParam0->f_9 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x4E38E404B98F3D9A())
				{
					unk_0x8BA9BCDD56AA7115(250);
				}
				if (!unk_0x8B6A925F148E0E94())
				{
					unk_0xAF98B1BA240CE3DB();
					unk_0xEFD424FDD55A6EC7(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0x0E8572B08CEB6A11(uParam0->f_4) && unk_0x257CAD90873BF327(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0xDFB7BFA6482FEE1E();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x4E38E404B98F3D9A())
				{
					unk_0x8BA9BCDD56AA7115(250);
				}
				if (!unk_0x8B6A925F148E0E94())
				{
					unk_0xAF98B1BA240CE3DB();
					unk_0xEFD424FDD55A6EC7(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x6AF7EE4DD9F8B944(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0xDFB7BFA6482FEE1E())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (unk_0xE0A6F16F546C8274())
	{
		if ((unk_0xDFB7BFA6482FEE1E() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDFB7BFA6482FEE1E();
		}
		Global_28 = unk_0xDFB7BFA6482FEE1E();
		if ((unk_0xDFB7BFA6482FEE1E() - Global_27) > iParam0)
		{
			if (func_376())
			{
				Global_27 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
	}
	return 0;
}

int func_376()
{
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (unk_0x86AF801D34E482FF(0, 18) || unk_0x86AF801D34E482FF(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_96();
			iVar5 = func_96();
			func_104(&iVar5, iParam0);
			func_105(&iVar5, iParam1);
			func_106(&iVar5, 0);
			if (func_394(*uParam4, iVar5))
			{
				func_393(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_391(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_384((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x8FC9EEB5362BDFA8(0.6f);
				unk_0x57C1B8A4131913BA(0);
				unk_0xBCB30BE1CC07FBB0(0);
			}
			func_383();
			uParam4->f_10 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xB84B43B766630B5C("TOD_SHIFT_SCENE");
			func_361();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x0E8572B08CEB6A11(uParam4->f_4) && unk_0x257CAD90873BF327(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x0E8572B08CEB6A11(uParam4->f_4) && unk_0x257CAD90873BF327(uParam4->f_4))
				{
					fVar0 = unk_0xF9396352432E6C10(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x15173FB88ABC94F9(sParam2) != 0)
						{
							unk_0x3FD146795EFB335A(sParam2, fParam8);
						}
						if (unk_0x15173FB88ABC94F9(sParam3) != 0)
						{
							unk_0x642711D920F70943();
							unk_0xD2179AB45928B7F4(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_393(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x29D9E3B7EDBBA6FD(func_382(iVar5), func_381(iVar5), func_380(iVar5));
				if (bParam7)
				{
					unk_0xDFEA7BB6BBCCEC80();
				}
				unk_0x791B4C3811D53DFA(uParam4->f_10);
				unk_0x315DA2F7337A8638("TIME_LAPSE");
				if (bParam7)
				{
					unk_0xBCB30BE1CC07FBB0(1);
					unk_0x57C1B8A4131913BA(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_379(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_393(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x29D9E3B7EDBBA6FD(func_382(iVar5), func_381(iVar5), func_380(iVar5));
			if (func_378(iVar5) != unk_0x9E6858A319A1F6F2())
			{
				unk_0x1012C4215A037B41(func_378(iVar5), func_103(iVar5), func_101(iVar5));
			}
			func_272();
			unk_0x68B0D6E564002023(6);
			break;
	}
	return 0;
}

int func_378(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_379(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_381(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_382(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_383()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		return 0;
	}
	if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
	{
		return 0;
	}
	unk_0x3D72B9992AD4B7C5(iVar0, "OFF");
	return 1;
}

void func_384(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_390(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5)))
		{
			func_385(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_390(&(Global_112293.f_18101.f_362[iVar1 /*3*/])))
		{
			func_385(&(Global_112293.f_18101.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x5A5F8D595F57FCD3();
}

void func_385(var uParam0, float fParam1)
{
	if (func_390(uParam0))
	{
		func_386(uParam0, (func_388(uParam0) + fParam1));
	}
}

void func_386(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_387(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_387(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

float func_388(var uParam0)
{
	if (func_390(uParam0))
	{
		if (func_389(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_387(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_389(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_390(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_391(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_394(iParam0, iParam1))
	{
		iVar0 = func_103(iParam1);
		iVar1 = func_101(iParam0);
		iVar2 = (func_101(iParam0) - func_101(iParam1));
		iVar3 = (func_103(iParam0) - func_103(iParam1));
		iVar4 = (func_378(iParam0) - func_378(iParam1));
		iVar5 = (func_382(iParam0) - func_382(iParam1));
		iVar6 = (func_381(iParam0) - func_381(iParam1));
		iVar7 = (func_380(iParam0) - func_380(iParam1));
	}
	else
	{
		iVar0 = func_103(iParam0);
		iVar1 = func_101(iParam1);
		iVar2 = (func_101(iParam1) - func_101(iParam0));
		iVar3 = (func_103(iParam1) - func_103(iParam0));
		iVar4 = (func_378(iParam1) - func_378(iParam0));
		iVar5 = (func_382(iParam1) - func_382(iParam0));
		iVar6 = (func_381(iParam1) - func_381(iParam0));
		iVar7 = (func_380(iParam1) - func_380(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_100(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_392(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_392(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_101(*iParam0);
	iVar1 = func_103(*iParam0);
	iVar2 = func_378(*iParam0);
	iVar3 = func_382(*iParam0);
	iVar4 = func_381(*iParam0);
	iVar5 = func_380(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_100(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_100(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_396(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_394(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_395(iParam1) || !func_395(iParam0))
	{
		return 1;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_103(iParam0);
	iVar1 = func_103(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_381(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_382(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_101(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_378(iParam0);
	if (iVar5 < 1 || iVar5 > func_100(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, iParam1);
	func_105(uParam0, iParam2);
	func_104(uParam0, iParam3);
	func_98(uParam0, iParam5);
	func_99(uParam0, iParam4);
	func_97(uParam0, iParam6);
}

bool func_397(int iParam0, int iParam1)
{
	return func_398(unk_0xCA86FAB7FADC8353(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_90158[iParam0 /*34*/].f_14;
			*uParam2 = Global_90158[iParam0 /*34*/].f_13;
			break;
	}
}

void func_400(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_107())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_107())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_107() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x15173FB88ABC94F9("RAIN") == unk_0xD4D337C68C18DE99())
	{
		if (unk_0xAB6A270F84A8781E(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xAB6A270F84A8781E(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_401()
{
	bool bVar0;
	
	bVar0 = unk_0x3E2C7717C449F4CB();
	if (!Global_77247)
	{
		if (!bVar0)
		{
			Global_77247 = 1;
		}
	}
	return bVar0;
}

void func_402()
{
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
	if (!func_23())
	{
		if (func_432(0))
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			unk_0x16E516CA9C88FF48(joaat("rapidgt"));
			unk_0x16E516CA9C88FF48(joaat("surano"));
			unk_0x16E516CA9C88FF48(joaat("carbonizzare"));
			while ((!unk_0xA9C0BBFB9CBB66F1(joaat("rapidgt")) || !unk_0xA9C0BBFB9CBB66F1(joaat("surano"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3259))
			{
				unk_0x6AF7EE4DD9F8B944(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0x170478CC84C8AE2F(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1, 0);
				unk_0xC612552622E74D36(iLocal_3259, 112, 112);
				unk_0xC595907BB71C921D(iLocal_3259, 3000, 0);
				unk_0xAC2B08493719B297(iLocal_3259, 1);
				unk_0x824F744352C8BC82(joaat("rapidgt"));
				unk_0x16C6E55F8C91ED24(joaat("rapidgt"), 1);
				unk_0x8B58E7AC53EED9F1(iLocal_3259, 1);
				unk_0xD4DF29F3D7B97053(iLocal_3259, 1);
			}
			if (!unk_0x419E13582192CFEA(iLocal_3276))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("surano")))
				{
					unk_0x6AF7EE4DD9F8B944(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0x170478CC84C8AE2F(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0xC612552622E74D36(iLocal_3276, 0, 0);
					unk_0xC595907BB71C921D(iLocal_3276, 3000, 0);
					unk_0xAC2B08493719B297(iLocal_3276, 1);
					unk_0x824F744352C8BC82(joaat("surano"));
					unk_0x16C6E55F8C91ED24(joaat("surano"), 1);
					unk_0xD4DF29F3D7B97053(iLocal_3276, 1);
				}
			}
			if (!unk_0x419E13582192CFEA(iLocal_3277))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("carbonizzare")))
				{
					unk_0x6AF7EE4DD9F8B944(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0x170478CC84C8AE2F(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0xC612552622E74D36(iLocal_3277, 89, 89);
					unk_0xC595907BB71C921D(iLocal_3277, 3000, 0);
					unk_0xAC2B08493719B297(iLocal_3277, 1);
					unk_0x824F744352C8BC82(joaat("carbonizzare"));
					unk_0x16C6E55F8C91ED24(joaat("carbonizzare"), 1);
					unk_0xD4DF29F3D7B97053(iLocal_3277, 1);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else
	{
		unk_0xF479CA7199C54C8F("SecGuards", &iLocal_3576);
		unk_0x78B2DF314748056B(5, 1862763509, iLocal_3576);
		unk_0x78B2DF314748056B(5, iLocal_3576, 1862763509);
		if (Global_93547 == 1)
		{
			if (func_405() == 0)
			{
				func_404(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 1)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 2)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_405() == 3)
			{
				func_404(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_403();
			}
		}
		else
		{
			if (func_405() == 0)
			{
				func_404(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_405() == 1)
			{
				func_404(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 2)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 3)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xFB8A6909539A30B1("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		unk_0xBB3CDAB62C8773C8("TREV4", 0);
		while (!unk_0x080D38ACEC5DC1A2(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_403()
{
	if (iLocal_3181 == 0)
	{
		unk_0x6AF7EE4DD9F8B944(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
		unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		unk_0xEC173D75B3C8E9EC(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0xE0A6F16F546C8274())
		{
			func_21(0, -1, 1);
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		func_6();
	}
}

void func_404(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		unk_0x87F1904AB605184A(0);
		unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 2);
		unk_0x543F5B2D3F90CA6D(1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
		}
		Global_99366 = { Param0 };
		Global_99369 = fParam3;
		Global_99365 = 1;
		if (iParam4 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_99370.f_20), 14);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_99370.f_20), 24);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 24);
		}
		func_22(1);
	}
}

int func_405()
{
	if (!Global_99370 == 10 && !Global_99370 == 9)
	{
		return 0;
	}
	return Global_99370.f_2;
}

void func_406()
{
	if (iLocal_3490[0] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[7]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[7]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[7], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
			}
			else
			{
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[8]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[8]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
			}
			else
			{
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[11]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[11], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[11]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[11], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
			}
			else
			{
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[12]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[12], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[12]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[12], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
			}
			else
			{
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[13]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[13], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[13]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[13], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
			}
			else
			{
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[14]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[14], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[14]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[14], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
			}
			else
			{
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_3121[15]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3121[15], 0))
			{
				unk_0x01BF36BDFE0F82AC(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3121[15]))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_3121[15], 0))
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x0097E1CD6A252D2C(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
			}
			else
			{
				iLocal_3498[6] = 1;
			}
		}
	}
}

void func_407()
{
	switch (iLocal_3180)
	{
		case 2:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3364 = 0;
					iLocal_3523 = 0;
					iLocal_3556 = 0;
					iLocal_3557 = 0;
					func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (unk_0x0BABEFEA577FCFA4(Local_3318, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1) > 2f)
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (unk_0x0BABEFEA577FCFA4(Local_3318, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1) > 100f)
						{
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								if (func_410(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x2DC2890038BFF758(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_409())
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3258, 1) < 200f && unk_0xB4E725A8915BDF60(iLocal_3258))
								{
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x2DC2890038BFF758(3f, 12f, 4);
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3181 >= 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3524[0] = 0;
					iLocal_3524[1] = 0;
					iLocal_3524[2] = 0;
					iLocal_3524[3] = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3555 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3562 = 0;
					iLocal_3199 = unk_0xDFB7BFA6482FEE1E();
					func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_3258))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
							{
								if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3258, 1) < 200f && unk_0xB4E725A8915BDF60(iLocal_3258))
								{
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_3258))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0) || unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 7000f && unk_0x730551DCA699D643(iLocal_3258) < 28000f)
										{
											if (!func_262())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3524[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[1] == 0)
								{
									if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0) || unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 28000f && unk_0x730551DCA699D643(iLocal_3258) < 34500f)
										{
											if (!func_262())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x2DC2890038BFF758(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (unk_0xBFCE58B2B3249999(iLocal_3121[7], 0) || unk_0xBFCE58B2B3249999(iLocal_3121[8], 0))
									{
										if (unk_0x730551DCA699D643(iLocal_3258) > 36000f && unk_0x730551DCA699D643(iLocal_3258) < 41000f)
										{
											if (!func_262())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x2DC2890038BFF758(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 41000f && unk_0x730551DCA699D643(iLocal_3258) < 43500f)
									{
										if (unk_0x419E13582192CFEA(iLocal_3265) && unk_0xB4E725A8915BDF60(iLocal_3265))
										{
											if (!func_262())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x2DC2890038BFF758(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 50509f && unk_0x730551DCA699D643(iLocal_3258) < 50872f)
									{
										if (unk_0x419E13582192CFEA(iLocal_3265) && unk_0xB4E725A8915BDF60(iLocal_3265))
										{
											if (!func_262())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3555 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[3] == 0)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 58000f && unk_0x730551DCA699D643(iLocal_3258) < 68000f)
									{
										if (!func_262())
										{
											if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) < 76000f)
									{
										if (!func_262())
										{
											if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 80000f && unk_0x730551DCA699D643(iLocal_3258) < 82000f)
									{
										if (unk_0x419E13582192CFEA(iLocal_3260[0]))
										{
											if (unk_0xBFCE58B2B3249999(iLocal_3260[0], 0))
											{
												if (unk_0xB4E725A8915BDF60(iLocal_3260[0]))
												{
													if (!func_262())
													{
														if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
														{
															if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x2DC2890038BFF758(3f, 10f, 4);
																iLocal_3553 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3559 == 0)
								{
									if (unk_0x730551DCA699D643(iLocal_3258) > 82100f && unk_0x730551DCA699D643(iLocal_3258) < 83500f)
									{
										if (unk_0x419E13582192CFEA(iLocal_3121[11]))
										{
											if (unk_0xB4E725A8915BDF60(iLocal_3121[11]))
											{
												if (!func_262())
												{
													if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x419E13582192CFEA(iLocal_3121[12]))
										{
											if (unk_0xB4E725A8915BDF60(iLocal_3121[12]))
											{
												if (!func_262())
												{
													if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3562 == 0)
								{
									if ((unk_0x730551DCA699D643(iLocal_3258) > 101891f && unk_0x730551DCA699D643(iLocal_3258) < 105000f) && unk_0xB4E725A8915BDF60(iLocal_3258))
									{
										if (!func_262())
										{
											if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x2DC2890038BFF758(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x730551DCA699D643(iLocal_3258) > 105500f && unk_0x730551DCA699D643(iLocal_3258) < 119000f) && unk_0xDFB7BFA6482FEE1E() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_262())
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0xDFB7BFA6482FEE1E();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_262())
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((unk_0x730551DCA699D643(iLocal_3258) > 105500f && unk_0x730551DCA699D643(iLocal_3258) < 119000f) && unk_0xDFB7BFA6482FEE1E() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_262())
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3563 = 0;
					iLocal_3569 = 0;
					iLocal_3564 = 1;
					iLocal_3204 = unk_0xDFB7BFA6482FEE1E();
					func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "Michael", 0, 1);
					if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						unk_0x470F5D93F0C35D3D("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_262())
							{
								if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x2DC2890038BFF758(4f, 6f, 4);
										iLocal_3200 = unk_0xDFB7BFA6482FEE1E();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_3200 + 5000)
						{
							if (!func_262())
							{
								if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x2DC2890038BFF758(4f, 6f, 4);
										iLocal_3200 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && unk_0xDFB7BFA6482FEE1E() > iLocal_3204 + 4000)
					{
						if (!func_262())
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x2DC2890038BFF758(4f, 6f, 4);
									iLocal_3204 = unk_0xDFB7BFA6482FEE1E();
									iLocal_3564 = 1;
									iLocal_3563 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3533 = 0;
					iLocal_3565 = 0;
					iLocal_3566 = 0;
					func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "Michael", 0, 1);
					if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_262())
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_262())
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_3222))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
							{
								if (unk_0xEEC203A73BC92E7E(uLocal_3209))
								{
									if (unk_0x0BC8768247440B3A(uLocal_3209) > 0.65f && unk_0x0BC8768247440B3A(uLocal_3209) < 0.835f)
									{
										if (!func_262())
										{
											if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x2DC2890038BFF758(8f, 8f, 4);
													iLocal_3532 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3565 == 0)
					{
						if (!unk_0x419E13582192CFEA(iLocal_3222))
						{
							if (!func_262())
							{
								if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_262())
						{
							if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3566 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3567 = 0;
					iLocal_3205 = unk_0xDFB7BFA6482FEE1E();
					func_17(&uLocal_3578, 0, unk_0x7D2B9E6A64637269(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							iLocal_3257 = func_408(unk_0x7D2B9E6A64637269(), joaat("COP"), 0, 0, 28);
							if (unk_0x419E13582192CFEA(iLocal_3257))
							{
								if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && unk_0xDFB7BFA6482FEE1E() > iLocal_3205 + 5000)
					{
						if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							iLocal_3257 = func_408(unk_0x7D2B9E6A64637269(), joaat("COP"), 0, 0, 28);
							if (unk_0x419E13582192CFEA(iLocal_3257))
							{
								if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		unk_0x65C60F47A52ECB92(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x419E13582192CFEA(iVar0[iVar17]))
			{
				if (!unk_0xECEC7528A52B4EE8(iVar0[iVar17]))
				{
					if (unk_0x5FB5CBC5FDADA3C9(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xB4E725A8915BDF60(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x419E13582192CFEA(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0xECEC7528A52B4EE8(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x5FB5CBC5FDADA3C9(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xB4E725A8915BDF60(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_409()
{
	if (Global_21125 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_410(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_261(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21173 = 1;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
	return func_250(sParam3, iParam4, bParam7);
}

void func_411()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_412(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 2, 200, 0))
			{
				unk_0xD6B5F39048985638(unk_0x1146A9AE09CE2B14());
				unk_0xA4A022C8F062BB1D(unk_0x1146A9AE09CE2B14());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (func_412(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 2, 200, 0))
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 3, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

int func_412(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_413()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iLocal_3259 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
	}
}

void func_414()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (unk_0x419E13582192CFEA(iLocal_3283))
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_3288))
				{
					if (func_16(unk_0x7D2B9E6A64637269(), iLocal_3283, 1) > 100f)
					{
						func_236("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0x419E13582192CFEA(iLocal_3258))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
					{
						if (unk_0x730551DCA699D643(iLocal_3258) > 62000f && unk_0x730551DCA699D643(iLocal_3258) < 77000f)
						{
							if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
								{
									if (unk_0xA8D713A937F31250(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) < 200f && unk_0xA8D713A937F31250(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = unk_0xDFB7BFA6482FEE1E();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && unk_0xDFB7BFA6482FEE1E() > iLocal_3197 + 4000)
										{
											func_236("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1)
									{
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6)
		{
			if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -928.9f, -2935f, 13f, 1) < 5f && !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()) || unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (func_412(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 2, 200, 0))
				{
					func_236("TRV4_FAIL2");
				}
				else if (!func_211("TRV4_HELP3"))
				{
					func_417("TRV4_HELP3");
				}
			}
			else if (func_211("TRV4_HELP3"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_3258))
		{
			if (!unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0x419E13582192CFEA(iLocal_3222))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
					{
						unk_0x8F160110753EB17B(iLocal_3222, 0);
						unk_0xC595907BB71C921D(iLocal_3222, 0, 0);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_3222))
			{
				if (unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					func_236("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
				{
					if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							unk_0x1036762BD3781C84();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
						{
							if (unk_0x730551DCA699D643(iLocal_3258) < 40000f)
							{
								if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3222) > 400f)
								{
									func_236("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0x7D2B9E6A64637269(), iLocal_3222) > 350f)
							{
								func_236("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || unk_0xDFB7BFA6482FEE1E() > iLocal_3195 + 12000)
					{
						func_236("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0xD2D71C54782FDE2A(unk_0x7D2B9E6A64637269()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_3258, 0))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_3258))
				{
					if (unk_0x730551DCA699D643(iLocal_3258) > 111509f)
					{
						if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_236("TRV4_FAIL1");
						}
					}
					if (unk_0x730551DCA699D643(iLocal_3258) > 122000f)
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							if (unk_0x020175C59CBE79DB(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = unk_0xDFB7BFA6482FEE1E();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (unk_0xDFB7BFA6482FEE1E() > iLocal_3198 + 4000)
									{
										func_236("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2)
		{
			if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
		{
			if (func_416())
			{
				func_415();
			}
		}
	}
}

void func_415()
{
	func_423(unk_0x7D2B9E6A64637269(), 0);
	func_419();
}

int func_416()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_99370 == 7 || Global_99370 == 8)
	{
		return 1;
	}
	return 0;
}

void func_417(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_111349, unk_0x471C98FD94C0A5FD(), 24);
		Global_111343 = 1;
	}
	else
	{
		StringCopy(&Global_111349, "NULL", 24);
		Global_111343 = 0;
	}
}

void func_419()
{
	func_425(24, 1);
	unk_0x8FF71A24509DA743("PoliceScannerDisabled", 0);
	unk_0x86DA8A407ED8A381(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_420();
	func_210(&uLocal_28, 0, 0);
	unk_0x985CACB900CBBF03(0);
	unk_0xF5AFB6AFBDD3C8FD(0);
	unk_0xE76ABB7DC1AD1626();
	if (unk_0x419E13582192CFEA(iLocal_3271))
	{
		unk_0x5420D0D520CF44D0(&iLocal_3271);
	}
	func_418(0);
	if (unk_0xA66693527106D3DF(uLocal_3221))
	{
		unk_0xF5A3E4A97D6F6DD4(uLocal_3221);
	}
	if (unk_0x419E13582192CFEA(iLocal_3222))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3222))
		{
			unk_0x504B26425DFF773C(iLocal_3222, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3222);
	}
	if (unk_0x419E13582192CFEA(iLocal_3228))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3228))
		{
			unk_0x504B26425DFF773C(iLocal_3228, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3228);
	}
	if (unk_0x419E13582192CFEA(iLocal_3245))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3245))
		{
			unk_0x504B26425DFF773C(iLocal_3245, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3245);
	}
	if (unk_0x419E13582192CFEA(iLocal_3246))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3246))
		{
			unk_0x504B26425DFF773C(iLocal_3246, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3246);
	}
	if (unk_0x419E13582192CFEA(iLocal_3247))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3247))
		{
			unk_0x504B26425DFF773C(iLocal_3247, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3247);
	}
	if (unk_0x419E13582192CFEA(iLocal_3248))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3248))
		{
			unk_0x504B26425DFF773C(iLocal_3248, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3248);
	}
	if (unk_0x419E13582192CFEA(iLocal_3249))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3249))
		{
			unk_0x504B26425DFF773C(iLocal_3249, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3249);
	}
	if (unk_0x419E13582192CFEA(iLocal_3250))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3250))
		{
			unk_0x504B26425DFF773C(iLocal_3250, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_3250);
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3223[0]))
		{
			unk_0x504B26425DFF773C(iLocal_3223[0], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3223[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3223[1]))
		{
			unk_0x504B26425DFF773C(iLocal_3223[1], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3223[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[2]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3223[2]))
		{
			unk_0x504B26425DFF773C(iLocal_3223[2], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3223[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3223[3]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3223[3]))
		{
			unk_0x504B26425DFF773C(iLocal_3223[3], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3223[3]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(uLocal_3229[0]))
		{
			unk_0x504B26425DFF773C(uLocal_3229[0], 1);
		}
		unk_0x0F3BD19FF11738D3(&(uLocal_3229[0]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(uLocal_3229[1]))
		{
			unk_0x504B26425DFF773C(uLocal_3229[1], 1);
		}
		unk_0x0F3BD19FF11738D3(&(uLocal_3229[1]));
	}
	if (unk_0x419E13582192CFEA(uLocal_3229[2]))
	{
		if (!unk_0xECEC7528A52B4EE8(uLocal_3229[2]))
		{
			unk_0x504B26425DFF773C(uLocal_3229[2], 1);
		}
		unk_0x0F3BD19FF11738D3(&(uLocal_3229[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[0]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[0], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[1]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[1], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[2]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[2]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[2], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[2]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[3]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[3]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[3], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[3]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[4]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[4]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[4], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[4]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[5]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[5]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[5], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[5]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[6]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[6]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[6], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[6]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[7]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[7]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[7], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[7]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[8]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[8]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[8], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[8]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[9]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[9]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[9], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[9]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3233[10]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3233[10]))
		{
			unk_0x504B26425DFF773C(iLocal_3233[10], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3233[10]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3251[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3251[0]))
		{
			unk_0x504B26425DFF773C(iLocal_3251[0], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3251[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3254[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3254[0]))
		{
			unk_0x504B26425DFF773C(iLocal_3254[0], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3254[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3254[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_3254[1]))
		{
			unk_0x504B26425DFF773C(iLocal_3254[1], 1);
		}
		unk_0x0F3BD19FF11738D3(&(iLocal_3254[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3258))
	{
		unk_0x795957CD3A0042C8(&iLocal_3258);
	}
	if (unk_0x419E13582192CFEA(iLocal_3259))
	{
		if (unk_0x9984C023D4E57C2E(iLocal_3259, 0))
		{
			unk_0x795957CD3A0042C8(&iLocal_3259);
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3264))
	{
		unk_0x795957CD3A0042C8(&iLocal_3264);
	}
	if (unk_0x419E13582192CFEA(iLocal_3265))
	{
		unk_0x795957CD3A0042C8(&iLocal_3265);
	}
	if (unk_0x419E13582192CFEA(iLocal_3266))
	{
		unk_0x795957CD3A0042C8(&iLocal_3266);
	}
	if (unk_0x419E13582192CFEA(iLocal_3267))
	{
		unk_0x795957CD3A0042C8(&iLocal_3267);
	}
	if (unk_0x419E13582192CFEA(iLocal_3271))
	{
		unk_0x795957CD3A0042C8(&iLocal_3271);
	}
	if (unk_0x419E13582192CFEA(iLocal_3275))
	{
		if (unk_0x9984C023D4E57C2E(iLocal_3275, 0))
		{
			unk_0x795957CD3A0042C8(&iLocal_3275);
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[0]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3279[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[1]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3279[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[0]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3260[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3260[1]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3260[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[0]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3279[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3279[1]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3279[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3268[0]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3268[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3268[1]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3268[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3272[0]))
	{
		unk_0x795957CD3A0042C8(&(iLocal_3272[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_3263))
	{
		unk_0x795957CD3A0042C8(&iLocal_3263);
	}
	unk_0x08918C6897982748("TRV4_START");
	unk_0x08918C6897982748("TRV4_GAMEPLAY_START");
	unk_0x08918C6897982748("TRV4_START_CS_SKIP");
	unk_0x08918C6897982748("TRV4_START_RT");
	unk_0x08918C6897982748("TRV4_FOOT_CHASE_RT");
	unk_0x08918C6897982748("TRV4_EVADE_RT");
	unk_0x08918C6897982748("TRV4_CAR_ENTERED");
	unk_0x08918C6897982748("TRV4_AIRPORT_ENTERED");
	unk_0x08918C6897982748("TRV4_CHASE");
	unk_0x08918C6897982748("TRV4_JET_ENTERED");
	if (unk_0x4336DC3297C47528(iLocal_3220))
	{
		unk_0x23AD9DB85DF0B50D(iLocal_3220);
	}
	if (unk_0x176066ACB1B41C48(uLocal_3763))
	{
		unk_0x3FAC20807B650B4F(uLocal_3763, 0);
	}
	unk_0xA2A7DE2914591E35();
	unk_0x3D9BC07C93913E04(&uLocal_3293);
	unk_0xB5F867E143F78583("digitalOverlay");
	unk_0x6F21DC8C6FD88FCF(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	unk_0x6F21DC8C6FD88FCF(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (unk_0x9745FAC5B3E4C8B8("Trev4_5"))
	{
		unk_0xB3081038630E7D72("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
	unk_0x36BB8F00E3205417(1f);
	unk_0xDD7C2F9844E745B1(1);
	unk_0x4200138CBB376D4D(1);
	unk_0xF9135F131C423364("missheist_agency3aig_lift_waitped_a");
	func_293(0);
	unk_0xD6ABECE3CBB224B0(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_420()
{
	int iVar0;
	
	Global_62127 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_62128[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_421()
{
	int iVar0;
	
	if (unk_0x79CDCC8ABB331B8C("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_112293.f_9083 || func_432(0))
	{
		if (!func_422())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_239(iVar0))
				{
					return;
				}
				unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_244();
		}
	}
}

int func_422()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

void func_423(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xBDC364B886846D11(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_424(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_99407 > 0)
	{
		Global_105842.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_102858.f_21[iParam1] = iVar0;
	}
}

int func_424(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_99407 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105842.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_105842.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105842.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_105842.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_102858.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_102858.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_102858.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_102858.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_425(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_429(iParam0, &iVar1);
	if (!unk_0xDA654EB115F9FF7D("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x4296541F2A4F9BF5(iVar1))
			{
				return;
			}
			if (unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == iVar1)
			{
				func_428(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x4296541F2A4F9BF5(iVar1))
			{
				return;
			}
			if (func_426(iParam0))
			{
				func_428(iParam0, 0);
			}
		}
		unk_0x9973C6A10108E1CC(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_426(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 != -1 && unk_0x234B68AC2E35ED5A(Global_37786[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_427(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_428(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_37786[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_37786[Var0.f_1]), Var0);
	}
}

var func_429(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_430(iParam0) };
	*iParam1 = unk_0xFA82BD1142427E0F(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_430(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_431(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_431(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_431(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_431(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_431(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_431(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_431(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049961[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_431(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_431(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_431(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_431(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_431(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_431(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_431(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_431(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_431(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_431(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_431(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_431(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_431(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_431(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_431(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_431(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_431(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_431(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_431(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_431(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_431(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_431(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_431(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_431(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_431(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_431(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_431(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_431(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_431(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_431(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_431(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
		case 214:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_431(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_432(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

