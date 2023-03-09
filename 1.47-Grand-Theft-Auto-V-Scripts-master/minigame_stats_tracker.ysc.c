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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_18();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x199B24FF79A52CCF("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x11AE7F6A404414C9(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x0EACE1AA0D5FBD13(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50, ScriptParam_50.f_1, 0, 0, 0);
				unk_0x4A6DCCDF973E702F(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1082130432, -1082130432);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0x6D2E2622CA149402(ScriptParam_50.f_5.f_2))
				{
					unk_0x6A6CDD58B3D445A1(iLocal_46, "SET_TOTAL", to_float(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x4A6DCCDF973E702F(iLocal_46, "SET_MEDAL", to_float(ScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x4A6DCCDF973E702F(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					unk_0xBB698266C5FDF0A7(iLocal_46, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0x4D9DA18AB3C2A466(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x4D9DA18AB3C2A466(2);
						unk_0x4D9DA18AB3C2A466(0);
						unk_0x4D9DA18AB3C2A466(0);
						unk_0x713FEBE56D2BD403("STRING");
						unk_0xDC97362660946DF9(floor((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x36F3AA9FFAAF8606();
						if (!unk_0x6D2E2622CA149402(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_17(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x6D2E2622CA149402(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0x6D2E2622CA149402(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x713FEBE56D2BD403(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0xD61E5ED1D4E687A5(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0x36F3AA9FFAAF8606();
						}
					}
					else
					{
						unk_0x4D9DA18AB3C2A466(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x8DAB5B12D7B9AD29(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x713FEBE56D2BD403("NUMBER");
							unk_0x974BEF45D557B847(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x36F3AA9FFAAF8606();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x8DAB5B12D7B9AD29(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x713FEBE56D2BD403("NUMBER");
							unk_0x974BEF45D557B847(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x36F3AA9FFAAF8606();
						}
						if (!unk_0x6D2E2622CA149402(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_17(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x6D2E2622CA149402(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_17(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0x818901B332D5541D();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0x6D2E2622CA149402(ScriptParam_50.f_5.f_2))
				{
					unk_0xBB698266C5FDF0A7(iLocal_46, "SET_TOTAL");
					unk_0x4D9DA18AB3C2A466(ScriptParam_50.f_5);
					if (!unk_0x6D2E2622CA149402(ScriptParam_50.f_5.f_3))
					{
						func_17(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0x8DAB5B12D7B9AD29(ScriptParam_50.f_5.f_1);
					}
					func_17(ScriptParam_50.f_5.f_2);
					unk_0x818901B332D5541D();
				}
				unk_0xBB698266C5FDF0A7(iLocal_46, "DRAW_MENU_LIST");
				unk_0x818901B332D5541D();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_106565.f_19091, 4096))
				{
					func_6(&(Global_106565.f_19091), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || unk_0xBB5E373390A5F824()) || Global_25909)
				{
					func_18();
				}
				else
				{
					func_1(1);
					unk_0x5A2C46836B4DF5B3(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xB31F7B7798441CF3(10))
					{
						unk_0x581AE7724ACAD410(10);
					}
				}
				break;
		}
		wait(0);
	}
	func_18();
}

void func_1(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

float func_2(int iParam0)
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
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
		fVar0 = to_float(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
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

void func_9(int iParam0)
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_3(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (Global_14725)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_17(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_18()
{
	unk_0x83A1D480DB0B52CC(&iLocal_46);
	Global_25909 = 0;
	func_1(0);
	unk_0x5894DC159447E10A();
}

