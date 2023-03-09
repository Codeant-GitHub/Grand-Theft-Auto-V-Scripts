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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
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
	iLocal_26 = -99;
	StringCopy(&cLocal_27, "TRACKID", 32);
	unk_0x84CFE9237092E41B();
	unk_0x2EE8D1440C9060EF(&cLocal_27, 1);
	while (!unk_0x8A7F864DAB908749(1))
	{
		wait(0);
	}
	func_15();
	func_14();
	func_11();
	settimera(0);
	while (true)
	{
		wait(0);
		if (iLocal_33)
		{
			if (iLocal_35 < 101)
			{
				if (timera() > 30)
				{
					iLocal_35++;
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(23);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(1);
					func_10("CELL_4005");
					unk_0x4D9DA18AB3C2A466(iLocal_35);
					unk_0x818901B332D5541D();
					func_9(Global_14534, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
					settimera(0);
				}
			}
			else
			{
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(23);
				unk_0x4D9DA18AB3C2A466(0);
				unk_0x4D9DA18AB3C2A466(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0x818901B332D5541D();
				func_9(Global_14534, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
				iLocal_34 = 1;
				iLocal_33 = 0;
			}
		}
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					func_8();
					if (iLocal_32 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14521, 0))
					{
						func_4();
						iLocal_33 = 0;
						iLocal_34 = 0;
						Global_14531 = 1;
						func_14();
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
	iLocal_33 = 0;
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
	if (timera() > 2200)
	{
		if (Global_14541)
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_32 = 1;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x818901B332D5541D();
}

void func_8()
{
	if (Global_14531 == 0)
	{
		if (func_5(2, Global_14522, 0))
		{
			if ((iLocal_32 && iLocal_34 == 0) && iLocal_33 == 0)
			{
				iLocal_35 = 0;
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(23);
				unk_0x4D9DA18AB3C2A466(0);
				unk_0x4D9DA18AB3C2A466(1);
				func_10("CELL_4005");
				unk_0x4D9DA18AB3C2A466(iLocal_35);
				unk_0x818901B332D5541D();
				func_9(Global_14534, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
				if (Global_14541)
				{
					func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
				iLocal_33 = 1;
				settimera(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0xDDB55BEB9D76717D();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(23);
	unk_0x4D9DA18AB3C2A466(0);
	unk_0x4D9DA18AB3C2A466(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_16));
	func_10("CELL_4002");
	unk_0x4D9DA18AB3C2A466(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&(Local_20.f_25));
	func_10("CELL_4004");
	unk_0x818901B332D5541D();
	func_9(Global_14534, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
	if (Global_14541)
	{
		if (iLocal_32)
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_32)
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCE689A8E8C42ED78(&Global_2423, 17);
}

void func_15()
{
	iLocal_26 = unk_0x541925E49DBA82E9();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_26, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), unk_0x09B775396C505643(), 24);
	if (!unk_0xEAF855A7DC28BC8D(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0xEAF855A7DC28BC8D(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195", 32);
		StringCopy(&(Local_20.f_25), "CELL_195", 24);
	}
}

