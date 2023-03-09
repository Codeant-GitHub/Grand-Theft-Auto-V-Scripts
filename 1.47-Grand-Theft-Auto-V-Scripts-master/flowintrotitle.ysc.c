#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x9EC5BDC006623C42(83))
	{
		func_10();
	}
	unk_0xE288C38B19EF787E(0);
	unk_0xCE689A8E8C42ED78(&(Global_106565.f_10010.f_25), 1);
	func_7();
	unk_0x05CFB4D665C2A88D(true);
	if (!unk_0xBB5E373390A5F824())
	{
		unk_0x7EDEAEAED85BEE4F(0);
	}
	iLocal_0 = unk_0x199B24FF79A52CCF("OPENING_CREDITS");
	while (!unk_0x11AE7F6A404414C9(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!unk_0xBB5E373390A5F824())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xE3903F59E2F22150() + 8000 + round((2f * 1000f)));
	while (!unk_0x286C823E0969F22A())
	{
		func_7();
		if (!unk_0x0E4018692D92041D(Global_106565.f_10010.f_25, 1))
		{
			unk_0xFF524AE40FB6301A(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xE3903F59E2F22150() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xE3903F59E2F22150() + round((2f * 1000f)));
				}
			}
			else if (unk_0xE3903F59E2F22150() > iLocal_1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 1);
				if (unk_0x952F01F9387B7183() || unk_0x4CE1DD5CFC1F941E())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_93721 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xBB698266C5FDF0A7(iLocal_0, "HIDE_LOGO");
	unk_0x713FEBE56D2BD403("STRING");
	unk_0xD61E5ED1D4E687A5(sParam0);
	unk_0x36F3AA9FFAAF8606();
	unk_0x818901B332D5541D();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xBB698266C5FDF0A7(iLocal_0, "SHOW_LOGO");
	unk_0x713FEBE56D2BD403("STRING");
	unk_0xD61E5ED1D4E687A5(sParam0);
	unk_0x36F3AA9FFAAF8606();
	unk_0x8DAB5B12D7B9AD29(fParam1);
	unk_0x8DAB5B12D7B9AD29(fParam2);
	unk_0x8DAB5B12D7B9AD29(fParam3);
	unk_0x8DAB5B12D7B9AD29(fParam4);
	unk_0x8DAB5B12D7B9AD29(fParam5);
	unk_0x8DAB5B12D7B9AD29(fParam6);
	unk_0x8DAB5B12D7B9AD29(fParam7);
	unk_0x818901B332D5541D();
}

void func_7()
{
	unk_0x58355301CBA19400();
	unk_0x3FD9339AA95E323F(2, 199, 1);
	unk_0x5C58D0ADA22491FA(7);
	func_8();
}

void func_8()
{
	unk_0x818D1850BE9E44A9();
	func_9();
}

void func_9()
{
	Global_17272.f_134 = 1;
}

void func_10()
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_10010.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x83A1D480DB0B52CC(&iLocal_0);
	}
	unk_0x5C58D0ADA22491FA(4);
	unk_0x05CFB4D665C2A88D(false);
	unk_0xE288C38B19EF787E(1);
	unk_0x5894DC159447E10A();
}

