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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0x528279F3F1EEF869("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x0347CCBD719C8ADC(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x2B7E260B913761AA(uLocal_46, "SET_MISSION_TITLE", ScriptParam_50, ScriptParam_50.f_1, 0, 0, 0);
				unk_0x3C6414EC6636D573(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1082130432, -1082130432);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0xE8F6C1F695B25B91(ScriptParam_50.f_5.f_2))
				{
					unk_0x2E6FA6BFC49A1AA8(uLocal_46, "SET_TOTAL", to_float(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x3C6414EC6636D573(uLocal_46, "SET_MEDAL", to_float(ScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x3C6414EC6636D573(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					unk_0xEA5DEA46C3EE64D3(uLocal_46, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0x4F47E317C74C543B(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x4F47E317C74C543B(2);
						unk_0x4F47E317C74C543B(0);
						unk_0x4F47E317C74C543B(0);
						unk_0x4ADC8B166E139423("STRING");
						unk_0x28594D0D61DB1278(floor((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0xD1D4F8D5470AFA4C();
						if (!unk_0xE8F6C1F695B25B91(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0xE8F6C1F695B25B91(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0xE8F6C1F695B25B91(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x4ADC8B166E139423(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0x76DB21247AE4E4E2(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0xD1D4F8D5470AFA4C();
						}
					}
					else
					{
						unk_0x4F47E317C74C543B(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0xCA5D23E5F0F0306F(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x4ADC8B166E139423("NUMBER");
							unk_0x957E514A6E999374(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0xD1D4F8D5470AFA4C();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0xCA5D23E5F0F0306F(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x4ADC8B166E139423("NUMBER");
							unk_0x957E514A6E999374(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0xD1D4F8D5470AFA4C();
						}
						if (!unk_0xE8F6C1F695B25B91(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0xE8F6C1F695B25B91(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0x6F06CF0E9AB02847();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0xE8F6C1F695B25B91(ScriptParam_50.f_5.f_2))
				{
					unk_0xEA5DEA46C3EE64D3(uLocal_46, "SET_TOTAL");
					unk_0x4F47E317C74C543B(ScriptParam_50.f_5);
					if (!unk_0xE8F6C1F695B25B91(ScriptParam_50.f_5.f_3))
					{
						func_18(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0xCA5D23E5F0F0306F(ScriptParam_50.f_5.f_1);
					}
					func_18(ScriptParam_50.f_5.f_2);
					unk_0x6F06CF0E9AB02847();
				}
				unk_0xEA5DEA46C3EE64D3(uLocal_46, "DRAW_MENU_LIST");
				unk_0x6F06CF0E9AB02847();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_112915.f_19097, 4096))
				{
					func_6(&(Global_112915.f_19097), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || unk_0xA829C9A2767AC8EF()) || Global_31650)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0x694170BB080C08FF(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0x1EC008858F146889(10))
					{
						unk_0xAC765EF46E85A446(10);
					}
				}
				break;
		}
		wait(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_13())
	{
		Global_19954.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_16()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_17()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_18(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_19()
{
	unk_0x705B098546DEB18A(&uLocal_46);
	Global_31650 = 0;
	func_1(0);
	unk_0xAFBDF6A5E54114C1();
}

