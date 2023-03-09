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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	func_4(21);
	if (unk_0x9EC5BDC006623C42(18))
	{
		if (unk_0xFC234596ED1AED40() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1BCDA92AD0A7835B(joaat("docks_setup")) == 0)
		{
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iLocal_28 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_28))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_28, 0))
				{
					if (unk_0xD470A4E16E9AAE0E(iLocal_28, joaat("handler")))
					{
						unk_0x144904D2EAA84341(0, 51);
						if (!unk_0x79BEA241E43FC2B3(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x765F6FEEFF39224F(iLocal_29) || (unk_0x765F6FEEFF39224F(iLocal_29) && unk_0x68F833BFE3A28FEA(unk_0xFBB1F99A825CAB09(iLocal_28, true), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x68F833BFE3A28FEA(unk_0xFBB1F99A825CAB09(iLocal_28, true), 15f, 874602658, 1, 0, 1);
								}
								if (unk_0x765F6FEEFF39224F(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0x3793BE214881F17B(iLocal_28, iLocal_29))
										{
											if (unk_0x833B1A3D9F713E03(0, 51))
											{
												unk_0xD897BE44C3BD9193(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0xE3903F59E2F22150();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x833B1A3D9F713E03(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE3903F59E2F22150();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x5894DC159447E10A();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iVar0], iVar1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_9079.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x8950ED5730F62EE8(&(Global_106565.f_9079.f_99.f_219[iVar0]), iVar1);
	return 1;
}

