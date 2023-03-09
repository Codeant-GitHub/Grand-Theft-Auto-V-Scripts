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
	int iLocal_20 = 0;
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
	unk_0x84CFE9237092E41B();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		settimera(0);
	}
	while (true)
	{
		wait(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && timera() > 1500)
					{
						func_6();
						settimera(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14521, 0))
					{
						func_4();
						Global_14531 = 1;
						if (Global_14553.f_1 > 3)
						{
							Global_14553.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14555 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x5894DC159447E10A();
}

int func_3()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x833B1A3D9F713E03(iParam0, iParam1) || (iParam2 == 1 && unk_0x5EBE50D55314CEAD(iParam0, iParam1)))
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0x86CF3D110E5DD82F() == 0 || (unk_0xE3F7CBC28F745843() && unk_0x5D79F3D06EB318A0(2)))
			{
				return 0;
			}
		}
		if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_14534, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(24);
	unk_0x4D9DA18AB3C2A466(0);
	if (unk_0x0E4018692D92041D(Global_4269308, 23))
	{
		unk_0x295B86DE57A0721D(false);
		func_8("CELL_EXTBYOU");
		unk_0x4D9DA18AB3C2A466(Global_4269309);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589));
		unk_0x4D9DA18AB3C2A466(Global_4269310);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589.f_1));
		unk_0x4D9DA18AB3C2A466(Global_4269311);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589.f_2));
		func_8("CELL_BODYG");
		unk_0x4D9DA18AB3C2A466(Global_4269312);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592));
		unk_0x4D9DA18AB3C2A466(Global_4269313);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592.f_1));
		unk_0x4D9DA18AB3C2A466(Global_4269314);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592.f_2));
	}
	else
	{
		unk_0x295B86DE57A0721D(false);
		func_8("CELL_EXTBYOU");
		unk_0x4D9DA18AB3C2A466(Global_4269312);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592));
		unk_0x4D9DA18AB3C2A466(Global_4269313);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592.f_1));
		unk_0x4D9DA18AB3C2A466(Global_4269314);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269592.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x4D9DA18AB3C2A466(Global_4269309);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589));
		unk_0x4D9DA18AB3C2A466(Global_4269310);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589.f_1));
		unk_0x4D9DA18AB3C2A466(Global_4269311);
		unk_0x4D9DA18AB3C2A466(floor(Global_4269589.f_2));
	}
	unk_0x818901B332D5541D();
	func_9(Global_14534, "DISPLAY_VIEW", 24f, to_float(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	unk_0x818901B332D5541D();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14541)
	{
		func_12(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCE689A8E8C42ED78(&Global_2423, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_8(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_8(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_8(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_8(sParam11);
	}
	unk_0x818901B332D5541D();
}

