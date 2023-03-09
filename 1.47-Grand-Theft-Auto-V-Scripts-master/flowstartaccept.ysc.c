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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x9EC5BDC006623C42(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x4CE1DD5CFC1F941E()) && unk_0x952F01F9387B7183())
	{
		unk_0x05CFB4D665C2A88D(true);
		if (!unk_0xBB5E373390A5F824())
		{
			if (!unk_0x75A50A9E5219C397())
			{
				unk_0x7EDEAEAED85BEE4F(800);
			}
		}
		iLocal_20 = unk_0x199B24FF79A52CCF("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x199B24FF79A52CCF("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x11AE7F6A404414C9(iLocal_20) || !unk_0x11AE7F6A404414C9(iLocal_21))
		{
			wait(0);
		}
		unk_0xBB698266C5FDF0A7(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(iLocal_21, "SET_DATA_SLOT");
		unk_0x4D9DA18AB3C2A466(0);
		func_4(unk_0x4464D5595CEED843(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
		while (!unk_0xBB5E373390A5F824())
		{
			wait(0);
		}
		unk_0xA929C97A4A431A79();
		while (!iLocal_22)
		{
			unk_0x58355301CBA19400();
			unk_0x5C58D0ADA22491FA(7);
			unk_0xFF524AE40FB6301A(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xFF524AE40FB6301A(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xF1CDE9FD207C4CD8(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		unk_0x05CFB4D665C2A88D(false);
		func_3(1, 1);
		func_1();
	}
	Global_71859.f_1 = 0;
	unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

void func_5(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x83A1D480DB0B52CC(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x83A1D480DB0B52CC(&iLocal_21);
	}
	unk_0x5C58D0ADA22491FA(4);
	unk_0x05CFB4D665C2A88D(false);
	unk_0x5894DC159447E10A();
}

