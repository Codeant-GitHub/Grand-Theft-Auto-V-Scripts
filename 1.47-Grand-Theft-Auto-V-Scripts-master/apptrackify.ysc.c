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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x84CFE9237092E41B();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						unk_0xBB698266C5FDF0A7(Global_14534, "APP_FUNCTION");
						unk_0x4D9DA18AB3C2A466(1);
						unk_0x818901B332D5541D();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						unk_0xBB698266C5FDF0A7(Global_14534, "APP_FUNCTION");
						unk_0x4D9DA18AB3C2A466(1);
						unk_0x818901B332D5541D();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14521, 0))
					{
						func_5();
						Global_14531 = 1;
						func_10();
						func_7();
						if (Global_14553.f_1 > 3)
						{
							Global_14553.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0xCE689A8E8C42ED78(&Global_2424, 22);
	unk_0x5894DC159447E10A();
}

void func_3(int iParam0, int iParam1)
{
	Global_4269561[iParam0] = iParam1;
}

int func_4()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_14541)
	{
		func_8(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCE689A8E8C42ED78(&Global_2423, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
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
		func_9(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x818901B332D5541D();
}

void func_9(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			vLocal_20 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			fLocal_21 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(23);
				unk_0x4D9DA18AB3C2A466(0);
				if (unk_0x0E4018692D92041D(Global_2424, 30))
				{
					unk_0x4D9DA18AB3C2A466(-99);
					unk_0x4D9DA18AB3C2A466(0);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(floor(fLocal_25));
					unk_0x4D9DA18AB3C2A466(floor(fLocal_26));
				}
				unk_0x4D9DA18AB3C2A466(100);
				if (unk_0x0E4018692D92041D(Global_2424, 22))
				{
					unk_0x4D9DA18AB3C2A466(1);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(0);
				}
				if (unk_0x0E4018692D92041D(Global_2424, 29))
				{
					unk_0x295B86DE57A0721D(false);
				}
				else
				{
					unk_0x295B86DE57A0721D(true);
				}
				if (unk_0x0E4018692D92041D(Global_2425, 1))
				{
					unk_0x8DAB5B12D7B9AD29(fLocal_28);
				}
				unk_0x818901B332D5541D();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14534, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		vLocal_20 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
		fLocal_21 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
		if (Global_4269583 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4269583)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(23);
				unk_0x4D9DA18AB3C2A466(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x0E4018692D92041D(Global_4269308, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x0E4018692D92041D(Global_4269308, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x0E4018692D92041D(Global_4269308, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x0E4018692D92041D(Global_4269308, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x4D9DA18AB3C2A466(-99);
					unk_0x4D9DA18AB3C2A466(0);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(floor(fLocal_25));
					unk_0x4D9DA18AB3C2A466(floor(fLocal_26));
				}
				unk_0x4D9DA18AB3C2A466(100);
				if (unk_0x0E4018692D92041D(Global_2424, 22))
				{
					unk_0x295B86DE57A0721D(true);
				}
				else
				{
					unk_0x295B86DE57A0721D(true);
				}
				if (unk_0x0E4018692D92041D(Global_2424, 29))
				{
					unk_0x295B86DE57A0721D(false);
				}
				else
				{
					unk_0x295B86DE57A0721D(true);
				}
				unk_0x8DAB5B12D7B9AD29(fLocal_28);
				unk_0x4D9DA18AB3C2A466(Global_4269561[iVar0]);
				unk_0x818901B332D5541D();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14534, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4269497[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = unk_0xB92C3C556226E8F9(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4269497[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_4269497[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4269497[iParam0 /*3*/] - vLocal_20.x) * (Global_4269497[iParam0 /*3*/] - vLocal_20.x)) + ((Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
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

float func_15()
{
	fLocal_23 = (Global_16972 - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_16972.f_1 - vLocal_20.y));
	fLocal_25 = unk_0xB92C3C556226E8F9(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_16972, vLocal_20));
	fLocal_28 = (Global_16972.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_16972 - vLocal_20.x) * (Global_16972 - vLocal_20.x)) + ((Global_16972.f_1 - vLocal_20.y) * (Global_16972.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()
{
	if (Global_71590 == 1)
	{
		return 1;
	}
	return 0;
}

