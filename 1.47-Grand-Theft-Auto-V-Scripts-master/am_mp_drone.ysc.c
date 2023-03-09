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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	vector3 vLocal_115[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_116 = 0;
	struct<195> Local_117 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<12> Local_121 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_419(ScriptParam_121);
	}
	else
	{
		func_400(0);
	}
	while (true)
	{
		func_399();
		if (func_388())
		{
			func_400(0);
		}
		if (func_383())
		{
			func_400(0);
		}
		func_2();
		if (unk_0x06C1EBC003C18F1F())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_382(4))
	{
		func_381();
		func_378();
		func_377();
		func_374();
		func_372();
		func_371();
	}
	if (func_382(0))
	{
		func_328();
	}
	else if (func_382(1))
	{
		if (!func_327())
		{
			func_321();
			func_307();
		}
		else
		{
			func_305(1);
			func_304(5);
		}
	}
	else if (func_382(2))
	{
		func_303();
		func_298();
		func_296();
		func_295();
		func_294();
		func_293();
		func_292();
		func_287();
		func_281();
		func_273();
		func_271();
		func_234();
		func_233();
		func_229();
		if (func_222())
		{
			func_221();
			return;
		}
		func_217();
		func_216();
		func_210();
		func_198(0);
		func_185();
		func_176();
		func_168();
		func_150();
		func_143();
		func_142();
		func_74();
		func_59();
		func_58();
	}
	else if (func_382(3))
	{
		func_19();
	}
	else if (func_382(4))
	{
		func_15();
		func_12();
	}
	else if (func_382(5))
	{
		func_10();
	}
	if (!func_382(2) && !func_382(4))
	{
		func_4();
	}
	func_3();
}

void func_3()
{
	Local_117.f_42++;
	if (Local_117.f_42 >= 32)
	{
		Local_117.f_42 = 0;
	}
}

void func_4()
{
	int iVar0;
	
	if (Local_117.f_108)
	{
		if (func_9(&(Local_117.f_164)))
		{
			if (func_8())
			{
				iVar0 = Global_262145.f_24608;
			}
			else
			{
				iVar0 = Global_262145.f_24008;
			}
			if (func_6(&(Local_117.f_164), iVar0, 0))
			{
				func_5(&(Local_117.f_164));
				Local_117.f_17 = 100;
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 4);
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 3);
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 24);
				Local_117.f_108 = 0;
			}
		}
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8()
{
	return unk_0x0E4018692D92041D(Global_1681628.f_2, 2);
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			if (!func_11())
			{
				func_400(1);
			}
			else
			{
				func_400(0);
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
	else if (!func_11())
	{
		func_400(1);
	}
	else
	{
		func_400(0);
	}
}

bool func_11()
{
	return unk_0x0E4018692D92041D(Global_1681628, 16);
}

void func_12()
{
	char* sVar0;
	
	if (Local_117.f_42 == -1)
	{
		return;
	}
	if (!func_13(Local_117.f_42))
	{
		return;
	}
	if (unk_0x4F94F07DAD382CDA(vLocal_115[Local_117.f_42 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0x96E4B8740065F6D8(sVar0);
		if (unk_0xA7F26E75DE91EC1D(sVar0))
		{
			if (!unk_0xC2FDDE313D5A5398(Local_117.f_123[Local_117.f_42]))
			{
				unk_0x607F78FE329ECF8E(sVar0);
				Local_117.f_123[Local_117.f_42] = unk_0x36F0667378D07B9C("scr_xs_guided_missile_trail", unk_0xE4B835FDC8B9B086(vLocal_115[Local_117.f_42 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
		}
	}
	else if (unk_0xC2FDDE313D5A5398(Local_117.f_123[Local_117.f_42]))
	{
		unk_0x91F3E4311D34B364(Local_117.f_123[Local_117.f_42], 0);
	}
}

int func_13(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return -1;
}

void func_15()
{
	if (Local_117.f_42 != -1)
	{
		if (unk_0x4F94F07DAD382CDA(vLocal_115[Local_117.f_42 /*3*/].f_2) && func_18(unk_0xE4B835FDC8B9B086(vLocal_115[Local_117.f_42 /*3*/].f_2)))
		{
			if (func_17(Local_117.f_42))
			{
				Local_117.f_109 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_16(Local_117.f_42))
			{
				Local_117.f_109 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_13(Local_117.f_42))
			{
				Local_117.f_109 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_117.f_109 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_117.f_43[Local_117.f_42] == -1)
			{
				Local_117.f_43[Local_117.f_42] = unk_0x8CCC0A0504C52531();
				unk_0xE9739440E5BF08EE(Local_117.f_43[Local_117.f_42], "Flight_Loop", unk_0xE4B835FDC8B9B086(vLocal_115[Local_117.f_42 /*3*/].f_2), Local_117.f_109, 0, 0);
				unk_0x1819081E2D6040CB(Local_117.f_43[Local_117.f_42], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x1819081E2D6040CB(Local_117.f_43[Local_117.f_42], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_117.f_43[Local_117.f_42] != -1)
		{
			unk_0xCBE6AF58552C63B2(Local_117.f_43[Local_117.f_42]);
			unk_0x44D426446FAF55FB(Local_117.f_43[Local_117.f_42]);
			Local_117.f_43[Local_117.f_42] = -1;
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_18(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_19()
{
	int iVar0;
	
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(8);
	unk_0xF3F3DC87D7163212();
	unk_0x3FD9339AA95E323F(0, 199, 1);
	unk_0x3FD9339AA95E323F(0, 200, 1);
	func_57();
	func_55();
	func_49(1);
	if (!unk_0x0E4018692D92041D(Local_117.f_5, 1))
	{
		if (!func_25() && !func_24())
		{
			if ((func_23() || func_8()) || func_22())
			{
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			}
		}
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
		{
			unk_0x860D3E500AEADB97(unk_0xE4B835FDC8B9B086(Local_117.f_110), 1);
		}
		if (unk_0x66DE54BD13B1BD88(Local_117.f_31))
		{
			Local_117.f_31 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(Local_117.f_31, "HUD_Static_Loop", Local_117.f_109, 1);
		}
		if (!func_21())
		{
			unk_0x61AE8E2B7BB7D8BA(0, 300, 100);
			unk_0x29B6D8EFAD395B92("RemixDrone");
			unk_0x8950ED5730F62EE8(&(Local_117.f_6), 0);
		}
		unk_0x8950ED5730F62EE8(&(Local_117.f_5), 1);
	}
	else if (!func_9(&(Local_117.f_160)))
	{
		func_7(&(Local_117.f_160), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_20())
		{
			iVar0 = 500;
		}
		if (func_6(&(Local_117.f_160), iVar0, 0) || func_21())
		{
			if (Local_117.f_35 == -1)
			{
				if (unk_0x66DE54BD13B1BD88(Local_117.f_35))
				{
					Local_117.f_35 = unk_0x8CCC0A0504C52531();
					unk_0x0F8EAEEC97DDBCB3(Local_117.f_35, "HUD_Disconnect", Local_117.f_109, 1);
				}
			}
			func_305(1);
			func_304(5);
		}
	}
}

bool func_20()
{
	return unk_0x0E4018692D92041D(Global_1681628.f_2, 4);
}

bool func_21()
{
	return unk_0x0E4018692D92041D(Global_1681628, 20);
}

bool func_22()
{
	return unk_0x0E4018692D92041D(Global_1681628.f_2, 3);
}

bool func_23()
{
	return unk_0x0E4018692D92041D(Global_1681628, 11);
}

bool func_24()
{
	return Global_2506066;
}

int func_25()
{
	if ((func_48(unk_0x95B959F18401C09A(), 0) && Global_1319089 == 1) && func_26())
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if ((((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_46(unk_0x33CD235DF1E6A94E(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_27())
		{
			return 0;
		}
	}
	return 1;
}

int func_27()
{
	int iVar0;
	
	if (func_45(unk_0x95B959F18401C09A()))
	{
		iVar0 = func_44(unk_0x95B959F18401C09A());
		if (func_43(iVar0, 0, 1))
		{
			if ((((((func_42(iVar0) && func_40(func_41(iVar0)) == 4) && unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar0))) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0))) && unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0)) && unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0))) && func_39(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0)))
			{
				return 1;
			}
			if (!func_38(Global_4456448.f_138474))
			{
				if (func_45(iVar0))
				{
					if (func_37(iVar0))
					{
						return 1;
					}
					else if (func_42(unk_0x95B959F18401C09A()) || func_36())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1681655)
	{
		return 1;
	}
	if (func_35(unk_0x95B959F18401C09A()))
	{
		iVar0 = func_34(unk_0x95B959F18401C09A());
		if (func_43(iVar0, 0, 1))
		{
			if ((((((func_42(iVar0) && func_40(func_41(iVar0)) == 9) && unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar0))) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0))) && unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0)) && unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0))) && unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_33(iVar0))
			{
				return 1;
			}
			else if (func_42(unk_0x95B959F18401C09A()) || func_36())
			{
				return 1;
			}
		}
	}
	if (func_48(unk_0x95B959F18401C09A(), 0))
	{
		iVar0 = func_32(unk_0x95B959F18401C09A());
		if (func_43(iVar0, 0, 1))
		{
			if ((((Global_1589668 != func_14() && func_42(Global_1589668)) && func_40(func_41(Global_1589668)) == 11) && func_31(Global_1589668, -1)) && unk_0xD470A4E16E9AAE0E(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(Global_1589668), 0), -1988428699))
			{
				return 1;
			}
			else if (func_30(iVar0))
			{
				return 1;
			}
			else if (func_42(unk_0x95B959F18401C09A()) || func_36())
			{
				return 1;
			}
		}
	}
	if (func_35(unk_0x95B959F18401C09A()) || func_29(unk_0x95B959F18401C09A()))
	{
		switch (Global_1319095)
		{
			case 1:
				if (Global_262145.f_22457)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22458)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22459)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319093 == 1)
	{
		return 1;
	}
	if (func_28(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574432 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_262145.f_5003[iParam0] == Global_4456448.f_138474;
}

int func_29(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_3, 4);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_43(iParam0, 1, 1))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iParam0), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iParam0), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x33CD235DF1E6A94E() == unk_0x7BDC41A7CA0C77A2(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_33(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_2, 6);
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_35(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_36()
{
	return unk_0x0E4018692D92041D(Global_1671295, 6);
}

int func_37(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 6);
	}
	return 0;
}

bool func_38(int iParam0)
{
	return Global_262145.f_4994[4] == iParam0;
}

int func_39(int iParam0)
{
	if (unk_0x541D5C57194E73C4(iParam0) == 387748548 || unk_0x541D5C57194E73C4(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_45(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	if (func_47(iParam0))
	{
		if (unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 1 || unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (func_18(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_53(0))
		{
			func_50(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_50(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (Global_14725)
	{
		func_52(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_51())
	{
		Global_14553.f_1 = 3;
	}
}

int func_51()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_53(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_53(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
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
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_55()
{
	unk_0x818D1850BE9E44A9();
	func_56();
}

void func_56()
{
	Global_17272.f_134 = 1;
}

void func_57()
{
	Global_1312666 = 1;
}

void func_58()
{
	char* sVar0;
	
	if (!func_20())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0x96E4B8740065F6D8(sVar0);
	if (unk_0xA7F26E75DE91EC1D(sVar0))
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
		{
			if (!unk_0xC2FDDE313D5A5398(Local_117.f_123[unk_0x95B959F18401C09A()]))
			{
				unk_0x607F78FE329ECF8E(sVar0);
				Local_117.f_123[unk_0x95B959F18401C09A()] = unk_0x36F0667378D07B9C("scr_xs_guided_missile_trail", unk_0xE4B835FDC8B9B086(Local_117.f_110), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
		}
	}
}

void func_59()
{
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (!unk_0x765F6FEEFF39224F(Local_117.f_111))
		{
			unk_0xB815670C37E03CDE(func_73());
			if (unk_0x5D98D654CDC2165A(func_73()))
			{
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 6))
				{
					if (func_67(unk_0x88CD84C553EF6ED9(false, 0) + 1, 0, 1))
					{
						unk_0x4F8CF72358604361(unk_0x5AC0475D36815E75(0) + 1);
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 6);
					}
				}
				else if (unk_0xDB7A20748C5E6EF3(1))
				{
					Local_117.f_111 = unk_0x9BA5CF280376EEA4(26, func_73(), Local_117.f_105, unk_0xC472E34C8FBEC678(unk_0xE4B835FDC8B9B086(Local_117.f_110)), 0, false);
					unk_0x9611832841071B69(Local_117.f_111, true);
					unk_0x0CDD28A9DFCE2FCE(Local_117.f_111, false, 0);
					unk_0x860D3E500AEADB97(Local_117.f_111, 0);
					unk_0x4A852F02088ECC9D(Local_117.f_111, 1);
					unk_0x71CA80D41E1338B4(func_73());
					unk_0x5FEE418CE11E6DDE(Local_117.f_111, 118, false);
					unk_0x5FEE418CE11E6DDE(Local_117.f_111, 108, true);
					unk_0x5FEE418CE11E6DDE(Local_117.f_111, 208, true);
					unk_0x4D5F3407F1F37E28(Local_117.f_111, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0x2F0A6390D863D337(Local_117.f_111, unk_0xE4B835FDC8B9B086(Local_117.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x91962EC406944B72(Local_117.f_111, 0, 0);
					Global_1681628.f_21 = Local_117.f_111;
				}
			}
		}
		else if (func_18(Local_117.f_111))
		{
			if (unk_0x042B0E494045A7DF(Local_117.f_111))
			{
				unk_0x0CDD28A9DFCE2FCE(Local_117.f_111, false, 0);
			}
			if (!func_65(unk_0x95B959F18401C09A()) && !func_62(unk_0x95B959F18401C09A(), 236))
			{
				if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
				{
					func_61(Global_1574998);
				}
			}
			else if ((Global_1681628.f_3 == -1 || Global_1681628.f_3 == 0) || Global_1681628.f_3 == Global_1574987)
			{
				func_61(Global_1574998);
			}
			if (unk_0x9334D6FFE155018F(Local_117.f_111) != func_60())
			{
				unk_0x0648A75D3F60E864(Local_117.f_111, func_60());
			}
			if (!unk_0x9F4718FD61B07058(Local_117.f_111))
			{
				unk_0x2F0A6390D863D337(Local_117.f_111, unk_0xE4B835FDC8B9B086(Local_117.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x91962EC406944B72(Local_117.f_111, 0, 0);
			}
		}
	}
}

int func_60()
{
	if (Global_1681628.f_3 != -1 && Global_1681628.f_3 != 0)
	{
		return Global_1681628.f_3;
	}
	return Global_1574998;
}

void func_61(int iParam0)
{
	if (Global_1681628.f_3 != iParam0)
	{
		Global_1681628.f_3 = iParam0;
	}
}

int func_62(int iParam0, int iParam1)
{
	if (func_64(iParam0) == iParam1)
	{
		return func_63(iParam0);
	}
	return 0;
}

int func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

bool func_65(int iParam0)
{
	return func_66(iParam0, 20);
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

bool func_67(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(2, iParam0, 1, bParam1, bParam2);
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_72(iParam0) - func_71(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_70(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_71(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_69(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return unk_0x276149CFFB30EADE(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return unk_0x04C948F9025CE510(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return unk_0x88CD84C553EF6ED9(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

int func_73()
{
	return joaat("g_m_m_chigoon_01");
}

void func_74()
{
	if (func_141())
	{
		return;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0xFAA5C555ED0CEC9B(Local_117.f_119))
		{
			if (!func_20())
			{
				func_134();
				func_101();
			}
			else
			{
				func_83();
				func_77();
			}
			unk_0x4AC1EB89981AFAFD();
			func_76(1);
			func_75(2);
		}
	}
}

void func_75(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_76(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_77()
{
	int iVar0;
	
	if (!unk_0x11AE7F6A404414C9(Local_117.f_120))
	{
		Local_117.f_120 = func_82();
		return;
	}
	iVar0 = func_81();
	if (iVar0 < 0 || !func_18(iVar0))
	{
		return;
	}
	func_80(Local_117.f_120, 0);
	func_79(Local_117.f_120, 3, 3, 3);
	func_78(Local_117.f_120, 0f, 0f, 0f, 0f, (unk_0xC472E34C8FBEC678(iVar0) + 180f));
	unk_0x5C58D0ADA22491FA(1);
	unk_0xFF524AE40FB6301A(Local_117.f_120, 255, 255, 255, 0, 0);
}

void func_78(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0xBB698266C5FDF0A7(uParam0, "SET_ALT_FOV_HEADING");
	unk_0x8DAB5B12D7B9AD29(fParam1);
	unk_0x8DAB5B12D7B9AD29(fParam2);
	unk_0x8DAB5B12D7B9AD29(fParam5);
	unk_0x818901B332D5541D();
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xBB698266C5FDF0A7(uParam0, "SET_WEAPON_VALUES");
	unk_0x4D9DA18AB3C2A466(iParam1);
	unk_0x4D9DA18AB3C2A466(iParam2);
	unk_0x4D9DA18AB3C2A466(iParam3);
	unk_0x818901B332D5541D();
}

void func_80(var uParam0, bool bParam1)
{
	unk_0xBB698266C5FDF0A7(uParam0, "SET_ZOOM_VISIBLE");
	unk_0x295B86DE57A0721D(bParam1);
	unk_0x818901B332D5541D();
}

int func_81()
{
	if (unk_0x95B959F18401C09A() != -1)
	{
		return Global_1681628.f_18;
	}
	return -1;
}

var func_82()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_154963)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x199B24FF79A52CCF(sVar0);
}

void func_83()
{
	if (!unk_0x0E4018692D92041D(Local_117.f_5, 16))
	{
		if (func_99(0, -1, 0))
		{
			func_98(-1);
			func_97(20, "DRONE_SPACE", -1);
			func_97(21, "DRONE_POSITION", -1);
			if (!unk_0x5D79F3D06EB318A0(0))
			{
				func_96(208, "DRONE_SPEEDU", -1, 0);
				func_96(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_96(209, "DRONE_SPEEDU", -1, 0);
				func_96(210, "DRONE_SLOWD", -1, 0);
			}
			func_96(75, "MOVE_DRONE_RE", -1, 0);
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 16);
		}
	}
	else
	{
		func_84(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x5D79F3D06EB318A0(0))
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 17))
		{
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 17);
			unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 17))
	{
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 17);
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
	}
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_95(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_92(bParam4, bParam8))
	{
		return;
	}
	if (func_90())
	{
		return;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_87(unk_0x95B959F18401C09A(), 0))
		{
			return;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x86CF3D110E5DD82F() == 0 || unk_0xE3F7CBC28F745843())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (unk_0xEABBA3F8727C0FE7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0x4464D5595CEED843(2, Global_17411.f_5026[iVar1], true), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0xF745CA12DC8836EB(2, Global_17411.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x8DAB5B12D7B9AD29((1f - (Global_17411.f_5081 / 100f)));
			unk_0x818901B332D5541D();
			if (unk_0x4CE1DD5CFC1F941E())
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar1 /*4*/])) != unk_0x36163153849DFDA1("PREV"))
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					func_86(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar2 /*4*/])) == unk_0x36163153849DFDA1("PREV"))
					{
						func_86(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_85(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xDC97362660946DF9(iVar3, 70);
						}
						else
						{
							unk_0xE800DC85FDF60F85(iVar3);
						}
						unk_0x36F3AA9FFAAF8606();
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (Global_17411.f_5026[iVar1] != 359 && unk_0x0E4018692D92041D(Global_17411.f_5052, iVar1))
						{
							unk_0x295B86DE57A0721D(true);
							unk_0x4D9DA18AB3C2A466(Global_17411.f_5026[iVar1]);
						}
						else
						{
							unk_0x295B86DE57A0721D(false);
							unk_0x4D9DA18AB3C2A466(359);
						}
					}
					unk_0x818901B332D5541D();
				}
				iVar1++;
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_16)) != unk_0x36163153849DFDA1(""))
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(Global_17411.f_4769);
				func_86(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_85(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iVar4, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iVar4);
					}
					unk_0x36F3AA9FFAAF8606();
				}
				unk_0x818901B332D5541D();
			}
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(80);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				unk_0x4D9DA18AB3C2A466(1);
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(0);
			}
			unk_0x818901B332D5541D();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iParam2, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iParam2);
					}
					unk_0x36F3AA9FFAAF8606();
					unk_0x818901B332D5541D();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4D9DA18AB3C2A466(iVar1);
				unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
				if (bParam5)
				{
					unk_0xDC97362660946DF9(iParam2, 70);
				}
				else
				{
					unk_0xE800DC85FDF60F85(iParam2);
				}
				unk_0x36F3AA9FFAAF8606();
				unk_0x818901B332D5541D();
			}
		}
		unk_0x1382AC429D0EA2BB(76, 66);
		unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				unk_0x7049F65F85106838(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			unk_0x019859CB72B1DB4C(15);
			Global_17411.f_8353 = 0;
		}
		unk_0x94A8B1D385430451();
		if (Global_17411.f_5055)
		{
			unk_0x1382AC429D0EA2BB(82, 66);
			unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
			unk_0x5A2C46836B4DF5B3(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94A8B1D385430451();
		}
		else
		{
			unk_0xFF524AE40FB6301A(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_85(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_86(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_88(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_89();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_89()
{
	return Global_1312745;
}

int func_90()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_91())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x4951EE4BB7B6B4F7(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_91()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_92(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x73DA1542B2F0C458() || (func_94(8, -1) && func_93() != 64)) || (unk_0x1B9A01A53920FD50() != 0 && !bParam1)) || (unk_0x71EC91BA8C88BCE0() && !bParam0)) || unk_0xBAA5E93732372E34()) || Global_71850) || Global_17411.f_8352) || unk_0x15C85368E432C647()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_93()
{
	return Global_1312802;
}

bool func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

int func_95(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0xB331FCEB94EB05C8() && unk_0xE36862B47CD70685())
		{
			iParam2 = unk_0x3031F3812E92B62B();
		}
	}
	StringCopy(&cVar0, unk_0xD178EF744F20B712(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x36163153849DFDA1(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17411.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17411.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17411.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x4464D5595CEED843(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_97(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF745CA12DC8836EB(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (!func_95(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
}

bool func_99(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_95(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		unk_0x2EE8D1440C9060EF(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!unk_0x65F173513F5EF79C(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0A06DEFFF267C21E("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!unk_0xD83C9F072D059CC4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0A06DEFFF267C21E("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!unk_0xD83C9F072D059CC4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_100(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_100(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				*uParam0 = unk_0x199B24FF79A52CCF(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x11AE7F6A404414C9(*uParam0))
					{
						uParam0->f_8 = unk_0xE3903F59E2F22150();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_101()
{
	if (!unk_0x11AE7F6A404414C9(Local_117.f_120))
	{
		Local_117.f_120 = unk_0x199B24FF79A52CCF("DRONE_CAM");
		return;
	}
	if (func_22() || func_54())
	{
		func_133("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_133("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_22() || func_54()) || func_8())
	{
		func_133("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_133("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_8())
	{
		func_133("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_22() && !func_54())
	{
		func_133("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_133("SET_HEADING_METER_IS_VISIBLE", 1);
	func_133("SET_ZOOM_METER_IS_VISIBLE", 1);
	if ((!func_22() && !func_54()) && !func_8())
	{
		func_133("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	func_133("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_133("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_131(unk_0x95B959F18401C09A()) == 240)
	{
		if (Local_117.f_77 >= (func_130() - 50f) || Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 50)))
		{
			func_133("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_129();
			if (unk_0x0E4018692D92041D(Local_117.f_5, 13))
			{
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 13);
			}
		}
		else
		{
			func_125(func_126());
			if (!unk_0x0E4018692D92041D(Local_117.f_5, 13))
			{
				func_133("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 13);
			}
		}
	}
	else
	{
		func_133("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_129();
	}
	func_133("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_22() && !func_54())
	{
		if (!func_8())
		{
			func_124(Local_117.f_17);
		}
		else
		{
			func_123(Local_117.f_17);
		}
		func_122(Local_117.f_18);
	}
	func_121(Local_117.f_19);
	func_120(0, "DRONE_ZOOM_1");
	func_120(1, "");
	func_120(2, "DRONE_ZOOM_2");
	func_120(3, "");
	func_120(4, "DRONE_ZOOM_3");
	func_118();
	func_116();
	func_114();
	func_113(round((unk_0xC472E34C8FBEC678(unk_0xE4B835FDC8B9B086(Local_117.f_110)) + 180f)));
	if (func_131(unk_0x95B959F18401C09A()) == 240)
	{
		func_112(func_126());
	}
	if (func_111())
	{
		func_104();
	}
	else
	{
		func_102();
	}
	unk_0x5C58D0ADA22491FA(1);
	unk_0xFF524AE40FB6301A(Local_117.f_120, 255, 255, 255, 0, 0);
}

void func_102()
{
	if (Local_117.f_105.f_2 >= (func_130() - 20f))
	{
		if (unk_0x66DE54BD13B1BD88(Local_117.f_34))
		{
			Local_117.f_34 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(Local_117.f_34, "Out_Of_Bounds_Alarm_Loop", Local_117.f_109, 1);
		}
		if (Local_117.f_105.f_2 >= (func_130() - 20f) && Local_117.f_105.f_2 < (func_130() - 16f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.1f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 16f) && Local_117.f_105.f_2 < (func_130() - 13f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.2f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 13f) && Local_117.f_105.f_2 < (func_130() - 10f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.3f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 10f) && Local_117.f_105.f_2 < (func_130() - 8f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.4f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 8f) && Local_117.f_105.f_2 < (func_130() - 6f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.5f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 6f) && Local_117.f_105.f_2 < (func_130() - 4f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.6f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 4f) && Local_117.f_105.f_2 < (func_130() - 3f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.7f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 3f) && Local_117.f_105.f_2 < (func_130() - 2f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.8f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 2f) && Local_117.f_105.f_2 < (func_130() - 1f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.9f);
		}
		else if (Local_117.f_105.f_2 >= (func_130() - 1f) && Local_117.f_105.f_2 < func_130())
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(1f);
		}
	}
	else
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x66DE54BD13B1BD88(Local_117.f_34))
		{
			unk_0xCBE6AF58552C63B2(Local_117.f_34);
			unk_0x44D426446FAF55FB(Local_117.f_34);
			Local_117.f_34 = -1;
		}
	}
}

void func_103(float fParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_WARNING_FLASH_RATE");
	unk_0x8DAB5B12D7B9AD29(fParam0);
	unk_0x818901B332D5541D();
}

void func_104()
{
	if (Local_117.f_77 >= (func_130() - 50f) || Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 50)))
	{
		func_105();
		if (unk_0x66DE54BD13B1BD88(Local_117.f_34))
		{
			Local_117.f_34 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(Local_117.f_34, "Out_Of_Bounds_Alarm_Loop", Local_117.f_109, 1);
		}
		if ((Local_117.f_77 >= (func_130() - 50f) && Local_117.f_77 < (func_130() - 45f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 50)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 45))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.1f);
		}
		else if ((Local_117.f_77 >= (func_130() - 45f) && Local_117.f_77 < (func_130() - 40f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 45)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 40))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.2f);
		}
		else if ((Local_117.f_77 >= (func_130() - 40f) && Local_117.f_77 < (func_130() - 35f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 40)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 35))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.3f);
		}
		else if ((Local_117.f_77 >= (func_130() - 35f) && Local_117.f_77 < (func_130() - 30f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 35)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 30))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.4f);
		}
		else if ((Local_117.f_77 >= (func_130() - 30f) && Local_117.f_77 < (func_130() - 25f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 30)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 25))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.5f);
		}
		else if ((Local_117.f_77 >= (func_130() - 25f) && Local_117.f_77 < (func_130() - 20f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 25)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 20))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.6f);
		}
		else if ((Local_117.f_77 >= (func_130() - 20f) && Local_117.f_77 < (func_130() - 15f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 20)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 15))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.7f);
		}
		else if ((Local_117.f_77 >= (func_130() - 15f) && Local_117.f_77 < (func_130() - 10f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 15)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 10))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.8f);
		}
		else if ((Local_117.f_77 >= (func_130() - 10f) && Local_117.f_77 < (func_130() - 5f)) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 10)) && Local_117.f_78 < IntToFloat((Global_262145.f_24015 - 5))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.9f);
		}
		else if ((Local_117.f_77 >= (func_130() - 5f) && Local_117.f_77 < func_130()) || (Local_117.f_78 >= IntToFloat((Global_262145.f_24015 - 5)) && Local_117.f_78 < IntToFloat(Global_262145.f_24015)))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(1f);
		}
	}
	else
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x66DE54BD13B1BD88(Local_117.f_34))
		{
			unk_0xCBE6AF58552C63B2(Local_117.f_34);
			unk_0x44D426446FAF55FB(Local_117.f_34);
			Local_117.f_34 = -1;
		}
	}
}

void func_105()
{
	int iVar0;
	
	if (unk_0x73DA1542B2F0C458() && !unk_0x0E4018692D92041D(Global_1671295.f_3, 15))
	{
		if (!unk_0xFAC8F20FBC764F4D())
		{
			iVar0 = func_108(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_107("HACK_DRONE_DIS", -1);
				iVar0++;
				func_106(22045, iVar0, -1, 1);
				unk_0x8950ED5730F62EE8(&(Global_1671295.f_3), 15);
			}
		}
	}
}

var func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_89();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6668A708A3DA7FB4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_107(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	iVar1 = func_110(iParam0, iParam1);
	uVar2 = func_109(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

bool func_111()
{
	return unk_0x0E4018692D92041D(Global_1681628.f_2, 1);
}

void func_112(float fParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "ATTENUATE_SOUND_WAVE");
	unk_0x8DAB5B12D7B9AD29(fParam0);
	unk_0x818901B332D5541D();
}

void func_113(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_HEADING");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_114()
{
	if (func_8())
	{
		if (unk_0x0E4018692D92041D(Local_117.f_5, 11) && !Local_117.f_108)
		{
			func_115(1);
		}
		else
		{
			func_115(0);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 11) || unk_0x0E4018692D92041D(Local_117.f_5, 23))
	{
		func_115(1);
	}
	else
	{
		func_115(0);
	}
}

void func_115(bool bParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_RETICLE_ON_TARGET");
	unk_0x295B86DE57A0721D(bParam0);
	unk_0x818901B332D5541D();
}

void func_116()
{
	if (unk_0x0E4018692D92041D(Local_117.f_5, 4) || (unk_0x0E4018692D92041D(Local_117.f_5, 3) && func_8()))
	{
		if (Local_117.f_17 == 100)
		{
			func_117(1);
		}
		else if (Local_117.f_17 != 0 && Local_117.f_17 != 100)
		{
			func_117(2);
		}
	}
	else
	{
		func_117(0);
	}
}

void func_117(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_RETICLE_STATE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_118()
{
	switch (Local_117.f_23)
	{
		case 0:
			func_119(0);
			break;
		
		case 1:
			func_119(2);
			break;
		
		case 2:
			func_119(4);
			break;
	}
}

void func_119(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_ZOOM");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_120(int iParam0, char* sParam1)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_ZOOM_LABEL");
	unk_0x4D9DA18AB3C2A466(iParam0);
	func_85(sParam1);
	unk_0x818901B332D5541D();
}

void func_121(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_BOOST_PERCENTAGE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_122(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_DETONATE_PERCENTAGE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_123(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_EMP_PERCENTAGE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_124(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, "SET_SHOCK_PERCENTAGE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_125(float fParam0)
{
	if (unk_0x66DE54BD13B1BD88(Local_117.f_41))
	{
		Local_117.f_41 = unk_0x8CCC0A0504C52531();
		unk_0x0F8EAEEC97DDBCB3(Local_117.f_41, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0x1819081E2D6040CB(Local_117.f_41, "signalstrength", fParam0);
	}
	else
	{
		unk_0x1819081E2D6040CB(Local_117.f_41, "signalstrength", fParam0);
	}
}

float func_126()
{
	float fVar0;
	
	if (func_131(unk_0x95B959F18401C09A()) == 240)
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
		{
			fVar0 = func_127(unk_0xE4B835FDC8B9B086(Local_117.f_110), func_128(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_127(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vParam1, iParam2);
}

Vector3 func_128()
{
	if (func_131(unk_0x95B959F18401C09A()) == 240)
	{
		return Global_1688031;
	}
	return 0f, 0f, 0f;
}

void func_129()
{
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_41))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_41);
		unk_0x44D426446FAF55FB(Local_117.f_41);
		Local_117.f_41 = -1;
	}
}

float func_130()
{
	if (Global_1681628.f_6 == 0f)
	{
		return Global_262145.f_24016;
	}
	return Global_1681628.f_6;
}

int func_131(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_132(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_133(char* sParam0, bool bParam1)
{
	unk_0xBB698266C5FDF0A7(Local_117.f_120, sParam0);
	unk_0x295B86DE57A0721D(bParam1);
	unk_0x818901B332D5541D();
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	if (func_54())
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(Local_117.f_5, 16))
	{
		if (func_99(0, -1, 0))
		{
			func_98(-1);
			func_97(21, "DRONE_MOVE", -1);
			func_97(20, "DRONE_POSITION", -1);
			if (!unk_0x5D79F3D06EB318A0(0))
			{
				func_96(210, "CELL_284", -1, 0);
				if (!func_22() && !func_8())
				{
					func_96(209, "BOOST_DRONE_E", -1, 0);
				}
				func_96(208, "MOVE_DRONE_UP", -1, 0);
				func_96(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_97(29, "CELL_284", -1);
				if (!func_22() && !func_8())
				{
					func_96(203, "BOOST_DRONE_E", -1, 0);
				}
				func_96(209, "MOVE_DRONE_UP", -1, 0);
				func_96(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_22())
			{
				iVar0 = 206;
				if (unk_0x5D79F3D06EB318A0(0))
				{
					iVar0 = 237;
				}
				if (func_8())
				{
					func_96(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_96(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (unk_0x5D79F3D06EB318A0(0))
				{
					iVar1 = 238;
				}
				func_96(iVar1, "MOVE_DRONE_EX", -1, 0);
			}
			if (!func_8())
			{
				if ((((func_140(0) || func_140(1)) || func_139()) || unk_0x239E30C22D4EE2C6()) || func_135(unk_0x95B959F18401C09A()))
				{
				}
				else
				{
					func_96(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_96(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 16);
		}
	}
	else
	{
		func_84(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x5D79F3D06EB318A0(0))
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 17))
		{
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 17);
			unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 17))
	{
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 17);
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
	}
}

int func_135(int iParam0)
{
	if (func_138(func_131(iParam0)))
	{
		if (func_137() != func_14())
		{
			if (func_136() == func_137())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35;
}

int func_137()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_139()
{
	return Global_17272.f_135;
}

bool func_140(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_141()
{
	return unk_0x0E4018692D92041D(Global_1681628, 7);
}

void func_142()
{
	int iVar0;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			if ((unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0xFAA5C555ED0CEC9B(Local_117.f_119)) && !func_54())
			{
				iVar0 = 80;
				if (func_20())
				{
					iVar0 = 75;
				}
				if (unk_0x833B1A3D9F713E03(2, iVar0) || unk_0x5EBE50D55314CEAD(2, iVar0))
				{
					if (!unk_0x0E4018692D92041D(Local_117.f_5, 7))
					{
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 7);
					}
				}
			}
		}
	}
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_149() || !func_135(unk_0x95B959F18401C09A())) || !unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	iVar0 = func_148(1);
	func_147(iVar0);
	iVar1 = func_148(0);
	iVar2 = unk_0x68F833BFE3A28FEA(Local_117.f_96, 2f, iVar1, 0, 0, 0);
	if (unk_0x765F6FEEFF39224F(iVar2) && iVar2 != Local_117.f_112)
	{
		if (unk_0x3771DEF507BF2843(iVar2, joaat("weapon_stungun"), 0) || unk_0xE80842D7B53F8525(iVar2) == 999)
		{
			if (!unk_0x0E4018692D92041D(Local_117.f_5, 26))
			{
				func_146(func_137(), 1);
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 26);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(Local_117.f_112))
	{
		if (unk_0x3771DEF507BF2843(Local_117.f_112, joaat("weapon_stungun"), 0) || unk_0xE80842D7B53F8525(Local_117.f_112) == 999)
		{
			if (!unk_0x0E4018692D92041D(Local_117.f_5, 26))
			{
				func_146(func_137(), 1);
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 26);
			}
		}
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 26))
	{
		iVar3 = unk_0x68F833BFE3A28FEA(Local_117.f_96, 2f, iVar0, 0, 0, 0);
		if (unk_0x765F6FEEFF39224F(iVar3))
		{
			if (unk_0x765F6FEEFF39224F(Local_117.f_112))
			{
				unk_0x0CDD28A9DFCE2FCE(Local_117.f_112, false, 0);
			}
			if (unk_0x765F6FEEFF39224F(iVar2))
			{
				unk_0x0CDD28A9DFCE2FCE(iVar2, false, 0);
			}
			func_144(1);
		}
	}
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		if (!func_145())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 1);
		}
	}
	else if (func_145())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 1);
	}
}

bool func_145()
{
	return unk_0x0E4018692D92041D(Global_1681628, 1);
}

void func_146(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = -1498120964;
	vVar0.y = unk_0x95B959F18401C09A();
	vVar0.z = iParam1;
	iVar1 = 0;
	if (iParam0 != func_14())
	{
		unk_0x8950ED5730F62EE8(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		unk_0x09269A9CFC145847(1, &vVar0, 3, iVar1);
	}
}

bool func_147(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_148(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1681628.f_17 != 0)
		{
			return Global_1681628.f_17;
		}
		else
		{
			return -2143187667;
		}
	}
	else
	{
		return -1184972439;
	}
	return 0;
}

bool func_149()
{
	return unk_0x0E4018692D92041D(Global_1681628, 14);
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	if ((unk_0x0E4018692D92041D(Local_117.f_5, 1) || func_159()) || func_158())
	{
		Local_117.f_17 = 0;
		Local_117.f_18 = 0;
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 10))
		{
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 10);
		}
		return;
	}
	if (!func_158())
	{
		if (unk_0x0E4018692D92041D(Local_117.f_5, 10))
		{
			Local_117.f_17 = 100;
			unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 10);
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			if ((unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0xFAA5C555ED0CEC9B(Local_117.f_119)) && !unk_0x0E4018692D92041D(Local_117.f_5, 2))
			{
				if ((!unk_0x0E4018692D92041D(Local_117.f_5, 4) && !unk_0x0E4018692D92041D(Local_117.f_5, 3)) && !Local_117.f_108)
				{
					iVar0 = 206;
					if (unk_0x5D79F3D06EB318A0(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x1771F6BAF60B44FA(2, iVar0) || unk_0xC6FADCE8D6467372(2, iVar0)) && !unk_0x0E4018692D92041D(Local_117.f_5, 5)) && !unk_0x0E4018692D92041D(Local_117.f_5, 24)) && !func_54())
					{
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 24);
						if (unk_0x0E4018692D92041D(Local_117.f_5, 11))
						{
							Local_117.f_25++;
						}
					}
					if (func_8())
					{
						func_154();
					}
					else
					{
						func_153();
					}
				}
				else if (func_9(&(Local_117.f_164)))
				{
					if (func_8())
					{
						iVar1 = Global_262145.f_24608;
					}
					else
					{
						iVar1 = Global_262145.f_24008;
					}
					if (func_6(&(Local_117.f_164), iVar1, 0))
					{
						func_5(&(Local_117.f_164));
						Local_117.f_17 = 100;
						if (Local_117.f_29 != -1)
						{
							unk_0xCBE6AF58552C63B2(Local_117.f_29);
							unk_0x44D426446FAF55FB(Local_117.f_29);
							Local_117.f_29 = -1;
						}
						if (unk_0x66DE54BD13B1BD88(Local_117.f_32))
						{
							unk_0xCBE6AF58552C63B2(Local_117.f_32);
							unk_0x44D426446FAF55FB(Local_117.f_32);
							Local_117.f_32 = -1;
						}
						unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 4);
						unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 3);
						unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 24);
						Local_117.f_108 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_164)));
						Local_117.f_17 = (iVar2 / iVar1);
						if (!func_8())
						{
							if (unk_0x66DE54BD13B1BD88(Local_117.f_29))
							{
								Local_117.f_29 = unk_0x8CCC0A0504C52531();
								unk_0x0F8EAEEC97DDBCB3(Local_117.f_29, "HUD_Shock_Recharge", Local_117.f_109, 1);
								unk_0x1819081E2D6040CB(Local_117.f_29, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				Local_117.f_194.f_2 = 2;
				if (unk_0x5D79F3D06EB318A0(0))
				{
					Local_117.f_194.f_3 = 238;
				}
				else
				{
					Local_117.f_194.f_3 = 205;
				}
				iVar3 = Global_262145.f_24011;
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 31))
				{
					Local_117.f_21 = 100;
				}
				if (func_8())
				{
					iVar3 = (iVar3 / 2);
					if (unk_0x0E4018692D92041D(Local_117.f_6, 1))
					{
						Local_117.f_20 = ((Local_117.f_22 * (Global_262145.f_24011 / 2)) / 100);
						Local_117.f_20 = ((Global_262145.f_24011 / 2) - Local_117.f_20);
						unk_0xCE689A8E8C42ED78(&(Local_117.f_6), 1);
					}
					if (unk_0x0E4018692D92041D(Local_117.f_5, 31))
					{
						iVar3 = Local_117.f_20;
					}
				}
				else
				{
					Local_117.f_21 = 100;
				}
				if (!func_152())
				{
					if (!func_54() && func_151(&(Local_117.f_194), 1, iVar3))
					{
						if (unk_0x66DE54BD13B1BD88(Local_117.f_33))
						{
							Local_117.f_33 = unk_0x8CCC0A0504C52531();
							unk_0xE9739440E5BF08EE(Local_117.f_33, "Destroyed", unk_0xE4B835FDC8B9B086(Local_117.f_110), Local_117.f_109, 1, 0);
						}
						unk_0xEB3CDDFC044A3FAF();
						iVar4 = 0;
						if (func_8())
						{
							iVar4 = 69;
						}
						unk_0x1E91E6361FECDC81(unk_0x33CD235DF1E6A94E(), Local_117.f_105, iVar4, 0.5f, 1, 0, 1065353216);
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 1)
						{
							unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
							unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
						}
						unk_0x61AE8E2B7BB7D8BA(0, 300, 200);
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 2);
					}
				}
				if (func_9(&(Local_117.f_194)))
				{
					unk_0x61AE8E2B7BB7D8BA(0, 300, 20);
					if (!unk_0x0E4018692D92041D(Local_117.f_5, 5))
					{
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 5);
					}
					func_5(&(Local_117.f_186));
					if (!func_6(&(Local_117.f_194), iVar3, 0))
					{
						iVar5 = (Local_117.f_21 * unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_194)));
						if (!func_8())
						{
							Local_117.f_18 = (iVar5 / iVar3);
						}
						else if (!unk_0x0E4018692D92041D(Local_117.f_5, 31))
						{
							Local_117.f_18 = (iVar5 / iVar3);
						}
						else
						{
							Local_117.f_18 = (Local_117.f_22 + (iVar5 / iVar3));
						}
						if (unk_0x66DE54BD13B1BD88(Local_117.f_30))
						{
							Local_117.f_30 = unk_0x8CCC0A0504C52531();
							unk_0x0F8EAEEC97DDBCB3(Local_117.f_30, "HUD_Detonate_Charge", Local_117.f_109, 1);
						}
					}
				}
				else if (unk_0x0E4018692D92041D(Local_117.f_5, 5))
				{
					unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 5);
					if (!func_8())
					{
						Local_117.f_18 = 0;
					}
					else
					{
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 31);
						Local_117.f_21 = (100 - Local_117.f_18);
						Local_117.f_20 = (iVar3 - unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_194)));
						Local_117.f_22 = Local_117.f_18;
						func_5(&(Local_117.f_186));
					}
					if (Local_117.f_30 != -1)
					{
						unk_0xCBE6AF58552C63B2(Local_117.f_30);
						unk_0x44D426446FAF55FB(Local_117.f_30);
						Local_117.f_30 = -1;
					}
				}
				else if (func_8())
				{
					if (Local_117.f_18 > 0)
					{
						if (Local_117.f_18 <= 2)
						{
							Local_117.f_18 = 0;
						}
						if (!func_9(&(Local_117.f_186)))
						{
							func_7(&(Local_117.f_186), 0, 0);
						}
						else
						{
							iVar6 = Global_262145.f_24011;
							if (!func_6(&(Local_117.f_186), iVar6, 0))
							{
								fVar7 = ((100f - IntToFloat(Local_117.f_21)) / to_float((iVar6 / unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_186)))));
								Local_117.f_18 = (Local_117.f_18 - round(fVar7));
								Local_117.f_22 = Local_117.f_18;
								Local_117.f_21 = (100 - Local_117.f_18);
								unk_0x8950ED5730F62EE8(&(Local_117.f_6), 1);
							}
							else
							{
								Local_117.f_18 = 0;
							}
						}
					}
					else
					{
						func_5(&(Local_117.f_194));
						unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 31);
						unk_0xCE689A8E8C42ED78(&(Local_117.f_6), 1);
					}
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

int func_151(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xF1CDE9FD207C4CD8(uParam0->f_2, uParam0->f_3) || (unk_0x1CAA347A3C84C225(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_9(uParam0))
		{
			func_7(uParam0, 0, 0);
		}
		else if (func_6(uParam0, iParam2, 0))
		{
			func_5(uParam0);
			return 1;
		}
	}
	else
	{
		func_5(uParam0);
	}
	return 0;
}

int func_152()
{
	if (func_111())
	{
		if (unk_0x0E4018692D92041D(Local_117.f_5, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_153()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	
	if (unk_0x0E4018692D92041D(Local_117.f_5, 24))
	{
		if (Local_117.f_12 == 1)
		{
			if (Local_117.f_159 == 2)
			{
				vVar0 = { unk_0x8422CE67C0A53728() };
				vVar1 = { unk_0x8BE3F20792F38FEB(2) };
				vVar2 = { (-sin(vVar1.z) * cos(vVar1.x)), (cos(vVar1.z) * cos(vVar1.x)), sin(vVar1.x) };
				vVar3 = { 10f, 10f, 10f };
				vVar4 = { vVar0 + vVar2 * vVar3 };
				iVar5 = Global_262145.f_24009;
				if (unk_0x0E4018692D92041D(Local_117.f_5, 23))
				{
					iVar5 = Global_262145.f_24010;
				}
				unk_0xDAAE40D23C256135(Local_117.f_105 + Vector(0f, 0f, 0f), vVar4, iVar5, 1, joaat("weapon_stungun"), unk_0x33CD235DF1E6A94E(), 1, 1, -1f, unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0, 0, 1, 0, 0);
				Local_117.f_17 = 100;
				Local_117.f_18 = 0;
				unk_0x61AE8E2B7BB7D8BA(0, 300, 150);
				if (unk_0x66DE54BD13B1BD88(Local_117.f_32))
				{
					Local_117.f_32 = unk_0x8CCC0A0504C52531();
					unk_0xE9739440E5BF08EE(Local_117.f_32, "Shock_Fire", unk_0xE4B835FDC8B9B086(Local_117.f_110), Local_117.f_109, 1, 0);
				}
				if (Local_117.f_30 != -1)
				{
					unk_0xCBE6AF58552C63B2(Local_117.f_30);
					unk_0x44D426446FAF55FB(Local_117.f_30);
					Local_117.f_30 = -1;
				}
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 4);
				func_7(&(Local_117.f_164), 0, 0);
			}
		}
	}
}

void func_154()
{
	if ((unk_0x0E4018692D92041D(Local_117.f_5, 24) && !unk_0x0E4018692D92041D(Local_117.f_5, 3)) && !Local_117.f_108)
	{
		if (unk_0xA7F26E75DE91EC1D("scr_xs_dr"))
		{
			if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
			{
				unk_0x607F78FE329ECF8E("scr_xs_dr");
				unk_0xBD1D0C5C03336A1F("scr_xs_dr_emp", unk_0xE4B835FDC8B9B086(Local_117.f_110), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_117.f_17 = 100;
		unk_0x61AE8E2B7BB7D8BA(0, 300, 150);
		if (unk_0x66DE54BD13B1BD88(Local_117.f_32))
		{
			Local_117.f_32 = unk_0x8CCC0A0504C52531();
			unk_0xE9739440E5BF08EE(Local_117.f_32, "Shock_Fire", unk_0xE4B835FDC8B9B086(Local_117.f_110), Local_117.f_109, 1, 0);
		}
		if (Local_117.f_30 != -1)
		{
			unk_0xCBE6AF58552C63B2(Local_117.f_30);
			unk_0x44D426446FAF55FB(Local_117.f_30);
			Local_117.f_30 = -1;
		}
		func_155(unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(Local_117.f_110), 1), 0);
		unk_0x8950ED5730F62EE8(&(Local_117.f_5), 3);
		Local_117.f_108 = 1;
		func_7(&(Local_117.f_164), 0, 0);
	}
}

void func_155(vector3 vParam0, bool bParam1)
{
	struct<6> Var0;
	
	Var0 = 262560226;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_157(1, 1) == 0)
		{
			unk_0x09269A9CFC145847(1, &Var0, 6, func_157(1, 1));
		}
	}
	else if (Global_1681628.f_19 != func_14())
	{
		unk_0x09269A9CFC145847(1, &Var0, 6, func_156(Global_1681628.f_19));
	}
}

var func_156(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_157(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_87(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_158()
{
	return unk_0x0E4018692D92041D(Global_1681628, 8);
}

int func_159()
{
	if ((unk_0x4F94F07DAD382CDA(Local_117.f_110) && unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0)) && !unk_0x0E4018692D92041D(Local_117.f_5, 2))
	{
		return 1;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (func_135(unk_0x95B959F18401C09A()) && unk_0x0E4018692D92041D(Global_2527313, 0))
		{
		}
		else if (func_167())
		{
			if (unk_0x0D386FBDF1E8CD84(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
			{
				Local_117.f_24 = 1;
				return 1;
			}
		}
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 2))
	{
		Local_117.f_24 = 4;
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 9))
	{
		Local_117.f_24 = 1;
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 7))
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x8AE34E8B10270D31(unk_0xE4B835FDC8B9B086(Local_117.f_110)) || func_166(unk_0xF2D53AA87148ACED(Local_117.f_110), 0))
		{
			Local_117.f_24 = 3;
			return 1;
		}
	}
	if (func_164(unk_0x95B959F18401C09A()))
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (func_111())
	{
		if (Global_1589668 != func_14())
		{
			if (func_30(Global_1589668))
			{
				Local_117.f_24 = 0;
				return 1;
			}
		}
	}
	if (func_163())
	{
		Local_117.f_24 = 1;
		return 1;
	}
	if (func_162(unk_0x95B959F18401C09A()))
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (func_161())
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (func_160())
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (func_11())
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return Global_91021;
}

bool func_161()
{
	return unk_0x0E4018692D92041D(Global_1681628, 9);
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1626536[iVar0 /*603*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()
{
	vector3 vVar0;
	
	if (Local_117.f_16 == -1945204837)
	{
		if (func_18(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
		{
			if (unk_0x90D54DCF679C0BBE(unk_0xE4B835FDC8B9B086(Local_117.f_110)) == -25693127)
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(Local_117.f_110), 1) };
				if (vVar0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (func_18(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0xE4B835FDC8B9B086(Local_117.f_110), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		if (func_42(iParam0) && !func_165(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_166(int iParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0) || iParam1)
		{
			if (unk_0x8AE34E8B10270D31(iParam0))
			{
				if (unk_0x073F9A78D00FB9C0(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167()
{
	return unk_0x0E4018692D92041D(Global_1681628, 15);
}

void func_168()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	int iVar9;
	bool bVar10;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			vVar0 = { Local_117.f_105 };
			switch (Local_117.f_12)
			{
				case 0:
					vVar1 = { unk_0x8422CE67C0A53728() };
					vVar2 = { unk_0x8BE3F20792F38FEB(2) };
					vVar3 = { (-sin(vVar2.z) * cos(vVar2.x)), (cos(vVar2.z) * cos(vVar2.x)), sin(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					if (func_8())
					{
						vVar4 = { Global_262145.f_24609, Global_262145.f_24609, Global_262145.f_24609 };
					}
					vVar5 = { vVar1 + vVar3 * vVar4 };
					vVar0 = { unk_0xCD1EDCB38767B47C(Local_117.f_105, unk_0xC472E34C8FBEC678(unk_0xE4B835FDC8B9B086(Local_117.f_110)), 0f, -0.1f, 0f) };
					Local_117.f_117 = unk_0x36FB861F8CCF0EA4(vVar0, vVar5, 123, unk_0xE4B835FDC8B9B086(Local_117.f_110), 7);
					if (Local_117.f_117 != 0)
					{
						Local_117.f_12 = 1;
					}
					break;
				
				case 1:
					Local_117.f_159 = unk_0x819B6E76423AE494(Local_117.f_117, &iVar6, &vVar8, &uVar7, &iVar9);
					if (Local_117.f_159 == 2)
					{
						if (iVar6 == 0)
						{
							Local_117.f_13 = 1;
							vVar8 = { 0f, 0f, 0f };
							if (unk_0x0E4018692D92041D(Local_117.f_5, 11) && !func_8())
							{
								unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 11);
							}
							if (unk_0x0E4018692D92041D(Local_117.f_5, 23))
							{
								unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 23);
							}
							func_175();
						}
						else
						{
							Local_117.f_13 = 2;
							if (unk_0x765F6FEEFF39224F(iVar9))
							{
								if (unk_0x068481DAF84B9654(iVar9))
								{
									if (!unk_0xD62C4419A41F106A(iVar9, 0))
									{
										if (unk_0xE09156665EC2D83B(unk_0x22B02EC53152632C(iVar9)))
										{
											if (func_173(unk_0x95B959F18401C09A(), unk_0x5C7617A25D50AAE9(unk_0x22B02EC53152632C(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!unk_0x0E4018692D92041D(Local_117.f_5, 23))
											{
												unk_0x8950ED5730F62EE8(&(Local_117.f_5), 23);
												if (unk_0x0E4018692D92041D(Local_117.f_5, 11) && !func_8())
												{
													unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 11);
												}
											}
											if (!func_65(unk_0x95B959F18401C09A()) && !func_62(unk_0x95B959F18401C09A(), 236))
											{
												if ((func_172(unk_0x22B02EC53152632C(iVar9)) || func_171(unk_0x22B02EC53152632C(iVar9))) || func_170(unk_0x22B02EC53152632C(iVar9)))
												{
													func_61(Global_1574998);
													func_169(&(Local_117.f_172), 0, 0);
												}
												else
												{
													func_175();
												}
											}
										}
										if ((((!unk_0x0E4018692D92041D(Local_117.f_5, 11) && !bVar10) && func_18(Global_1681628.f_21)) && unk_0x72F7FAFD0710100C(Global_1681628.f_21, iVar9, 511)) && unk_0xE09156665EC2D83B(unk_0x22B02EC53152632C(iVar9)))
										{
											unk_0x8950ED5730F62EE8(&(Local_117.f_5), 11);
											if (unk_0x0E4018692D92041D(Local_117.f_5, 23))
											{
												unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_8())
									{
										if (unk_0x0E4018692D92041D(Local_117.f_5, 11))
										{
											unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 11);
										}
									}
									if (unk_0x0E4018692D92041D(Local_117.f_5, 23))
									{
										unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 23);
									}
									func_175();
								}
							}
							else
							{
								func_175();
							}
							Local_117.f_117 = 0;
							Local_117.f_12 = 0;
						}
					}
					else if (Local_117.f_159 == 0)
					{
						Local_117.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

void func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x78DCC5D0CB43DEBA();
		}
		else
		{
			*uParam0 = unk_0x765FF3592EC81689();
		}
	}
	else
	{
		*uParam0 = unk_0xE3903F59E2F22150();
	}
	uParam0->f_1 = 1;
}

int func_170(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x9334D6FFE155018F(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if ((((((((((((unk_0xD2FC3E8846422F96(iParam0) == 7 || unk_0xD2FC3E8846422F96(iParam0) == 8) || unk_0xD2FC3E8846422F96(iParam0) == 9) || unk_0xD2FC3E8846422F96(iParam0) == 10) || unk_0xD2FC3E8846422F96(iParam0) == 11) || unk_0xD2FC3E8846422F96(iParam0) == 12) || unk_0xD2FC3E8846422F96(iParam0) == 13) || unk_0xD2FC3E8846422F96(iParam0) == 14) || unk_0xD2FC3E8846422F96(iParam0) == 15) || unk_0xD2FC3E8846422F96(iParam0) == 16) || unk_0xD2FC3E8846422F96(iParam0) == 17) || unk_0xD2FC3E8846422F96(iParam0) == 18) || unk_0xD2FC3E8846422F96(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if ((((unk_0xD2FC3E8846422F96(iParam0) == 6 || unk_0xD2FC3E8846422F96(iParam0) == 29) || unk_0xD2FC3E8846422F96(iParam0) == 27) || unk_0x9334D6FFE155018F(iParam0) == -472287501) || unk_0x9334D6FFE155018F(iParam0) == -1533126372)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_174(iParam0);
	if (!iVar0 == func_14())
	{
		if (iVar0 == func_174(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_14();
}

void func_175()
{
	if (func_9(&(Local_117.f_172)))
	{
		if (func_6(&(Local_117.f_172), 60000, 0))
		{
			func_5(&(Local_117.f_172));
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) <= 0)
			{
				func_61(Global_1574987);
			}
		}
	}
}

void func_176()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	var uVar9;
	vector3 vVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((func_20() || func_8()) || func_22())
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0xB6071B99C63D2D9B(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
		{
			return;
		}
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			switch (Local_117.f_10)
			{
				case 0:
					if ((func_8() || func_22()) || func_20())
					{
						fVar5 = 0.3f;
					}
					else
					{
						fVar5 = (func_179(Local_117.f_156) * 1.5f);
					}
					if (func_20())
					{
						vVar6 = { Local_117.f_105 };
						vVar1 = { unk_0x8422CE67C0A53728() };
						vVar2 = { unk_0x8BE3F20792F38FEB(2) };
						vVar3 = { (-sin(vVar2.z) * cos(vVar2.x)), (cos(vVar2.z) * cos(vVar2.x)), sin(vVar2.x) };
						vVar4 = { 0.9f, 0.9f, 0.9f };
						vVar7 = { vVar1 + vVar3 * vVar4 };
					}
					else
					{
						vVar6 = { Local_117.f_105 };
						vVar7 = { Local_117.f_105 };
					}
					Local_117.f_116 = unk_0x0F79DCFDE3D6F778(vVar6, vVar7, fVar5, 511, unk_0xE4B835FDC8B9B086(Local_117.f_110), 4);
					if (Local_117.f_116 != 0)
					{
						Local_117.f_10 = 1;
					}
					break;
				
				case 1:
					iVar12 = unk_0x819B6E76423AE494(Local_117.f_116, &iVar8, &vVar10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_117.f_11 = 1;
							vVar10 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0x765F6FEEFF39224F(iVar11))
							{
								if (unk_0x680558231C80291D(iVar11))
								{
									if (!unk_0xD62C4419A41F106A(iVar11, 0) && unk_0x541D5C57194E73C4(iVar11) != Local_117.f_156)
									{
										if (unk_0x8BB475EA09C9A0EB(iVar11) > 0.5f || func_177(unk_0x541D5C57194E73C4(iVar11)))
										{
											if (!unk_0x0E4018692D92041D(Local_117.f_5, 9))
											{
												unk_0x8950ED5730F62EE8(&(Local_117.f_5), 9);
											}
										}
									}
								}
								else if (unk_0x068481DAF84B9654(iVar11))
								{
									if (!unk_0xD62C4419A41F106A(iVar11, 0))
									{
										if (!unk_0xE09156665EC2D83B(unk_0x22B02EC53152632C(iVar11)))
										{
											if (Local_117.f_26 == 0)
											{
												iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 83;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 88;
												}
												else
												{
													iVar13 = 77;
												}
												Local_117.f_26 = unk_0x4381C79571201852(iVar13, Local_117.f_105, 5000f);
												func_169(&(Local_117.f_178), 0, 0);
											}
										}
									}
								}
							}
							Local_117.f_11 = 2;
							unk_0x61AE8E2B7BB7D8BA(0, 300, 50);
							Local_117.f_116 = 0;
							Local_117.f_10 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_117.f_10 = 0;
					}
					break;
			}
			if (Local_117.f_26 != 0)
			{
				if (func_9(&(Local_117.f_178)))
				{
					if (func_6(&(Local_117.f_178), 5000, 0))
					{
						unk_0x6C6FE09E055D0855(Local_117.f_26);
						func_5(&(Local_117.f_178));
						Local_117.f_26 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case -692292317:
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_178(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x097E7778E3E162E8(iParam0) || unk_0x57D74362A8BD1490(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
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
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14097)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14098)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14100)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14099)
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
			if (Global_262145.f_18543)
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
			if (Global_262145.f_18545)
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
			if (Global_262145.f_18549)
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
			if (Global_262145.f_18546)
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
			if (Global_262145.f_18553)
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
			if (Global_262145.f_18551)
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
			if (Global_262145.f_18556)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20499)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20500)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

float func_179(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_180(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return unk_0x7EECA16E87982278((vVar0.z - vVar1.z));
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0xE96A50F1DE6657CB(iParam0))
	{
		unk_0xFEF5F9BB57EA2E8D(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_183(iParam0);
		if (iVar0 != 0)
		{
			func_181(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_181(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_182(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE96A50F1DE6657CB(Global_1315802[iVar0]))
		{
			unk_0xFEF5F9BB57EA2E8D(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (vmag(Global_1315806[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_182(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_184(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_185()
{
	int iVar0;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (func_18(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
		{
			iVar0 = func_188(unk_0xE4B835FDC8B9B086(Local_117.f_110));
			if (iVar0 != -1)
			{
				if (!unk_0x0E4018692D92041D(Global_1573352.f_367, iVar0) && !unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_554, iVar0))
				{
					func_186(1);
				}
			}
		}
	}
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		if (func_187())
		{
			if (!unk_0x0E4018692D92041D(Global_1681628, 9))
			{
				unk_0x8950ED5730F62EE8(&Global_1681628, 9);
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628, 9))
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 9);
	}
}

bool func_187()
{
	return unk_0x0E4018692D92041D(Global_1681628, 5);
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (func_196(iParam0))
		{
			return 15;
		}
		if (func_193(iParam0))
		{
			return 28;
		}
		if (func_192(iParam0))
		{
			return 23;
		}
		iVar0 = unk_0x65F35477FEAD6F0F(iParam0);
		if (iVar0 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = iVar1;
				func_189(iVar2);
				if (Global_1675125[iVar1] == iVar0)
				{
					return iVar2;
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1675125[iVar0] == 0)
	{
		Global_1675125[iVar0] = unk_0x30B9FCF52BAAEB11(func_191(iParam0), func_190(iParam0));
	}
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		default:
	}
	return "";
}

Vector3 func_191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_192(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((unk_0xD4B4F68F3449CBEC(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_193(int iParam0)
{
	return ((!unk_0xD62C4419A41F106A(iParam0, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_194());
}

int func_194()
{
	vector3 vVar0;
	
	if (!unk_0xBB5E373390A5F824())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (vdist2(func_195(unk_0x95B959F18401C09A()), vVar0) <= 25600f)
		{
			if (unk_0x73E7A21FD53144AB(vVar0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_195(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

bool func_196(int iParam0)
{
	return ((!unk_0xD62C4419A41F106A(iParam0, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_197());
}

int func_197()
{
	vector3 vVar0;
	
	if (!unk_0xBB5E373390A5F824())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (vdist2(func_195(unk_0x95B959F18401C09A()), vVar0) <= 25600f)
		{
			if (unk_0x73E7A21FD53144AB(vVar0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_20())
	{
		return;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0x49D25022440E65EE(Local_117.f_119))
		{
			if (unk_0xFAA5C555ED0CEC9B(Local_117.f_119) || iParam0)
			{
				if (!func_54())
				{
					func_49(0);
				}
				func_209(1);
				if ((!func_208() || unk_0x0E4018692D92041D(Local_117.f_5, 1)) || func_159())
				{
					unk_0xF3F3DC87D7163212();
				}
				else
				{
					unk_0x581AE7724ACAD410(9);
					unk_0x581AE7724ACAD410(7);
					unk_0x581AE7724ACAD410(8);
					func_57();
					func_206(1);
					iVar0 = unk_0x65F35477FEAD6F0F(unk_0xF2D53AA87148ACED(Local_117.f_110));
					if (unk_0xDE9B75BB528AC06E(iVar0))
					{
						Global_1681628.f_22 = iVar0;
						if (!unk_0x0E4018692D92041D(Local_117.f_5, 8))
						{
							Local_117.f_80 = func_205(unk_0x8691CE32DC5662A2(iVar0));
							unk_0x4E019380058F0F73(iVar0, &(Local_117.f_102), &(Local_117.f_16));
							unk_0x8950ED5730F62EE8(&(Local_117.f_5), 8);
						}
						iVar1 = 0;
						if (func_204(Local_117.f_105.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1681628.f_7 == -1f)
						{
							unk_0x7AE3E4D676C8B253(1f);
						}
						else
						{
							unk_0x7AE3E4D676C8B253(Global_1681628.f_7);
						}
						if (!func_135(unk_0x95B959F18401C09A()) && !func_201(unk_0x95B959F18401C09A()))
						{
							if (!func_200())
							{
								func_199(1);
							}
						}
						unk_0x8588EE3A8DC4CA1C(0, 0);
						unk_0xD5933DC5FAB0505E(Local_117.f_16, Local_117.f_102, Local_117.f_102.f_1, floor(Local_117.f_80), iVar1);
					}
					else
					{
						Local_117.f_16 = -1;
						if (Global_1681628.f_7 == -1f)
						{
							unk_0x7AE3E4D676C8B253(0f);
						}
						else
						{
							unk_0x7AE3E4D676C8B253(Global_1681628.f_7);
						}
						if (!func_200())
						{
							func_199(1);
						}
						unk_0x8588EE3A8DC4CA1C(0, 0);
						Global_1681628.f_22 = -1;
						if (unk_0x0E4018692D92041D(Local_117.f_5, 8))
						{
							unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_199(int iParam0)
{
	Global_2460889 = iParam0;
}

bool func_200()
{
	return Global_2460889;
}

int func_201(int iParam0)
{
	if (func_203(iParam0))
	{
		return 1;
	}
	if (func_202(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_66(iParam0, 9);
	}
	return 0;
}

int func_203(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_204(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_205(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_206(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93734.f_8 = 1;
	}
	else
	{
		Global_93734.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_207(iVar0);
		iVar0++;
	}
}

void func_207(int iParam0)
{
	Global_93734.f_178[iParam0] = 1;
	Global_93734.f_177 = 1;
}

bool func_208()
{
	return unk_0x0E4018692D92041D(Global_1681628, 4);
}

void func_209(int iParam0)
{
	if (Global_2528542.f_4545 != iParam0)
	{
		Global_2528542.f_4545 = iParam0;
	}
}

void func_210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	vector3 vVar22;
	float fVar23;
	float fVar24;
	var uVar25;
	var uVar26;
	vector3 vVar27;
	
	if (!func_20() || func_159())
	{
		return;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = unk_0x582A50CDE1F806AE(unk_0xE4B835FDC8B9B086(Local_117.f_110));
			fVar6 = unk_0xD3B014D54AEA6296(unk_0xE4B835FDC8B9B086(Local_117.f_110));
			fVar7 = (30f * timestep());
			func_215();
			unk_0x636CEDA67977F07B(2);
			func_214(&(Local_117[0]), &(Local_117[1]), &(Local_117[2]), &(Local_117[3]), 0, 0);
			if (unk_0x5D79F3D06EB318A0(0))
			{
				iVar4 = 2;
				Local_117[2] = (Local_117[2] * iVar4);
				Local_117[3] = (Local_117[3] * iVar4);
			}
			if (unk_0x8871859EF0AB8004())
			{
				Local_117[3] = (Local_117[3] * -1);
				Local_117[1] = (Local_117[1] * -1);
			}
			if ((Local_117[2] != 0 || Local_117[3] != 0) || (Local_117[0] != 0 || Local_117[1] != 0))
			{
				if (Local_117[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_117[2])));
				}
				else if (Local_117[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_117[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_117[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_117[3])));
				}
				else if (Local_117[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_117[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_117[2] != 0) || Local_117[0] != 0)
				{
					if (Local_117[2] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_117[2])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_117[0] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_117[0])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar15 = -1f;
							}
							else
							{
								fVar15 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar15 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar15 = -0.0001f;
							}
						}
						else
						{
							fVar15 = 0f;
						}
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar14 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_117[2] == 0 && Local_117[0] == 0)
					{
						if (vVar14.y > fVar2)
						{
							vVar14.y = fVar2;
						}
						else if (vVar14.y < -fVar2)
						{
							vVar14.y = -fVar2;
						}
					}
					else if (vVar14.y > fVar2)
					{
						vVar14.y = fVar2;
					}
					else if (vVar14.y < -fVar2)
					{
						vVar14.y = -fVar2;
					}
				}
				if (vVar14.x > fVar3)
				{
					vVar14.x = fVar3;
				}
				else if (vVar14.x < -fVar3)
				{
					vVar14.x = -fVar3;
				}
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 12))
				{
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 12);
				}
				unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar14.z, vVar14.y, vVar14.x), 2, 1);
			}
			else if (((Local_117[2] != 0 || Local_117[3] != 0) || Local_117[0] != 0) || Local_117[1] != 0)
			{
				vVar16 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				if (func_213())
				{
					if (func_212())
					{
						fVar18 = -1f;
						Local_117.f_86 = fVar18;
					}
				}
				else
				{
					if (Local_117[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_117[2])));
						Local_117.f_86 = fVar17;
					}
					else if (Local_117[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_117[0])));
						Local_117.f_86 = fVar17;
					}
					else
					{
						fVar17 = 0f;
					}
					if (Local_117[3] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_117[3])));
						Local_117.f_86 = fVar17;
					}
					else if (Local_117[1] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_117[1])));
						Local_117.f_86 = fVar17;
					}
					else
					{
						fVar18 = 0f;
					}
				}
				fVar19 = -(((fVar18 * 0.05f) * fVar7) * fVar1);
				fVar20 = -(((fVar17 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_117[2] == 0 && Local_117[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (vVar16.y < 2f && vVar16.y > 0f)
						{
							fVar17 = 0.0001f;
						}
						else if (vVar16.y > -2f && vVar16.y < 0f)
						{
							fVar17 = -0.0001f;
						}
						fVar20 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar21 = { Vector(0f, fVar20, fVar19) + vVar16 };
				if (vVar21.y > fVar2)
				{
					vVar21.y = fVar2;
				}
				else if (vVar21.y < -fVar2)
				{
					vVar21.y = -fVar2;
				}
				if (vVar21.x > fVar3)
				{
					vVar21.x = fVar3;
				}
				else if (vVar21.x < -fVar3)
				{
					vVar21.x = -fVar3;
				}
				if (unk_0x0E4018692D92041D(Local_117.f_5, 12))
				{
					unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 12);
				}
				unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar21.y, vVar21.x), 2, 1);
			}
			else
			{
				Local_117.f_86 = 0f;
				vVar22 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 0f)
						{
							fVar23 = -1f;
						}
						else
						{
							fVar23 = 1f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar22.x < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 2f && vVar22.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar22.y > -2f && vVar22.y < 0f)
						{
							fVar23 = -0.0001f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (vVar22.x != 0f)
					{
						if (vVar22.x < 2f && vVar22.x > 0f)
						{
							fVar24 = 0.0001f;
						}
						else if (vVar22.x > -2f && vVar22.x < 0f)
						{
							fVar24 = -0.0001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					uVar25 = func_211(-(((fVar24 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar26 = func_211(-(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar27 = { Vector(0f, uVar26, uVar25) + vVar22 };
					if (unk_0x0E4018692D92041D(Local_117.f_5, 12))
					{
						vVar27.x = vVar22.x;
					}
					unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar22.z, vVar27.y, vVar27.x), 2, 1);
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

float func_211(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_212()
{
	return unk_0x0E4018692D92041D(Local_117.f_5, 22);
}

bool func_213()
{
	return unk_0x0E4018692D92041D(Local_117.f_5, 21);
}

void func_214(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x405A2F54470CCC35(2, 218) * 127f));
	*uParam1 = floor((unk_0x405A2F54470CCC35(2, 219) * 127f));
	*uParam2 = floor((unk_0x405A2F54470CCC35(2, 220) * 127f));
	*uParam3 = floor((unk_0x405A2F54470CCC35(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xAED1F3230E36A119(2, 218))
		{
			*uParam0 = floor((unk_0x2EEE89525F08C860(2, 218) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 219))
		{
			*uParam1 = floor((unk_0x2EEE89525F08C860(2, 219) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 220))
		{
			*uParam2 = floor((unk_0x2EEE89525F08C860(2, 220) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 221))
		{
			*uParam3 = floor((unk_0x2EEE89525F08C860(2, 221) * 127f));
		}
	}
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (bParam5)
		{
			if (unk_0x8871859EF0AB8004())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA5C0D3C085A49E49())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_215()
{
	if (func_111())
	{
		switch (Local_117.f_23)
		{
			case 0:
				Local_117.f_84 = 90f;
				Local_117.f_83 = 90f;
				break;
			
			case 1:
				Local_117.f_84 = 75f;
				Local_117.f_83 = 75f;
				break;
			
			case 2:
				Local_117.f_84 = 45f;
				Local_117.f_83 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_117.f_23)
		{
			case 0:
				Local_117.f_84 = 90f;
				Local_117.f_83 = 90f;
				break;
			
			case 1:
				Local_117.f_84 = 80f;
				Local_117.f_83 = 80f;
				break;
			
			case 2:
				Local_117.f_84 = 70f;
				Local_117.f_83 = 70f;
				break;
			}
	}
}

void func_216()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	vector3 vVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	vector3 vVar23;
	vector3 vVar24;
	float fVar25;
	float fVar26;
	var uVar27;
	var uVar28;
	vector3 vVar29;
	
	if ((unk_0x0E4018692D92041D(Local_117.f_5, 1) || func_159()) || func_20())
	{
		return;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			fVar0 = 40f;
			fVar1 = 40f;
			fVar2 = 19f;
			fVar3 = 14f;
			iVar4 = 1;
			fVar5 = unk_0x582A50CDE1F806AE(unk_0xE4B835FDC8B9B086(Local_117.f_110));
			fVar6 = unk_0xD3B014D54AEA6296(unk_0xE4B835FDC8B9B086(Local_117.f_110));
			fVar7 = (30f * timestep());
			func_215();
			unk_0x636CEDA67977F07B(2);
			func_214(&(Local_117[0]), &(Local_117[1]), &(Local_117[2]), &(Local_117[3]), 0, 0);
			if (unk_0x5D79F3D06EB318A0(0))
			{
				iVar4 = 5;
				Local_117[2] = (Local_117[2] * iVar4);
				Local_117[3] = (Local_117[3] * iVar4);
			}
			if (unk_0x8871859EF0AB8004())
			{
				Local_117[3] = (Local_117[3] * -1);
			}
			if (func_6(&(Local_117.f_190), 750, 0))
			{
				if (!unk_0x5D79F3D06EB318A0(0))
				{
					bVar8 = unk_0x5EBE50D55314CEAD(0, 210);
				}
				else
				{
					bVar8 = (unk_0x5EBE50D55314CEAD(0, 241) || unk_0x5EBE50D55314CEAD(0, 242));
					if (unk_0x5EBE50D55314CEAD(0, 241))
					{
						bVar9 = true;
					}
				}
				if (bVar8)
				{
					func_169(&(Local_117.f_190), 0, 0);
				}
			}
			if (bVar8 && !func_213())
			{
				if (!unk_0x5D79F3D06EB318A0(0))
				{
					Local_117.f_23++;
				}
				else if (bVar9)
				{
					Local_117.f_23 = (Local_117.f_23 - 1);
				}
				else
				{
					Local_117.f_23++;
				}
				if (unk_0x66DE54BD13B1BD88(Local_117.f_36))
				{
					Local_117.f_36 = unk_0x8CCC0A0504C52531();
					unk_0x0F8EAEEC97DDBCB3(Local_117.f_36, "HUD_Zoom_Change", Local_117.f_109, 1);
				}
				if (Local_117.f_23 > 2)
				{
					Local_117.f_23 = 0;
				}
				else if (Local_117.f_23 < 0)
				{
					Local_117.f_23 = 2;
				}
			}
			else if (unk_0x66DE54BD13B1BD88(Local_117.f_36))
			{
				unk_0xCBE6AF58552C63B2(Local_117.f_36);
				unk_0x44D426446FAF55FB(Local_117.f_36);
				Local_117.f_36 = -1;
			}
			Local_117.f_85 = (Local_117.f_85 + (((Local_117.f_83 - Local_117.f_85) * 0.06f) * fVar7));
			unk_0x63B608CD1957089E(Local_117.f_119, Local_117.f_85);
			if (Local_117[2] != 0 || Local_117[3] != 0)
			{
				if (Local_117[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_117[2])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_117[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_117[3])));
				}
				else
				{
					fVar11 = 0f;
				}
				vVar15 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * fVar0);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_117[0] != 0) && !func_54())
				{
					if (Local_117[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_117[0])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (vVar15.y != 0f)
						{
							if (vVar15.y < 1.5f && vVar15.y > 0f)
							{
								fVar17 = 0.001f;
							}
							else if (vVar15.y > -1.5f && vVar15.y < 0f)
							{
								fVar17 = -0.001f;
							}
						}
						else
						{
							fVar17 = 0f;
						}
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				vVar16 = { Vector(fVar13, fVar14, fVar12) + vVar15 };
				if (fVar5 != 0f)
				{
					if (Local_117[0] == 0)
					{
						if (vVar16.y > fVar2)
						{
							vVar16.y = fVar2;
						}
						else if (vVar16.y < -fVar2)
						{
							vVar16.y = -fVar2;
						}
					}
					else if (vVar16.y > fVar2)
					{
						vVar16.y = fVar2;
					}
					else if (vVar16.y < -fVar2)
					{
						vVar16.y = -fVar2;
					}
				}
				if (vVar16.x > fVar3)
				{
					vVar16.x = fVar3;
				}
				else if (vVar16.x < -fVar3)
				{
					vVar16.x = -fVar3;
				}
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 12))
				{
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 12);
				}
				unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar16.y, vVar16.x), 2, 1);
			}
			else if (((Local_117[0] != 0 || Local_117[1] != 0) && !func_213()) && !func_54())
			{
				vVar18 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				if (func_213())
				{
					if (func_212())
					{
						fVar20 = -1f;
						Local_117.f_86 = fVar20;
					}
				}
				else
				{
					if (Local_117[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_117[0])));
						Local_117.f_86 = fVar19;
					}
					else
					{
						fVar19 = 0f;
					}
					if (Local_117[1] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_117[1])));
						Local_117.f_86 = fVar19;
					}
					else
					{
						fVar20 = 0f;
					}
				}
				fVar21 = -(((fVar20 * 0.05f) * fVar7) * fVar1);
				fVar22 = -(((fVar19 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if ((Local_117[0] == 0 && !func_54()) || func_213())
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (vVar18.y < 1.5f && vVar18.y > 0f)
						{
							fVar19 = 0.001f;
						}
						else if (vVar18.y > -1.5f && vVar18.y < 0f)
						{
							fVar19 = -0.001f;
						}
						fVar22 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar23 = { Vector(0f, fVar22, fVar21) + vVar18 };
				if (vVar23.y > fVar2)
				{
					vVar23.y = fVar2;
				}
				else if (vVar23.y < -fVar2)
				{
					vVar23.y = -fVar2;
				}
				if (vVar23.x > fVar3)
				{
					vVar23.x = fVar3;
				}
				else if (vVar23.x < -fVar3)
				{
					vVar23.x = -fVar3;
				}
				if (unk_0x0E4018692D92041D(Local_117.f_5, 12))
				{
					unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 12);
				}
				unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar18.z, vVar23.y, vVar23.x), 2, 1);
			}
			else if (!func_212() && !func_213())
			{
				Local_117.f_86 = 0f;
				vVar24 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar24.y != 0f)
					{
						if (vVar24.y < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar24.x < 0f)
						{
							fVar26 = -1f;
						}
						else
						{
							fVar26 = 1f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					if (vVar24.y != 0f)
					{
						if (vVar24.y < 1.5f && vVar24.y > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (vVar24.y > -1.5f && vVar24.y < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (vVar24.x != 0f)
					{
						if (vVar24.x < 1.5f && vVar24.x > 0f)
						{
							fVar26 = 0.001f;
						}
						else if (vVar24.x > -1.5f && vVar24.x < 0f)
						{
							fVar26 = -0.001f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					uVar27 = func_211(-(((fVar26 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar28 = func_211(-(((fVar25 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar29 = { Vector(0f, uVar28, uVar27) + vVar24 };
					if (unk_0x0E4018692D92041D(Local_117.f_5, 12))
					{
						vVar29.x = vVar24.x;
					}
					unk_0x1C8705F667F673EA(unk_0xE4B835FDC8B9B086(Local_117.f_110), Vector(0f, 0f, 0f) + Vector(vVar24.z, vVar29.y, vVar29.x), 2, 1);
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

void func_217()
{
	int iVar0;
	int iVar1;
	
	if (func_48(unk_0x95B959F18401C09A(), 0))
	{
		iVar0 = func_148(0);
		Local_117.f_96 = { func_220(&Local_117) };
		if (!unk_0x765F6FEEFF39224F(Local_117.f_112))
		{
			if (!func_219(Local_117.f_96))
			{
				if (func_147(iVar0))
				{
					Local_117.f_112 = unk_0x7CA67831169E8AA6(iVar0, Local_117.f_96, 0, false, 1);
					unk_0xC7C47D4054903839(Local_117.f_112, Local_117.f_96, 0, 0, 1);
					unk_0x23298AB8A7D0F403(Local_117.f_112, true, 0);
					unk_0x43D47AD82DA3C6EC(Local_117.f_112, 1, 1);
					unk_0x825E05C179F7D608(Local_117.f_112, 1);
					unk_0x3C990C409B3845DE(Local_117.f_112, func_218());
					unk_0xF70578F5CD9822CB(Local_117.f_112, true);
					unk_0x0CDD28A9DFCE2FCE(Local_117.f_112, false, 0);
					unk_0x71CA80D41E1338B4(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x68F833BFE3A28FEA(Local_117.f_96, 2f, iVar0, 0, 0, 0);
			if (unk_0x765F6FEEFF39224F(iVar1) && iVar1 != Local_117.f_112)
			{
				if (unk_0x0A81FE3D92AE2AC9(iVar1))
				{
					unk_0x91962EC406944B72(iVar1, 0, 0);
					unk_0xF70578F5CD9822CB(iVar1, true);
					unk_0x0CDD28A9DFCE2FCE(iVar1, true, 0);
				}
				else
				{
					unk_0xA5F44EC021F96C6B(iVar1);
				}
			}
		}
	}
	else
	{
		Local_117.f_96 = { func_220(&Local_117) };
	}
}

float func_218()
{
	if (Global_1681628.f_5 != 0f)
	{
		return Global_1681628.f_5;
	}
	return 0f;
}

int func_219(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_220(var uParam0)
{
	if (!func_219(Global_1681628.f_8))
	{
		return Global_1681628.f_8;
	}
	else
	{
		return uParam0->f_96;
	}
	return 0f, 0f, 0f;
}

void func_221()
{
	if (Local_117.f_30 != -1)
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_30);
		unk_0x44D426446FAF55FB(Local_117.f_30);
		Local_117.f_30 = -1;
	}
}

int func_222()
{
	if (unk_0xD9C92B0885A075F8() || unk_0xBAA5E93732372E34())
	{
		return 1;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return 1;
	}
	if (func_141())
	{
		return 1;
	}
	if (func_227(unk_0x95B959F18401C09A()) && !func_226())
	{
		return 1;
	}
	if (func_135(unk_0x95B959F18401C09A()))
	{
		if (unk_0x0E4018692D92041D(Global_2527313, 0))
		{
			return 1;
		}
	}
	if (Global_1657075 || Global_1312791)
	{
		func_225(1);
		return 1;
	}
	if ((func_223(0) || func_140(1)) || func_139())
	{
		func_49(0);
		func_57();
		func_74();
		return 1;
	}
	return 0;
}

int func_223(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_224(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xF1CDE9FD207C4CD8(0, 25) || unk_0xF1CDE9FD207C4CD8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 19) || (!bParam0 && unk_0x1CAA347A3C84C225(0, 19)))
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (((unk_0xF1CDE9FD207C4CD8(0, 166) || unk_0xF1CDE9FD207C4CD8(0, 167)) || unk_0xF1CDE9FD207C4CD8(0, 168)) || unk_0xF1CDE9FD207C4CD8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1CAA347A3C84C225(0, 166) || unk_0x1CAA347A3C84C225(0, 167)) || unk_0x1CAA347A3C84C225(0, 168)) || unk_0x1CAA347A3C84C225(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0xF9FB5255747DBE88())
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225(bool bParam0)
{
	if (bParam0)
	{
		if (!func_21())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 20);
		}
	}
	else if (func_21())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 20);
	}
}

bool func_226()
{
	return (unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 0));
}

int func_227(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return 1;
	}
	if (func_228())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_228()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

void func_229()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_20())
	{
		return;
	}
	if (func_208())
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
		{
			if (!unk_0xE38E3CF1625A4145(Local_117.f_121))
			{
				Local_117.f_121 = func_231(Local_117.f_105, 0);
				unk_0xA20C1DE21F2F071C(Local_117.f_121, 627);
			}
			else
			{
				fVar0 = func_230(Local_117.f_81);
				fVar1 = Local_117.f_105;
				fVar2 = Local_117.f_105.f_1;
				unk_0xAE71BEA7BBBFB78F(Local_117.f_121, 2);
				unk_0xA0220BF0AB292278(Local_117.f_121, Local_117.f_105);
				if (((func_8() || func_22()) && unk_0xD9C92B0885A075F8()) && unk_0x289064CB38B560AA())
				{
					if (!unk_0x777432A66D6AF95A())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0xA0220BF0AB292278(Local_117.f_121, fVar1, fVar2, 0f);
						unk_0x1466A087F0134E36(fVar1, fVar2);
						unk_0x6A26C1F1DE3F6B15();
					}
				}
				unk_0x1753FAC57CD1B746(fVar1, fVar2);
				unk_0x9D148E7C7C25619B(Local_117.f_121, round(fVar0));
				unk_0xCE5C49921A521962(Local_117.f_121, 1f);
				unk_0xC51C58C963968740(Local_117.f_121, 9);
				unk_0x15FBE4622810D829(round(fVar0));
			}
		}
	}
}

float func_230(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_231(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_232(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, iParam1);
	return iVar0;
}

float func_232(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_233()
{
	if (func_20())
	{
		if (Local_117.f_105.f_2 >= (func_130() - 20f))
		{
			if (unk_0x66DE54BD13B1BD88(Local_117.f_34))
			{
				Local_117.f_34 = unk_0x8CCC0A0504C52531();
				unk_0x0F8EAEEC97DDBCB3(Local_117.f_34, "Out_Of_Bounds_Alarm_Loop", Local_117.f_109, 1);
			}
		}
		else if (!unk_0x66DE54BD13B1BD88(Local_117.f_34))
		{
			unk_0xCBE6AF58552C63B2(Local_117.f_34);
			unk_0x44D426446FAF55FB(Local_117.f_34);
			Local_117.f_34 = -1;
		}
	}
}

void func_234()
{
	if (func_22() || func_111())
	{
		switch (Local_117.f_158)
		{
			case 0:
				func_254();
				break;
			
			case 1:
				func_244();
				break;
			
			case 2:
				func_242();
				break;
			
			case 3:
				func_235();
				break;
			}
	}
}

void func_235()
{
	func_50(1);
	if (!func_241())
	{
		unk_0xACCDA78123DB57B0(500);
	}
	func_239(0);
	func_237(0);
	func_236(0);
}

void func_236(int iParam0)
{
	if (Local_117.f_158 != iParam0)
	{
		Local_117.f_158 = iParam0;
	}
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		if (!func_238())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 17);
		}
	}
	else if (func_238())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 17);
	}
}

bool func_238()
{
	return unk_0x0E4018692D92041D(Global_1681628, 17);
}

void func_239(bool bParam0)
{
	if (bParam0)
	{
		if (!func_240())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 18);
		}
	}
	else if (func_240())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 18);
	}
}

bool func_240()
{
	return unk_0x0E4018692D92041D(Global_1681628, 18);
}

bool func_241()
{
	return Global_1671295.f_163;
}

void func_242()
{
	if (func_240() || unk_0xD9C92B0885A075F8())
	{
		func_50(1);
		func_243(0);
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
		func_236(3);
	}
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		if (!func_54())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 19);
		}
	}
	else if (func_54())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 19);
	}
}

void func_244()
{
	if (unk_0xBB5E373390A5F824())
	{
		if (func_6(&(Local_117.f_180), 3000, 0))
		{
			if (func_253())
			{
				if (unk_0x0E4018692D92041D(Global_4269308, 2) || func_6(&(Local_117.f_184), 8000, 0))
				{
					if (!unk_0x0E4018692D92041D(Global_4269308, 2))
					{
					}
					unk_0xACCDA78123DB57B0(500);
					func_245(unk_0x95B959F18401C09A(), 1, 0, 0);
					func_5(&(Local_117.f_180));
					func_5(&(Local_117.f_184));
					func_236(2);
				}
			}
			else if (func_6(&(Local_117.f_184), 15000, 0))
			{
				func_5(&(Local_117.f_180));
				func_5(&(Local_117.f_184));
				func_50(1);
				func_243(0);
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
				func_236(3);
			}
		}
	}
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC78552DAEE19D97B())
		{
			unk_0x05CFB4D665C2A88D(false);
		}
	}
	if (func_252())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		iVar0 = iParam2;
		unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_250())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC4DEA49C5B465481(iParam0) && (unk_0xF272A2699B521CE6(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xD62C4419A41F106A(unk_0x378BD4B3881338C2(iParam0), 0))
			{
				return;
			}
			iVar25 = unk_0x378BD4B3881338C2(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xB331FCEB94EB05C8())
				{
					unk_0x7FB656A6AFE2A7A8(1);
				}
				else if (bVar13 || (!func_87(unk_0x95B959F18401C09A(), 0) && !func_228()))
				{
					unk_0x0CDD28A9DFCE2FCE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xB331FCEB94EB05C8() && !bVar18)
					{
						unk_0x7FB656A6AFE2A7A8(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_249(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, true, 0);
					}
				}
				if (!unk_0x9F4718FD61B07058(iVar25))
				{
					if (!bVar20)
					{
						unk_0xF70578F5CD9822CB(iVar25, false);
					}
					unk_0xFE8201EFB515D77B(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xF70578F5CD9822CB(iVar25, false);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, true);
				unk_0xF23201C524E43F1C(iParam0, 0);
				unk_0x1B9C92466C9CAC2A(iParam0, 0);
				if (unk_0x055C6611FF8B993C(iVar25) && unk_0x7B3767E83E6F888A(iVar25))
				{
					unk_0x1130EB06CDE2ECD0(iVar25);
				}
				unk_0xC2A270E9C5578803(iVar25, 1);
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) == 0)
				{
					func_248();
					func_247();
				}
				if (unk_0x5D1B43675B257F3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE980BAFD70E8A4B3())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_249(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, !bVar14, 0);
					}
					if (!unk_0x9F4718FD61B07058(iVar25))
					{
						if (!bVar20)
						{
							unk_0xF70578F5CD9822CB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFE8201EFB515D77B(iVar25, 1);
						}
					}
					if (func_246(Global_4456448.f_161209))
					{
						unk_0xF70578F5CD9822CB(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xF23201C524E43F1C(iParam0, 0);
				}
				else
				{
					unk_0xF23201C524E43F1C(iParam0, 1);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x691E8EF7DCB53AAD(iVar25) && !unk_0xF0D230FB550CD6EB(iVar25, 0))
					{
						unk_0x31826EF4A8BC8E9F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar26);
		}
	}
}

bool func_246(int iParam0)
{
	return iParam0 == 17;
}

void func_247()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_248()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_249(int iParam0)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_250()
{
	if (func_251() == 0)
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	return Global_1312467.f_18;
}

int func_252()
{
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_253()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_254()
{
	if (func_270())
	{
		if (unk_0x1771F6BAF60B44FA(2, 201) || unk_0xC6FADCE8D6467372(2, 201))
		{
			func_243(1);
			if (unk_0x73DA1542B2F0C458())
			{
				func_98(-1);
				func_245(unk_0x95B959F18401C09A(), 0, 0, 0);
				unk_0x7EDEAEAED85BEE4F(500);
				func_268(1, -1);
				func_255(3, 1, 1, 0);
				func_7(&(Local_117.f_180), 0, 0);
				func_7(&(Local_117.f_184), 0, 0);
				func_236(1);
			}
		}
	}
}

int func_255(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_71590)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!unk_0x0E4018692D92041D(Global_4269308, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x8950ED5730F62EE8(&Global_4269308, 14);
				unk_0x8950ED5730F62EE8(&Global_4269308, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x8950ED5730F62EE8(&Global_4269308, 14);
				unk_0x8950ED5730F62EE8(&Global_4269308, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x8950ED5730F62EE8(&Global_4269308, 14);
				unk_0x8950ED5730F62EE8(&Global_4269308, 27);
			}
		}
		if (Global_2430[iParam0 /*15*/].f_9 == 0)
		{
			func_266();
		}
		if (unk_0x1BCDA92AD0A7835B(Global_2430[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xCE689A8E8C42ED78(&Global_4269308, 14);
			unk_0xCE689A8E8C42ED78(&Global_4269308, 16);
			unk_0xCE689A8E8C42ED78(&Global_4269308, 15);
			unk_0xCE689A8E8C42ED78(&Global_4269308, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_260();
	if (Global_14553.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_53(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14519 == 1)
	{
		return 0;
	}
	if (Global_14553.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x8ED4328770BEE4A1(Global_14550))
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14553.f_1 < 4)
			{
				func_259("cellphone_flashhand");
				if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
				{
					Global_14550 = start_new_script("cellphone_flashhand", 1424);
				}
				unk_0x841080481716E87C("cellphone_flashhand");
			}
		}
	}
	while (!Global_14535)
	{
		wait(0);
	}
	func_266();
	func_256();
	if (unk_0x1BCDA92AD0A7835B(Global_2430[iParam0 /*15*/].f_9) == 0)
	{
		Global_3029 = 0;
		Global_14553.f_1 = 7;
		func_259(&(Global_2430[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x1BCDA92AD0A7835B(Global_2430[iParam0 /*15*/].f_9) == 0)
			{
				Global_14551 = start_new_script(&(Global_2430[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x1BCDA92AD0A7835B(Global_2430[iParam0 /*15*/].f_9) == 0)
		{
			Global_14551 = start_new_script(&(Global_2430[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x841080481716E87C(&(Global_2430[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_256()
{
	if (Global_71590 == 0)
	{
		Global_2430[14 /*15*/].f_4 = -99;
		Global_2430[4 /*15*/].f_4 = -99;
		if (Global_2458608)
		{
			if (func_258(14))
			{
				func_257(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_257(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_257(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_257(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_257(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2430[iParam0 /*15*/]), sParam1, 16);
	Global_2430[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2430[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2430[iParam0 /*15*/].f_9 = unk_0x36163153849DFDA1(sParam3);
	Global_2430[iParam0 /*15*/].f_10 = iParam4;
	Global_2430[iParam0 /*15*/].f_11 = iParam5;
	Global_2430[iParam0 /*15*/].f_12 = iParam6;
	Global_2430[iParam0 /*15*/].f_13 = iParam7;
	Global_2430[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2430[iParam0 /*15*/].f_12 == 0)
	{
		Global_2430[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_13 == 0)
	{
		Global_2430[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_14 == 0)
	{
		Global_2430[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_258(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_259(char* sParam0)
{
	unk_0x8F59DE352CFE248B(sParam0);
	while (!unk_0x07AB0925A06BD5AD(sParam0))
	{
		wait(0);
	}
}

void func_260()
{
	if (func_258(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_261();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_261()
{
	func_262();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_262()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_265(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_264(unk_0x33CD235DF1E6A94E());
			if (func_263(iVar0) && (!func_258(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_263(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_263(int iParam0)
{
	return iParam0 < 3;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_265(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_265(int iParam0)
{
	if (func_263(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2430[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71590 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (Global_106565.f_28044[iVar2 /*29*/].f_19[Global_14553] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_257(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_257(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_257(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36425 == 15 && func_267(0) == 0) && Global_2428 == 0)
		{
			func_257(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 0;
			Global_2429 = 255;
		}
		else
		{
			func_257(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 1;
			Global_2429 = 42;
		}
		if (iVar1 == 1)
		{
			func_257(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_257(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_257(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_257(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_257(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106565.f_14045.f_89 == 1)
		{
			func_257(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106565.f_14045.f_88 == 1)
		{
			func_257(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_257(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_257(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_257(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_257(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_257(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_257(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_257(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_257(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_257(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_257(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_257(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_257(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x0E4018692D92041D(Global_4269308, 4) == 1)
		{
			func_257(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_257(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_257(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_257(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_257(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_257(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_257(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_257(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_257(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_257(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_257(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_257(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_257(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_257(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_257(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_257(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_257(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x0E4018692D92041D(Global_4269308, 4) == 1)
		{
			if (Global_1573916)
			{
				func_257(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_4269308, 20) == 1)
			{
				func_257(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_4269308, 22) == 1)
			{
				func_257(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_4269308, 26) == 1)
			{
				func_257(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0x0E4018692D92041D(Global_4269308, 4) == 0 && Global_1573916 == 0) && unk_0x0E4018692D92041D(Global_4269308, 20) == 0) && unk_0x0E4018692D92041D(Global_4269308, 22) == 0) && unk_0x0E4018692D92041D(Global_4269308, 26) == 0)
		{
			func_257(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_267(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_268(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_95(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		unk_0x019859CB72B1DB4C(15);
		Global_17411.f_8353 = 0;
	}
	unk_0x5E1FA2076D53C3F5(0f);
	if (Global_17411.f_5628[iVar0])
	{
		unk_0xB073DB452891DC0B(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		unk_0x30F6F0B876E12AD8("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		unk_0x30F6F0B876E12AD8("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_269(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_269(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*uParam0))
		{
			unk_0x83A1D480DB0B52CC(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_270()
{
	if (func_54())
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if ((func_140(0) || func_139()) || unk_0x239E30C22D4EE2C6())
	{
		func_5(&(Local_117.f_188));
		func_7(&(Local_117.f_188), 0, 0);
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
		func_74();
		return 0;
	}
	else if (func_9(&(Local_117.f_188)))
	{
		if (!func_6(&(Local_117.f_188), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 16);
			func_5(&(Local_117.f_188));
		}
	}
	if (func_135(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

void func_271()
{
	if (func_272())
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
		{
			if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
			{
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 25))
				{
					unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_117.f_110), true);
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 25);
				}
			}
			else
			{
				unk_0x254D3936DA813A55(Local_117.f_110);
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 25))
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
		{
			if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
			{
				unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_117.f_110), false);
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 25);
			}
			else
			{
				unk_0x254D3936DA813A55(Local_117.f_110);
			}
		}
	}
}

int func_272()
{
	if (func_135(unk_0x95B959F18401C09A()))
	{
		if (unk_0x0E4018692D92041D(Global_2527313, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_273()
{
	int iVar0;
	
	if (func_20())
	{
		Global_1681628.f_1 = 0;
	}
	if (func_274() || func_159())
	{
		if (!func_9(&(Local_117.f_162)))
		{
			func_7(&(Local_117.f_162), 0, 0);
		}
		else if (func_6(&(Local_117.f_162), Global_1681628.f_1, 0) || func_159())
		{
			func_5(&(Local_117.f_160));
			if (func_20())
			{
				if (func_18(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x1E91E6361FECDC81(unk_0x33CD235DF1E6A94E(), Local_117.f_105, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					unk_0xB7C14A395669007F(Local_117.f_105, 72, 0.5f, 1, 0, 1f, 0);
				}
				unk_0x61AE8E2B7BB7D8BA(0, 300, 200);
				unk_0xCE5A2C773B9FDC41(Local_117.f_110, 1);
				unk_0x21675F65D589CACE();
				iVar0 = unk_0xE4B835FDC8B9B086(Local_117.f_110);
				unk_0xEC26F4BFC9942A0C(&iVar0);
				unk_0x8950ED5730F62EE8(&(Local_117.f_6), 2);
			}
			func_305(1);
			func_304(3);
		}
	}
	else if (func_9(&(Local_117.f_162)))
	{
		func_169(&(Local_117.f_162), 0, 0);
	}
}

int func_274()
{
	if ((unk_0x4F94F07DAD382CDA(Local_117.f_110) && unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0)) && !unk_0x0E4018692D92041D(Local_117.f_5, 2))
	{
		return 1;
	}
	if (Local_117.f_11 == 2)
	{
		Local_117.f_24 = 1;
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 1))
	{
		return 1;
	}
	if (func_280())
	{
		Local_117.f_24 = 5;
		return 1;
	}
	if (func_111() && func_276())
	{
		Local_117.f_24 = 5;
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 2))
	{
		Local_117.f_24 = 4;
		return 1;
	}
	if (func_145())
	{
		if (!func_9(&(Local_117.f_170)))
		{
			func_7(&(Local_117.f_170), 0, 0);
		}
		else if (func_6(&(Local_117.f_170), 3000, 0))
		{
			Local_117.f_24 = 0;
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 7))
	{
		Local_117.f_24 = 0;
		return 1;
	}
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x8AE34E8B10270D31(unk_0xE4B835FDC8B9B086(Local_117.f_110)) || func_166(unk_0xF2D53AA87148ACED(Local_117.f_110), 0))
		{
			Local_117.f_24 = 3;
			return 1;
		}
	}
	if (!func_111() && !func_275())
	{
		if (Local_117.f_105.f_2 >= func_130())
		{
			Local_117.f_24 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_275()
{
	return unk_0x0E4018692D92041D(Global_1681628.f_2, 0);
}

int func_276()
{
	int iVar0;
	
	if (func_279())
	{
		return 0;
	}
	if (func_43(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
		{
			if (func_111())
			{
				if (unk_0x765F6FEEFF39224F(func_278()) && !unk_0xD62C4419A41F106A(func_278(), 0))
				{
					iVar0 = func_278();
				}
			}
			else
			{
				iVar0 = unk_0x33CD235DF1E6A94E();
			}
			if (func_18(iVar0) && func_18(unk_0xE4B835FDC8B9B086(Local_117.f_110)))
			{
				Local_117.f_77 = func_277(iVar0, unk_0xE4B835FDC8B9B086(Local_117.f_110), 1);
				if (Local_117.f_77 > func_130())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_277(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, 0) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, iParam2);
}

int func_278()
{
	if (Global_1589668 != func_14())
	{
		if (!func_30(Global_1589668))
		{
			if (unk_0x765F6FEEFF39224F(Global_1365159))
			{
				return Global_1365159;
			}
			if (unk_0x765F6FEEFF39224F(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	return -1;
}

bool func_279()
{
	return unk_0x0E4018692D92041D(Global_1681628, 6);
}

int func_280()
{
	float fVar0;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0))
	{
		if (unk_0x8C1596BAD35D957A(Local_117.f_105, &fVar0, 1, 0))
		{
			Local_117.f_78 = (Local_117.f_105.f_2 - fVar0);
			if (Local_117.f_78 > IntToFloat(Global_262145.f_24015))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_281()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	if (!func_20())
	{
		return;
	}
	if ((unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0)) && unk_0x117DAF3BF7232886(Local_117.f_119))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			vVar0 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			unk_0x833A05A7AD82EA44(Local_117.f_119, vVar0, 2);
			if (unk_0x0E4018692D92041D(Local_117.f_5, 1) || func_159())
			{
				return;
			}
			vVar1 = { func_284(func_285()) };
			vVar2 = { func_284(func_283(func_285())) };
			vVar3 = { func_282(vVar1, vVar2) };
			fVar4 = 5f;
			if (!unk_0x5D79F3D06EB318A0(0))
			{
				if (unk_0x405A2F54470CCC35(2, 208) != 0f)
				{
					iVar5 = 1;
				}
				if (unk_0x405A2F54470CCC35(2, 207) != 0f)
				{
					iVar6 = 1;
				}
			}
			else
			{
				if (unk_0x405A2F54470CCC35(2, 209) != 0f)
				{
					iVar5 = 1;
				}
				if (unk_0x405A2F54470CCC35(2, 210) != 0f)
				{
					iVar6 = 1;
				}
			}
			if (iVar5 && !func_222())
			{
				Local_117.f_76 = 140f;
				fVar4 = 7f;
			}
			else if (iVar6 && !func_222())
			{
				Local_117.f_76 = 60f;
				fVar4 = 3.5f;
			}
			else
			{
				Local_117.f_76 = 100f;
			}
			if (unk_0x5D79F3D06EB318A0(0))
			{
				if (Local_117[2] >= 127)
				{
					Local_117[2] = 127;
				}
				else if (Local_117[2] <= -127)
				{
					Local_117[2] = -127;
				}
				if (Local_117[0] >= 127)
				{
					Local_117[0] = 127;
				}
				else if (Local_117[0] <= -127)
				{
					Local_117[0] = -127;
				}
			}
			if (Local_117[2] > 0 || Local_117[0] > 0)
			{
				if (Local_117[2] > 0)
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_117[2])));
				}
				else
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_117[0])));
				}
				unk_0x0848C95091F9ECB9(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar3 * Vector(fVar7, fVar7, fVar7), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar1 * Vector(-Local_117.f_76, -Local_117.f_76, -Local_117.f_76), 0, 1, 1, 0);
				unk_0x0848C95091F9ECB9(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_117[2] < 0 || Local_117[0] < 0)
			{
				if (Local_117[0] < 0)
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_117[0])));
				}
				else
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_117[2])));
				}
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar1 * Vector(-Local_117.f_76, -Local_117.f_76, -Local_117.f_76), 0, 1, 1, 0);
				unk_0x0848C95091F9ECB9(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar3 * Vector(fVar8, fVar8, fVar8), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0x0848C95091F9ECB9(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar1 * Vector(-Local_117.f_76, -Local_117.f_76, -Local_117.f_76), 0, 1, 1, 0);
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

Vector3 func_282(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_283(struct<2> Param0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { sin(Param0.f_1), (-sin(Param0) * cos(Param0.f_1)), (cos(Param0) * cos(Param0.f_1)) };
	return vVar0;
}

Vector3 func_284(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_285()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_286(&vVar0);
	return vVar0;
}

void func_286(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_287()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	
	if (func_20())
	{
		return;
	}
	if ((unk_0x4F94F07DAD382CDA(Local_117.f_110) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0)) && unk_0x117DAF3BF7232886(Local_117.f_119))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			fVar0 = 0f;
			if (!func_22() && !func_8())
			{
				if (!func_213())
				{
					if (func_9(&(Local_117.f_168)))
					{
						iVar1 = Global_262145.f_24013;
						if (func_8())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_6(&(Local_117.f_168), iVar1, 0))
						{
							iVar2 = (100 * unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_168)));
							Local_117.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_18(Local_117.f_111))
							{
								unk_0x2F0A6390D863D337(Local_117.f_111, unk_0xE4B835FDC8B9B086(Local_117.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_117.f_19 = 100;
							func_5(&(Local_117.f_168));
							if (!unk_0x66DE54BD13B1BD88(Local_117.f_40))
							{
								unk_0xCBE6AF58552C63B2(Local_117.f_40);
								unk_0x44D426446FAF55FB(Local_117.f_40);
								Local_117.f_40 = -1;
							}
						}
					}
					if (!unk_0x5D79F3D06EB318A0(0))
					{
						bVar3 = unk_0x5EBE50D55314CEAD(0, 209);
					}
					else
					{
						bVar3 = unk_0x5EBE50D55314CEAD(0, 203);
					}
					if (((bVar3 && Local_117.f_19 == 100) && !func_222()) && !func_54())
					{
						fVar0 = 120f;
						if (func_8())
						{
							fVar0 = 110f;
						}
						if (IntToFloat(Local_117[1]) != 0f)
						{
							func_291(1);
						}
						else
						{
							func_291(0);
						}
						unk_0x0B1F8038F56C12B7("RaceTurbo", 0, 0);
						func_7(&(Local_117.f_166), 0, 0);
						func_290(1);
						if (unk_0x66DE54BD13B1BD88(Local_117.f_39))
						{
							Local_117.f_39 = unk_0x8CCC0A0504C52531();
							unk_0x0F8EAEEC97DDBCB3(Local_117.f_39, "HUD_Boost_Loop", Local_117.f_109, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_8())
					{
						fVar0 = 115f;
					}
					if (unk_0x117DAF3BF7232886(Local_117.f_119))
					{
						if (!unk_0x4D8A5EFBD6ACB8D4(Local_117.f_119))
						{
							unk_0x083F68B89E3EA476(Local_117.f_119, "DRONE_BOOST_SHAKE", 1f);
							unk_0x9BDA1567F3312F06(Local_117.f_119, 0.15f);
						}
					}
					if (func_9(&(Local_117.f_166)))
					{
						if (func_6(&(Local_117.f_166), Global_262145.f_24012, 0))
						{
							Local_117.f_19 = 0;
							func_291(0);
							func_290(0);
							func_5(&(Local_117.f_168));
							func_7(&(Local_117.f_168), 0, 0);
							unk_0x85961BF1C6552672(Local_117.f_119, 1);
							unk_0xC0E20FB79BF9680E(0);
							unk_0xA94473FEE1796AED("RaceTurbo");
							func_5(&(Local_117.f_166));
							if (!unk_0x66DE54BD13B1BD88(Local_117.f_39))
							{
								unk_0xCBE6AF58552C63B2(Local_117.f_39);
								unk_0x44D426446FAF55FB(Local_117.f_39);
								Local_117.f_39 = -1;
							}
							if (unk_0x66DE54BD13B1BD88(Local_117.f_40))
							{
								Local_117.f_40 = unk_0x8CCC0A0504C52531();
								unk_0x0F8EAEEC97DDBCB3(Local_117.f_40, "HUD_Boost_Recharge_Loop", Local_117.f_109, 1);
							}
						}
						else
						{
							fVar4 = (100f / (to_float(Global_262145.f_24012) / IntToFloat(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_166))));
							Local_117.f_19 = (100 - round(fVar4));
							unk_0x61AE8E2B7BB7D8BA(0, Global_262145.f_24012, 255);
						}
					}
				}
			}
			vVar5 = { Local_117.f_105 };
			vVar6 = { unk_0x60B5C1FD066CB864(unk_0xE4B835FDC8B9B086(Local_117.f_110), 2) };
			vVar6 = { (vVar6.x + 180f), (-vVar6.y + 180f), vVar6.z };
			unk_0x833A05A7AD82EA44(Local_117.f_119, vVar6, 2);
			if (unk_0x0E4018692D92041D(Local_117.f_5, 1) || func_159())
			{
				return;
			}
			vVar7 = { func_284(func_285()) };
			vVar8 = { func_284(func_283(func_285())) };
			unk_0x8C1596BAD35D957A(vVar5, &fVar9, 1, 0);
			if (!func_289())
			{
				if (Local_117.f_9 == 2 || (vVar5.z - fVar9) < 2f)
				{
					fVar10 = 24f;
					if (Local_117[1] != 0)
					{
						unk_0x3FD9339AA95E323F(2, 207, 1);
					}
					if (unk_0x405A2F54470CCC35(2, 207) != 0f || Local_117[1] != 0)
					{
						if ((vVar5.z - fVar9) < 0.5f || unk_0x405A2F54470CCC35(2, 207) != 0f)
						{
							fVar10 = 24f;
						}
						else
						{
							fVar10 = 10f;
						}
					}
					else
					{
						fVar10 = 3f;
					}
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, fVar10, 0, 1, 1, 0);
				}
			}
			if (unk_0x5D79F3D06EB318A0(0))
			{
				if (Local_117[2] >= 127)
				{
					Local_117[2] = 127;
				}
				else if (Local_117[2] <= -127)
				{
					Local_117[2] = -127;
				}
				if (Local_117[0] >= 127)
				{
					Local_117[0] = 127;
				}
				else if (Local_117[0] <= -127)
				{
					Local_117[0] = -127;
				}
			}
			if (!unk_0x5D79F3D06EB318A0(0))
			{
				if (unk_0x405A2F54470CCC35(2, 208) != 0f)
				{
					iVar11 = 1;
				}
				if (unk_0x405A2F54470CCC35(2, 207) != 0f)
				{
					iVar12 = 1;
				}
			}
			else
			{
				if (unk_0x405A2F54470CCC35(2, 209) != 0f)
				{
					iVar11 = 1;
				}
				if (unk_0x405A2F54470CCC35(2, 210) != 0f)
				{
					iVar12 = 1;
				}
			}
			if (((iVar11 && func_288()) && !func_54()) || (func_213() && !func_212()))
			{
				if (func_22() || func_8())
				{
					fVar14 = 10f;
				}
				if (func_213() && !func_212())
				{
					if (!unk_0x5D79F3D06EB318A0(0))
					{
						fVar13 = ((Local_117.f_76 + fVar0) / (1f / unk_0x405A2F54470CCC35(2, 208)));
					}
					else
					{
						fVar13 = ((Local_117.f_76 + fVar0) / (1f / unk_0x405A2F54470CCC35(2, 209)));
					}
				}
				else if (!unk_0x5D79F3D06EB318A0(0))
				{
					fVar13 = ((Local_117.f_76 + fVar14) / (1f / unk_0x405A2F54470CCC35(2, 208)));
				}
				else
				{
					fVar13 = ((Local_117.f_76 + fVar14) / (1f / unk_0x405A2F54470CCC35(2, 209)));
				}
				vVar15 = { vVar8 * Vector(fVar13, fVar13, fVar13) };
				if (vVar15.z > 149f)
				{
					vVar15.z = 149f;
				}
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar15, 0, 1, 1, 0);
			}
			else if (((iVar12 && !func_54()) && func_288()) && !func_222())
			{
				if (func_22() || func_8())
				{
					fVar17 = 10f;
				}
				if (!unk_0x5D79F3D06EB318A0(0))
				{
					fVar16 = ((Local_117.f_76 + fVar17) / (1f / unk_0x405A2F54470CCC35(2, 207)));
				}
				else
				{
					fVar16 = ((Local_117.f_76 + fVar17) / (1f / unk_0x405A2F54470CCC35(2, 210)));
				}
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar8 * Vector(-fVar16, -fVar16, -fVar16), 0, 1, 1, 0);
			}
			if (((Local_117[1] > 0 && !func_213()) && !func_222()) && !func_54())
			{
				if (func_22())
				{
					fVar20 = 40f;
				}
				else
				{
					fVar20 = 6.4f;
				}
				fVar18 = (Local_117.f_76 / (127f / IntToFloat(Local_117[1])));
				fVar19 = (fVar20 / (127f / IntToFloat(Local_117[1])));
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar7 * Vector(fVar18, fVar18, fVar18), 0, 1, 1, 0);
				unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, fVar19, 0, 1, 1, 0);
			}
			else if ((((Local_117[1] < 0 && !func_213()) && !func_222()) && !func_54()) || (func_213() && func_212()))
			{
				if (func_213() && func_212())
				{
					fVar23 = 50f;
					if (func_8())
					{
						fVar21 = (Local_117.f_76 / -1f);
					}
					else
					{
						fVar21 = ((Local_117.f_76 + fVar0) / -1f);
					}
					fVar22 = (fVar23 / -1f);
				}
				else
				{
					if (func_22() || func_8())
					{
						fVar23 = 40f;
					}
					else
					{
						fVar23 = 6.4f;
					}
					if (func_8())
					{
						fVar21 = (Local_117.f_76 / (127f / IntToFloat(Local_117[1])));
					}
					else
					{
						fVar21 = ((Local_117.f_76 + fVar0) / (127f / IntToFloat(Local_117[1])));
					}
					fVar22 = (fVar23 / (127f / IntToFloat(Local_117[1])));
				}
				if (func_8())
				{
					if (!func_212())
					{
						unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
						unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar7 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
					}
					else
					{
						unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar7 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
				}
			}
			vVar24 = { func_282(vVar7, vVar8) };
			if ((!func_213() && !func_222()) && !func_54())
			{
				if (Local_117[0] > 0)
				{
					fVar25 = -(Local_117.f_76 / (127f / IntToFloat(Local_117[0])));
					fVar26 = (8f / (127f / IntToFloat(Local_117[0])));
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar24 * Vector(fVar25, fVar25, fVar25), 0, 1, 1, 0);
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, fVar26, 0, 1, 1, 0);
				}
				else if (Local_117[0] < 0)
				{
					fVar27 = -(Local_117.f_76 / (127f / IntToFloat(Local_117[0])));
					fVar28 = (8f / (127f / IntToFloat(Local_117[0])));
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, vVar24 * Vector(fVar27, fVar27, fVar27), 0, 1, 1, 0);
					unk_0x8CCAABEAD6EE0A13(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0, 0f, 0f, -fVar28, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

int func_288()
{
	if (func_222())
	{
		return 0;
	}
	if (func_213() && !func_212())
	{
		return 0;
	}
	return 1;
}

bool func_289()
{
	return unk_0x0E4018692D92041D(Global_1681628, 2);
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 21))
		{
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 21);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 21))
	{
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 21);
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 22))
		{
			unk_0x8950ED5730F62EE8(&(Local_117.f_5), 22);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_117.f_5, 22))
	{
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 22);
	}
}

void func_292()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_117.f_110), 0))
		{
			if ((func_8() || func_22()) || func_20())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_117.f_105;
				fVar1 = Local_117.f_105.f_1;
			}
			unk_0x1466A087F0134E36(fVar0, fVar1);
			unk_0x94C24EC488BD2C6E(fVar0, fVar1, 0);
			if (!unk_0xDE9B75BB528AC06E(Global_1681628.f_22) && !func_20())
			{
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 8))
				{
					unk_0x6A26C1F1DE3F6B15();
				}
				unk_0x290A31B89E6CDC52();
			}
		}
	}
}

void func_293()
{
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x66DE54BD13B1BD88(Local_117.f_38) && Local_117.f_38 == -1)
		{
			Local_117.f_38 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(Local_117.f_38, "HUD_Loop", Local_117.f_109, 1);
		}
	}
}

void func_294()
{
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x66DE54BD13B1BD88(Local_117.f_28))
		{
			Local_117.f_28 = unk_0x8CCC0A0504C52531();
			unk_0xE9739440E5BF08EE(Local_117.f_28, "Flight_Loop", unk_0xE4B835FDC8B9B086(Local_117.f_110), Local_117.f_109, 0, 0);
			unk_0x1819081E2D6040CB(Local_117.f_28, "DroneRotationalSpeed", Local_117.f_86);
		}
		else
		{
			unk_0x1819081E2D6040CB(Local_117.f_28, "DroneRotationalSpeed", Local_117.f_86);
		}
		if (unk_0x66DE54BD13B1BD88(Local_117.f_37))
		{
			unk_0x44D426446FAF55FB(Local_117.f_37);
			Local_117.f_37 = -1;
		}
	}
}

void func_295()
{
	if (func_43(unk_0x95B959F18401C09A(), 1, 1))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 450, 1);
	}
}

void func_296()
{
	int iVar0;
	
	if (func_8())
	{
		iVar0 = unk_0x7C1C88877E8AAA50(Local_117.f_42);
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110) && func_43(iVar0, 1, 1))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0))
			{
				if (func_297(unk_0xE4B835FDC8B9B086(Local_117.f_110), unk_0x378BD4B3881338C2(iVar0), Global_262145.f_24609, 1))
				{
					if (!func_173(unk_0x95B959F18401C09A(), iVar0))
					{
						if (unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar0) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							unk_0x8950ED5730F62EE8(&(Local_117.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 11);
	}
}

bool func_297(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return vdist2(unk_0xFBB1F99A825CAB09(iParam0, iParam3), unk_0xFBB1F99A825CAB09(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_298()
{
	int iVar0;
	
	if (func_18(func_81()))
	{
		iVar0 = unk_0x7C1C88877E8AAA50(Local_117.f_42);
		if (unk_0x95B959F18401C09A() != iVar0)
		{
			if (func_43(iVar0, 1, 1))
			{
				if (unk_0x0E4018692D92041D(Local_117.f_7, Local_117.f_42))
				{
					if (!unk_0x982A72D771CF4FE1(iVar0))
					{
						unk_0xCE689A8E8C42ED78(&(Local_117.f_7), Local_117.f_42);
					}
				}
				if (vdist2(func_195(iVar0), Local_117.f_105) < 12100f)
				{
					if (!unk_0x0E4018692D92041D(Local_117.f_7, Local_117.f_42) && func_300(iVar0))
					{
						func_299(iVar0, 1);
						unk_0x5A48E05E63034C1F(Local_117.f_110, iVar0, 1);
						unk_0x8950ED5730F62EE8(&(Local_117.f_7), Local_117.f_42);
					}
				}
				else if (vdist2(func_195(iVar0), Local_117.f_105) > 14400f)
				{
					if (unk_0x0E4018692D92041D(Local_117.f_7, Local_117.f_42))
					{
						func_299(iVar0, 0);
						unk_0x5A48E05E63034C1F(Local_117.f_110, iVar0, 0);
						unk_0xCE689A8E8C42ED78(&(Local_117.f_7), Local_117.f_42);
					}
				}
			}
		}
	}
}

void func_299(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = -151132536;
	vVar0.y = unk_0x95B959F18401C09A();
	vVar0.z = iParam1;
	iVar1 = func_156(iParam0);
	if (!iVar1 == 0)
	{
		unk_0x09269A9CFC145847(1, &vVar0, 3, iVar1);
	}
}

int func_300(int iParam0)
{
	if (func_302(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_42(iParam0))
	{
		return 0;
	}
	if (func_301(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_301(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_303()
{
	int iVar0;
	
	if ((func_20() || func_8()) || func_22())
	{
		iVar0 = 1000;
		if (func_8() || func_22())
		{
			iVar0 = 7000;
		}
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 29))
		{
			if (unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0xFAA5C555ED0CEC9B(Local_117.f_119))
			{
				if (func_18(func_81()))
				{
					if (func_6(&(Local_117.f_182), iVar0, 0))
					{
						unk_0x91962EC406944B72(func_81(), 1, 0);
						unk_0x23298AB8A7D0F403(func_81(), true, 0);
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 29);
					}
				}
			}
		}
	}
}

void func_304(int iParam0)
{
	if (Local_117.f_157 != iParam0)
	{
		Local_117.f_157 = iParam0;
	}
}

void func_305(bool bParam0)
{
	if (bParam0)
	{
		if (!func_306())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 13);
		}
	}
	else if (func_306())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 13);
	}
}

bool func_306()
{
	return unk_0x0E4018692D92041D(Global_1681628, 13);
}

void func_307()
{
	vector3 vVar0;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			if (!unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0x0E4018692D92041D(Local_117.f_5, 0))
			{
				if (func_316())
				{
					if (func_275())
					{
						func_245(unk_0x95B959F18401C09A(), 0, 32768, 0);
					}
					else if (!func_20())
					{
						func_245(unk_0x95B959F18401C09A(), 0, 0, 0);
					}
					if (!func_315())
					{
						unk_0x8AFE31AEF3F850E7();
					}
					else
					{
						unk_0xEB3CDDFC044A3FAF();
					}
					Local_117.f_119 = unk_0x8E09C0735236F309(26379945, 1);
					unk_0x63B608CD1957089E(Local_117.f_119, Local_117.f_82);
					unk_0x6ADA542E698077EB(Local_117.f_119, 0.01f);
					unk_0x60CD928A1FFF43F7(Local_117.f_119, 0.01f);
					unk_0x3DE34B8864800B14();
					if (func_20())
					{
						unk_0x29B6D8EFAD395B92("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_8() || func_22())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_20())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					unk_0x5A488F57F21B3451(Local_117.f_119, unk_0xE4B835FDC8B9B086(Local_117.f_110), vVar0, 1);
					if (func_20())
					{
						unk_0x833A05A7AD82EA44(Local_117.f_119, func_314() - Vector(0f, -180f, 180f), 2);
					}
					unk_0xFB8EF66C2F0B1429(Local_117.f_105, 100f, 200f);
					unk_0x354FD6501F10A4E7(Local_117.f_105, unk_0xF165F9F874811603(Local_117.f_119, 2));
					unk_0x9611832841071B69(unk_0xE4B835FDC8B9B086(Local_117.f_110), false);
					func_313();
					if (unk_0x66DE54BD13B1BD88(Local_117.f_37))
					{
						Local_117.f_37 = unk_0x8CCC0A0504C52531();
						unk_0x0F8EAEEC97DDBCB3(Local_117.f_37, "HUD_Startup", Local_117.f_109, 1);
					}
					if (!func_275())
					{
						if (unk_0x4E1190A8D88ABDB7())
						{
							unk_0x4ABB9EF39DA515D7();
						}
					}
					func_229();
					if (func_20())
					{
						func_77();
					}
					else
					{
						func_101();
					}
					func_198(1);
					func_216();
					func_287();
					unk_0x63F0B040CE6EDF0F(true, 0, 0, 1, 1, 0);
					Local_117.f_122 = unk_0x78DCC5D0CB43DEBA();
					func_310(1);
					func_309(1);
					func_308(158);
					unk_0x8950ED5730F62EE8(&(vLocal_115[unk_0x95B959F18401C09A() /*3*/]), 0);
					func_304(2);
				}
				else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
				}
			}
			else
			{
				if (unk_0x117DAF3BF7232886(Local_117.f_119))
				{
				}
				if (!unk_0x0E4018692D92041D(Local_117.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
		}
	}
}

void func_308(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = iParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

void func_309(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328, 26))
		{
			unk_0x8950ED5730F62EE8(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328), 26);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328, 26))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328), 26);
	}
}

void func_310(bool bParam0)
{
	if (bParam0)
	{
		if (!func_187())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 5);
		}
	}
	else
	{
		if (func_187())
		{
			unk_0xCE689A8E8C42ED78(&Global_1681628, 5);
		}
		func_311(0);
	}
}

void func_311(bool bParam0)
{
	if (bParam0)
	{
		if (!func_312())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 12);
		}
	}
	else if (func_312())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 12);
	}
}

bool func_312()
{
	return unk_0x0E4018692D92041D(Global_1681628, 12);
}

void func_313()
{
	if (func_111())
	{
		if (!unk_0x7C71681384076318("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0xDEFB5E2E5CBD460A("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_8())
	{
		if (!unk_0x7C71681384076318("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0xDEFB5E2E5CBD460A("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_22())
	{
		if (!unk_0x7C71681384076318("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0xDEFB5E2E5CBD460A("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_20())
	{
		if (!unk_0x7C71681384076318("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0xDEFB5E2E5CBD460A("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

Vector3 func_314()
{
	return Global_1681628.f_14;
}

bool func_315()
{
	return unk_0x0E4018692D92041D(Global_1681628, 10);
}

int func_316()
{
	if (func_23() && !func_25())
	{
		return 1;
	}
	if (func_319())
	{
		return 1;
	}
	if (func_318())
	{
		return 1;
	}
	if (func_25() && func_317())
	{
		return 1;
	}
	if (!func_48(unk_0x95B959F18401C09A(), 0) && !func_241())
	{
		return 1;
	}
	return 0;
}

int func_317()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if (((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_27())
		{
			return 0;
		}
	}
	return 0;
}

int func_318()
{
	return 0;
}

int func_319()
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (func_25() || func_320())
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	return 1;
}

int func_320()
{
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_321()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	iVar0 = joaat("bmx");
	if (func_147(Local_117.f_156) && func_147(iVar0))
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 0))
		{
			if (!unk_0x4F94F07DAD382CDA(Local_117.f_110))
			{
				if (!func_275())
				{
					if (func_111())
					{
						if (func_18(func_278()))
						{
							vVar1 = { unk_0xFBB1F99A825CAB09(func_278(), 1) };
						}
					}
					else
					{
						vVar1 = { Local_117.f_93 };
					}
					if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
					{
						func_245(unk_0x95B959F18401C09A(), 0, 0, 0);
					}
					if (!unk_0x0E4018692D92041D(Local_117.f_5, 18))
					{
						if (unk_0x1F6A09AE9372AE6C(vVar1, 100f, 1))
						{
							unk_0x8950ED5730F62EE8(&(Local_117.f_5), 18);
						}
					}
					else if (unk_0x4E1190A8D88ABDB7())
					{
						if (!unk_0x0E4018692D92041D(Local_117.f_5, 19))
						{
							if (func_111())
							{
								if (func_324())
								{
									unk_0x8950ED5730F62EE8(&(Local_117.f_5), 19);
								}
							}
							else
							{
								if (!func_219(func_323()))
								{
									Local_117.f_93 = { func_323() };
								}
								unk_0x8950ED5730F62EE8(&(Local_117.f_5), 19);
							}
						}
					}
				}
				if (unk_0x0E4018692D92041D(Local_117.f_5, 19) || func_275())
				{
					if (!unk_0x0E4018692D92041D(Local_117.f_5, 20))
					{
						Local_117.f_113 = unk_0xC651C43AB13A15E5(iVar0, Local_117.f_93, 0f, 0, 0, 0);
						unk_0x43D47AD82DA3C6EC(Local_117.f_113, 1, 1);
						unk_0xC7C47D4054903839(Local_117.f_113, Local_117.f_93, 0, 0, 1);
						unk_0x9611832841071B69(Local_117.f_113, true);
						unk_0x91962EC406944B72(Local_117.f_113, 0, 0);
						unk_0x0CDD28A9DFCE2FCE(Local_117.f_113, false, 0);
						unk_0x8950ED5730F62EE8(&(Local_117.f_5), 20);
					}
					else if (func_67(unk_0x88CD84C553EF6ED9(false, 1) + 1, 0, 1))
					{
						if (!unk_0x0E4018692D92041D(Local_117.f_5, 30))
						{
							unk_0x931ECE5E0FE3D2B4(unk_0x88CD84C553EF6ED9(false, 1) + 1);
							unk_0x8950ED5730F62EE8(&(Local_117.f_5), 30);
						}
						if (unk_0x4A1A4733BFE10244(1))
						{
							if (func_322(&(Local_117.f_110), Local_117.f_156, Local_117.f_93, 0, 1, 1, 1, 1, 0, 0))
							{
								Global_1681628.f_18 = unk_0xE4B835FDC8B9B086(Local_117.f_110);
								if (func_111())
								{
									if (func_18(func_278()))
									{
										unk_0x1C8705F667F673EA(func_81(), unk_0x60B5C1FD066CB864(func_278(), 2), 2, 1);
										fVar2 = (unk_0xC472E34C8FBEC678(func_278()) + 180f);
									}
								}
								Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_407 = { Local_117.f_93 };
								Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_410 = fVar2;
								vLocal_115[unk_0x95B959F18401C09A() /*3*/].f_2 = Local_117.f_110;
								unk_0x5A48E05E63034C1F(Local_117.f_110, unk_0x95B959F18401C09A(), 1);
								unk_0xD1757D0209C38323(unk_0xF2D53AA87148ACED(Local_117.f_110), 1);
								unk_0x43D47AD82DA3C6EC(unk_0xF2D53AA87148ACED(Local_117.f_110), 1, 1);
								unk_0xC7C47D4054903839(func_81(), Local_117.f_93, 0, 0, 1);
								unk_0x3C990C409B3845DE(func_81(), fVar2);
								unk_0xB1DFC17D1DE6E07A(func_81(), 1);
								if (!func_219(func_314()))
								{
									unk_0x1C8705F667F673EA(func_81(), func_314(), 2, 1);
								}
								if (func_20())
								{
									unk_0x91962EC406944B72(func_81(), 0, 0);
								}
								unk_0x69C2098329A2F505(Local_117.f_110, 1);
								if (func_135(unk_0x95B959F18401C09A()))
								{
									unk_0x7FC2040EB34E0E31(func_81(), Global_262145.f_24014 * 5, 0);
								}
								else
								{
									unk_0x7FC2040EB34E0E31(func_81(), Global_262145.f_24014, 0);
								}
								unk_0x9611832841071B69(unk_0xE4B835FDC8B9B086(Local_117.f_110), true);
								unk_0xCE5A2C773B9FDC41(Local_117.f_110, 0);
								unk_0x825E05C179F7D608(unk_0xF2D53AA87148ACED(Local_117.f_110), 1);
								unk_0xFB8EF66C2F0B1429(Local_117.f_93, 100f, 200f);
								unk_0x354FD6501F10A4E7(unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_117.f_110), 1), unk_0x60B5C1FD066CB864(unk_0xF2D53AA87148ACED(Local_117.f_110), 2));
								unk_0x71CA80D41E1338B4(Local_117.f_156);
								unk_0x71CA80D41E1338B4(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0x860D3E500AEADB97(unk_0xE4B835FDC8B9B086(Local_117.f_110), 0);
				if (func_18(Local_117.f_113) && func_18(unk_0xF2D53AA87148ACED(Local_117.f_110)))
				{
					unk_0x2F0A6390D863D337(Local_117.f_113, unk_0xE4B835FDC8B9B086(Local_117.f_110), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 0);
				}
			}
		}
	}
}

int func_322(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x4A1A4733BFE10244(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x0E0E192D65881AC2(unk_0xDD9A603448A23A17(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x0E0E192D65881AC2(unk_0x7CA67831169E8AA6(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0xA6C43DE7267202AC(unk_0xE4B835FDC8B9B086(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(*uParam0), false, 0);
		}
		if (unk_0x0371ECBEC27AF4BE(unk_0xE4B835FDC8B9B086(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

Vector3 func_323()
{
	return Global_1681628.f_11;
}

int func_324()
{
	if (Local_117.f_15 == 0)
	{
		if (!unk_0x0E4018692D92041D(Local_117.f_5, 14))
		{
			if ((!func_135(unk_0x95B959F18401C09A()) && func_111()) && func_18(func_278()))
			{
				Local_117.f_93 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(func_278(), 1), unk_0xC472E34C8FBEC678(func_278()), -0.7f, 1.6f, 4f) };
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 14);
			}
			else
			{
				if (func_111() && func_18(func_278()))
				{
					Local_117.f_93 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(func_278(), 1), unk_0xC472E34C8FBEC678(func_278()), -0.7f, 1.6f, 4f) };
				}
				Local_117.f_93 = unk_0x9562E33C057F7589((Local_117.f_93 - 1.5f), (Local_117.f_93 + 1.5f));
				Local_117.f_93.f_1 = unk_0x9562E33C057F7589((Local_117.f_93.f_1 - 1.5f), (Local_117.f_93.f_1 + 1.5f));
				Local_117.f_93.f_2 = unk_0x9562E33C057F7589((Local_117.f_93.f_2 + 0.5f), (Local_117.f_93.f_2 + 1.5f));
				if (!func_326(Local_117.f_93))
				{
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 14);
				}
			}
		}
		else if (unk_0x0E4018692D92041D(Local_117.f_5, 15))
		{
			Local_117.f_93 = unk_0x9562E33C057F7589((Local_117.f_93 - 1.5f), (Local_117.f_93 + 1.5f));
			Local_117.f_93.f_1 = unk_0x9562E33C057F7589((Local_117.f_93.f_1 - 1.5f), (Local_117.f_93.f_1 + 1.5f));
			Local_117.f_93.f_2 = unk_0x9562E33C057F7589((Local_117.f_93.f_2 + 0.5f), (Local_117.f_93.f_2 + 1.5f));
			if (!func_326(Local_117.f_93))
			{
				unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 15);
			}
		}
		func_325(Local_117.f_93);
	}
	else if (Local_117.f_15 == 1 && !func_326(Local_117.f_93))
	{
		return 1;
	}
	else
	{
		Local_117.f_15 = 0;
		unk_0x8950ED5730F62EE8(&(Local_117.f_5), 15);
	}
	return 0;
}

void func_325(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	switch (Local_117.f_14)
	{
		case 0:
			if (func_111())
			{
				if (func_18(func_278()))
				{
					iVar0 = func_278();
				}
			}
			if (func_8() || func_22())
			{
				fVar1 = func_179(Local_117.f_156);
			}
			else
			{
				fVar1 = (func_179(Local_117.f_156) * 11f);
			}
			Local_117.f_118 = unk_0x0F79DCFDE3D6F778(vParam0, vParam0, fVar1, 511, iVar0, 4);
			if (Local_117.f_118 != 0)
			{
				Local_117.f_14 = 1;
			}
			break;
		
		case 1:
			iVar6 = unk_0x819B6E76423AE494(Local_117.f_118, &iVar2, &vVar4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_117.f_15 = 1;
					vVar4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_117.f_15 = 2;
					Local_117.f_118 = 0;
					Local_117.f_14 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_117.f_14 = 0;
			}
			break;
	}
}

int func_326(vector3 vParam0)
{
	if (unk_0xC2F708DE8AD68197(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_327()
{
	if (func_241())
	{
		return Global_1671295.f_164 == 0;
	}
	return 0;
}

void func_328()
{
	if (func_43(unk_0x95B959F18401C09A(), 1, 1))
	{
		Local_117.f_96 = { func_220(&Local_117) };
		if (!func_219(func_323()))
		{
			Local_117.f_93 = { func_323() };
		}
		else
		{
			Local_117.f_93 = { func_195(unk_0x95B959F18401C09A()) };
			Local_117.f_93 = { Local_117.f_93, Local_117.f_93.f_1, (Local_117.f_93.f_2 + 1.5f) };
		}
		if (func_48(unk_0x95B959F18401C09A(), 0))
		{
			func_370(1);
		}
		if (func_48(unk_0x95B959F18401C09A(), 0))
		{
			func_366();
		}
		else if (((func_364(unk_0x95B959F18401C09A()) == 2 || func_364(unk_0x95B959F18401C09A()) == 1) && !unk_0x0E4018692D92041D(Global_1689320, 6)) && !unk_0x0E4018692D92041D(Global_1689321, 0))
		{
			if (unk_0x0E4018692D92041D(Global_2506183, 0))
			{
				func_363(1);
				func_356(0, 0);
				func_355();
				func_311(1);
				func_304(1);
			}
		}
		else if ((func_24() && func_351()) && !unk_0x0E4018692D92041D(Global_1689320, 6))
		{
			func_329();
		}
		else if (unk_0x0E4018692D92041D(Global_1689320, 6) && unk_0x0E4018692D92041D(Global_1689321, 0))
		{
			func_356(0, 0);
			func_311(1);
			func_304(1);
		}
		else if (func_219(Local_117.f_90))
		{
			Local_117.f_108 = 0;
			func_311(1);
			func_304(1);
		}
	}
}

void func_329()
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_344())
	{
		if ((((((func_343() || func_342()) && !Global_1657075) && func_351()) && !unk_0x0E4018692D92041D(Global_2506071, 6)) && Global_1312792) && !(func_343() && Global_262145.f_25615))
		{
			if ((((((unk_0x833B1A3D9F713E03(2, 224) || unk_0x5EBE50D55314CEAD(2, 224)) && !unk_0x833B1A3D9F713E03(2, 223)) && !unk_0x5EBE50D55314CEAD(2, 223)) && !unk_0x833B1A3D9F713E03(2, 235)) && !unk_0x5EBE50D55314CEAD(2, 235)) && !unk_0x1CAA347A3C84C225(2, 19))
			{
				if (unk_0x8AF8FB62F0BE628C(Global_262145.f_25617, 0, 0, 1, -1, 0) || unk_0x0E4018692D92041D(Global_2506071, 2))
				{
					unk_0x8950ED5730F62EE8(&Global_2506071, 0);
					func_356(0, 0);
					func_311(1);
					func_304(1);
					func_338();
					func_336(73, -1);
					func_333();
					vVar0 = { func_332() };
					func_330(vVar0, 0f, 0f, 0f);
					if (func_343())
					{
						unk_0xE9739440E5BF08EE(iVar1, "Select_Spec_Drone", unk_0x33CD235DF1E6A94E(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!unk_0x0E4018692D92041D(Global_2506071, 4))
				{
					unk_0x8950ED5730F62EE8(&Global_2506071, 4);
				}
			}
		}
	}
}

void func_330(vector3 vParam0, vector3 vParam1)
{
	if (!func_331(Global_1681628.f_11, vParam0, 0))
	{
		Global_1681628.f_11 = { vParam0 };
		vParam1 = { vParam1 + Vector(0f, -180f, 180f) };
		Global_1681628.f_14 = { vParam1 };
	}
}

bool func_331(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_332()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_154963.f_1 == 3 || Global_4456448.f_154963.f_1 == 3) || Global_4456448.f_154963.f_1 == 3)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0x72B85B341ADBE9DE()));
	fVar2 = (fVar2 * IntToFloat((unk_0x72B85B341ADBE9DE() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0xCD1EDCB38767B47C(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_333()
{
	int iVar0;
	
	iVar0 = func_334(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x8950ED5730F62EE8(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_333.f_3), 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_333.f_3), 13);
	}
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_335(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_89();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_334(iParam0, func_335(iParam1));
	iVar0++;
	func_337(iParam0, iVar0, iParam1);
}

void func_337(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_335(uParam2)];
	unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
}

void func_338()
{
	func_339(1, 7982);
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_341(iParam1, -1, 0);
	func_340(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_335(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_335(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_342()
{
	return Global_2458641;
}

int func_343()
{
	if (Global_2458640 >= 0 && Global_2458640 < 10)
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	if (func_349())
	{
		return 1;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 1;
	}
	if (func_241())
	{
		return 1;
	}
	if (func_48(unk_0x95B959F18401C09A(), 0))
	{
		if (func_30(Global_1589668))
		{
			return 1;
		}
	}
	if (func_111())
	{
		if (func_348())
		{
			if (func_347())
			{
				return 1;
			}
			if (unk_0x0E4018692D92041D(Local_117.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_162(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_53(0))
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	if (func_111())
	{
		if (func_23())
		{
			if (func_43(unk_0x95B959F18401C09A(), 1, 1))
			{
				if (func_127(unk_0x33CD235DF1E6A94E(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_346())
				{
					return 1;
				}
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_345(unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (Global_262145.f_24024)
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_117.f_5, 27))
	{
		return 1;
	}
	if (func_48(unk_0x95B959F18401C09A(), 0))
	{
		if (func_18(func_278()))
		{
			if ((unk_0xD4B4F68F3449CBEC(func_278(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(func_278(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(func_278(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319093)
	{
		return 1;
	}
	if (Global_2507141)
	{
		return 1;
	}
	if (Global_2507139)
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0x765F6FEEFF39224F(iParam0) || unk_0xD62C4419A41F106A(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0xA9680DDFB5EB643A(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x18A3618891EE1D1E(iParam0) != 0 || unk_0x35364EF44BEB123B(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8 != func_14() && unk_0x95B959F18401C09A() != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8 /*818*/].f_273.f_328, 20);
	}
	return 0;
}

int func_348()
{
	if (func_135(unk_0x95B959F18401C09A()) && Global_1681628.f_4 == -1)
	{
		return 0;
	}
	return 1;
}

int func_349()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_350()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_351()
{
	int iVar0;
	int iVar1;
	
	if (func_354() && !func_353())
	{
		return 1;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969025.f_13[iVar0];
	if (iVar1 < 17)
	{
		if ((((unk_0x0E4018692D92041D(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 23) && unk_0x0E4018692D92041D(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 24)) && unk_0x0E4018692D92041D(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 25)) && unk_0x0E4018692D92041D(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 26)) && unk_0x0E4018692D92041D(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!unk_0x0E4018692D92041D(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_342() || func_352(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

bool func_352(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_39.f_18, 14);
}

int func_353()
{
	if (Global_4456448.f_139770 == 1 || Global_4456448.f_139770 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_354()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

void func_355()
{
	unk_0xCE689A8E8C42ED78(&Global_2506183, 0);
}

void func_356(bool bParam0, bool bParam1)
{
	Local_117.f_76 = Global_262145.f_24017;
	if (func_22() || func_8())
	{
		Local_117.f_76 = (Local_117.f_76 * 4.5f);
	}
	else if (func_20())
	{
		Local_117.f_76 = 100f;
	}
	if (func_22())
	{
		Local_117.f_156 = -388213579;
	}
	else if (func_8())
	{
		Local_117.f_156 = 442185650;
	}
	else if (func_20())
	{
		Local_117.f_156 = 1270560417;
		func_362(1);
	}
	else
	{
		Local_117.f_156 = -1904523353;
	}
	if (bParam1)
	{
		Local_117.f_93 = { Local_117.f_99 };
	}
	Global_1681628.f_1 = 1500;
	func_361();
	func_360(1);
	func_359(1);
	if (func_22() || func_20())
	{
		func_358(1);
	}
	else if (func_8())
	{
		func_358(0);
	}
	if (func_8())
	{
		unk_0x96E4B8740065F6D8("scr_xs_dr");
	}
	if (!func_111() && !func_275())
	{
		func_357(200f);
	}
	func_61(Global_1574987);
	if (bParam0)
	{
	}
}

void func_357(float fParam0)
{
	if (Global_1681628.f_6 != fParam0)
	{
		Global_1681628.f_6 = fParam0;
	}
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!func_158())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 8);
		}
	}
	else if (func_158())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 8);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!func_289())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 2);
		}
	}
	else if (func_289())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 2);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!func_208())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 4);
		}
	}
	else if (func_208())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 4);
	}
}

void func_361()
{
	if (!Local_117.f_108)
	{
		Local_117.f_17 = 100;
	}
	Local_117.f_18 = 0;
	Local_117.f_19 = 100;
	Local_117.f_82 = 90f;
	Local_117.f_85 = 90f;
	if (!func_20())
	{
		Local_117.f_120 = unk_0x199B24FF79A52CCF("DRONE_CAM");
	}
	else
	{
		Local_117.f_120 = func_82();
	}
	if (func_22())
	{
		Local_117.f_109 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_8())
	{
		Local_117.f_109 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_20())
	{
		Local_117.f_109 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_117.f_109 = "DLC_BTL_Drone_Sounds";
	}
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (!func_167())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 15);
		}
	}
	else if (func_167())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 15);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628.f_2, 4))
		{
			Global_1681628.f_2 = 0;
			unk_0x8950ED5730F62EE8(&(Global_1681628.f_2), 4);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628.f_2, 4))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1681628.f_2), 4);
	}
}

int func_364(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A() && !func_365())
	{
		return Global_2506088.f_1;
	}
	return Global_2417757.f_2620[iParam0 /*3*/].f_1;
}

int func_365()
{
	if (((Global_2506091 != 0 && Global_2506091 == Global_2506092) && Global_2506080 != 3) && Global_2506080 != 1)
	{
		return 0;
	}
	return 1;
}

void func_366()
{
	if (!func_344())
	{
		if (func_25())
		{
			if (func_319())
			{
				if (!unk_0xFAC8F20FBC764F4D() && !unk_0x6B59932722922B69())
				{
					func_369("DRONE_TRIG");
				}
			}
			else if (func_368("DRONE_TRIG"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			if (func_25() || func_318())
			{
				if (unk_0x1771F6BAF60B44FA(2, 176) || unk_0xC6FADCE8D6467372(2, 176))
				{
					func_311(1);
					func_304(1);
					unk_0xEDF90B96BED57BCE(1);
				}
			}
			else if (func_368("DRONE_TRIG"))
			{
				if ((unk_0x1771F6BAF60B44FA(2, 51) || unk_0xC6FADCE8D6467372(2, 51)) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					Local_117.f_108 = 0;
					func_311(1);
					func_304(1);
					unk_0xEDF90B96BED57BCE(1);
				}
			}
		}
		else if ((func_23() && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_319())
		{
			if (!unk_0xFAC8F20FBC764F4D() && !unk_0x6B59932722922B69())
			{
				func_369("DRONE_TRIG");
			}
			if (func_368("DRONE_TRIG"))
			{
				if (unk_0x1771F6BAF60B44FA(2, 51) || unk_0xC6FADCE8D6467372(2, 51))
				{
					Local_117.f_108 = 0;
					func_311(1);
					func_304(1);
					unk_0xEDF90B96BED57BCE(1);
				}
			}
		}
		else if (func_368("DRONE_TRIG"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		if (func_367() || func_25())
		{
			if (func_368("DRONE_TRIG"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
	}
	else if (func_368("DRONE_TRIG"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
}

int func_367()
{
	if ((((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_46(unk_0x33CD235DF1E6A94E(), 2106541073))
	{
		return 1;
	}
	if ((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

int func_368(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_369(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628.f_2, 1))
		{
			Global_1681628.f_2 = 0;
			unk_0x8950ED5730F62EE8(&(Global_1681628.f_2), 1);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628.f_2, 1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1681628.f_2), 1);
	}
}

void func_371()
{
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_117.f_110), 0))
		{
			Local_117.f_105 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_117.f_110), 1) };
			Local_117.f_81 = unk_0xC472E34C8FBEC678(unk_0xFC00F22E930BFD55(Local_117.f_110));
			if (!func_9(&(Local_117.f_174)))
			{
				func_7(&(Local_117.f_174), 0, 0);
			}
			else if (func_6(&(Local_117.f_174), 1000, 0))
			{
				if (!func_331(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_407, Local_117.f_105, 0))
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_407 = { Local_117.f_105 };
				}
				if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_410 != unk_0xC472E34C8FBEC678(unk_0xFC00F22E930BFD55(Local_117.f_110)))
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_410 = unk_0xC472E34C8FBEC678(unk_0xFC00F22E930BFD55(Local_117.f_110));
				}
				func_5(&(Local_117.f_174));
			}
		}
	}
	if (func_18(Local_117.f_113))
	{
		if (unk_0x042B0E494045A7DF(Local_117.f_113))
		{
			unk_0x0CDD28A9DFCE2FCE(Local_117.f_113, false, 0);
		}
	}
	if (func_18(Local_117.f_111))
	{
		if (unk_0x042B0E494045A7DF(Local_117.f_111))
		{
			unk_0x0CDD28A9DFCE2FCE(Local_117.f_111, false, 0);
		}
	}
}

void func_372()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_373(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_373(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		if (unk_0x286A5F0670063839(1, iParam0, &Var0, 11))
		{
			if (unk_0x765F6FEEFF39224F(Var0) && unk_0xF2D53AA87148ACED(Local_117.f_110) == Var0)
			{
				if (unk_0x765F6FEEFF39224F(Var0.f_1))
				{
					if (unk_0x068481DAF84B9654(Var0.f_1))
					{
						if (unk_0xE09156665EC2D83B(unk_0x22B02EC53152632C(Var0.f_1)) && unk_0x33CD235DF1E6A94E() != unk_0x22B02EC53152632C(Var0.f_1))
						{
							Local_117.f_24 = 2;
						}
					}
				}
			}
		}
	}
}

void func_374()
{
	if (func_382(2))
	{
		if ((func_111() || func_8()) || func_22())
		{
			if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
			{
				func_245(unk_0x95B959F18401C09A(), 1, 0, 0);
			}
		}
		unk_0x3FD9339AA95E323F(0, 37, 0);
		if (!func_20())
		{
			func_375();
			unk_0xAE4810E427AD9203(0, 19, 1);
			unk_0xAE4810E427AD9203(0, 166, 1);
			unk_0xAE4810E427AD9203(0, 167, 1);
			unk_0xAE4810E427AD9203(0, 168, 1);
			unk_0xAE4810E427AD9203(0, 169, 1);
			unk_0xAE4810E427AD9203(2, 218, 1);
			unk_0xAE4810E427AD9203(2, 219, 1);
			unk_0xAE4810E427AD9203(2, 220, 1);
			unk_0xAE4810E427AD9203(2, 221, 1);
			unk_0xAE4810E427AD9203(2, 205, 1);
			unk_0xAE4810E427AD9203(2, 206, 1);
			unk_0xAE4810E427AD9203(2, 207, 1);
			unk_0xAE4810E427AD9203(2, 208, 1);
			unk_0xAE4810E427AD9203(2, 209, 1);
			unk_0xAE4810E427AD9203(2, 210, 1);
			unk_0xAE4810E427AD9203(2, 202, 1);
			unk_0xAE4810E427AD9203(2, 51, 1);
			unk_0xAE4810E427AD9203(2, 190, 1);
			unk_0xAE4810E427AD9203(2, 189, 1);
			unk_0xAE4810E427AD9203(2, 188, 1);
			unk_0xAE4810E427AD9203(2, 187, 1);
			unk_0xAE4810E427AD9203(2, 201, 1);
			unk_0xAE4810E427AD9203(2, 199, 1);
			unk_0xAE4810E427AD9203(2, 200, 1);
			if (unk_0x5D79F3D06EB318A0(0))
			{
				unk_0xAE4810E427AD9203(0, 238, 1);
				unk_0xAE4810E427AD9203(0, 237, 1);
				unk_0xAE4810E427AD9203(2, 235, 1);
				unk_0xAE4810E427AD9203(2, 234, 1);
				unk_0xAE4810E427AD9203(2, 1, 1);
				unk_0xAE4810E427AD9203(2, 174, 1);
				unk_0xAE4810E427AD9203(2, 175, 1);
				unk_0xAE4810E427AD9203(0, 174, 1);
				unk_0xAE4810E427AD9203(0, 175, 1);
				unk_0xAE4810E427AD9203(0, 245, 1);
				unk_0xAE4810E427AD9203(0, 246, 1);
				unk_0xAE4810E427AD9203(0, 247, 1);
				unk_0xAE4810E427AD9203(0, 248, 1);
			}
			if (unk_0xD9C92B0885A075F8())
			{
				unk_0xAE4810E427AD9203(0, 201, 1);
				unk_0xAE4810E427AD9203(0, 202, 1);
				unk_0xAE4810E427AD9203(0, 188, 1);
				unk_0xAE4810E427AD9203(0, 187, 1);
				unk_0xAE4810E427AD9203(0, 189, 1);
				unk_0xAE4810E427AD9203(2, 195, 1);
				unk_0xAE4810E427AD9203(2, 196, 1);
				unk_0xAE4810E427AD9203(2, 198, 1);
				unk_0xAE4810E427AD9203(2, 197, 1);
				unk_0xAE4810E427AD9203(2, 217, 1);
			}
		}
	}
}

void func_375()
{
	func_376();
}

void func_376()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		unk_0x3FD9339AA95E323F(0, iVar0, 1);
		iVar0++;
	}
}

void func_377()
{
	if (unk_0x0E4018692D92041D(Local_117.f_5, 28))
	{
		if (!func_9(&(Local_117.f_176)))
		{
			func_7(&(Local_117.f_176), 0, 0);
		}
		else if (func_6(&(Local_117.f_176), 5000, 0))
		{
			unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 28);
			func_5(&(Local_117.f_176));
		}
	}
}

void func_378()
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(Local_117.f_5, 27))
	{
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8 != func_14())
		{
			iVar0 = Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8;
		}
		else if (Global_1589668 != func_14())
		{
			iVar0 = Global_1589668;
		}
		else if (func_379(unk_0x95B959F18401C09A(), 0))
		{
			if (func_137() != func_14())
			{
				iVar0 = func_137();
			}
		}
		if (iVar0 != func_14())
		{
			if (unk_0xC4DEA49C5B465481(iVar0))
			{
				if (unk_0xB331FCEB94EB05C8())
				{
					func_146(iVar0, 0);
					unk_0xCE689A8E8C42ED78(&(Local_117.f_5), 27);
				}
			}
		}
	}
}

bool func_379(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_380(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_14();
}

int func_380(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_381()
{
	vector3 vVar0;
	
	if (func_111())
	{
		if (func_382(1))
		{
			if (func_18(func_278()))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(func_278(), 1) };
				unk_0xFB8EF66C2F0B1429(vVar0, 200f, 200f);
				unk_0xC79AC4010C2279A0(Local_117.f_105, 500f, 30);
			}
		}
	}
	if (func_382(1) || func_382(2))
	{
		if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
		{
			if (unk_0x117DAF3BF7232886(Local_117.f_119) && unk_0xFAA5C555ED0CEC9B(Local_117.f_119))
			{
				if (func_382(2))
				{
					unk_0xFB8EF66C2F0B1429(Local_117.f_105, 200f, 200f);
					unk_0x56297A8CE5365606();
					unk_0x354FD6501F10A4E7(Local_117.f_105, unk_0xF165F9F874811603(Local_117.f_119, 2));
					if ((unk_0xE77FA521699F639C() % 120) == 0)
					{
						unk_0xC79AC4010C2279A0(Local_117.f_105, 500f, 30);
					}
				}
			}
		}
	}
}

bool func_382(int iParam0)
{
	return Local_117.f_157 == iParam0;
}

int func_383()
{
	if (func_387())
	{
		return 1;
	}
	if (!func_250())
	{
		return 1;
	}
	if (unk_0x95B959F18401C09A() != func_14())
	{
		if (func_227(unk_0x95B959F18401C09A()) && !func_226())
		{
			return 1;
		}
	}
	if (func_164(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_301(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_386())
	{
		if (func_385())
		{
			return 1;
		}
		if (func_302(unk_0x95B959F18401C09A(), 1, 1))
		{
			return 1;
		}
		if (func_24())
		{
			return 1;
		}
		if (!func_384())
		{
			if (func_6(&(Local_117.f_192), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_5(&(Local_117.f_192));
		}
	}
	return 0;
}

int func_384()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0x396A8511217F9C1A() - 1))
	{
		if (unk_0x0E4018692D92041D(vLocal_115[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_385()
{
	return unk_0x0E4018692D92041D(Global_1681628, 22);
}

bool func_386()
{
	return unk_0x0E4018692D92041D(Local_117.f_6, 3);
}

bool func_387()
{
	return unk_0x0E4018692D92041D(Global_1681628, 0);
}

int func_388()
{
	var uVar0;
	
	func_396(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_395())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_394())
	{
		return 1;
	}
	if (func_393(157))
	{
		if (!func_392())
		{
			return 1;
		}
	}
	if (func_393(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_389() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_389()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_389()
{
	switch (func_391())
	{
		case 0:
			return func_390();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_390()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_391()
{
	return Global_25765;
}

bool func_392()
{
	return Global_2448756.f_586;
}

int func_393(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_2458613;
}

bool func_395()
{
	return Global_2448756.f_581;
}

void func_396(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_397(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_397(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_43(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_398(iVar2, &bVar3))
						{
							unk_0xD4A76B5E6C175542(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_398(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_399()
{
	wait(0);
}

void func_400(bool bParam0)
{
	if (!func_386())
	{
		func_406(bParam0);
	}
	else
	{
		func_401();
	}
}

void func_401()
{
	func_5(&(Local_117.f_192));
	func_405(0);
	func_404(0);
	func_403(0);
	func_402();
}

void func_402()
{
	unk_0x5894DC159447E10A();
}

void func_403(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628, 21))
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 21);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628, 21))
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 21);
	}
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628, 22))
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 22);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628, 22))
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 22);
	}
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_272, 31))
		{
			unk_0x8950ED5730F62EE8(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_272), 31);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_272, 31))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_272), 31);
	}
}

void func_406(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x4F94F07DAD382CDA(Local_117.f_110))
	{
		unk_0xCE5A2C773B9FDC41(Local_117.f_110, 1);
		if (unk_0x6F3D61B58C7B4025(Local_117.f_110))
		{
			if (!unk_0x0E4018692D92041D(Local_117.f_6, 2))
			{
				if (func_20())
				{
					if (func_18(unk_0x33CD235DF1E6A94E()))
					{
						unk_0x1E91E6361FECDC81(unk_0x33CD235DF1E6A94E(), Local_117.f_105, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						unk_0xB7C14A395669007F(Local_117.f_105, 72, 0.5f, 1, 0, 1f, 0);
					}
					unk_0x61AE8E2B7BB7D8BA(0, 300, 200);
					unk_0x8950ED5730F62EE8(&(Local_117.f_6), 2);
				}
			}
			unk_0x21675F65D589CACE();
			iVar0 = unk_0xE4B835FDC8B9B086(Local_117.f_110);
			unk_0x41C955C667F66F10(iVar0, 0, 1);
			unk_0xEC26F4BFC9942A0C(&iVar0);
		}
		else
		{
			unk_0x254D3936DA813A55(Local_117.f_110);
			return;
		}
	}
	if (func_368("DRONE_TRIG"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (func_18(Local_117.f_111))
	{
		uVar1 = Local_117.f_111;
		unk_0x4B8B69DAE5BAC592(&uVar1);
	}
	if (unk_0x765F6FEEFF39224F(Local_117.f_112))
	{
		unk_0xEC26F4BFC9942A0C(&(Local_117.f_112));
	}
	if (unk_0xE38E3CF1625A4145(Local_117.f_121))
	{
		unk_0x1ABDB383C83A336A(&(Local_117.f_121));
	}
	if (unk_0x765F6FEEFF39224F(Local_117.f_113))
	{
		unk_0x7AC8DF0B83EB4C6B(&(Local_117.f_113));
	}
	unk_0xEB3CDDFC044A3FAF();
	unk_0xD3260F66BCA580A2();
	unk_0x740205F4F57B2537();
	unk_0x7AE3E4D676C8B253(0f);
	if (func_200())
	{
		func_199(0);
	}
	func_268(1, -1);
	func_418();
	func_209(0);
	if (func_417() && (!func_227(unk_0x95B959F18401C09A()) || func_226()))
	{
		func_245(unk_0x95B959F18401C09A(), 1, 0, 0);
		unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
	}
	Local_117.f_77 = 0f;
	Local_117.f_78 = 0f;
	Local_117.f_11 = 0;
	Local_117.f_13 = 0;
	Local_117.f_9 = 0;
	Local_117.f_15 = 0;
	func_5(&(Local_117.f_160));
	func_5(&(Local_117.f_162));
	if (!Local_117.f_108)
	{
		func_5(&(Local_117.f_164));
	}
	func_5(&(Local_117.f_168));
	func_5(&(Local_117.f_166));
	func_5(&(Local_117.f_170));
	func_5(&(Local_117.f_172));
	func_5(&(Local_117.f_178));
	func_5(&(Local_117.f_176));
	func_5(&(Local_117.f_174));
	func_5(&(Local_117.f_180));
	func_5(&(Local_117.f_182));
	func_5(&(Local_117.f_184));
	func_5(&(Local_117.f_188));
	func_5(&(Local_117.f_190));
	Local_117.f_26 = 0;
	Local_117.f_5 = 0;
	Local_117.f_6 = 0;
	Global_1681628.f_3 = -1;
	func_416(-1f);
	func_357(0f);
	func_206(0);
	func_360(0);
	func_415(0);
	func_358(0);
	func_186(0);
	func_414(0);
	func_144(0);
	func_413(0);
	func_412(0);
	func_411(0);
	func_50(1);
	func_239(0);
	func_237(0);
	func_243(0);
	func_362(0);
	func_330(0f, 0f, 0f, 0f, 0f, 0f);
	func_410();
	Global_1681628.f_22 = -1;
	unk_0xCE689A8E8C42ED78(&Global_2506071, 0);
	unk_0xCE689A8E8C42ED78(&Global_1689321, 0);
	func_304(0);
	if (!func_409(0))
	{
		func_235();
	}
	if (func_187())
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (func_111())
		{
			if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8 != func_14() && unk_0xC4DEA49C5B465481(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8))
			{
				iVar2 = Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8;
			}
			else if (Global_1589668 != func_14() && unk_0xC4DEA49C5B465481(Global_1589668))
			{
				iVar2 = Global_1589668;
			}
			else if (func_379(unk_0x95B959F18401C09A(), 0))
			{
				if (func_137() != func_14() && unk_0xC4DEA49C5B465481(func_137()))
				{
					iVar2 = func_137();
				}
			}
			if (iVar2 != func_14())
			{
				if (unk_0xC4DEA49C5B465481(iVar2) && unk_0xB331FCEB94EB05C8())
				{
					func_146(iVar2, 0);
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 28);
				}
				else
				{
					unk_0x8950ED5730F62EE8(&(Local_117.f_5), 27);
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(Local_117.f_5), 27);
			}
		}
		func_310(0);
		func_309(0);
		unk_0xCE689A8E8C42ED78(&(vLocal_115[unk_0x95B959F18401C09A() /*3*/]), 0);
		iVar3 = unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_117.f_122));
		unk_0xCB1BA71FA327F268(iVar3, Local_117.f_24, Local_117.f_25);
	}
	func_408();
	func_311(0);
	func_225(0);
	unk_0x83A1D480DB0B52CC(&(Local_117.f_120));
	if (func_148(1) != 0)
	{
		unk_0x71CA80D41E1338B4(func_148(1));
	}
	if (func_148(0) != 0)
	{
		unk_0x71CA80D41E1338B4(func_148(0));
	}
	func_305(0);
	func_268(1, -1);
	Local_117.f_24 = 0;
	Local_117.f_25 = 0;
	unk_0x6C6FE09E055D0855(Local_117.f_26);
	if (unk_0xC2FDDE313D5A5398(Local_117.f_123[unk_0x95B959F18401C09A()]))
	{
		unk_0x91F3E4311D34B364(Local_117.f_123[unk_0x95B959F18401C09A()], 0);
	}
	if (!bParam0)
	{
		if (!func_135(unk_0x95B959F18401C09A()))
		{
			func_407(0f, 0f, 0f, 0f);
		}
		Global_1681628.f_2 = 0;
		func_402();
	}
	else
	{
		func_356(0, 1);
	}
}

void func_407(vector3 vParam0, float fParam1)
{
	if (!func_331(Global_1681628.f_8, vParam0, 0))
	{
		Global_1681628.f_8 = { vParam0 };
		Global_1681628.f_5 = fParam1;
	}
}

void func_408()
{
	int iVar0;
	
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_38))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_38);
		unk_0x44D426446FAF55FB(Local_117.f_38);
		Local_117.f_38 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_27))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_27);
		unk_0x44D426446FAF55FB(Local_117.f_27);
		Local_117.f_27 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_28))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_28);
		unk_0x44D426446FAF55FB(Local_117.f_28);
		Local_117.f_28 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_29))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_29);
		unk_0x44D426446FAF55FB(Local_117.f_29);
		Local_117.f_29 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_30))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_30);
		unk_0x44D426446FAF55FB(Local_117.f_30);
		Local_117.f_30 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_31))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_31);
		unk_0x44D426446FAF55FB(Local_117.f_31);
		Local_117.f_31 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_37))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_37);
		unk_0x44D426446FAF55FB(Local_117.f_37);
		Local_117.f_37 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_36))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_36);
		unk_0x44D426446FAF55FB(Local_117.f_36);
		Local_117.f_36 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_35))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_35);
		unk_0x44D426446FAF55FB(Local_117.f_35);
		Local_117.f_35 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_34))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_34);
		unk_0x44D426446FAF55FB(Local_117.f_34);
		Local_117.f_34 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_33))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_33);
		unk_0x44D426446FAF55FB(Local_117.f_33);
		Local_117.f_33 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_32))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_32);
		unk_0x44D426446FAF55FB(Local_117.f_32);
		Local_117.f_32 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_39))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_39);
		unk_0x44D426446FAF55FB(Local_117.f_39);
		Local_117.f_39 = -1;
	}
	if (!unk_0x66DE54BD13B1BD88(Local_117.f_40))
	{
		unk_0xCBE6AF58552C63B2(Local_117.f_40);
		unk_0x44D426446FAF55FB(Local_117.f_40);
		Local_117.f_40 = -1;
	}
	if (func_386())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_117.f_43[iVar0] != -1)
			{
				unk_0xCBE6AF58552C63B2(Local_117.f_43[iVar0]);
				unk_0x44D426446FAF55FB(Local_117.f_43[iVar0]);
				Local_117.f_43[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_129();
	if (unk_0x7C71681384076318("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x7CED302277C0F3D3("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0x7C71681384076318("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x7CED302277C0F3D3("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0x7C71681384076318("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x7CED302277C0F3D3("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0x7C71681384076318("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x7CED302277C0F3D3("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

bool func_409(int iParam0)
{
	return Local_117.f_158 == iParam0;
}

void func_410()
{
	if (func_141())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 7);
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (func_187())
		{
			if (!unk_0x0E4018692D92041D(Global_1681628, 16))
			{
				unk_0x8950ED5730F62EE8(&Global_1681628, 16);
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628, 16))
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 16);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_387())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 6);
		}
	}
	else if (func_387())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 6);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628, 3))
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 3);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628, 3))
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 3);
	}
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		if (!func_315())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 10);
		}
	}
	else if (func_315())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 10);
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x1BCDA92AD0A7835B(unk_0x36163153849DFDA1("AM_MP_DRONE")) > 0)
		{
			if (!func_387())
			{
				unk_0x8950ED5730F62EE8(&Global_1681628, 0);
			}
		}
	}
	else if (func_387())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 0);
	}
}

void func_416(float fParam0)
{
	if (Global_1681628.f_7 != fParam0)
	{
		Global_1681628.f_7 = fParam0;
	}
}

int func_417()
{
	if (!func_250())
	{
		return 0;
	}
	if (func_42(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!func_187())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	return 1;
}

void func_418()
{
	if (unk_0x117DAF3BF7232886(Local_117.f_119))
	{
		unk_0x2F8A4DF7D0DFF0A8(Local_117.f_119, 0);
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		if (!func_21() || unk_0x0E4018692D92041D(Local_117.f_6, 0))
		{
			unk_0x3DE34B8864800B14();
		}
	}
}

void func_419(struct<12> Param0)
{
	unk_0x210E46A190FB3CB3(32, 0, Param0);
	func_425(0, -1, 0);
	unk_0x7643BB59992A9E6E(&uLocal_116, 1);
	unk_0x568D314D73140729(&vLocal_115, 97);
	if (!func_424())
	{
		func_400(0);
	}
	if (Param0.f_11)
	{
		unk_0x8950ED5730F62EE8(&(Local_117.f_6), 3);
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_386())
		{
			Local_117.f_90 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 0:
					if (unk_0x765F6FEEFF39224F(func_278()) && !unk_0xD62C4419A41F106A(func_278(), 0))
					{
						Local_117.f_99 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(func_278(), 1), unk_0xC472E34C8FBEC678(func_278()), 0f, 1.6f, 2.9f) };
						Local_117.f_93 = { Local_117.f_99 };
					}
					func_370(1);
					vLocal_115[unk_0x95B959F18401C09A() /*3*/].f_1 = 0;
					break;
				
				case 1:
					func_423(1);
					Local_117.f_99 = { Param0.f_5 };
					vLocal_115[unk_0x95B959F18401C09A() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_422(1);
					Local_117.f_99 = { Param0.f_5 };
					vLocal_115[unk_0x95B959F18401C09A() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_363(1);
					Local_117.f_99 = { Param0.f_5 };
					vLocal_115[unk_0x95B959F18401C09A() /*3*/].f_1 = 3;
					break;
				
				default:
					func_421(1);
					Local_117.f_99 = { Param0.f_5 };
					break;
			}
			Local_117.f_96 = { Param0.f_8 };
			if (func_219(func_323()))
			{
				func_330(Local_117.f_99, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_400(0);
	}
	if (!func_386())
	{
		func_356(1, 1);
	}
	else
	{
		func_420();
	}
}

void func_420()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_117.f_43[iVar0] = -1;
		iVar0++;
	}
	func_304(4);
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628.f_2, 0))
		{
			Global_1681628.f_2 = 0;
			unk_0x8950ED5730F62EE8(&(Global_1681628.f_2), 0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628.f_2, 0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1681628.f_2), 0);
	}
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628.f_2, 3))
		{
			Global_1681628.f_2 = 0;
			unk_0x8950ED5730F62EE8(&(Global_1681628.f_2), 3);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628.f_2, 3))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1681628.f_2), 3);
	}
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1681628.f_2, 2))
		{
			Global_1681628.f_2 = 0;
			unk_0x8950ED5730F62EE8(&(Global_1681628.f_2), 2);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1681628.f_2, 2))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1681628.f_2), 2);
	}
}

int func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_395())
		{
			return 0;
		}
		if (func_393(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_425(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_402();
			}
			else
			{
				return 0;
			}
		}
		if (!func_426())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
				if (func_395())
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
				if (func_393(155))
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_402();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_402();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_402();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_426()
{
	return Global_1312844;
}

