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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	int iLocal_341 = 0;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<3> Local_409[1];
	struct<418> Local_413 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_831 = -1;
	var uLocal_832 = -1;
	var uLocal_833 = -1;
	var uLocal_834 = -1;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	struct<3> Local_845 = { 0, 0, 0 } ;
	struct<3> Local_848 = { 0, 0, 0 } ;
	struct<3> Local_851 = { 0, 0, 0 } ;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857 = { 0, 0, 0 } ;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	bool bLocal_863 = 0;
	int iLocal_864 = 0;
	bool bLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	var uLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	char cLocal_878[24] = "";
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	char cLocal_884[24] = "";
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	char cLocal_890[24] = "";
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	char cLocal_896[24] = "";
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	char cLocal_902[24] = "";
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	char cLocal_908[24] = "";
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	char cLocal_914[24] = "";
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	char cLocal_920[24] = "";
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	char cLocal_926[24] = "";
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	struct<6> Local_932 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 1097859072;
	var uLocal_941 = 1500;
	var uLocal_942 = 45;
	var uLocal_943 = 1103626240;
	var uLocal_944 = 5;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955[2] = { 0, 0 };
	int iLocal_958 = 0;
	var uLocal_959[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	bool bLocal_971 = 0;
	struct<28> Local_972 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 5;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_77 = unk_0xB967AFE724ADAEB1();
	uLocal_78 = unk_0x7EA43B6762051EA2();
	Local_83 = { 500f, 500f, 500f };
	Local_845 = { 342.6987f, -996.7599f, 28.2438f };
	Local_848 = { 321.1089f, -996.4285f, 28.20932f };
	Local_851 = { -1042.946f, -2689.55f, 12.7572f };
	Local_854 = { -1044.808f, -2694.138f, 12.728f };
	Local_857 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_871 = 1;
	iLocal_875 = -1;
	StringCopy(&cLocal_878, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_884, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_890, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_896, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_902, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_908, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_914, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_920, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_926, "txm8_thank3F_2", 24);
	if (unk_0x4210287E2833D44B(67))
	{
		func_444(2);
		func_441();
	}
	unk_0xC189FA1CE4E3B2A5(1);
	func_428(5);
	while (true)
	{
		if (unk_0x419E13582192CFEA(Local_413.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_413);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x7D2B9E6A64637269();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x7D2B9E6A64637269());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x7D2B9E6A64637269());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0x7D2B9E6A64637269(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	var uVar0;
	int iVar1;
	
	if (func_427(&Local_413))
	{
		if (func_426(&Local_413, bLocal_863))
		{
			func_424();
		}
	}
	else
	{
		func_423(&Local_413);
		func_389(&Local_413, &uLocal_938);
		if (Local_413.f_410 != 28 && Local_413.f_410 != 30)
		{
			func_388(&Local_413);
		}
		func_387(&Local_413, &uLocal_873, 0);
		if (Local_413.f_410 > 2)
		{
			if (((Local_413.f_410 == 21 || Local_413.f_410 == 25) || Local_413.f_410 == 9) || Local_413.f_410 == 22)
			{
				func_386(&Local_413);
			}
			if (!func_385(&Local_413))
			{
				func_355();
			}
			else
			{
				func_335(&Local_413, "Taxi Not Driveable", func_354(&Local_413));
			}
		}
		if (Local_413.f_410 == 9 || Local_413.f_410 == 22)
		{
			func_312(&Local_413, 0, 1);
		}
		if (Local_413.f_410 == 17 || Local_413.f_410 == 21)
		{
			if (func_311(&Local_413) && func_301(1, 1, 0))
			{
				func_288(&uLocal_45, Local_857, 0, 0, 1, 1, 1);
			}
			else
			{
				func_287(&uLocal_45, 0, 0);
			}
			if (func_286(&Local_413) && func_301(1, 1, 0))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_872, 3))
				{
					func_285("TAXI_HNT_CAM", -1);
					unk_0x191DDA30577F440A(&iLocal_872, 3);
					if (unk_0x234B68AC2E35ED5A(iLocal_872, 4))
					{
						unk_0xC664C0067EEAB8D1(&iLocal_872, 4);
					}
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(iLocal_872, 4))
			{
				unk_0x66AE54CE92457FEE(1);
				unk_0x191DDA30577F440A(&iLocal_872, 4);
			}
		}
		switch (Local_413.f_410)
		{
			case 0:
				func_282();
				func_281(&Local_413, 16, 4f, 0);
				func_278(&Local_413, Local_851, Local_854, "TaxiDerrick", func_280(0), 116.1366f, 10f);
				func_276(&Local_413);
				func_275(&Local_413, 1);
				break;
			
			case 1:
				if (func_273())
				{
					unk_0xF479CA7199C54C8F("TAXI_Pursuers", &iLocal_970);
					func_272();
					func_252();
					func_251(&(Local_409[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_250(&Local_413, &Local_409);
					func_249(&Local_413);
					Local_413.f_14 = { Local_851 };
					func_275(&Local_413, 3);
				}
				break;
			
			case 3:
				if (func_243(&Local_413, 1))
				{
					if (!unk_0xE50EB54E0F21BED0(Local_413.f_3, 0))
					{
						unk_0x4170FE884DF7426D(Local_413.f_3, 8, 0, 0, 0);
						unk_0x2271ED1E65FB75EE(Local_413.f_3, iLocal_970);
						unk_0x6A021CF02A47AF78(Local_413.f_3, 1);
					}
					unk_0x6FF312B4049B4865(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 1, 0, 1);
					unk_0x78B2DF314748056B(0, 1166638144, Local_413.f_413);
					unk_0x78B2DF314748056B(0, -1865950624, Local_413.f_413);
					unk_0x78B2DF314748056B(0, 296331235, Local_413.f_413);
					unk_0x824F744352C8BC82(func_280(0));
					func_242(&Local_413, 1, 0);
					func_275(&Local_413, 5);
				}
				break;
			
			case 5:
				if (func_218(&Local_413, 0, 1109393408))
				{
					Local_413.f_17 = { func_217(0) };
					iLocal_860 = 1;
					func_275(&Local_413, 15);
				}
				break;
			
			case 15:
				if (func_216(&Local_413))
				{
					func_213(&Local_413, 9, 1, 0, 0);
					func_212(&Local_413);
					func_211();
					func_210(func_217(-1), 0, 1114636288);
					func_275(&Local_413, 9);
				}
				if (unk_0xBFCE58B2B3249999(Local_413.f_4, 0))
				{
					if (!unk_0xF41EB7643E61A928(Local_413.f_2, Local_413.f_4, 0))
					{
						func_205(&Local_413);
						func_275(&Local_413, 5);
					}
				}
				break;
			
			case 9:
				if (!func_204(Local_413.f_82, 16384) && func_203(&Local_413) != 35)
				{
					if (func_202(&Local_413))
					{
						if (func_286(&Local_413))
						{
							if (func_201(Local_413.f_4, Local_413.f_17, 1) <= 80f)
							{
								func_199(&uLocal_1002);
								func_198(&Local_972, 4, 0);
								func_213(&Local_413, 35, 1, 1, 0);
								unk_0x817486F19ADBF54A(0);
							}
						}
					}
				}
				if (!iLocal_870)
				{
					if (func_202(&Local_413))
					{
						if (func_286(&Local_413))
						{
							if (func_201(Local_413.f_4, Local_413.f_17, 1) <= 100f)
							{
								unk_0x8402ED2BE630F8B6(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_870 = 1;
							}
						}
					}
				}
				if (func_181(&Local_413, 1086324736, 1097859072, 1117782016))
				{
					iLocal_860 = 0;
					unk_0x97A41BF3F05FC07D(Local_413.f_9, 0);
					Local_413.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_413.f_34 = 238.52f;
					func_281(&Local_413, 6, 0, 0);
					func_179(&(Local_413.f_81), 67108864);
					func_213(&Local_413, 28, 1, 1, 0);
					Local_413.f_417 = 29;
					func_275(&Local_413, 16);
				}
				break;
			
			case 16:
				if (!unk_0xECEC7528A52B4EE8(Local_413.f_3))
				{
					if (func_202(&Local_413))
					{
						func_177(&Local_413, Local_845);
					}
					else if (unk_0x4E8DA737B686529A(Local_413.f_3, 451360105) == 7)
					{
						unk_0x8D5B447F21217223(&uLocal_844);
						unk_0x5C679902079A7E80(&uLocal_844);
						unk_0x45B1B4E55BF15523(0, Local_845, 1.5f, 40000, 1048576000, 0, 1193033728);
						unk_0x45B1B4E55BF15523(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0x45B1B4E55BF15523(0, Local_848, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0x1BBD0A5729AB1226(uLocal_844);
						unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
						unk_0x8D5B447F21217223(&uLocal_844);
						unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
						func_281(&Local_413, 6, 0, 0);
						func_275(&Local_413, 17);
						iLocal_861 = 0;
					}
				}
				break;
			
			case 17:
				if (!unk_0xECEC7528A52B4EE8(Local_413.f_3))
				{
				}
				if (!iLocal_861)
				{
					func_169();
				}
				if (func_286(&Local_413))
				{
					if (!unk_0x591190E69BE43117(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0))
					{
						if (func_201(Local_413.f_4, Local_413.f_17, 1) > 250f)
						{
							func_335(&Local_413, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_167(Local_413.f_3, 1) > 10f)
						{
							if (unk_0x5D8B0ADD9EFBD7B9(Local_413.f_9) == 0 && !bLocal_863)
							{
								func_164(&Local_413, 1);
								unk_0xAA18C87A1A6C1FAE("TAXI_OBJ_CYI_01");
							}
							func_213(&Local_413, 57, 1, 0, 1);
						}
					}
					else if (unk_0x575B7C28D81C0B4D(Local_413.f_9) && unk_0x5D8B0ADD9EFBD7B9(Local_413.f_9) > 0)
					{
						unk_0x97A41BF3F05FC07D(Local_413.f_9, 0);
						unk_0x13CC211F9F7ACE7F(Local_413.f_9, 0);
						func_213(&Local_413, 29, 1, 0, 1);
						unk_0xAA18C87A1A6C1FAE("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_862)
					{
						iLocal_862 = 1;
					}
					func_153(&Local_413, 1);
				}
				if (((unk_0x591190E69BE43117(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0) && unk_0x591190E69BE43117(Local_413.f_3, Local_848, 5f, 5f, 5f, false, 1, 0)) && func_311(&Local_413)) && !iLocal_861)
				{
					if (!unk_0xECEC7528A52B4EE8(Local_413.f_3))
					{
						if (unk_0x98E18969B1D0C4AB(Local_413.f_3))
						{
							unk_0x191DDA30577F440A(&uLocal_938, 8);
							unk_0xD82D50E4AC0D46B9(Local_413.f_3, joaat("weapon_combatpistol"), 50, 0, 1);
							unk_0x670A22CC926FF03C(Local_413.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, -687903391);
							unk_0x4603196EEEA2355C(Local_413.f_3, 0, 0);
							unk_0xC22CF0F8AABFA658(Local_413.f_3, 0);
							unk_0x8F160110753EB17B(Local_413.f_3, 1);
							unk_0x78CDDD1E6367978D(Local_413.f_3, 339.9392f, -992.9357f, 28.3731f, 1, 0, 0, 1);
							iLocal_861 = 1;
							func_281(&Local_413, 6, 0, 0);
						}
					}
				}
				if (iLocal_861)
				{
					if ((func_151(&Local_413, 6) > 8f && unk_0x591190E69BE43117(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0)) && func_311(&Local_413))
					{
						if (!unk_0xECEC7528A52B4EE8(Local_413.f_3))
						{
							if (unk_0x98E18969B1D0C4AB(Local_413.f_3))
							{
								unk_0xC664C0067EEAB8D1(&uLocal_938, 8);
								unk_0x4603196EEEA2355C(Local_413.f_3, 1, 0);
								unk_0xC22CF0F8AABFA658(Local_413.f_3, 1);
								unk_0x8F160110753EB17B(Local_413.f_3, 0);
								unk_0x78CDDD1E6367978D(Local_413.f_3, Local_848, 1, 0, 0, 1);
								unk_0x4170FE884DF7426D(Local_413.f_3, 8, 1, 0, 0);
								if (unk_0xBFCE58B2B3249999(Local_413.f_4, 0))
								{
									unk_0x7B28A83A0D3DD0F9(Local_413.f_3, 118, 0);
									unk_0x16D66F11FE644901(Local_413.f_3);
									uVar0 = func_150(Local_413.f_4, Local_413.f_3);
									unk_0x8D5B447F21217223(&uLocal_844);
									unk_0x5C679902079A7E80(&uLocal_844);
									unk_0x3C3DD4D53CF82FCD(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, 0, 786603, -1082130432);
									unk_0x35E41B8570BB9549(0, 1);
									unk_0xDBC51F4BF2AE3280(0, 0);
									unk_0x95CA4545D0C61309(0, Local_413.f_4, 40000, uVar0, 1073741824, 1, 0);
									unk_0x1BBD0A5729AB1226(uLocal_844);
									unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
									unk_0x8D5B447F21217223(&uLocal_844);
									func_281(&Local_413, 6, 0, 0);
									if (unk_0x575B7C28D81C0B4D(Local_413.f_9))
									{
										unk_0x97A41BF3F05FC07D(Local_413.f_9, 0);
										unk_0x13CC211F9F7ACE7F(Local_413.f_9, 0);
									}
									unk_0xBCF9CFE51F223AF8(Local_413.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_275(&Local_413, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_151(&Local_413, 6) > 23f)
				{
					if (!unk_0xECEC7528A52B4EE8(Local_413.f_3))
					{
						unk_0xCA089CD1A17D76DF(Local_413.f_3);
						unk_0x41D7811563AAD1B1(Local_413.f_3, unk_0x7D2B9E6A64637269(), -1, 0);
					}
					func_335(&Local_413, "player didn't let teh Passenger in", 8);
				}
				else if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
				{
				}
				if ((unk_0x591190E69BE43117(Local_413.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, 1, 0) && unk_0x591190E69BE43117(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0)) && iLocal_861)
				{
					unk_0x8B84CFCA87CEA22E(344.5906f, -996.409f, 28.30219f, 4, 1056964608, 1, 0, 1065353216, 0);
					unk_0x4569EA65F1B056ED(iLocal_875, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0, 0, 0);
					iLocal_861 = 0;
				}
				if (func_202(&Local_413))
				{
					unk_0x817486F19ADBF54A(1);
					unk_0x272ACC75FC69F0B5(unk_0x638BDC79E655C1C2(), 2, 0);
					unk_0x87524F5C1E0857AB(unk_0x638BDC79E655C1C2(), 0);
					unk_0xB84B43B766630B5C("TAXI_CUT_U_IN");
					func_210(func_217(0), 1, 1114636288);
					unk_0x78B2DF314748056B(5, Local_413.f_413, joaat("COP"));
					func_148(6, 2);
					func_213(&Local_413, 49, 1, 0, 0);
					if (unk_0x575B7C28D81C0B4D(Local_413.f_9))
					{
						unk_0x13CC211F9F7ACE7F(Local_413.f_9, 0);
						unk_0x1AD5BCFEC31BB8D9(&(Local_413.f_9));
					}
					func_287(&uLocal_45, 0, 0);
					func_281(&Local_413, 6, 0, 0);
					func_281(&Local_413, 9, 0, 0);
					func_281(&Local_413, 7, 0, 0);
					func_275(&Local_413, 25);
				}
				break;
			
			case 25:
				func_147(&Local_413, &(Local_413.f_43));
				if (func_204(Local_413.f_44, 4))
				{
					func_145(&(Local_413.f_44), 4);
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) > 0)
				{
					if (!func_144(&Local_413))
					{
						if (!unk_0x6C2F471E0CF8D4CF())
						{
							if ((func_151(&Local_413, 16) > unk_0x644B8DBA4F69BB73(15f, 25f) && iLocal_877 < 8) || func_151(&Local_413, 16) > unk_0x644B8DBA4F69BB73(25f, 35f))
							{
								if (func_203(&Local_413) != 51)
								{
									func_213(&Local_413, 51, 1, 0, 0);
									iLocal_877++;
								}
								else
								{
									func_242(&Local_413, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1 && func_151(&Local_413, 6) > 10f)
				{
					unk_0xC0BBE340BE2AA02D("TAXI_CUT_U_IN");
					func_275(&Local_413, 26);
					func_179(&(Local_413.f_44), 1);
				}
				break;
			
			case 26:
				func_147(&Local_413, &(Local_413.f_43));
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) > 0)
				{
					if (!func_144(&Local_413))
					{
						if (!unk_0x6C2F471E0CF8D4CF())
						{
							if ((func_151(&Local_413, 16) > unk_0x644B8DBA4F69BB73(15f, 25f) && iLocal_877 < 8) || func_151(&Local_413, 16) > unk_0x644B8DBA4F69BB73(25f, 35f))
							{
								if (func_203(&Local_413) != 51)
								{
									func_213(&Local_413, 51, 1, 0, 0);
									iLocal_877++;
								}
								else
								{
									func_242(&Local_413, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1 && func_151(&Local_413, 9) > 2f)
				{
					if (func_151(&Local_413, 9) <= 180f)
					{
						func_143(&Local_413, 0);
					}
					unk_0x78B2DF314748056B(0, Local_413.f_413, joaat("COP"));
					Local_413.f_17 = { func_217(5) };
					func_148(7, 2);
					func_142(&Local_413);
					func_141(&Local_413, 9, 0);
					func_141(&Local_413, 2, 0);
					func_141(&Local_413, 3, 0);
					if (!func_204(Local_413.f_44, 4))
					{
						func_179(&(Local_413.f_44), 4);
					}
					Local_413.f_116 = 1;
					func_275(&Local_413, 14);
				}
				break;
			
			case 14:
				if (!func_139(&Local_413))
				{
					func_136();
					func_164(&Local_413, 1);
					func_135();
					func_275(&Local_413, 22);
				}
				break;
			
			case 22:
				if (!bLocal_865)
				{
					if (Local_413.f_417 == 33 && unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1)
					{
						bLocal_865 = true;
						func_179(&(Local_413.f_44), 4);
						func_134(&iLocal_875);
						Local_972.f_27++;
					}
				}
				if (bLocal_865)
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) > 0)
					{
						if (unk_0x575B7C28D81C0B4D(Local_413.f_9))
						{
							unk_0x13CC211F9F7ACE7F(Local_413.f_9, 0);
							unk_0x1AD5BCFEC31BB8D9(&(Local_413.f_9));
						}
					}
					else
					{
						func_164(&Local_413, 1);
					}
				}
				if (func_204(Local_413.f_44, 1) && bLocal_865)
				{
					func_145(&(Local_413.f_44), 1);
					if (bLocal_971)
					{
					}
				}
				if (!func_204(Local_413.f_82, 32768) && func_203(&Local_413) != 36)
				{
					if (func_202(&Local_413))
					{
						if (func_286(&Local_413))
						{
							if (func_201(Local_413.f_4, Local_413.f_17, 1) <= 300f)
							{
								if (!func_133())
								{
									func_213(&Local_413, 36, 1, 1, 0);
								}
								else
								{
									func_131();
								}
								if (iLocal_864 && !iLocal_867)
								{
									unk_0x6AF7EE4DD9F8B944(Local_413.f_17, 3f, 0, 0, 0, 0);
									uLocal_968 = unk_0x0823FA7465392E20(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0, 1, 1, 1);
									uLocal_955[0] = unk_0x0FDCFECB2EF2BC1C(6, func_280(3), -1036.502f, -2742.986f, 20.16969f, 0, 1, 1);
									uLocal_955[1] = unk_0x0FDCFECB2EF2BC1C(6, func_280(3), -1043.706f, -2739.234f, 19.16969f, 0, 1, 1);
									unk_0xD82D50E4AC0D46B9(uLocal_955[0], joaat("weapon_carbinerifle"), -1, 1, 1);
									unk_0xD82D50E4AC0D46B9(uLocal_955[1], joaat("weapon_carbinerifle"), -1, 1, 1);
									if (unk_0x7B44CC985AF750BD(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
									{
										unk_0x5F2B3E2AFA7B81C5(uLocal_955[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										unk_0x8B515AB1F9C6E8CE(uLocal_955[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (unk_0x7B44CC985AF750BD(-1043.706f, -2739.234f, 19.16969f, 5f, 1))
									{
										unk_0x5F2B3E2AFA7B81C5(uLocal_955[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										unk_0x8B515AB1F9C6E8CE(uLocal_955[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_867 = 1;
								}
							}
						}
					}
				}
				if (func_181(&Local_413, 1086324736, 1097859072, 1117782016))
				{
					Local_972 = 0;
					unk_0x1AD5BCFEC31BB8D9(&(Local_413.f_9));
					func_129(&Local_413);
					func_125(&Local_413);
					func_124();
					func_275(&Local_413, 27);
				}
				break;
			
			case 27:
				if (func_122() && !iLocal_866)
				{
					func_121(&Local_413, &iVar1);
					uLocal_843 = unk_0x795434E153F90E41(joaat("p_banknote_s"), unk_0xD6E677FAD7521410(Local_413.f_3, 1), 1, 1, 0);
					unk_0x0F1058706D5A58B4(uLocal_843, Local_413.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!unk_0xECEC7528A52B4EE8(Local_413.f_3) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x4261814A9A26E86F(Local_413.f_3, "oddjobs@taxi@cyi", func_120(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), "oddjobs@taxi@cyi", func_119(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0xFFE2CF1579FA5C68(uLocal_843, func_118(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0, 0);
					}
					iLocal_866 = 1;
				}
				if (func_110(&Local_413, 1))
				{
					unk_0x8D5B447F21217223(&uLocal_844);
					unk_0x5C679902079A7E80(&uLocal_844);
					unk_0xCC5ED49CF9C9215F(0, 0, 0);
					unk_0x35E41B8570BB9549(0, 0);
					unk_0x880C7B361C9651EE(0);
					unk_0x45B1B4E55BF15523(0, Local_413.f_29, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					unk_0x1BBD0A5729AB1226(uLocal_844);
					unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
					unk_0x504B26425DFF773C(Local_413.f_3, 1);
					unk_0xBCF9CFE51F223AF8(Local_413.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_275(&Local_413, 29);
				}
				break;
			
			case 29:
				if (func_75(&Local_413, &uLocal_945))
				{
					if (iLocal_864 || iLocal_874 == -1)
					{
						func_275(&Local_413, 28);
					}
					else
					{
						func_12(1, &Local_413, 1);
						func_275(&Local_413, 30);
					}
				}
				break;
			
			case 28:
				if (func_10())
				{
					func_12(1, &Local_413, 1);
					func_275(&Local_413, 30);
				}
				break;
			
			case 30:
				func_441();
				break;
			}
	}
}

int func_10()
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	Var1 = { Var1 };
	if (iLocal_874 > 2)
	{
		unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
	}
	switch (iLocal_874)
	{
		case -1:
			iLocal_874++;
			break;
		
		case 0:
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
			unk_0x817486F19ADBF54A(0);
			unk_0x8D5B447F21217223(&uVar0);
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, 256);
			unk_0x45B1B4E55BF15523(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 1048576000, 0, 1193033728);
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(Local_413.f_3, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
			iLocal_969 = unk_0x170478CC84C8AE2F(func_280(4), -1067.146f, -2579.632f, 19.7762f, 150f, 1, 1, 0);
			iLocal_958 = unk_0x42F3C85A00B4FC7B(iLocal_969, 26, func_280(3), -1, 1, 1);
			func_281(&Local_413, 9, 0, 0);
			iLocal_874++;
			break;
		
		case 1:
			if (func_151(&Local_413, 9) > 0.5f)
			{
				if (!unk_0xE50EB54E0F21BED0(Local_413.f_3, 0))
				{
					if (!unk_0xE50EB54E0F21BED0(uLocal_955[0], 0))
					{
						unk_0x8ADA462BC5F42FD8(uLocal_955[0], Local_413.f_3, -1, 2049, 3);
						func_8(&(Local_413.f_244), 4, uLocal_955[0], "TaxiOJCop1", 0, 1);
						unk_0x90517F1BF9113FB8(uLocal_955[0], "TaxiOJCop1");
					}
					if (!unk_0xE50EB54E0F21BED0(uLocal_955[1], 0))
					{
						unk_0x8ADA462BC5F42FD8(uLocal_955[1], Local_413.f_3, -1, 2049, 3);
					}
				}
				iLocal_874++;
			}
			break;
		
		case 2:
			if ((!unk_0xE50EB54E0F21BED0(uLocal_955[0], 0) && !unk_0xE50EB54E0F21BED0(uLocal_955[1], 0)) && !unk_0xE50EB54E0F21BED0(Local_413.f_3, 0))
			{
				if (unk_0x8954E9D0A9F6F8CF(Local_413.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0, 1, 0))
				{
					unk_0x5C679902079A7E80(&uVar0);
					unk_0xF77EA5B6EAF40F43(0, Local_413.f_3, Local_413.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					unk_0x2AA99ECF9FBD1E5D(0, Local_413.f_3, -1, 0);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(uLocal_955[0], uVar0);
					unk_0x8D5B447F21217223(&uVar0);
					unk_0x504B26425DFF773C(uLocal_955[0], 1);
					unk_0x5C679902079A7E80(&uVar0);
					unk_0x373635EFD76DFAB3(0, 1500);
					unk_0x2AA99ECF9FBD1E5D(0, Local_413.f_3, 2000, 0);
					unk_0xF77EA5B6EAF40F43(0, Local_413.f_3, Local_413.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					unk_0x2AA99ECF9FBD1E5D(0, Local_413.f_3, -1, 0);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(uLocal_955[1], uVar0);
					unk_0x8D5B447F21217223(&uVar0);
					unk_0x504B26425DFF773C(uLocal_955[1], 1);
					unk_0x5C679902079A7E80(&uVar0);
					unk_0xB0C1A43193C25F7A(0, uLocal_955[0], 3);
					unk_0x8ADA462BC5F42FD8(0, uLocal_955[0], -1, 2049, 3);
					unk_0x373635EFD76DFAB3(0, 1000);
					unk_0xB111AAA7C1B0D64F(0, -1, 0, -1, 0);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(Local_413.f_3, uVar0);
					unk_0x8D5B447F21217223(&uVar0);
					func_213(&Local_413, 54, 1, 0, 0);
					iLocal_876 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uLocal_959, -1);
					iVar4 = 0;
					while (iVar4 < iLocal_876)
					{
						if (((((uLocal_959[iVar4] != unk_0x7D2B9E6A64637269() && uLocal_959[iVar4] != Local_413.f_3) && uLocal_959[iVar4] != uLocal_955[1]) && uLocal_959[iVar4] != uLocal_955[0]) && uLocal_959[iVar4] != iLocal_958) && !unk_0xEE1D92A39CF8E1E6(uLocal_959[iVar4]))
						{
							unk_0x4985CD0720AFD468(uLocal_959[iVar4], 1, 1);
							unk_0x1DC2BF231DE6A016(uLocal_959[iVar4], Local_413.f_3, 100f, -1, 0, 0);
						}
						iVar4++;
					}
					func_281(&Local_413, 9, 0, 0);
					iLocal_874++;
				}
			}
			break;
		
		case 3:
			if (func_151(&Local_413, 9) > 5f && !func_133())
			{
				unk_0x78B2DF314748056B(5, iLocal_970, joaat("COP"));
				unk_0x78B2DF314748056B(5, joaat("COP"), iLocal_970);
				unk_0xBDC364B886846D11(Local_413.f_3, &iVar5, 1);
				if (iVar5 == joaat("weapon_unarmed"))
				{
					unk_0xD82D50E4AC0D46B9(Local_413.f_3, joaat("weapon_combatpistol"), -1, 0, 1);
				}
				unk_0xA415F00D0E0DFBCE(Local_413.f_3, 13, 1);
				unk_0xA415F00D0E0DFBCE(Local_413.f_3, 24, 1);
				unk_0xEA480A62F5D29812(Local_413.f_3, 2);
				unk_0xB137BD960DB95044(Local_413.f_3, 1);
				unk_0xF8207455457B967E(Local_413.f_3, 80);
				unk_0x99EBE9AD8C344773(Local_413.f_3, 50f, 0);
				func_281(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			if ((unk_0xA6E8FBD68548675F(uLocal_955[0], unk_0x7D2B9E6A64637269(), 1) || unk_0xA6E8FBD68548675F(uLocal_955[1], unk_0x7D2B9E6A64637269(), 1)) && !unk_0xECEC7528A52B4EE8(Local_413.f_3))
			{
				unk_0x1DC2BF231DE6A016(Local_413.f_3, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
				func_281(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 4:
			if (unk_0xE50EB54E0F21BED0(Local_413.f_3, 0))
			{
				if (!unk_0xE50EB54E0F21BED0(uLocal_955[0], 0))
				{
					unk_0xCA089CD1A17D76DF(uLocal_955[0]);
					if (unk_0x7B44CC985AF750BD(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
					{
						unk_0x5F2B3E2AFA7B81C5(uLocal_955[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						unk_0x8B515AB1F9C6E8CE(uLocal_955[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					unk_0x504B26425DFF773C(uLocal_955[0], 1);
				}
				if (!unk_0xE50EB54E0F21BED0(uLocal_955[1], 0))
				{
					unk_0xCA089CD1A17D76DF(uLocal_955[1]);
					Var1 = { unk_0xD6E677FAD7521410(Local_413.f_3, 0) };
					unk_0x8D5B447F21217223(&uVar0);
					unk_0x5C679902079A7E80(&uVar0);
					unk_0xD9925DC55D73CA5A(0, Var1, Var1, 1f, 0, 3f, 1082130432, 1, 0, 0, -957453492);
					unk_0x6D2DD90EB5862871(0, Var1, 500, 0, 0);
					unk_0xDDFB0D5F3D3B74AA(0, Var1, -1, 2049, 3);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(uLocal_955[1], uVar0);
					unk_0x504B26425DFF773C(uLocal_955[0], 1);
				}
				return 1;
			}
			else
			{
				if (func_151(&Local_413, 9) > 6f)
				{
					func_213(&Local_413, 140, 1, 0, 1);
					func_281(&Local_413, 9, 0, 0);
				}
				if (unk_0xE50EB54E0F21BED0(uLocal_955[0], 0) && unk_0xE50EB54E0F21BED0(uLocal_955[1], 0))
				{
					unk_0xCA089CD1A17D76DF(Local_413.f_3);
					unk_0x1DC2BF231DE6A016(Local_413.f_3, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
				}
				if (func_167(Local_413.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_281(&Local_413, 9, 0, 0);
			iLocal_874++;
			break;
		
		case 5:
			if (func_151(&Local_413, 9) > 2f)
			{
				func_281(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 6:
			if (func_151(&Local_413, 9) > 2f)
			{
				Var1 = { unk_0x8EB57098C563AB39(iLocal_969, func_11(5)) };
				func_281(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 7:
			if (func_151(&Local_413, 9) >= 1f)
			{
				iLocal_874++;
			}
			break;
		
		case 8:
			iLocal_874++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_11(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 4:
			Var0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 6:
			Var0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 5:
			Var0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 1:
			Var0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 2:
			Var0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 3:
			Var0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 7:
			Var0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 8:
			Var0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return Var0;
}

void func_12(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!unk_0xECEC7528A52B4EE8(uParam1->f_3))
		{
			unk_0x7B28A83A0D3DD0F9(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_148(1, 0);
	}
	func_13(uParam1, bParam2);
}

void func_13(var uParam0, bool bParam1)
{
	func_50(uParam0);
	if (func_133())
	{
		func_48();
	}
	func_46();
	unk_0x1036762BD3781C84();
	unk_0x66AE54CE92457FEE(1);
	func_41(0);
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		unk_0xD4DF29F3D7B97053(uParam0->f_4, 0);
		unk_0x945FBB15AF3D1A75(uParam0->f_4);
		unk_0x2020FC50CB5FBFA1(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_210(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 1);
	if (func_33())
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
	}
	unk_0x0513A10C6415B57C(1);
	func_23(0, 1, 1, 0, 0, 0, 0);
	unk_0xDD7C2F9844E745B1(1);
	unk_0x4200138CBB376D4D(1);
	if (unk_0x0E8572B08CEB6A11(*uParam0))
	{
		unk_0xFE1DEC9C5734D0C0(*uParam0, 0);
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		unk_0xD6ABECE3CBB224B0(1);
	}
	if (func_204(Global_112293.f_19095, 4))
	{
		func_145(&(Global_112293.f_19095), 4);
		unk_0x16C6E55F8C91ED24(func_22(), 0);
	}
	if (bParam1)
	{
		func_21(uParam0);
	}
	func_20(uParam0);
	unk_0xF9135F131C423364("gestures@m@standing@casual");
	unk_0xF9135F131C423364("oddjobs@taxi@");
	unk_0xF9135F131C423364("oddjobs@towingcome_here");
	if (unk_0x0B4295B1608BB934())
	{
		func_18(uParam0->f_411);
	}
	if (!unk_0xDF02DA324F934755(unk_0x638BDC79E655C1C2()))
	{
		unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
	}
	unk_0xCD3872DF8178C437(SYSTEM::ROUND((func_14(&uLocal_90) * 1000f)), 12, 0);
}

float func_14(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_15(bool bParam0)
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

bool func_16(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_17(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_18(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_19(iParam0)}, 6);
		if (!unk_0x4030103C8B148AFC(&uVar0))
		{
		}
	}
}

struct<8> func_19(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_20(var uParam0)
{
	unk_0x43BA63ED2A7A4D2F(uParam0->f_51[0]);
}

void func_21(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_3))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
		{
			if (!unk_0xC49311A2A500FF09(uParam0->f_3, 0))
			{
				unk_0x403528BF4750B175(uParam0->f_3);
			}
			unk_0xBE91B077ADADE97F(uParam0->f_3, 0);
			unk_0x78B2DF314748056B(255, uParam0->f_413, 1862763509);
			if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x066FC15C60D0E579(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x066FC15C60D0E579(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x066FC15C60D0E579(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x066FC15C60D0E579(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x0F3BD19FF11738D3(&(uParam0->f_3));
		}
	}
}

int func_22()
{
	return joaat("taxi");
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_32(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_31())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_32(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_28(unk_0x1146A9AE09CE2B14())) && !func_25(unk_0x1146A9AE09CE2B14(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_28(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_24()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312763;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && uParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
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

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0xF153D8DD47F1DEBD(unk_0x638BDC79E655C1C2()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x636F1F53CC61D2C9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		unk_0x86DA8A407ED8A381(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_38(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

bool func_39(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_40()
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19798.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

bool func_44()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_45()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_96303[iVar0 /*17*/] && !Global_96303[iVar0 /*17*/].f_1)
		{
			if (Global_96303[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_96303[iVar0 /*17*/].f_5 != 88 && Global_96303[iVar0 /*17*/].f_5 != 89) && Global_96303[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_96303[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
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

void func_48()
{
	Global_19991 = 0;
	func_49();
}

void func_49()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_50(var uParam0)
{
	if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_8));
	}
	if (unk_0x575B7C28D81C0B4D(uParam0->f_9))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_9));
	}
	if (unk_0x575B7C28D81C0B4D(uParam0->f_10))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_10));
	}
}

void func_51(var uParam0)
{
	func_148(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_444(1);
		func_61(15, 1);
	}
	func_179(&(Global_112293.f_19095), 1024);
	if (!func_204(Global_112293.f_19095, 64))
	{
		func_52(func_59(func_60(uParam0)), 0, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_58((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = iParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_53();
	}
}

void func_53()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					unk_0x94F7E80BDFF33F26(joaat("num_rndevents_completed"), Global_112016, 0);
					unk_0x191DDA30577F440A(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	unk_0xAC4FD27671081628(joaat("num_missions_completed"), Global_112029, 1);
	unk_0xAC4FD27671081628(joaat("num_missions_available"), Global_112012, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_completed"), Global_112030, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_available"), Global_112013, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_completed"), Global_112031, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_available"), Global_112014, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_completed"), Global_112032, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_available"), Global_112015, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_available"), Global_112019, 1);
	unk_0xAC4FD27671081628(joaat("num_misc_completed"), (Global_112035 + Global_112034), 1);
	unk_0xAC4FD27671081628(joaat("num_misc_available"), (Global_112018 + Global_112017), 1);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	unk_0xBAE77BA3A38F7944(joaat("total_progress_made"), Global_112293.f_10192.f_3853, 1);
	unk_0xAC4FD27671081628(joaat("percent_story_missions"), Global_112036, 1);
	unk_0xAC4FD27671081628(joaat("percent_ambient_missions"), Global_112037, 1);
	unk_0xAC4FD27671081628(joaat("percent_oddjobs"), Global_112038, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112293.f_10192.f_3853))
	{
		func_57(13, SYSTEM::FLOOR(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_56() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()
{
	if (func_55(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_55(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_56()
{
	return Global_31345;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_60(var uParam0)
{
	return uParam0->f_411;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_74(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_72(&Global_4272779))
	{
		if (func_70(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4272778 - 0.5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_68(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_69(var uParam0)
{
	return uParam0->f_80;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_74(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_75(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_133() && func_151(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
				}
				func_109(uParam0);
				func_145(&(Global_112293.f_19095), 4096);
				func_106(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_108(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x9B0169E27978C1A2(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_105(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_99(uParam1, 0))
			{
				func_76(uParam0);
				func_281(uParam0, 0, 0, 0);
				func_105(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_77(func_97(), 21, iVar0, 0, 0);
		func_148(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 3)
	{
		return;
	}
	if (func_96(iParam0) == 4)
	{
		return;
	}
	func_78(func_96(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD885BEFA31A18D47(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xAC4FD27671081628(iVar1, iVar0, 1);
	}
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_94(99, 1);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_87(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_87(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_87(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_86(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_42009 == 15)
	{
		func_79(0);
	}
	return 1;
}

void func_79(bool bParam0)
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

void func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_81(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_58(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_58(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_58(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_58(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_84(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_84(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_84(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_84(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_84(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_84(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_83() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_83() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_82(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_86(int iParam0)
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_89(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_89(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_89(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_89(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_88(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_88(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_88(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_88(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_88(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_88(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_83() /*5557*/].f_675.f_10, iParam0);
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_85(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_91(iParam0, iParam1);
	uVar2 = func_90(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_92(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_57(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_95()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_96(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_97()
{
	func_98();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_98()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_4(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_3(unk_0x7D2B9E6A64637269());
			if (func_6(iVar0) && (!func_74(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_6(Global_112293.f_2361.f_539.f_4321))
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

int func_99(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_2)))
	{
		func_103(&(uParam0->f_2));
	}
	unk_0xEFD424FDD55A6EC7(14);
	unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x86AF801D34E482FF(2, 201) || uParam0->f_8)
		{
			if (!func_17(&(uParam0->f_5)))
			{
				func_103(&(uParam0->f_5));
				func_102(uParam0, 1051260355);
			}
		}
		if (func_17(&(uParam0->f_5)))
		{
			if (func_101(&(uParam0->f_5)) > 0.33f)
			{
				func_100(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_101(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_17(&(uParam0->f_5)))
		{
			func_103(&(uParam0->f_5));
			func_102(uParam0, 1051260355);
		}
		else if (func_101(&(uParam0->f_5)) > 0.33f)
		{
			func_100(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_101(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_102(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(*uParam0, "SHARD_ANIM_OUT");
	unk_0x9E3D03981E2E9AD9(uParam0->f_9);
	unk_0x82D42F43BE26EB72(iParam1);
	unk_0x392841D58D2EED1D();
}

void func_103(var uParam0)
{
	func_104(uParam0, 0f);
}

void func_104(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_15(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_105(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

void func_106(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x704F8697BB515627(*uParam0, func_107());
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xB2A9BDF905DC5A51(iParam9);
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x35CA0C119E6A2A27(sParam7);
	unk_0x38CD3C04C877C35F(uParam2);
	unk_0x38CD3C04C877C35F(uParam3);
	unk_0x1896EC0B030A48A2(uParam6);
	unk_0x38CD3C04C877C35F(uParam5);
	unk_0x38CD3C04C877C35F(iParam4);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x392841D58D2EED1D();
	func_103(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_107()
{
	if (unk_0x02BFF15CAA701972())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_108(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_109(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	func_148(11, uParam0->f_56);
	func_148(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x234B68AC2E35ED5A(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_110(var uParam0, bool bParam1)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		if (func_202(uParam0) && func_114(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_113(uParam0, 2097152))
				{
					func_111(uParam0);
				}
			}
			else
			{
				func_111(uParam0);
			}
		}
		else if (!func_202(uParam0))
		{
			if (bParam1)
			{
				if (func_113(uParam0, 2097152))
				{
					if (unk_0x4E8DA737B686529A(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x4E8DA737B686529A(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0)
{
	struct<3> Var0;
	
	if (func_112(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_177(uParam0, Var0);
}

int func_112(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_113(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_204(uParam0->f_81, iParam1) && !func_133());
	}
	return func_133();
}

int func_114(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0xF41EB7643E61A928(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_117();
				return 1;
			}
			else if (func_115(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 0, 256);
				}
				else
				{
					unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 0, 0);
				}
			}
			unk_0x771DD26343414AA0(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_115(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam5)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 68, 1);
	}
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 138, 1);
	unk_0x366E7F593105797F(0, 136, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 107, 1);
	unk_0x366E7F593105797F(0, 110, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 87, 1);
	unk_0x366E7F593105797F(0, 88, 1);
	unk_0x366E7F593105797F(0, 113, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 117, 1);
	unk_0x366E7F593105797F(0, 118, 1);
	unk_0x366E7F593105797F(0, 119, 1);
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 131, 1);
	unk_0x366E7F593105797F(0, 132, 1);
	unk_0x366E7F593105797F(0, 123, 1);
	unk_0x366E7F593105797F(0, 126, 1);
	unk_0x366E7F593105797F(0, 129, 1);
	unk_0x366E7F593105797F(0, 130, 1);
	unk_0x366E7F593105797F(0, 133, 1);
	unk_0x366E7F593105797F(0, 134, 1);
	unk_0x042D3F56FFA48394();
	func_116(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDFB7BFA6482FEE1E();
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_116(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x45A445014B256CB5(iParam0))
		{
			if (unk_0x7FFAB542797E5F31(iParam0))
			{
				unk_0x4AE9893CBA452EC0(iParam0, 0);
			}
		}
	}
}

void func_117()
{
	if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
	{
		unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	}
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_121(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		iVar0 = unk_0x27FC1B0077581B37(uParam0->f_4, 1, 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x27FC1B0077581B37(uParam0->f_4, 2, 0);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x27FC1B0077581B37(uParam0->f_4, 0, 0);
				if (unk_0x419E13582192CFEA(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_122()
{
	Local_932 = { func_123() };
	if ((((((((unk_0xDA654EB115F9FF7D(&cLocal_878, &Local_932) || unk_0xDA654EB115F9FF7D(&cLocal_884, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_890, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_896, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_902, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_908, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_914, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_920, &Local_932)) || unk_0xDA654EB115F9FF7D(&cLocal_926, &Local_932))
	{
		return 1;
	}
	return 0;
}

struct<6> func_123()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		iVar6 = unk_0x9618CA3AB2A82C04();
		iVar6 = (iVar6 + Global_22135);
		if (iVar6 > -1)
		{
			return Global_19993[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_124()
{
	if (Local_413.f_56 >= Local_413.f_59)
	{
		Local_413.f_56 = 10000;
	}
	else if (Local_413.f_56 <= 0)
	{
		Local_413.f_56 = 0;
	}
	else
	{
		Local_413.f_56 = 5000;
	}
}

void func_125(var uParam0)
{
	func_127();
	unk_0x1036762BD3781C84();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_213(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_213(uParam0, 103, 1, 0, 0);
		}
		func_126(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_213(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_213(uParam0, 102, 1, 0, 0);
	}
	func_281(uParam0, 16, 4f, 0);
}

void func_126(int iParam0)
{
	Global_111003.f_221 = iParam0;
}

void func_127()
{
	Global_19991 = 0;
	func_128();
}

void func_128()
{
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0xBA3738C78262143F();
		Global_22136 = 0;
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_129(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_130(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_148(4, SYSTEM::CEIL(fVar0));
	func_148(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_130(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_131()
{
	Global_19991 = 0;
	func_132();
}

void func_132()
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

int func_133()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x791B4C3811D53DFA(*iParam0);
		unk_0xBAB6F7501A822416(*iParam0);
		*iParam0 = -1;
	}
}

void func_135()
{
	unk_0x068BDE31F7D112BB("oddjobs@taxi@cyi");
	unk_0x16E516CA9C88FF48(joaat("p_banknote_s"));
}

void func_136()
{
	if (func_151(&Local_413, 7) < 75f && !iLocal_864)
	{
		Local_413.f_57 += 12;
		func_213(&Local_413, 30, 1, 0, 1);
	}
	else if (func_151(&Local_413, 7) > 150f || iLocal_864)
	{
		Local_413.f_57 = -10;
		func_213(&Local_413, 32, 1, 0, 1);
		iLocal_864 = 1;
		func_137();
	}
	else
	{
		Local_413.f_57 += 5;
		func_213(&Local_413, 31, 1, 0, 1);
	}
}

void func_137()
{
	unk_0x16E516CA9C88FF48(func_280(3));
	unk_0x16E516CA9C88FF48(func_280(4));
	unk_0x498685EB9132AF88(0, func_138(1));
}

char* func_138(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_139(var uParam0)
{
	if (func_133())
	{
		return 1;
	}
	if (func_140(uParam0, 17))
	{
		return 1;
	}
	if (func_140(uParam0, 14))
	{
		return 1;
	}
	if (func_144(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_140(var uParam0, int iParam1)
{
	return func_17(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_141(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_100(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_100(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_17(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_103(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_281(uParam0, 10, 0f, 1);
	unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_144(var uParam0)
{
	return uParam0->f_110;
}

void func_145(var uParam0, int iParam1)
{
	func_146(uParam0, iParam1);
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_147(var uParam0, var uParam1)
{
	unk_0xFB03099134FEF45C(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_112293.f_19095.f_22[0]++;
			func_149("Fares Completed ++ = ", Global_112293.f_19095.f_22[0]);
			break;
		
		case 1:
			Global_112293.f_19095.f_22[1]++;
			func_149("Fares Failed ++ = ", Global_112293.f_19095.f_22[1]);
			break;
		
		case 2:
			Global_112293.f_19095.f_22[2]++;
			func_149("Fares Accepted ++ ", Global_112293.f_19095.f_22[2]);
			break;
		
		case 3:
			Global_112293.f_19095.f_22[3]++;
			func_149("Fares Expired ++ ", Global_112293.f_19095.f_22[3]);
			break;
		
		case 13:
			Global_112293.f_19095.f_22[13]++;
			func_149("Passengers run ++ = ", Global_112293.f_19095.f_22[13]);
			break;
		
		case 14:
			Global_112293.f_19095.f_22[14]++;
			func_149("Passenger Forced to Pay ++ = ", Global_112293.f_19095.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_112293.f_19095.f_22[4])
				{
					Global_112293.f_19095.f_22[4] = iParam1;
					func_149("This distance ", iParam1);
					func_149(" is longer than current best", Global_112293.f_19095.f_22[4]);
				}
				else
				{
					func_149("Longest Distance Not Beat ", Global_112293.f_19095.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_112293.f_19095.f_22[5] = (Global_112293.f_19095.f_22[5] + iParam1);
			func_149("Total Distance w/ Passenger = ", Global_112293.f_19095.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_112293.f_19095.f_22[6]++;
			}
			else
			{
				Global_112293.f_19095.f_22[6] = (Global_112293.f_19095.f_22[6] + iParam1);
			}
			func_149("Wanted Levels ++ = ", Global_112293.f_19095.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_112293.f_19095.f_22[7] = (Global_112293.f_19095.f_22[7] + iParam1);
			}
			else
			{
				Global_112293.f_19095.f_22[7]++;
			}
			func_149("Wanted Levels Lost = ", Global_112293.f_19095.f_22[7]);
			break;
		
		case 8:
			Global_112293.f_19095.f_22[8]++;
			func_149("Taxis wrecked ++ = ", Global_112293.f_19095.f_22[8]);
			break;
		
		case 9:
			Global_112293.f_19095.f_22[9]++;
			func_149("Horn Honked ++ = ", Global_112293.f_19095.f_22[9]);
			break;
		
		case 10:
			Global_112293.f_19095.f_22[10] = (Global_112293.f_19095.f_22[10] + iParam1);
			func_149("Total Money Earned = ", Global_112293.f_19095.f_22[10]);
			break;
		
		case 11:
			Global_112293.f_19095.f_22[11] = (Global_112293.f_19095.f_22[11] + iParam1);
			func_149("Total Tips Earned = ", Global_112293.f_19095.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_112293.f_19095.f_22[12])
			{
				Global_112293.f_19095.f_22[12] = iParam1;
				func_149("New Highest Tip = ", Global_112293.f_19095.f_22[12]);
			}
			else
			{
				func_149("Highest Tip Not Reached = ", Global_112293.f_19095.f_22[12]);
			}
			break;
	}
}

void func_149(char* sParam0, int iParam1)
{
}

int func_150(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x3CF5ADE443D18312(iParam0);
	Var0 = { unk_0x8EB57098C563AB39(iParam0, unk_0xD6E677FAD7521410(iParam1, 1)) };
	if (unk_0x6471F4759775FCA4(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x6471F4759775FCA4(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.x > 0f)
	{
		if (unk_0x5F1B1AFB0CA1586A(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x5F1B1AFB0CA1586A(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x5F1B1AFB0CA1586A(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x5F1B1AFB0CA1586A(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

float func_151(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_152(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_101(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_152(var uParam0)
{
	if (!func_17(uParam0))
	{
		func_103(uParam0);
	}
}

void func_153(var uParam0, bool bParam1)
{
	func_163(uParam0, uParam0->f_3);
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xF41EB7643E61A928(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_140(uParam0, 14))
			{
				if (func_133())
				{
					func_162(1);
				}
				func_161(uParam0, 11, 1);
				func_154(uParam0, 1);
				func_281(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_202(uParam0))
				{
					if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
					{
					}
					if (unk_0xC49311A2A500FF09(uParam0->f_2, 0))
					{
						if (func_151(uParam0, 15) > 5f)
						{
							func_281(uParam0, 15, 0f, 1);
						}
					}
					if (func_151(uParam0, 14) > 20f)
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_151(uParam0, 14) > 20f)
				{
					if (func_167(uParam0->f_4, 1) > 40f)
					{
						func_335(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_154(var uParam0, bool bParam1)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
			{
				unk_0x97A41BF3F05FC07D(uParam0->f_8, 0);
				unk_0x13CC211F9F7ACE7F(uParam0->f_8, 0);
				func_160(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x575B7C28D81C0B4D(uParam0->f_9))
			{
				unk_0x97A41BF3F05FC07D(uParam0->f_9, 0);
				unk_0x13CC211F9F7ACE7F(uParam0->f_9, 0);
				unk_0x1036762BD3781C84();
				if (func_202(uParam0))
				{
					func_213(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_160(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_155(uParam0, 0, 0);
		}
		else if (unk_0x575B7C28D81C0B4D(uParam0->f_10))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_10));
			if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
			{
				unk_0x97A41BF3F05FC07D(uParam0->f_8, 255);
				unk_0x13CC211F9F7ACE7F(uParam0->f_8, 1);
			}
			else if (unk_0x575B7C28D81C0B4D(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x97A41BF3F05FC07D(uParam0->f_9, 0);
					unk_0x13CC211F9F7ACE7F(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x97A41BF3F05FC07D(uParam0->f_9, 255);
					unk_0x13CC211F9F7ACE7F(uParam0->f_9, 1);
				}
			}
			unk_0x1036762BD3781C84();
		}
	}
}

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_50(uParam0);
	}
	if (!unk_0x575B7C28D81C0B4D(uParam0->f_10))
	{
		uParam0->f_10 = func_158(uParam0->f_4, 1, 0);
		unk_0xDD944E3FD2028A48(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x13CC211F9F7ACE7F(uParam0->f_10, 1);
		func_156(uParam0);
		if (bParam2)
		{
			unk_0x1036762BD3781C84();
			func_213(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_156(var uParam0)
{
	func_281(uParam0, 14, 0, 0);
	func_157();
}

void func_157()
{
	int iVar0;
	
	iVar0 = unk_0x0BF0F8F3AD0993F6();
	if (unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		unk_0xE2D24A37AFCF27BF(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_158(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_159(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_159(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_159(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_159(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_204(*uParam1, iParam2))
	{
		unk_0x1036762BD3781C84();
		func_213(uParam0, iParam3, 1, 0, 0);
		func_179(uParam1, iParam2);
	}
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_162(int iParam0)
{
	Global_22136 = iParam0;
}

void func_163(var uParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam1))
	{
		if (!unk_0xECEC7528A52B4EE8(iParam1))
		{
			if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
			{
				if ((unk_0x16DE9112AAAB5C8C(iParam1, joaat("weapon_stungun"), 0) || unk_0x16DE9112AAAB5C8C(iParam1, 0, 2)) || unk_0x16DE9112AAAB5C8C(iParam1, 0, 1))
				{
					func_335(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
			}
		}
	}
}

void func_164(var uParam0, bool bParam1)
{
	func_166(uParam0);
	if (bParam1)
	{
		if (!unk_0x575B7C28D81C0B4D(uParam0->f_9))
		{
			uParam0->f_9 = func_165(uParam0->f_17, 1);
		}
		else if (unk_0x5D8B0ADD9EFBD7B9(uParam0->f_9) == 0)
		{
			unk_0x9624333247B84756(1, 0);
			unk_0x97A41BF3F05FC07D(uParam0->f_9, 255);
			unk_0xC983AF341845804E(uParam0->f_9, uParam0->f_17);
			unk_0x13CC211F9F7ACE7F(uParam0->f_9, 1);
		}
	}
}

var func_165(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_159(unk_0x02BFF15CAA701972(), 1f, 1f));
	unk_0x13CC211F9F7ACE7F(uVar0, iParam3);
	return uVar0;
}

void func_166(var uParam0)
{
	if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
	{
		unk_0x13CC211F9F7ACE7F(uParam0->f_8, 0);
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_8));
	}
}

float func_167(int iParam0, int iParam1)
{
	return func_168(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), iParam0, iParam1);
}

float func_168(int iParam0, int iParam1, int iParam2)
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

void func_169()
{
	if (bLocal_971)
	{
		func_176("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_871, 1000);
	}
	if (!unk_0xE50EB54E0F21BED0(Local_413.f_3, 0))
	{
		switch (iLocal_1043)
		{
			case 0:
				if (func_201(Local_413.f_3, Local_845, 1) < 16f)
				{
					iLocal_1043 = 1;
				}
				break;
			
			case 1:
				if (func_167(Local_413.f_3, 1) < 10f)
				{
					unk_0xD82D50E4AC0D46B9(Local_413.f_3, joaat("weapon_combatpistol"), 50, 1, 1);
					unk_0x8D5B447F21217223(&uLocal_844);
					unk_0x5C679902079A7E80(&uLocal_844);
					unk_0x2AA99ECF9FBD1E5D(0, unk_0x7D2B9E6A64637269(), -1, 0);
					unk_0x1BBD0A5729AB1226(uLocal_844);
					unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
					unk_0x8D5B447F21217223(&uLocal_844);
					func_281(&Local_413, 12, 0, 0);
					iLocal_1043 = 2;
				}
				break;
			
			case 2:
				if (func_151(&Local_413, 12) > 1.5f)
				{
					if (iLocal_1044 != 5)
					{
						if (!unk_0xE50EB54E0F21BED0(Local_413.f_2, 0))
						{
							if (unk_0xBFCE58B2B3249999(Local_413.f_4, 0))
							{
								if (unk_0xF41EB7643E61A928(Local_413.f_2, Local_413.f_4, 0))
								{
									func_213(&Local_413, 56, 1, 0, 0);
								}
								else
								{
									func_213(&Local_413, 55, 1, 1, 0);
								}
							}
						}
						iLocal_868 = 0;
						iLocal_862 = 1;
						func_281(&Local_413, 12, 0, 0);
						func_174(&Local_413, 6);
						iLocal_1043 = 3;
					}
					else
					{
						func_141(&Local_413, 12, 0);
						iLocal_1043 = 9;
					}
				}
				break;
			
			case 3:
				if (func_167(Local_413.f_3, 1) >= 10f)
				{
					iLocal_1043 = 5;
				}
				else if (iLocal_869)
				{
					if (!func_133() && !unk_0x6C2F471E0CF8D4CF())
					{
						if (!iLocal_868)
						{
							func_281(&Local_413, 12, 0, 0);
							iLocal_868 = 1;
						}
						else if (func_151(&Local_413, 12) > 5f)
						{
							func_141(&Local_413, 12, 0);
							iLocal_1043 = 9;
						}
					}
				}
				else if (!iLocal_869)
				{
					if (func_172("txm8_lvMe1") || func_172("txm8_lvMe2"))
					{
						iLocal_869 = 1;
					}
				}
				break;
			
			case 5:
				func_170(&Local_413, 6);
				if (unk_0x4E8DA737B686529A(Local_413.f_3, 242628503) != 7)
				{
					unk_0x8D5B447F21217223(&uLocal_844);
					unk_0x5C679902079A7E80(&uLocal_844);
					unk_0x45B1B4E55BF15523(0, Local_845, 1f, 40000, 1048576000, 0, 1193033728);
					unk_0x45B1B4E55BF15523(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0x45B1B4E55BF15523(0, Local_848, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0x1BBD0A5729AB1226(uLocal_844);
					unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
					unk_0x8D5B447F21217223(&uLocal_844);
					iLocal_1044 = 5;
					iLocal_1043 = 0;
				}
				break;
			
			case 9:
				if (func_140(&Local_413, 12))
				{
					if (func_151(&Local_413, 12) > 2f)
					{
						func_281(&Local_413, 6, 0, 0);
						unk_0x8D5B447F21217223(&uLocal_844);
						unk_0x5C679902079A7E80(&uLocal_844);
						unk_0x41D7811563AAD1B1(0, unk_0x7D2B9E6A64637269(), -1, -957453492);
						unk_0x1BBD0A5729AB1226(uLocal_844);
						unk_0x8A1AC8EBC73850C8(Local_413.f_3, uLocal_844);
						unk_0x8D5B447F21217223(&uLocal_844);
						unk_0x78B2DF314748056B(5, Local_413.f_413, 1862763509);
						unk_0x504B26425DFF773C(Local_413.f_3, 1);
						bLocal_863 = true;
						if (unk_0x575B7C28D81C0B4D(Local_413.f_9) && unk_0x5D8B0ADD9EFBD7B9(Local_413.f_9) > 0)
						{
							unk_0x97A41BF3F05FC07D(Local_413.f_9, 0);
							unk_0x13CC211F9F7ACE7F(Local_413.f_9, 0);
							unk_0xAA18C87A1A6C1FAE("TAXI_OBJ_CYI_1B");
						}
						iLocal_1043 = 10;
					}
				}
				else
				{
					func_281(&Local_413, 12, 0, 0);
					if (!unk_0xE50EB54E0F21BED0(Local_413.f_2, 0))
					{
						if (unk_0xBFCE58B2B3249999(Local_413.f_4, 0))
						{
							if (unk_0xF41EB7643E61A928(Local_413.f_2, Local_413.f_4, 0))
							{
								func_213(&Local_413, 56, 1, 0, 0);
							}
							else
							{
								func_213(&Local_413, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!unk_0x6C2F471E0CF8D4CF() && func_151(&Local_413, 6) > 2f)
				{
					func_335(&Local_413, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_170(var uParam0, int iParam1)
{
	if (func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_171(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_171(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			uParam0->f_1 = (func_15(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0xC664C0067EEAB8D1(uParam0, 2);
		}
	}
}

int func_172(char* sParam0)
{
	var uVar0;
	
	if (func_133())
	{
		MemCopy(&uVar0, {func_173()}, 4);
		if (unk_0xDA654EB115F9FF7D(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_173()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		return Global_20744;
	}
	return Var0;
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_16(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_175(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_175(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_175(var uParam0)
{
	if (func_17(uParam0))
	{
		if (!func_16(uParam0))
		{
			uParam0->f_2 = (func_15(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
			unk_0x191DDA30577F440A(uParam0, 2);
		}
	}
}

void func_176(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xDFB7BFA6482FEE1E() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xDFB7BFA6482FEE1E();
}

void func_177(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0) && unk_0x2C10A11A684CFE96(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x9E695CE384C77EF0(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x9E695CE384C77EF0(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_178(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xEDC0317C5B604BB1(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x0BABEFEA577FCFA4(Var0, Param1, 0) < unk_0x0BABEFEA577FCFA4(Var3, Param1, 0) && unk_0x5F1B1AFB0CA1586A(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xEDC0317C5B604BB1(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x0BABEFEA577FCFA4(Var0, Param1, 0) >= unk_0x0BABEFEA577FCFA4(Var3, Param1, 0) && unk_0x5F1B1AFB0CA1586A(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xEDC0317C5B604BB1(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xEDC0317C5B604BB1(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_178(int iParam0, int iParam1)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (unk_0x2C10A11A684CFE96(iParam0, iParam1))
		{
			if (unk_0x27FC1B0077581B37(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x27FC1B0077581B37(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x27FC1B0077581B37(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x27FC1B0077581B37(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_179(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_181(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB()) && !unk_0x4E38E404B98F3D9A()) && !unk_0x8B6A925F148E0E94()) && !uParam0->f_142)
	{
		if (func_197(uParam0))
		{
			func_147(uParam0, &(uParam0->f_43));
			func_193(uParam0);
			func_192(uParam0);
			func_189(uParam0);
			func_187(uParam0, fParam2, fParam3);
			func_185(uParam0);
			return func_182(uParam0, iParam1);
		}
	}
	return 0;
}

int func_182(var uParam0, int iParam1)
{
	if (func_60(uParam0) == 2)
	{
		if (unk_0x591190E69BE43117(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_184(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1) && func_183(1, 1, 1)) && unk_0x3B89994312445DE5(uParam0->f_4))
		{
			return func_114(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x591190E69BE43117(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1) && func_183(1, 1, 1)) && unk_0x3B89994312445DE5(uParam0->f_4))
	{
		return func_114(uParam0, 1, iParam1);
	}
	return 0;
}

int func_183(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDA1F0FCE18FED8C1())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
		{
			return 0;
		}
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (bParam0)
		{
			if (unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x27FC1B0077581B37(iVar0, -1, 0) != unk_0x7D2B9E6A64637269())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xAB53B3829B28E5B8(iVar0) < 0.95f || unk_0xAB53B3829B28E5B8(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!unk_0xCAE2D0DD92A9241E(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

float func_184(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam4);
}

void func_185(var uParam0)
{
	float fVar0;
	
	if ((func_202(uParam0) && func_204(uParam0->f_81, 67108864)) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
	{
		if ((unk_0xDFB7BFA6482FEE1E() - iLocal_97) >= 10000)
		{
			fVar0 = func_186(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0xDFB7BFA6482FEE1E();
		}
		if (iLocal_96 >= 2 && !func_133())
		{
			func_213(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xDFB7BFA6482FEE1E() % 4000) < 50)
		{
			if (!func_202(uParam0))
			{
			}
			if (!func_204(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_186(struct<3> Param0, int iParam3)
{
	return func_201(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), Param0, iParam3);
}

void func_187(var uParam0, float fParam1, float fParam2)
{
	if (func_202(uParam0) && func_204(uParam0->f_44, 4))
	{
		if ((unk_0x8879B2803A5F8682(uParam0->f_4) || unk_0x4DDAC4C80BACF92C(uParam0->f_4) < 3f) && func_311(uParam0))
		{
			if (!func_140(uParam0, 2))
			{
				func_188(uParam0, 2);
			}
			else if (func_202(uParam0))
			{
				if (func_151(uParam0, 2) > fParam1 && !func_140(uParam0, 14))
				{
					if (func_35())
					{
						func_213(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_213(uParam0, 48, 1, 0, 0);
					}
					func_281(uParam0, 2, 0, 0);
					if (func_140(uParam0, 10))
					{
						func_281(uParam0, 10, 0, 0);
					}
				}
				if (!func_140(uParam0, 3))
				{
					func_281(uParam0, 3, 0, 0);
				}
				else if (func_151(uParam0, 3) >= fParam2)
				{
					func_141(uParam0, 3, 0);
					func_335(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_140(uParam0, 2))
			{
				func_141(uParam0, 2, 0);
			}
			if (func_140(uParam0, 3))
			{
				func_141(uParam0, 3, 0);
			}
		}
	}
}

void func_188(var uParam0, int iParam1)
{
	func_152(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_189(var uParam0)
{
	if (func_191(uParam0))
	{
		func_190(uParam0);
	}
}

void func_190(var uParam0)
{
	if (unk_0x1275587246A96F24() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x35A1BC0F4035B2F2();
			func_141(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_151(uParam0, 20) > 3f)
				{
					func_213(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_204(uParam0->f_81, 262144) || !func_204(uParam0->f_81, 1048576))
				{
					if (func_151(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_213(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_204(uParam0->f_82, 67108864))
				{
					if (func_151(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_213(uParam0, 85, 1, 0, 0);
						func_141(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_151(uParam0, 20) > 8f)
				{
					func_213(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_204(uParam0->f_81, 262144) || func_204(uParam0->f_82, 67108864))
			{
				if (!func_140(uParam0, 22))
				{
					func_188(uParam0, 22);
				}
			}
			if (func_140(uParam0, 22) && func_151(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_204(uParam0->f_81, 1048576))
					{
						func_213(uParam0, 84, 1, 0, 0);
						func_141(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_204(uParam0->f_82, 134217728))
					{
						func_213(uParam0, 85, 1, 0, 0);
						func_141(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_191(var uParam0)
{
	return uParam0->f_120;
}

void func_192(var uParam0)
{
	if (unk_0xD8CCA4EAA59D74BF(unk_0x638BDC79E655C1C2()) && !func_204(uParam0->f_44, 2))
	{
		func_179(&(uParam0->f_44), 2);
	}
	else if (!unk_0xD8CCA4EAA59D74BF(unk_0x638BDC79E655C1C2()) && func_204(uParam0->f_44, 2))
	{
		func_145(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_148(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_213(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_193(var uParam0)
{
	if (!func_204(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) >= 1)
				{
					if (func_151(uParam0, 9) > 1f)
					{
						func_196(uParam0, unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()));
						if (uParam0->f_410 != 22)
						{
							func_213(uParam0, 50, 1, 1, 0);
						}
						func_281(uParam0, 9, 0, 0);
						if (unk_0x575B7C28D81C0B4D(uParam0->f_9))
						{
							unk_0x97A41BF3F05FC07D(uParam0->f_9, 0);
							unk_0x13CC211F9F7ACE7F(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_133() && func_151(uParam0, 9) > 4f)
				{
					func_213(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_195("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_213(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xA12BCF836724905A(unk_0x638BDC79E655C1C2(), func_194(uParam0)))
				{
					func_196(uParam0, unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()));
					func_148(6, 0);
				}
				if (!func_144(uParam0))
				{
					if (!unk_0x6C2F471E0CF8D4CF())
					{
						if (func_151(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_213(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1)
				{
					if (func_195("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x1036762BD3781C84();
					}
					if (unk_0x575B7C28D81C0B4D(uParam0->f_9))
					{
						unk_0x97A41BF3F05FC07D(uParam0->f_9, 255);
						unk_0x13CC211F9F7ACE7F(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_133())
				{
					if (uParam0->f_410 != 22)
					{
						func_213(uParam0, 53, 1, 0, 1);
					}
					func_148(7, func_194(uParam0));
					func_196(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_133())
				{
					func_141(uParam0, 9, 0);
					func_281(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_194(var uParam0)
{
	return uParam0->f_106;
}

bool func_195(char* sParam0, int iParam1, int iParam2)
{
	unk_0x40542ED8EFC7D2D7(sParam0);
	if (iParam1 == 1)
	{
		unk_0x1896EC0B030A48A2(iParam2);
	}
	return unk_0xB4BAEA083E2652CB();
}

void func_196(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_197(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
		{
			if (!unk_0xF41EB7643E61A928(uParam0->f_3, uParam0->f_4, 1) && !unk_0x195733224245A760(uParam0->f_3))
			{
				func_335(uParam0, "Passenger left car.", 9);
			}
			else if (func_286(uParam0))
			{
				if (func_195("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xAA18C87A1A6C1FAE("TAXI_OBJ_PICKUP");
				}
				if (unk_0xE0A6F16F546C8274())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
				{
				}
				func_153(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_199(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_200(), 24);
		iVar0++;
	}
	unk_0x1036762BD3781C84();
	func_48();
}

var func_200()
{
	var uVar0;
	
	return uVar0;
}

float func_201(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), Param1, iParam4);
}

int func_202(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
		{
			if (unk_0xF41EB7643E61A928(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(var uParam0)
{
	return uParam0->f_416;
}

bool func_204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_205(var uParam0)
{
	func_209(uParam0, 1000);
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x16D66F11FE644901(uParam0->f_3);
		unk_0xB0C1A43193C25F7A(uParam0->f_3, unk_0x7D2B9E6A64637269(), 0);
	}
	func_131();
	func_206(uParam0);
}

void func_206(var uParam0)
{
	func_141(uParam0, 14, 0);
	func_141(uParam0, 15, 0);
	func_208();
	if (func_207())
	{
		func_162(0);
	}
}

int func_207()
{
	if (Global_22136 == 1)
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	var uVar0;
	
	uVar0 = unk_0x0BF0F8F3AD0993F6();
	if (unk_0xBFCE58B2B3249999(uVar0, 0))
	{
		unk_0xE2D24A37AFCF27BF(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_209(var uParam0, int iParam1)
{
	if (unk_0x0E8572B08CEB6A11(*uParam0))
	{
		unk_0xFE1DEC9C5734D0C0(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x09F9466B03D29D2D(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
	}
}

void func_210(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_38(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_38(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x6F21DC8C6FD88FCF(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xE99504CC51D09E54(Var0, Var3, 1);
		unk_0x36C2CA307C00F187();
	}
}

void func_211()
{
	func_179(&(Local_413.f_55), 2);
	func_179(&(Local_413.f_55), 4);
	func_179(&(Local_413.f_55), 16);
	func_179(&(Local_413.f_55), 64);
	func_179(&(Local_413.f_55), 256);
	func_179(&(Local_413.f_55), 512);
	func_179(&(Local_413.f_55), 1024);
	func_179(&(Local_413.f_55), 2048);
	func_179(&(Local_413.f_55), 4096);
	func_179(&(Local_413.f_100), 8);
	func_179(&(Local_413.f_100), 2048);
	func_179(&(Local_413.f_100), 256);
	func_179(&uLocal_938, 2);
}

void func_212(var uParam0)
{
	unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
	unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
	func_209(uParam0, 1000);
}

void func_213(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_281(uParam0, 16, 4f, 0);
		if (func_214(uParam0))
		{
			func_48();
		}
	}
	func_242(uParam0, iParam2, bParam3);
}

int func_214(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_133())
	{
		Var6 = { func_173() };
		if (!unk_0xAB6A270F84A8781E(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xDA654EB115F9FF7D(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_215(&Var0);
			if (unk_0xDA654EB115F9FF7D(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_215(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_216(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
		{
			if ((unk_0x195733224245A760(uParam0->f_3) && (unk_0xDFB7BFA6482FEE1E() - iLocal_89) > 500) || unk_0xF41EB7643E61A928(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_217(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 1:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 2:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 3:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 4:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 5:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 6:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 7:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 8:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return func_40();
}

int func_218(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xF41EB7643E61A928(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
			{
			}
			func_153(uParam0, 1);
			if (func_33())
			{
				unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
			}
			if (unk_0x4E8DA737B686529A(uParam0->f_3, 2106541073) == 1 || unk_0x4E8DA737B686529A(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x16D66F11FE644901(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0xB0C1A43193C25F7A(uParam0->f_3, unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (unk_0xA12BCF836724905A(unk_0x638BDC79E655C1C2(), 0))
		{
			func_240(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x8D5B447F21217223(&uVar3);
				unk_0x5C679902079A7E80(&uVar3);
				unk_0x45B1B4E55BF15523(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xB0C1A43193C25F7A(0, uParam0->f_4, 0);
				unk_0x1BBD0A5729AB1226(uVar3);
				unk_0x8A1AC8EBC73850C8(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_140(uParam0, 14))
			{
				func_206(uParam0);
				func_154(uParam0, 0);
			}
			if (func_140(uParam0, 9))
			{
				func_141(uParam0, 9, 0);
				unk_0x1036762BD3781C84();
				if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
				{
					unk_0x97A41BF3F05FC07D(uParam0->f_8, 255);
					unk_0x13CC211F9F7ACE7F(uParam0->f_8, 1);
				}
			}
			if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x4DDAC4C80BACF92C(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_239(uParam0, uParam0->f_3) > 300f)
				{
					func_335(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 1 || ((func_168(unk_0x7D2B9E6A64637269(), uParam0->f_3, 1) < 20f && func_184(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_184(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_236(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_235(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_150(uParam0->f_4, uParam0->f_3);
								iVar0 = func_121(uParam0, &iVar1);
								if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0xCC5ED49CF9C9215F(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xCC5ED49CF9C9215F(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x5F1B1AFB0CA1586A(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
											{
												unk_0xCC5ED49CF9C9215F(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xCA089CD1A17D76DF(uParam0->f_3);
							unk_0x95CA4545D0C61309(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x2991F881A49C91B1(unk_0xD6E677FAD7521410(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_311(uParam0))
							{
								unk_0xCA089CD1A17D76DF(uParam0->f_3);
							}
							else if (((unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 1 && unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 0) && unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 7) && func_239(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x8D5B447F21217223(&(uParam0->f_243));
								unk_0x5C679902079A7E80(&(uParam0->f_243));
								unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x4261814A9A26E86F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x4261814A9A26E86F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x1BBD0A5729AB1226(uParam0->f_243);
								unk_0x8A1AC8EBC73850C8(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x7F1C9DA5D53192D3(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_168(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_234(uParam0, 1))
								{
									unk_0x16D66F11FE644901(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_233(uParam0->f_4))
								{
									unk_0x16D66F11FE644901(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_231(uParam0);
						if (func_239(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xF41EB7643E61A928(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_219(uParam0))
								{
									func_166(uParam0);
									iLocal_89 = unk_0xDFB7BFA6482FEE1E();
									unk_0x7B28A83A0D3DD0F9(uParam0->f_3, 26, 1);
									func_141(uParam0, 5, 0);
									unk_0xFA23566AAAB7508D();
									unk_0xFB03099134FEF45C(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xE475510533501D9B(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x2991F881A49C91B1(unk_0xD6E677FAD7521410(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_219(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_176("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
	{
		func_230();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_228(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_114(uParam0, 0, 1084227584) && func_183(1, 1, 1))
			{
				if (func_234(uParam0, 1))
				{
					iLocal_88 = unk_0xDFB7BFA6482FEE1E();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_335(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_150(uParam0->f_4, uParam0->f_3);
				iVar9 = func_121(uParam0, &iVar10);
				if (!unk_0xE50EB54E0F21BED0(iVar9, 0))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0xCC5ED49CF9C9215F(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xCC5ED49CF9C9215F(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x5F1B1AFB0CA1586A(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xE50EB54E0F21BED0(iVar9, 0))
						{
							unk_0xCC5ED49CF9C9215F(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_227(&(uParam0->f_409), unk_0x9E695CE384C77EF0(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x9E695CE384C77EF0(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_226(0, 0, 1);
				unk_0x91F94D2287684BDB(unk_0xD6E677FAD7521410(uParam0->f_4, 1), 3f, 0);
				unk_0xBA7E979B202649F9(unk_0xD6E677FAD7521410(uParam0->f_4, 1), 25f, 0);
				unk_0x66AE54CE92457FEE(1);
				unk_0x1036762BD3781C84();
				func_127();
				func_242(uParam0, 0, 0);
				Var13 = { unk_0x9E695CE384C77EF0(uParam0->f_4, Var6) };
				unk_0x78CDDD1E6367978D(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(uParam0->f_3, func_224(uParam0));
				func_223(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x7508AE96782B0441(*uParam0, unk_0x9E695CE384C77EF0(uParam0->f_4, Var0));
				unk_0x5C062C9AFC66C513(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x6FA8221C9D2ECB46(*uParam0, 1);
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
				unk_0xE37EB80DFB0D31FB(uParam0->f_3, 0, 0);
				unk_0x95CA4545D0C61309(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_176("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
			{
				if (!unk_0xC49311A2A500FF09(uParam0->f_3, 0))
				{
					unk_0xB1D85A6C23F2F945(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x616B09EEEFED8FAF(uParam0->f_4, func_222(uParam0->f_7), 1);
				}
				unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
				unk_0xFE1DEC9C5734D0C0(*uParam0, 0);
				unk_0xFE1DEC9C5734D0C0(uParam0->f_1, 0);
				unk_0xDF23DCD7A3E1B7A5(0);
				unk_0x3A13FD2813C8251F(0, 1065353216);
				unk_0x6E1E3A5B1F9AB95B(800);
				unk_0x66AE54CE92457FEE(1);
				unk_0x1036762BD3781C84();
				func_127();
				func_242(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				func_220(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
			unk_0xFE1DEC9C5734D0C0(*uParam0, 0);
			unk_0xFE1DEC9C5734D0C0(uParam0->f_1, 0);
			unk_0xDF23DCD7A3E1B7A5(0);
			unk_0x3A13FD2813C8251F(0, 1065353216);
			func_220(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
			{
				if (unk_0x195733224245A760(uParam0->f_3) || unk_0xC49311A2A500FF09(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) != 1 && unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) != 0)
				{
					unk_0x95CA4545D0C61309(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_220(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
	}
	unk_0x0513A10C6415B57C(1);
	func_23(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0xDD7C2F9844E745B1(1);
		unk_0x4200138CBB376D4D(1);
	}
	func_221(23, 0);
}

void func_221(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&Global_31593, iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_31593, iParam0);
	}
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_223(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x0E8572B08CEB6A11(*uParam0))
	{
		*uParam0 = unk_0x1CA878DB277C6DF0(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_224(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x9E695CE384C77EF0(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x9E695CE384C77EF0(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_225(unk_0xD6E677FAD7521410(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_225(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x832AD84AA258AE80((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 0, iParam0);
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0x8BE64A4794BF87FA(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 15f);
	}
	unk_0x0513A10C6415B57C(iParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	unk_0xDD7C2F9844E745B1(0);
	unk_0x4200138CBB376D4D(0);
	func_221(23, 1);
}

int func_227(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x3F7B472B49D4D2AC(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xA2B3B271E2AE7A08(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_228(int iParam0)
{
	if (func_229() && unk_0xDFB7BFA6482FEE1E() >= iParam0 + 1000)
	{
		unk_0x8BA9BCDD56AA7115(500);
		while (!unk_0x8B6A925F148E0E94())
		{
			SYSTEM::WAIT(0);
		}
		func_41(0);
		func_131();
		return 1;
	}
	return 0;
}

int func_229()
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

void func_230()
{
	if (func_35())
	{
		unk_0xC9126A88F0FAC28F("appInternet");
	}
	if (func_34())
	{
		unk_0xC9126A88F0FAC28F("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_231(var uParam0)
{
	var uVar0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
		{
			if (func_167(uParam0->f_3, 1) > 30f || func_232(uParam0))
			{
				if (unk_0x4E8DA737B686529A(uParam0->f_3, -1794415470) == 1 || unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) == 1)
				{
					unk_0x8D5B447F21217223(&uVar0);
					unk_0x5C679902079A7E80(&uVar0);
					unk_0xB0C1A43193C25F7A(0, uParam0->f_4, 0);
					unk_0x4261814A9A26E86F(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x45B1B4E55BF15523(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(uParam0->f_3, uVar0);
					func_335(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_232(var uParam0)
{
	if ((unk_0x4DDAC4C80BACF92C(uParam0->f_4) > 3f && func_151(uParam0, 5) > 15f) || unk_0x020175C59CBE79DB(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x3095B0C5EB2CFFEC(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x3095B0C5EB2CFFEC(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x3095B0C5EB2CFFEC(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x3095B0C5EB2CFFEC(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xCCFA606BB731DE7C(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xCCFA606BB731DE7C(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xCCFA606BB731DE7C(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xCCFA606BB731DE7C(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_234(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x27FC1B0077581B37(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x27FC1B0077581B37(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x27FC1B0077581B37(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x419E13582192CFEA(iVar0[iVar4]))
			{
				if (unk_0xE50EB54E0F21BED0(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_235(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		if (!unk_0x98E18969B1D0C4AB(uParam0->f_3) && func_167(uParam0->f_3, 1) < fParam2)
		{
			if (!func_140(uParam0, 5))
			{
				func_281(uParam0, 5, 0, 0);
			}
		}
		else if (func_140(uParam0, 5))
		{
			func_141(uParam0, 5, 0);
		}
		if (((func_151(uParam0, 5) > IntToFloat(iParam1) && unk_0x4DDAC4C80BACF92C(uParam0->f_4) < fParam4) && !unk_0x98E18969B1D0C4AB(uParam0->f_3)) || func_167(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_236(var uParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = unk_0xED5AD56E2C551D1E(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xED5AD56E2C551D1E(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xE8E46B75F88C4ACC(uParam0->f_4, iVar18) };
		Var6 = { unk_0x8EB57098C563AB39(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x9E695CE384C77EF0(uParam0->f_4, Var6) };
	Var3 = { unk_0x9E695CE384C77EF0(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0xF1D0549BA93424E7(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xBE91B077ADADE97F(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_168(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x3F7B472B49D4D2AC(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xA2B3B271E2AE7A08(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 1 && unk_0x4E8DA737B686529A(uParam0->f_3, 242628503) != 0)
			{
				unk_0x8D5B447F21217223(&(uParam0->f_243));
				unk_0x5C679902079A7E80(&(uParam0->f_243));
				unk_0x4261814A9A26E86F(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
				unk_0xCC2EDAABFCD738A4(uParam0->f_243, 1);
				unk_0x1BBD0A5729AB1226(uParam0->f_243);
				unk_0x8A1AC8EBC73850C8(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x1036762BD3781C84();
			if (uParam0->f_411 != 9)
			{
				if (!func_204(uParam0->f_44, 128))
				{
					func_213(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_237(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xCA089CD1A17D76DF(uParam0->f_3);
			unk_0x8ADA462BC5F42FD8(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x8D5B447F21217223(&(uParam0->f_243));
			unk_0x5C679902079A7E80(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x4261814A9A26E86F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x4261814A9A26E86F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
			unk_0x1BBD0A5729AB1226(uParam0->f_243);
			unk_0x8A1AC8EBC73850C8(uParam0->f_3, uParam0->f_243);
			unk_0x8D5B447F21217223(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x7F1C9DA5D53192D3(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_237(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(uParam0, sParam1, uParam2, func_238(iParam3), 0);
}

int func_238(int iParam0)
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

float func_239(var uParam0, int iParam1)
{
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (func_311(uParam0))
		{
			return func_168(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_240(var uParam0)
{
	func_163(uParam0, uParam0->f_3);
	if (func_311(uParam0))
	{
		if (func_140(uParam0, 14))
		{
			func_206(uParam0);
			if (unk_0x575B7C28D81C0B4D(uParam0->f_10))
			{
				unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_10));
			}
		}
	}
	if (!func_140(uParam0, 9))
	{
		if (unk_0x575B7C28D81C0B4D(uParam0->f_8))
		{
			unk_0x97A41BF3F05FC07D(uParam0->f_8, 0);
			unk_0x13CC211F9F7ACE7F(uParam0->f_8, 0);
		}
		func_281(uParam0, 9, 0, 0);
		func_241("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_241(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

void func_242(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_281(uParam0, 16, 4f, 0);
		unk_0x1036762BD3781C84();
	}
}

int func_243(var uParam0, int iParam1)
{
	if (!unk_0x080D38ACEC5DC1A2(2))
	{
		return 0;
	}
	func_248(12);
	if (func_204(uParam0->f_44, 8))
	{
		if (!func_204(uParam0->f_44, 128))
		{
			if (unk_0x36A89B5D559CD938(unk_0x7D2B9E6A64637269()) && !func_204(uParam0->f_44, 256))
			{
				func_179(&(uParam0->f_44), 256);
			}
			if (func_204(uParam0->f_44, 256) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				func_213(uParam0, 135, 1, 0, 1);
				func_179(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_246(uParam0, iParam1))
	{
		if (func_167(uParam0->f_3, 1) < 35f)
		{
			if (!func_204(uParam0->f_44, 8))
			{
				unk_0xB0C1A43193C25F7A(uParam0->f_3, unk_0x7D2B9E6A64637269(), 0);
				func_213(uParam0, 133, 1, 0, 1);
				func_179(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xECEC7528A52B4EE8(uParam0->f_3) || unk_0x11DBA82F76F3C4C2(uParam0->f_3)) || func_167(uParam0->f_3, 1) > 400f)
		{
			func_335(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x75B58B38E45C6F9A(uParam0->f_2, 0);
		unk_0xD4DF29F3D7B97053(uParam0->f_4, 1);
		if (unk_0x27FC1B0077581B37(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0xD3B638D46BF908EE(uParam0->f_4);
			func_244(uParam0);
			func_148(2, 0);
			bLocal_94 = true;
			func_152(&uLocal_90);
			return 1;
		}
		else
		{
			func_335(uParam0, "No Taxi", 21);
			func_285("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_244(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
	{
		if (func_245())
		{
		}
	}
}

int func_245()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_246(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				iVar1 = unk_0x6471F4759775FCA4(iVar0);
				bVar2 = func_233(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0xB480C9C35514775A(iVar1))
				{
					if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x3CF5ADE443D18312(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_204(uParam0->f_44, 64))
					{
						if (unk_0x080D38ACEC5DC1A2(2))
						{
							func_285("TX_VIP_DMGD", -1);
							if (func_247("TX_VIP_DMGD"))
							{
								func_179(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_204(uParam0->f_44, 32))
					{
						if (unk_0x080D38ACEC5DC1A2(2))
						{
							func_285("TX_VIP_CAR", -1);
							if (func_247("TX_VIP_CAR"))
							{
								func_179(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_204(uParam0->f_44, 16))
					{
						if (unk_0x080D38ACEC5DC1A2(2))
						{
							func_285("TX_VIP_SMALL", -1);
							if (func_247("TX_VIP_SMALL"))
							{
								func_179(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_145(&(uParam0->f_44), 16);
			func_145(&(uParam0->f_44), 64);
			func_145(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_247(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_248(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		uVar0 = iParam0;
		unk_0x5BC0C4A5DB4DFC65(8, &uVar0, 1, 1);
	}
	else if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x9AA45EB0997539A2(8, &cVar1);
	}
}

void func_249(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_146(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_250(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xC664C0067EEAB8D1(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x191DDA30577F440A(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xC664C0067EEAB8D1(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_251(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_252()
{
	Local_343 = 0;
	func_269(42883, 42858, 1);
	func_269(42619, 42596, 1);
	func_269(42534, 42509, 1);
	func_269(42437, 42413, 1);
	func_269(42303, 42282, 1);
	func_269(42229, 42204, 1);
	func_269(42062, 42039, 1);
}

int func_253(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_254(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_4))
	{
		if (func_256(uParam0->f_4))
		{
			func_255(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_255(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_256(int iParam0)
{
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x547F3E9F33EBE1F4(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x0D628BB90DA6214A(iParam0, 0, 40000) || unk_0x0D628BB90DA6214A(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_258(var uParam0)
{
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
	{
		if (func_259(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_259(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_260(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_255(uParam0, 11);
	return 1;
}

int func_261(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_4))
	{
		if (unk_0x0297E633EADA2182(uParam0->f_4) && !unk_0x3B89994312445DE5(uParam0->f_4))
		{
			if (!func_140(uParam0, 25))
			{
				func_281(uParam0, 25, 0, 0);
			}
			else if (func_151(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_140(uParam0, 25))
		{
			func_141(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_262(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_263(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
	{
		if (unk_0x966155156C573F75(uParam0->f_4))
		{
			if (unk_0x0D628BB90DA6214A(uParam0->f_4, 0, 40000) || unk_0x0D628BB90DA6214A(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_265(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_4, 0))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
		{
			if (unk_0x8879B2803A5F8682(uParam0->f_4))
			{
				if (func_259(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_266(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_267(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_4))
	{
		if (func_268(uParam0->f_4))
		{
			func_255(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x547F3E9F33EBE1F4(iParam0) == 0f)
	{
		if (!unk_0xBFCE58B2B3249999(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x0D628BB90DA6214A(iParam0, 0, 40000) || unk_0x0D628BB90DA6214A(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_269(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_180(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_180(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_271(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_3))
	{
		if ((unk_0xECEC7528A52B4EE8(uParam0->f_3) || unk_0xE50EB54E0F21BED0(uParam0->f_3, 0)) || unk_0x2AB8EC6521549BAD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_272()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

int func_273()
{
	if (!func_274(&iLocal_871, 1))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_871, 1000);
		return 0;
	}
	if (!unk_0xDAE4BC89A198A6AF(uLocal_945))
	{
		return 0;
	}
	if (!unk_0xA9C0BBFB9CBB66F1(func_280(0)))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_871, 1000);
		return 0;
	}
	if (!unk_0x0EC2B29D4172D225("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_871, 1000);
		return 0;
	}
	return 1;
}

int func_274(int iParam0, bool bParam1)
{
	if (!unk_0xA9C0BBFB9CBB66F1(func_22()))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x0EC2B29D4172D225("gestures@m@standing@casual"))
		{
			func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x0EC2B29D4172D225("oddjobs@taxi@"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x0EC2B29D4172D225("oddjobs@towingcome_here"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x0EC2B29D4172D225("misscommon@response"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x080D38ACEC5DC1A2(2))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_275(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_276(var uParam0)
{
	if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
	{
		uParam0->f_8 = func_277(uParam0->f_3, 0, 0);
		unk_0x9624333247B84756(1, 0);
		unk_0x13CC211F9F7ACE7F(uParam0->f_8, 1);
		unk_0xDD944E3FD2028A48(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x8ADA462BC5F42FD8(uParam0->f_3, unk_0x7D2B9E6A64637269(), -1, 2048, 4);
	}
	return 1;
}

int func_277(int iParam0, bool bParam1, bool bParam2)
{
	return func_158(iParam0, !bParam1, bParam2);
}

int func_278(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x419E13582192CFEA(uParam0->f_3))
	{
		func_279(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_37(uParam0->f_14, 0);
		unk_0x91F94D2287684BDB(uParam0->f_14, 2f, 0);
		func_210(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x664B48C95FFB7FF8(uParam0->f_11);
		}
		else if (unk_0x419E13582192CFEA(Global_111003.f_225[0]))
		{
			uParam0->f_3 = Global_111003.f_225[0];
			unk_0x4985CD0720AFD468(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x0FDCFECB2EF2BC1C(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x90517F1BF9113FB8(uParam0->f_3, sParam7);
		unk_0xD991F7672CE8EAD3(uParam0->f_3, 112, 1);
		if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
		{
			unk_0x83E421E5A4A2A512(uParam0->f_3, 250);
			unk_0x7B28A83A0D3DD0F9(uParam0->f_3, 32, 0);
			unk_0x7B28A83A0D3DD0F9(uParam0->f_3, 104, 1);
			unk_0x7B28A83A0D3DD0F9(uParam0->f_3, 177, 1);
			unk_0x7B28A83A0D3DD0F9(uParam0->f_3, 116, 0);
			unk_0xF479CA7199C54C8F("TAXI_Passenger", &(uParam0->f_413));
			unk_0x78B2DF314748056B(1, uParam0->f_413, 1862763509);
			unk_0x78B2DF314748056B(2, uParam0->f_413, joaat("COP"));
			unk_0x2271ED1E65FB75EE(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x077121A83525E84C(Param1, 20f, 5f, 0);
}

int func_280(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_281(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_104(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_103(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_103(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_282()
{
	func_284(1);
	unk_0x16E516CA9C88FF48(func_280(0));
	uLocal_945 = func_283();
	unk_0x952AB441FA24BF16("Alarms", 0, -1);
	unk_0x068BDE31F7D112BB("MOVE_P_M_ZERO_RUCKSACK");
}

var func_283()
{
	return unk_0x42AA2CCF0B61DCD8("MIDSIZED_MESSAGE");
}

void func_284(bool bParam0)
{
	unk_0x16E516CA9C88FF48(func_22());
	if (bParam0)
	{
		unk_0x068BDE31F7D112BB("gestures@m@standing@casual");
	}
	unk_0x068BDE31F7D112BB("oddjobs@taxi@");
	unk_0x068BDE31F7D112BB("oddjobs@towingcome_here");
	unk_0x068BDE31F7D112BB("misscommon@response");
	unk_0xBB3CDAB62C8773C8("TAXI", 2);
	if (!func_204(Global_112293.f_19095, 128))
	{
		func_179(&(Global_112293.f_19095), 128);
	}
}

void func_285(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_286(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x27FC1B0077581B37(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_140(uParam0, 14))
			{
				func_206(uParam0);
			}
			func_154(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_287(var uParam0, int iParam1, int iParam2)
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
		if (func_247(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_247(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

void func_288(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x79CC60D128756F16())
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (unk_0x4030103C8B148AFC(iVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_247(iVar0))
	{
		func_300();
	}
	if (!unk_0x79CC60D128756F16())
	{
		if (func_295(uParam0, bParam6, bParam8, 0))
		{
			func_294(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_293(iVar0))
			{
				if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && iParam7)
					{
						if (!func_247(iVar0))
						{
							func_285(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_292(1);
							}
						}
					}
				}
			}
		}
		else if (func_293(iVar0))
		{
			if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
			{
				if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && iParam7)
				{
					if (!func_247(iVar0))
					{
						func_285(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
						{
							func_292(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x4030103C8B148AFC(iVar0))
		{
			if (func_247(iVar0) && unk_0xE8FFE38E2BA32BD6())
			{
				unk_0x66AE54CE92457FEE(1);
			}
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
		{
			if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				func_287(uParam0, iVar0, 1);
			}
		}
		if (!func_295(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_291(uParam0))
			{
				func_289(uParam0);
			}
		}
	}
}

void func_289(var uParam0)
{
	if (func_290(unk_0x7D2B9E6A64637269()))
	{
		unk_0x880C7B361C9651EE(unk_0x7D2B9E6A64637269());
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD6ABECE3CBB224B0(1);
		unk_0xD20D31BC4E3A72D3(0);
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_290(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0x55F5BD4ABD80B211(iParam0))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x50997FC21D62251F(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(var uParam0)
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

int func_292(bool bParam0)
{
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_112293.f_10047.f_100++;
			}
			return Global_112293.f_10047.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_112293.f_10047.f_101++;
			}
			return Global_112293.f_10047.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_112293.f_10047.f_102++;
			}
			return Global_112293.f_10047.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_293(char* sParam0)
{
	if (!func_301(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_247(sParam0)) || func_247("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_292(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_292(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_292(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_294(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD6ABECE3CBB224B0(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x5FACB8A2F85D58B4(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Param1, -1, iVar2, iVar3);
	unk_0x9673FB069F90F6B9("FocusIn", 0, 0);
	unk_0xB84B43B766630B5C("HINT_CAM_SCENE");
	unk_0x9B0169E27978C1A2(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_295(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_299(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_291(uParam0))
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
						if (!func_299(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_299(bParam1, bParam2, bParam3))
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
					if (!func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_298(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
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
				else if (!func_299(bParam1, bParam2, bParam3))
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
						if (func_297(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_296(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_296(bParam1, bParam2, bParam3))
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
					else if (func_297(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_291(uParam0))
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
		func_300();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_296(bool bParam0, bool bParam1, bool bParam2)
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

int func_297(bool bParam0, bool bParam1, bool bParam2)
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

int func_298(bool bParam0, bool bParam1, bool bParam2)
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

int func_299(bool bParam0, bool bParam1, bool bParam2)
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

void func_300()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
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
	if (func_43(0))
	{
		return 0;
	}
	if (func_310())
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
	if ((func_309() || func_308(Global_4456448.f_133963)) || func_307())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_306(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_305(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
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
	if (iParam0 != func_304())
	{
		if (func_303(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_303(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_303(int iParam0, bool bParam1, bool bParam2)
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

int func_304()
{
	return -1;
}

int func_305(int iParam0, int iParam1)
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

int func_306(int iParam0, int iParam1)
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

var func_307()
{
	return Global_2453009.f_19;
}

bool func_308(int iParam0)
{
	return iParam0 == 51;
}

var func_309()
{
	return Global_2453009.f_18;
}

bool func_310()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_311(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x27FC1B0077581B37(uParam0->f_4, -1, 0) == unk_0x7D2B9E6A64637269())
		{
			return 1;
		}
	}
	return 0;
}

void func_312(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
		{
			if (bParam2)
			{
				if (func_151(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_213(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_213(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_281(uParam0, 10, 0f, 1);
				}
			}
			else if (func_151(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_213(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_213(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_151(uParam0, 10) > 30f)
		{
			if (!func_133())
			{
				if (uParam0->f_112)
				{
					func_213(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_213(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_204(uParam0->f_100, 64))
	{
		if (!func_17(&(Local_190[5 /*10*/].f_6)))
		{
			func_152(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_334(uParam0))
			{
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0, 1);
				func_331(5, uParam0);
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 1))
	{
		if (!func_17(&(Local_190[0 /*10*/].f_6)))
		{
			func_152(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_333(uParam0, 1);
				func_331(0, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 2))
	{
		if (!func_17(&(Local_190[1 /*10*/].f_6)))
		{
			func_152(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_329(uParam0))
			{
				func_333(uParam0, 1);
				func_331(1, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 2048))
	{
		if (!func_17(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x419E13582192CFEA(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x5E7C0A485B91DB87(uParam0->f_4);
				func_152(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_101(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_328(uParam0))
			{
				func_333(uParam0, 1);
				func_331(8, uParam0);
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 128))
	{
		if (!func_17(&(Local_190[6 /*10*/].f_6)))
		{
			func_152(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_327(uParam0))
			{
				func_333(uParam0, 1);
				func_331(6, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 32))
	{
		if (!func_17(&(Local_190[4 /*10*/].f_6)))
		{
			func_152(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_326(uParam0))
			{
				func_333(uParam0, 1);
				func_331(4, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 256))
	{
		if (!func_17(&(Local_190[7 /*10*/].f_6)))
		{
			func_152(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_325(uParam0))
			{
				func_331(7, uParam0);
				func_333(uParam0, 1);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 8))
	{
		if (!func_17(&(Local_190[9 /*10*/].f_6)))
		{
			func_152(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
		}
		else if (func_101(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_324(uParam0))
			{
				func_333(uParam0, 1);
				func_331(9, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 16384))
	{
		if (!func_17(&(Local_190[13 /*10*/].f_6)))
		{
			func_152(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_318(uParam0))
			{
				func_333(uParam0, 1);
				func_331(13, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 32768))
	{
		if (!func_17(&(Local_190[14 /*10*/].f_6)))
		{
			func_152(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_317(uParam0))
			{
				func_333(uParam0, 1);
				func_331(14, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 4096))
	{
		if (!func_17(&(Local_190[11 /*10*/].f_6)))
		{
			func_152(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_316(uParam0))
			{
				func_333(uParam0, 1);
				func_331(11, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 8192))
	{
		if (!func_17(&(Local_190[12 /*10*/].f_6)))
		{
			func_152(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				func_333(uParam0, 1);
				func_331(12, uParam0);
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_100, 4))
	{
		if (!func_17(&(Local_190[2 /*10*/].f_6)))
		{
			func_314(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_101(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0, 1);
				func_331(2, uParam0);
				func_142(uParam0);
			}
		}
	}
}

int func_313(var uParam0)
{
	float fVar0;
	
	if (!unk_0xECEC7528A52B4EE8(uParam0->f_2))
	{
		if ((!unk_0xE6046EB2291D084D(uParam0->f_2) && !func_17(&(Local_190[0 /*10*/].f_3))) && !func_17(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_17(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x4DDAC4C80BACF92C(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_152(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_101(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x4DDAC4C80BACF92C(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_100(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_100(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_314(var uParam0, float fParam1)
{
	if (!func_17(uParam0))
	{
		func_104(uParam0, fParam1);
	}
}

int func_315(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5675C422E6519C64(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_17(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_190[12 /*10*/].f_3)))
			{
				func_152(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xBFCE58B2B3249999(uParam0->f_4, 0) && !func_17(&(Local_190[0 /*10*/].f_3))) && !func_17(&(Local_190[1 /*10*/].f_3))) && !func_17(&(Local_190[5 /*10*/].f_3))) && !func_17(&(Local_190[9 /*10*/].f_3))) && !func_17(&(Local_190[7 /*10*/].f_3))) && !func_17(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x5675C422E6519C64(uParam0->f_4, 1) };
		if (unk_0x0BCA9ADE67DF9DD8(Var0.x) > 2.5f && !func_17(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_190[11 /*10*/].f_3)))
			{
				func_152(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.x;
			}
			else if (func_101(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x0BCA9ADE67DF9DD8(uLocal_342) - unk_0x0BCA9ADE67DF9DD8(Var0.x)) < 0f)
			{
				func_100(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_101(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_100(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	if (((((unk_0xBFCE58B2B3249999(uParam0->f_4, 0) && !func_17(&(Local_190[0 /*10*/].f_3))) && !func_17(&(Local_190[8 /*10*/].f_3))) && !func_17(&(Local_190[5 /*10*/].f_3))) && !func_17(&(Local_190[9 /*10*/].f_3))) && !func_17(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_17(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x7A0F33AA19956CEB(unk_0xD6E677FAD7521410(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x419E13582192CFEA(uParam0->f_5))
			{
				if ((unk_0x4DDAC4C80BACF92C(uParam0->f_4) > 15f && func_168(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xE50EB54E0F21BED0(uParam0->f_5, 0) && !unk_0x9B73EB6255D4AE81(uParam0->f_5, -1, 0)))
				{
					func_152(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_101(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_168(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xC51EC1626E7099CA(uParam0->f_5))
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_101(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xC51EC1626E7099CA(uParam0->f_5))
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	if (((unk_0xBFCE58B2B3249999(uParam0->f_4, 0) && !func_17(&(Local_190[9 /*10*/].f_3))) && !func_17(&(Local_190[7 /*10*/].f_3))) && !func_17(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_319(uParam0->f_4) && unk_0x4DDAC4C80BACF92C(uParam0->f_4) > 15f)
		{
			if (!func_17(&(Local_190[13 /*10*/].f_3)))
			{
				func_152(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_319(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	unk_0x9FB743331EC18DF4(unk_0xD6E677FAD7521410(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x9FB743331EC18DF4(unk_0xD6E677FAD7521410(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x62E0823A71208EF9(Var0, -1, &Var6);
	fVar27 = SYSTEM::VMAG(Var6 - Var0);
	Var9 = { func_323((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_322(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_320(unk_0xD6E677FAD7521410(iParam0, 1), Var15, Var18, Var21);
}

int func_320(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_323(Param6 - Param3) };
	Var3 = { func_323(Param9 - Param3) };
	fVar6 = func_321(Param0, Var0);
	fVar7 = func_321(Param3, Var0);
	fVar8 = func_321(Param6, Var0);
	fVar9 = func_321(Param0, Var3);
	fVar10 = func_321(Param3, Var3);
	fVar11 = func_321(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_321(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_322(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.x = -Param0.f_1;
			Var0.f_1 = Param0.x;
			break;
		
		case 1:
			Var0.x = -Param0.x;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.x = Param0.f_1;
			Var0.f_1 = -Param0.x;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_323(struct<3> Param0)
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

int func_324(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x27FC1B0077581B37(uParam0->f_4, -1, 0) == unk_0x7D2B9E6A64637269())
		{
			if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x27FC1B0077581B37(uParam0->f_4, -1, 0) == unk_0x7D2B9E6A64637269())
		{
			if (unk_0x020175C59CBE79DB(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x6178A36ADE734254(uParam0->f_4) <= -145f || unk_0x6178A36ADE734254(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x6178A36ADE734254(uParam0->f_4) <= 35f && unk_0x6178A36ADE734254(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		iVar0 = unk_0x732FD98F4A63038D(unk_0x1146A9AE09CE2B14());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_190[4 /*10*/].f_3)))
			{
				func_152(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_100(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_327(var uParam0)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		iVar0 = unk_0x53B34E295AA9EE4A(unk_0x1146A9AE09CE2B14());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_190[6 /*10*/].f_3)))
			{
				func_152(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x7919C1F1872DDE8E(uParam0->f_4))
		{
			iVar0 = unk_0x5E7C0A485B91DB87(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA5030CC1B9A0FDA6(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_213(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_213(uParam0, 72, 1, 0, 1);
				}
				func_100(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5675C422E6519C64(uParam0->f_4, 1) };
		if (unk_0x0BCA9ADE67DF9DD8(Var0.x) > 3f && !func_17(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_190[1 /*10*/].f_3)))
			{
				func_152(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_100(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (!unk_0x3B89994312445DE5(uParam0->f_4) && unk_0x397C98A5552886EB(uParam0->f_4))
		{
			if (!func_17(&(Local_190[0 /*10*/].f_3)))
			{
				func_152(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_100(&(Local_190[0 /*10*/].f_3));
				func_103(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_331(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_332(uParam1, iParam0);
	func_100(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_332(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_333(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_334(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
	{
		if (unk_0x4DDAC4C80BACF92C(uParam0->f_4) > 25f)
		{
			if (!func_17(&(Local_190[5 /*10*/].f_3)))
			{
				func_152(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_335(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_131();
	func_444(2);
	Var0 = { func_123() };
	if ((!unk_0xAB6A270F84A8781E(&Var0) && func_133()) && !unk_0xDA654EB115F9FF7D(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x1036762BD3781C84();
		unk_0x66AE54CE92457FEE(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
		{
			if (!func_202(uParam0))
			{
				if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x066FC15C60D0E579(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x066FC15C60D0E579(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x698F51FB33ADAF7B(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x066FC15C60D0E579(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_281(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_202(uParam0))
			{
				if (unk_0x8879B2803A5F8682(uParam0->f_4))
				{
					func_350(uParam0, 4096, 0);
				}
				else
				{
					func_350(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_352(uParam0, &Var0);
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_352(uParam0, &Var0);
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_148(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_350(uParam0, 0, 0);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_148(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_148(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_349(&Var0);
			func_336(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_352(uParam0, &Var0);
				}
			}
			else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_148(3, 0);
		}
		func_281(uParam0, 3, 0f, 1);
	}
}

int func_336(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_337(sParam2, iParam3, 0);
}

int func_337(char* sParam0, int iParam1, bool bParam2)
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
					func_132();
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
		if (func_347(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_346();
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
				func_345();
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
				if (func_344())
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
			if (func_31())
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
			func_343();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_342();
		func_338();
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
		func_132();
	}
	return 0;
}

void func_338()
{
	if (!func_339())
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

int func_339()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_304())
	{
		return 0;
	}
	if (func_340(unk_0x1146A9AE09CE2B14()))
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

bool func_340(int iParam0)
{
	return func_341(iParam0, 20);
}

bool func_341(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_342()
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

void func_343()
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

int func_344()
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

void func_345()
{
	if (func_74(14))
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
		Global_19798 = func_97();
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

void func_346()
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

bool func_347(int iParam0, int iParam1)
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_349(char* sParam0)
{
	switch (func_3(unk_0x7D2B9E6A64637269()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_350(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		unk_0xBE91B077ADADE97F(uParam0->f_3, 0);
		unk_0xA5030CC1B9A0FDA6(uParam0->f_3);
		unk_0x82D2BB48A39F1E88(uParam0->f_3, 3, 0);
		unk_0xA415F00D0E0DFBCE(uParam0->f_3, 17, 1);
		unk_0xCA089CD1A17D76DF(uParam0->f_3);
		if ((func_201(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_112(uParam0->f_29)) && !bParam2)
		{
			func_351(uParam0);
		}
		else
		{
			unk_0x82D2BB48A39F1E88(uParam0->f_3, 1024, 1);
			unk_0x82D2BB48A39F1E88(uParam0->f_3, 131072, 1);
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
			}
			else
			{
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
			}
			unk_0x35E41B8570BB9549(0, 0);
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(uParam0->f_3, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
		}
		unk_0x504B26425DFF773C(uParam0->f_3, 1);
	}
}

void func_351(var uParam0)
{
	var uVar0;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xCD37A28258D70638(uParam0->f_3, 84.9058f);
				unk_0x504B26425DFF773C(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xCD37A28258D70638(uParam0->f_3, 68.3138f);
				unk_0x504B26425DFF773C(uParam0->f_3, 1);
			}
			else
			{
				unk_0x4B770B4D8C1A469B(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xCA089CD1A17D76DF(uParam0->f_3);
			unk_0x8D5B447F21217223(&uVar0);
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, 0);
			unk_0x35E41B8570BB9549(0, 0);
			unk_0x45B1B4E55BF15523(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xE619FB502337E500(0, 1);
				unk_0x45B1B4E55BF15523(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x12D312F073772E84(0, 151.7794f, 0);
				unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x5F2B3E2AFA7B81C5(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x5F2B3E2AFA7B81C5(0, uParam0->f_29, 15f, 20000);
				unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
			}
			else
			{
				unk_0x4261814A9A26E86F(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x7B44CC985AF750BD(uParam0->f_29, 15f, 1))
			{
				unk_0x5F2B3E2AFA7B81C5(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
			}
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(uParam0->f_3, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
		}
		unk_0x504B26425DFF773C(uParam0->f_3, 1);
	}
}

void func_352(var uParam0, char* sParam1)
{
	if (func_353(uParam0))
	{
		func_336(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_353(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		if (func_168(unk_0x7D2B9E6A64637269(), uParam0->f_3, 1) < 40f && !unk_0x98E18969B1D0C4AB(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_354(var uParam0)
{
	return uParam0->f_118;
}

void func_355()
{
	func_384(&Local_413);
	if (func_383(&Local_413, &Local_972))
	{
		switch (Local_972.f_27)
		{
			case 0:
				if (Local_413.f_410 == 9)
				{
					if (!func_139(&Local_413))
					{
						if (func_382("TX_OBJ_CYI_DO") || unk_0x575B7C28D81C0B4D(Local_413.f_9))
						{
							Local_972.f_27++;
						}
						else if (func_203(&Local_413) != 10)
						{
							func_213(&Local_413, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_203(&Local_413) > 10 && func_203(&Local_413) != 15) && !func_139(&Local_413))
				{
					func_213(&Local_413, 15, 1, 0, 0);
					func_188(&Local_413, 7);
				}
				break;
			
			case 2:
				if (func_151(&Local_413, 18) > 2f)
				{
					func_213(&Local_413, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_151(&Local_413, 18) > 2f)
				{
					func_213(&Local_413, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < 1)
				{
					if ((((func_203(&Local_413) != 33 && !func_381(&Local_413)) && !func_139(&Local_413)) && !bLocal_865) && Local_413.f_410 > 9)
					{
						if (func_151(&Local_413, 18) > 2f)
						{
							func_213(&Local_413, 33, 1, 0, 1);
							func_281(&Local_413, 16, 4f, 0);
							if (bLocal_971)
							{
							}
						}
					}
					else
					{
						if (func_203(&Local_413) != 33)
						{
						}
						if (!func_381(&Local_413))
						{
						}
						if (!func_139(&Local_413))
						{
						}
						if (!bLocal_865)
						{
						}
						if (Local_413.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_151(&Local_413, 16) > 4f && func_203(&Local_413) != 34) && !func_139(&Local_413)) && !func_381(&Local_413))
				{
					func_213(&Local_413, 34, 1, 0, 0);
					if (bLocal_971)
					{
					}
				}
				break;
			
			case 7:
				Local_972.f_27++;
				break;
			}
	}
	func_356(&Local_413, &uLocal_1002, &Local_972, bLocal_971);
}

int func_356(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_363(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_140(uParam0, 2))
	{
		if (func_362(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xDFB7BFA6482FEE1E() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_381(uParam0))
				{
					uParam2->f_7 = { func_361(uParam1) };
					func_336(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_133())
				{
					uParam2->f_13 = { func_173() };
					if (unk_0xDA654EB115F9FF7D(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_180(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_144(uParam0))
				{
					if (func_133())
					{
						func_281(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_358() };
						if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_133())
				{
					uParam2->f_19 = { func_123() };
				}
				else
				{
					func_180(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_140(uParam0, 14) && !func_133()) && !func_144(uParam0)) && func_151(uParam0, 18) > 1f)
				{
					func_281(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_133())
				{
					if (func_151(uParam0, 18) > 1f)
					{
						if (!unk_0xAB6A270F84A8781E(&(uParam2->f_1)))
						{
							func_357(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_133())
				{
					func_180(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_357(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 1;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_337(sParam2, iParam4, 0);
}

struct<6> func_358()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		iVar6 = unk_0x9618CA3AB2A82C04();
		iVar6 = (iVar6 + Global_22135);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar7 /*6*/])))
			{
				return Global_19993[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar8 /*6*/])))
					{
						return Global_19993[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19993[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_359(var uParam0)
{
	int iVar0;
	
	iVar0 = func_360(uParam0);
	if (iVar0 > -1)
	{
		func_145(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_145(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_179(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_200(), 24);
	}
}

int func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_361(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_179(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_362(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_363(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_381(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_140(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_203(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_378(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_133())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_377(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 2));
				}
				if (func_204(uParam0->f_98, 4))
				{
					func_281(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				func_160(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_151(uParam0, 16) > 1f)
				{
					func_162(1);
					if (uParam0->f_411 == 9)
					{
						func_241("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_241("TAXI_VIP_RETURN", 7500, 1);
					}
					func_281(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_151(uParam0, 16) > func_159(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_133()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_203(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_377(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_378(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_336(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_213(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_281(uParam0, 16, 0, 0);
				func_213(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_204(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_380(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_377(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_281(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_241("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x575B7C28D81C0B4D(uParam0->f_9))
					{
						uParam0->f_9 = func_165(uParam0->f_17, 1);
					}
					else if (unk_0x5D8B0ADD9EFBD7B9(uParam0->f_9) == 0)
					{
						unk_0x97A41BF3F05FC07D(uParam0->f_9, 255);
						unk_0xC983AF341845804E(uParam0->f_9, uParam0->f_17);
						unk_0x13CC211F9F7ACE7F(uParam0->f_9, 1);
					}
				}
				func_213(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_215(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_237(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x575B7C28D81C0B4D(uParam0->f_9))
					{
						uParam0->f_9 = func_165(uParam0->f_17, 1);
					}
					else if (unk_0x5D8B0ADD9EFBD7B9(uParam0->f_9) == 0)
					{
						unk_0x97A41BF3F05FC07D(uParam0->f_9, 255);
						unk_0xC983AF341845804E(uParam0->f_9, uParam0->f_17);
						unk_0x13CC211F9F7ACE7F(uParam0->f_9, 1);
					}
				}
				func_213(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_373(uParam0, 33554432, Var0, "", 1, 8);
				func_281(uParam0, 16, 0, 0);
				func_213(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_133())
				{
					func_372(uParam0, 0);
					func_179(&(uParam0->f_44), 4);
					func_281(uParam0, 16, 0, 0);
					func_213(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_215(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_151(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_215(&Var0);
					}
					func_370(Var0, uParam1);
					func_179(&(uParam0->f_81), 67108864);
					func_281(uParam0, 16, 0, 0);
					func_281(uParam0, 11, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_151(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_215(&Var0);
						}
					}
					func_370(Var0, uParam1);
					func_281(uParam0, 11, 0, 0);
					func_281(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_215(&Var0);
				}
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_215(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_215(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_215(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				func_179(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_369(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_369(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_370(Var0, uParam1);
				func_378(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_369(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_369(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_370(Var0, uParam1);
				func_378(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 12:
				func_241("TAXI_OBJ_GYB", 3500, 1);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_241("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_241("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_204(uParam0->f_98, 268435456))
				{
					func_241("TAXI_OBJ_CYI_01", 7500, 1);
					func_179(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_215(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_215(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_215(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 33:
				func_241("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_204(uParam0->f_82, 8192))
				{
					if (func_151(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_215(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_370(Var0, uParam1);
						}
						else
						{
							func_377(uParam0, &Var0, 0, 0, 8);
						}
						func_179(&(uParam0->f_82), 8192);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_204(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_215(&Var0);
					func_377(uParam0, &Var0, 0, 0, 8);
					func_179(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_204(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_215(&Var0);
					func_377(uParam0, &Var0, 0, 0, 8);
					func_179(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_242(uParam0, 0, 0);
				break;
			
			case 139:
				func_241("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_213(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xB36B8558948EA7A8(0, 120);
				if (!func_204(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_179(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xB36B8558948EA7A8(0, 100);
				if (!func_204(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_179(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_241("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_242(uParam0, 0, 0);
				func_213(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_133())
				{
					func_241("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_242(uParam0, 0, 0);
					func_213(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_241("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_242(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_204(uParam0->f_81, 1))
				{
					func_368(uParam0, 1, Var0, "_sick1", 8);
					func_145(&(uParam0->f_81), 2);
				}
				else if (!func_204(uParam0->f_81, 2))
				{
					func_368(uParam0, 2, Var0, "_sick2", 8);
					func_145(&(uParam0->f_81), 1);
				}
				func_378(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_204(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_204(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_179(&(uParam0->f_81), 2097152);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_378(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_204(uParam0->f_81, 4))
				{
					func_368(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_204(uParam0->f_81, 8))
				{
					func_368(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_368(uParam0, 8, Var0, "_turns3", 8);
					func_145(&(uParam0->f_81), 4);
					func_145(&(uParam0->f_81), 8);
				}
				func_378(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_380(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_336(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_380(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_380(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_378(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_204(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 128);
					func_145(&(uParam0->f_83), 256);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 256);
					func_145(&(uParam0->f_83), 512);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 512);
					func_145(&(uParam0->f_83), 128);
					func_281(uParam0, 16, 0, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_204(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_215(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 1);
					func_145(&(uParam0->f_83), 2);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_215(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_145(&(uParam0->f_83), 4);
					}
					else
					{
						func_145(&(uParam0->f_83), 1);
					}
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_215(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 4);
					func_145(&(uParam0->f_83), 1);
					func_281(uParam0, 16, 0, 0);
				}
				func_378(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_204(uParam0->f_81, 4096))
				{
					func_373(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_204(uParam0->f_81, 8192))
				{
					func_373(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_378(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_204(uParam0->f_81, 16384))
				{
					func_373(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_204(uParam0->f_81, 32768))
				{
					func_373(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_378(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_204(uParam0->f_82, 8))
					{
						func_366(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_204(uParam0->f_82, 16))
					{
						func_366(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_204(uParam0->f_82, 32))
					{
						func_366(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_242(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_380(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_281(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_378(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_204(uParam0->f_81, 65536))
				{
					func_373(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_204(uParam0->f_81, 131072))
				{
					func_373(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_204(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 8);
					func_145(&(uParam0->f_83), 16);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 16);
					func_145(&(uParam0->f_83), 32);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_145(&(uParam0->f_83), 64);
					}
					else
					{
						func_145(&(uParam0->f_83), 8);
					}
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_179(&(uParam0->f_83), 64);
					func_145(&(uParam0->f_83), 8);
					func_281(uParam0, 16, 0, 0);
				}
				func_378(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_133())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 65));
					func_242(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_133())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 66));
					func_242(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_133())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								func_378(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								func_378(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_380(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_378(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_281(uParam0, 16, 0, 0);
								func_242(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_377(uParam0, &Var0, 0, 0, 8);
									func_281(uParam0, 16, 0, 0);
									func_281(uParam0, 11, 0, 0);
									func_242(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_215(&Var0);
									func_377(uParam0, &Var0, 0, 0, 8);
									func_281(uParam0, 16, 0, 0);
									func_281(uParam0, 11, 0, 0);
									func_242(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_213(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_378(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_204(uParam0->f_82, 1))
				{
					func_366(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_204(uParam0->f_82, 2))
				{
					func_366(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_204(uParam0->f_82, 4))
				{
					func_366(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				func_380(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_281(uParam0, 16, 0, 0);
				func_378(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
					{
						func_237(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_365(uParam0, Var0, 8);
				}
				func_378(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_204(uParam0->f_83, 1024))
				{
					func_179(&(uParam0->f_83), 1024);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 2048))
				{
					func_179(&(uParam0->f_83), 2048);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_204(uParam0->f_83, 4096))
				{
					func_179(&(uParam0->f_83), 4096);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_215(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_204(uParam0->f_82, 1024))
				{
					func_366(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_145(&(uParam0->f_82), 2048);
				}
				else if (!func_204(uParam0->f_82, 2048))
				{
					func_366(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_378(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
				{
					func_237(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_367(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_377(uParam0, &Var0, 0, 0, 8);
						func_213(uParam0, 52, 1, 0, 0);
						func_281(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						func_377(uParam0, &Var0, 0, 0, 8);
						func_281(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_380(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_281(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_378(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) >= 1)
				{
					func_241("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_204(uParam0->f_81, 262144))
				{
					func_373(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_204(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_373(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_373(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_378(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_204(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_364(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_204(uParam0->f_82, 134217728))
				{
					func_364(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_378(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 100:
				func_241("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_242(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_215(&Var0);
				}
				func_179(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_215(&Var0);
				}
				func_179(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_215(&Var0);
				}
				func_179(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_204(uParam0->f_82, 65536))
				{
					if (func_151(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_215(&Var0);
						func_370(Var0, uParam1);
						func_179(&(uParam0->f_82), 65536);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_204(uParam0->f_82, 131072))
				{
					if (func_151(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_215(&Var0);
						func_370(Var0, uParam1);
						func_179(&(uParam0->f_82), 131072);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_204(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_179(&(uParam0->f_82), 8388608);
				}
				else if (!func_204(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_179(&(uParam0->f_82), 16777216);
				}
				else if (!func_204(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_179(&(uParam0->f_82), 33554432);
				}
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_380(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_215(&Var0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_380(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_179(&(uParam0->f_81), 2097152);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_215(&Var0);
				func_370(Var0, uParam1);
				func_179(&(uParam0->f_81), 67108864);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_204(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_373(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
					{
						func_237(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_213(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_204(uParam0->f_81, 268435456))
				{
					func_373(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_213(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_241("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_242(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_204(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_373(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
						{
							func_237(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_373(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_213(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_241("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_242(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_204(uParam0->f_81, 16777216))
				{
					func_373(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_242(uParam0, 0, 0);
				break;
			
			case 88:
				func_241("TAXI_TIEFLEE", 7500, 1);
				func_242(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_204(uParam0->f_98, 536870912))
				{
					func_241("TAXI_OBJ_CYI_1B", 7500, 1);
					func_179(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_242(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_215(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_242(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_377(uParam0, &Var0, 1, 0, 8);
				func_213(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_241("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_213(uParam0, 0, 0, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			}
	}
}

void func_364(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_179(&(uParam0->f_82), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_215(&Param2);
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_365(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_204(uParam0->f_82, 64))
	{
		func_179(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_204(uParam0->f_82, 128))
	{
		func_179(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xB36B8558948EA7A8(1, 3), 24);
	}
	func_379(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_281(uParam0, 16, 0, 0);
}

void func_366(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_179(&(uParam0->f_82), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_215(&Param2);
		}
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_367(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_368(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_179(&(uParam0->f_81), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_369(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_180(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_215(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_370(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_371(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_179(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_371(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xAB6A270F84A8781E(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_372(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_241("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_241("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_241("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_241("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_241("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_241("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_241("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_241("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_241("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_241("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_373(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_179(&(uParam0->f_81), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_215(&Param2);
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_374(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_281(uParam0, 16, 0, 0);
	func_281(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xECEC7528A52B4EE8(uParam0->f_3))
	{
		unk_0x7807AB191CD252A2(uParam0->f_3, &cParam1, func_375(uParam0));
	}
}

char* func_375(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_376(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_377(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_281(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_281(uParam0, 17, 0f, 1);
	}
	func_242(uParam0, iParam2, 0);
	return func_336(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_378(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_204(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_204(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_204(*uParam2, 4))
		{
			if (!func_204(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 4096);
			}
		}
		else if (func_204(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_204(*uParam2, 512))
		{
			if (!func_204(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_204(*uParam2, 16))
		{
			if (!func_204(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 4096);
			}
		}
		else if (func_204(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_204(*uParam2, 64))
		{
			if (!func_204(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 4096);
			}
		}
		else if (func_204(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_204(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_204(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_204(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_204(*uParam2, 8192))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_204(*uParam2, 16384))
		{
			if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_204(*uParam2, 32768))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_204(*uParam2, 65536))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_204(*uParam2, 131072))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_204(*uParam2, 262144))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_204(*uParam2, 524288))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_204(*uParam2, 1048576))
		{
			if (func_204(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_204(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_204(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_204(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_204(*uParam2, 67108864))
		{
			if (func_204(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_204(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_204(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_204(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_204(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_379(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_337(sParam2, iParam4, 0);
}

void func_380(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_180(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_215(sParam2);
				}
				else
				{
					func_215(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_381(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_195("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_195("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_195("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_195("TX_OBJ_GYB_DO", 0, 0) || func_195("TAXI_OBJ_GYB", 0, 0)) || func_195("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_195("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_195("TX_OBJ_CYI_DO", 0, 0) || func_195("TAXI_OBJ_CYI_01", 0, 0)) || func_195("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_195("TX_OBJ_GYN_DO", 0, 0) || func_195("TAXI_OBJ_GYN", 0, 0)) || func_195("TAXI_OBJ_GYN_TG", 0, 0)) || func_195("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_195("TAXI_OBJ_CC1", 0, 0) || func_195("TAXI_OBJ_CC2", 0, 0)) || func_195("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_195("TAXI_OBJ_FTC1", 0, 0) || func_195("TAXI_OBJ_FTC2", 0, 0)) || func_195("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_195("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_195("TAXI_OBJ_GETRUN", 0, 0) || func_195("TAXI_OBJ_DRIVE", 0, 0)) || func_195("TAXI_OBJ_RETURN", 0, 0)) || func_195("TAXI_OBJ_POL", 0, 0)) || func_195("TAXI_OBJ_RUNOUT", 0, 0)) || func_195("TAXI_OBJ_POL", 0, 0));
}

int func_382(char* sParam0)
{
	if (!unk_0x4030103C8B148AFC(sParam0))
	{
		if (func_195(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_383(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_140(uParam0, 9));
}

void func_384(var uParam0)
{
	if (func_140(uParam0, 17))
	{
		if (!func_140(uParam0, 14))
		{
			if (!func_144(uParam0))
			{
				if (!func_133())
				{
					func_141(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_385(var uParam0)
{
	return uParam0->f_117;
}

void func_386(var uParam0)
{
	if (!func_311(uParam0))
	{
		if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
		{
		}
		func_153(uParam0, 1);
	}
	else if (func_140(uParam0, 14))
	{
		func_206(uParam0);
		func_154(uParam0, 0);
	}
}

void func_387(var uParam0, var uParam1, bool bParam2)
{
	if (!func_204(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xAB6A270F84A8781E(&(uParam0->f_124)) && func_133())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_133())
				{
					StringCopy(&(uParam0->f_124), func_200(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_388(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_4))
		{
			if (Local_343 > 0 && !func_259(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_259(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_259(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_180(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xDFB7BFA6482FEE1E();
							}
						}
						else
						{
							func_146(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_259(Local_343.f_1[iVar0 /*4*/], 4) && !func_259(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_180(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_335(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_389(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_140(uParam0, 27))
	{
		func_188(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_151(uParam0, 27) > 5f)
	{
		if (func_416(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_281(uParam0, 27, 0, 0);
			func_281(uParam0, 10, 0, 0);
			func_414(uParam0, &uVar0, uParam1);
		}
		func_411(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_390(uParam0);
	}
	if ((((!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) && (unk_0x0E8572B08CEB6A11(*uParam0) && !unk_0x2671671BBCC6AD9F(*uParam0))) && (unk_0x0E8572B08CEB6A11(uParam0->f_1) && !unk_0x2671671BBCC6AD9F(uParam0->f_1))) && !unk_0x123480158F10FA67()) && !func_133())
	{
		if (func_151(uParam0, 26) > 10f)
		{
			func_141(uParam0, 26, 0);
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
		}
	}
	else if (func_140(uParam0, 26))
	{
		func_141(uParam0, 26, 0);
	}
	return 0;
}

void func_390(var uParam0)
{
	if (!func_410(uParam0->f_429))
	{
		uParam0->f_429 = func_409();
		func_400(&(uParam0->f_429), 0, 0, unk_0xB36B8558948EA7A8(4, 7), 0, 0, 0);
	}
	else if (func_391(uParam0->f_429))
	{
		func_335(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_391(int iParam0)
{
	return func_392(func_409(), iParam0);
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_410(iParam1) || !func_410(iParam0))
	{
		return 1;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	iVar1 = func_395(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_394(iParam0);
	iVar1 = func_394(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_393(iParam0);
	iVar1 = func_393(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_394(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_395(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_396(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_397(int iParam0)
{
	return iParam0 & 15;
}

var func_398(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_399(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_399(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_398(*uParam0);
	iVar1 = func_397(*uParam0);
	iVar2 = func_396(*uParam0);
	iVar3 = func_395(*uParam0);
	iVar4 = func_394(*uParam0);
	iVar5 = func_393(*uParam0);
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
	iVar6 = func_408(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_408(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_401(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_401(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_407(uParam0, iParam1);
	func_406(uParam0, iParam2);
	func_405(uParam0, iParam3);
	func_404(uParam0, iParam5);
	func_403(uParam0, iParam4);
	func_402(uParam0, iParam6);
}

void func_402(var uParam0, int iParam1)
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

void func_403(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(*uParam0);
	iVar1 = func_398(*uParam0);
	if (iParam1 < 1 || iParam1 > func_408(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_404(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_405(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_406(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_407(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_408(int iParam0, int iParam1)
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

int func_409()
{
	var uVar0;
	
	func_407(&uVar0, unk_0x1947D86A2BB06F8D());
	func_406(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_405(&uVar0, unk_0xCA86FAB7FADC8353());
	func_403(&uVar0, unk_0x9E6858A319A1F6F2());
	func_404(&uVar0, unk_0xA91C851005050418());
	func_402(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

int func_410(int iParam0)
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
	iVar0 = func_393(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_394(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_395(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_398(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_397(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_396(iParam0);
	if (iVar5 < 1 || iVar5 > func_408(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_411(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_413()) && !func_311(uParam0)) || ((uParam0->f_411 != 9 && func_246(uParam0, 1)) && !func_311(uParam0)))
		{
			uVar0 = func_412(uParam0->f_4);
			unk_0x75E3AAA7D01DEDC8(&uVar0);
			uParam0->f_4 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			unk_0x4985CD0720AFD468(uParam0->f_4, 1, 0);
			func_206(uParam0);
			func_154(uParam0, 0);
		}
	}
}

var func_412(var uParam0)
{
	return uParam0;
}

int func_413()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
				{
					if (unk_0xEACFC87E44438F24(iVar0, func_22()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_414(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_415(uParam0, 0, 1))
			{
				func_335(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_415(uParam0, 0, 4))
			{
				func_335(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_415(uParam0, 0, 8))
			{
				func_335(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_415(uParam0, 1, 1))
			{
				func_335(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_415(uParam0, 0, 1))
			{
				func_335(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_204(*uParam2, 2) && func_202(uParam0))
			{
				func_335(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_415(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
	{
		if (!unk_0x98E18969B1D0C4AB(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_213(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_213(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_416(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x7D2B9E6A64637269();
	if (!unk_0xE50EB54E0F21BED0(iVar0, 0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (!func_204(*uParam2, 1))
		{
			if (func_422(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_204(*uParam2, 2))
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_204(*uParam2, 4))
		{
			if (func_420(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_204(*uParam2, 8))
		{
			if (func_419(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_204(*uParam2, 128);
		if (bParam4)
		{
			if (func_417(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_204(*uParam2, 16))
		{
			if (func_417(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x419E13582192CFEA(iParam0))
	{
		if (iParam7 && unk_0xA6E8FBD68548675F(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_417(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x5E7C0A485B91DB87(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x5E7C0A485B91DB87(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(uVar0, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(uVar1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (unk_0xECA23EB9C2A5E83F(iParam0))
			{
				if (unk_0x4EAA932BAAB38AF6(iParam0) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x591190E69BE43117(iParam0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xCDDAB3241735D813(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xB30D2DEA3AE60A3B(iParam0))
		{
			return 1;
		}
	}
	if (func_418(unk_0x7D2B9E6A64637269(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x6B9E71121F5B8154(iParam0) && func_167(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xC49311A2A500FF09(iParam0, 0))
		{
			if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), unk_0x75B58B38E45C6F9A(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE50EB54E0F21BED0(uParam1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7F716EA884E75E49(iParam0))
		{
			if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(iParam1, 1)) < 2.5f)
			{
				if (unk_0x836F48E8C4A773BF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_419(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x24A466C655E8588A(uParam0, 4))
	{
		if (unk_0x7F716EA884E75E49(uParam0) && !unk_0x8E93627D38C90C19(iParam0))
		{
			if (unk_0x591190E69BE43117(uParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE50EB54E0F21BED0(uParam1, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	if (unk_0x3E72EB0926A107F9(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA3EE9E61D762C09A(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x24A466C655E8588A(uParam0, 2))
	{
		if (unk_0x7F716EA884E75E49(uParam0))
		{
			if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xC49311A2A500FF09(unk_0xFAA5505029C4B5A6(iParam1), 0))
			{
				iVar3 = unk_0x75B58B38E45C6F9A(unk_0xFAA5505029C4B5A6(iParam1), 0);
			}
			if (unk_0x8A92595B8AA1D4E9(iParam0) || func_421(iVar3))
			{
				if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xD7196DD041C06559((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_421(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x27FC1B0077581B37(iParam0, -1, 0) != 0)
			{
				if (unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_168(unk_0x7D2B9E6A64637269(), iParam0, 1) < 40f)
						{
							if (unk_0xE5B011B4A813BDC4(unk_0x1146A9AE09CE2B14(), &uVar1))
							{
								if ((unk_0x55F5BD4ABD80B211(uVar1) && unk_0x611CD1312FD3CA66(iVar1) == iParam0) || (unk_0xA2CCAAC7F5CA3F49(iVar1) && unk_0xFAA5505029C4B5A6(iVar1) == unk_0x27FC1B0077581B37(iParam0, -1, 0)))
								{
									if ((unk_0xBBC3519C07015926(unk_0x7D2B9E6A64637269()) && unk_0x5C6675393464A814(0, 24)) || (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x5C6675393464A814(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_422(int iParam0, var uParam1)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), 90f))
				{
					if (func_167(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xDFB7BFA6482FEE1E();
						}
						else if ((unk_0xDFB7BFA6482FEE1E() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_423(var uParam0)
{
	if (!func_204(uParam0->f_98, 2))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
		{
			if (func_201(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xB7D390F8F682127B(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_179(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_424()
{
	func_425(&Local_413);
	func_441();
}

void func_425(var uParam0)
{
	func_12(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_444(2);
	}
}

int func_426(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_133() && func_151(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_3, 0))
		{
			if (unk_0xBFCE58B2B3249999(uParam0->f_4, 0))
			{
				if (unk_0xF41EB7643E61A928(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_259(uParam0->f_85, 32))
					{
						if (!unk_0x8879B2803A5F8682(uParam0->f_4))
						{
							func_350(uParam0, 4160, 0);
						}
						else
						{
							func_350(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_350(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_350(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_350(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
	{
	}
	return 0;
}

int func_427(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0)
{
	func_430(&Local_413, iParam0);
	Local_413.f_410 = 0;
	func_429(&Local_413, 2, 8);
	Local_413.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_413.f_33 = 202.9f;
	Local_413.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_413.f_34 = 262.6098f;
	Local_413.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}

void func_429(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_430(var uParam0, var uParam1)
{
	func_440(1);
	func_208();
	func_7(&(uParam0->f_244));
	func_439(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_204(Global_112293.f_19095, 4))
	{
		func_179(&(Global_112293.f_19095), 4);
	}
	func_434(uParam0);
	func_432(uParam0);
	unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
	uParam0->f_102 = (func_431(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xBB3CDAB62C8773C8("TAXI", 2);
}

int func_431(int iParam0)
{
	return Global_112293.f_19095.f_39[iParam0];
}

void func_432(var uParam0)
{
	switch (func_60(uParam0))
	{
		case 0:
			func_433(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_433(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_433(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_433(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_433(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_433(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_433(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_433(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_433(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_433(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_433(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_434(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_438(uParam0, 3);
			func_437(uParam0, 14);
			break;
		
		case 1:
			func_438(uParam0, 14);
			func_437(uParam0, 8);
			break;
		
		case 2:
			func_438(uParam0, 8);
			func_437(uParam0, 7);
			break;
		
		case 3:
			func_438(uParam0, 15);
			func_437(uParam0, 6);
			break;
		
		case 4:
			func_438(uParam0, 0);
			func_437(uParam0, 3);
			break;
		
		case 5:
			func_438(uParam0, 6);
			func_437(uParam0, 7);
			break;
		
		case 6:
			func_438(uParam0, 8);
			func_437(uParam0, 15);
			break;
		
		case 7:
			func_438(uParam0, 8);
			func_437(uParam0, 14);
			break;
		
		case 8:
			func_438(uParam0, 7);
			func_437(uParam0, 15);
			break;
		
		case 9:
			func_438(uParam0, unk_0xB36B8558948EA7A8(0, 17));
			iVar0 = func_436((uParam0->f_418.f_2 + unk_0xB36B8558948EA7A8(1, 17)), 0, 16);
			func_437(uParam0, iVar0);
			func_435(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_435(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_436(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_437(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_438(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_439(var uParam0)
{
	uParam0->f_2 = unk_0x7D2B9E6A64637269();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_141(uParam0, 32, 0);
}

void func_440(bool bParam0)
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

void func_441()
{
	int iVar0;
	
	func_210(func_217(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xE50EB54E0F21BED0(uLocal_955[iVar0], 0))
		{
			unk_0x0F3BD19FF11738D3(&(uLocal_955[iVar0]));
		}
		iVar0++;
	}
	unk_0x824F744352C8BC82(func_280(0));
	func_134(&iLocal_875);
	unk_0xB1339E1ACA3722C6(0);
	unk_0x817486F19ADBF54A(1);
	unk_0xE76ABB7DC1AD1626();
	unk_0xC0BBE340BE2AA02D("TAXI_CUT_U_IN");
	unk_0xF9135F131C423364("MOVE_P_M_ZERO_RUCKSACK");
	func_443();
	func_442();
	func_287(&uLocal_45, 0, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_968, 0);
	if (unk_0x419E13582192CFEA(uLocal_843))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_843);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_442()
{
	unk_0x824F744352C8BC82(func_280(3));
	unk_0x824F744352C8BC82(func_280(4));
	unk_0x7B6B41ECBE4B733F(0, func_138(1));
}

void func_443()
{
}

void func_444(int iParam0)
{
	Global_111003.f_22 = iParam0;
}

