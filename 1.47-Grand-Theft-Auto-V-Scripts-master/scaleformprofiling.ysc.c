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
	int iLocal_18 = 0;
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
	if (unk_0xBB5E373390A5F824())
	{
		unk_0xACCDA78123DB57B0(500);
	}
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x199B24FF79A52CCF("scaleform_profiling");
	while (!unk_0x11AE7F6A404414C9(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		unk_0x5A2C46836B4DF5B3(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14532 == 0)
	{
		if (((((((unk_0xF1CDE9FD207C4CD8(2, 189) || unk_0xF1CDE9FD207C4CD8(2, 190)) || unk_0xF1CDE9FD207C4CD8(2, 188)) || unk_0xF1CDE9FD207C4CD8(2, 187)) || unk_0xF1CDE9FD207C4CD8(2, 205)) || unk_0xF1CDE9FD207C4CD8(2, 206)) || unk_0xF1CDE9FD207C4CD8(2, 201)) || unk_0xF1CDE9FD207C4CD8(2, 202))
		{
			Global_14532 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_14532 = 0;
	}
	if (Global_14532 == 0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 189))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(10);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 190))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(11);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 205))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(4);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 206))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(6);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 188))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(8);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 187))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 201))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(16);
			unk_0x818901B332D5541D();
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 202))
		{
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(17);
			unk_0x818901B332D5541D();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0xD5CD4268EDE6F40E(0);
	unk_0x83A1D480DB0B52CC(&iLocal_18);
	unk_0x5894DC159447E10A();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
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

bool func_7()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

