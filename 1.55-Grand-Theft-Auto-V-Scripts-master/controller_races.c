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
	if (unk_0x4210287E2833D44B(82))
	{
		func_31();
	}
	if (unk_0x636F1F53CC61D2C9(joaat("controller_races")) > 1)
	{
		unk_0x4BFE89D21F9885DC();
	}
	while (unk_0x636F1F53CC61D2C9(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	func_30();
	while (true)
	{
		if (func_27(9) || Global_96290)
		{
			func_31();
		}
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (func_25())
			{
				func_23();
				func_19();
				if (func_12() == 1)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		SYSTEM::WAIT(1000);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_24977.f_1, iVar0))
			{
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_24977.f_3, iVar0))
				{
					fVar2 = SYSTEM::VDIST2(func_9(unk_0x1146A9AE09CE2B14()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_112267[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xC664C0067EEAB8D1(&(Global_112293.f_24977.f_3), iVar0);
							}
							else if ((unk_0xDFB7BFA6482FEE1E() - Global_112273[iVar0]) > 60000)
							{
								Global_112267[iVar0] = 0;
								Global_112273[iVar0] = unk_0xDFB7BFA6482FEE1E();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xC664C0067EEAB8D1(&(Global_112293.f_24977.f_3), iVar0);
							}
						}
						else
						{
							unk_0xC664C0067EEAB8D1(&(Global_112293.f_24977.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_112267[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((unk_0xDFB7BFA6482FEE1E() - Global_112273[iVar0]) > 60000)
					{
						Global_112267[iVar0] = 0;
						Global_112273[iVar0] = unk_0xDFB7BFA6482FEE1E();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 0))
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
		if (Global_31721 == 1)
		{
			Global_31722 = 1;
		}
		Global_31721 = 1;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 0);
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 15);
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 0);
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x575B7C28D81C0B4D(Global_31724[iVar0 /*23*/].f_19))
		{
			unk_0xAE9FE38DB6527FDA(1);
			unk_0x1AD5BCFEC31BB8D9(&(Global_31724[iVar0 /*23*/].f_19));
			unk_0xAE9FE38DB6527FDA(0);
		}
	}
}

void func_3(int iParam0)
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31721 == 1)
	{
		Global_31722 = 1;
	}
	Global_31721 = 1;
	unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31721 == 1)
	{
		Global_31722 = 1;
	}
	Global_31721 = 1;
	unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31721 == 1)
	{
		Global_31722 = 1;
	}
	Global_31721 = 1;
	unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
}

bool func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x575B7C28D81C0B4D(Global_31724[iVar0 /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31724[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(var uParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(uParam0), 0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
			break;
		
		case 1:
			return 87;
			break;
		
		case 2:
			return 88;
			break;
		
		case 3:
			return 89;
			break;
		
		case 4:
			return 90;
			break;
	}
	return 86;
}

bool func_11(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[0], iParam0);
}

int func_12()
{
	func_13();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_17(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_16(unk_0x7D2B9E6A64637269());
			if (func_15(iVar0) && (!func_14(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_15(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_14(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_19()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_22(iVar0);
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_24974.f_2, iVar0))
			{
				fVar2 = SYSTEM::VDIST2(func_9(unk_0x1146A9AE09CE2B14()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_112257[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xC664C0067EEAB8D1(&(Global_112293.f_24974.f_2), iVar0);
						}
						else if ((unk_0xDFB7BFA6482FEE1E() - Global_112262[iVar0]) > 60000)
						{
							Global_112257[iVar0] = 0;
							Global_112262[iVar0] = unk_0xDFB7BFA6482FEE1E();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xC664C0067EEAB8D1(&(Global_112293.f_24974.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_112257[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((unk_0xDFB7BFA6482FEE1E() - Global_112262[iVar0]) > 60000)
				{
					Global_112257[iVar0] = 0;
					Global_112262[iVar0] = unk_0xDFB7BFA6482FEE1E();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_112293.f_24974)
			{
				if (iVar1 == 82)
				{
					func_21(82);
					func_20(65, 1000);
					Global_112293.f_24974 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112293.f_8611[iParam0] = 1;
	Global_112293.f_8611.f_236[iParam0] = (unk_0xDFB7BFA6482FEE1E() + iParam1);
}

void func_21(int iParam0)
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 82;
			break;
		
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
	}
	return 82;
}

void func_23()
{
	switch (iLocal_28)
	{
		case 0:
			if (unk_0xCA86FAB7FADC8353() < 20 && unk_0xCA86FAB7FADC8353() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
		
		case 1:
			if (unk_0xCA86FAB7FADC8353() >= 20 || unk_0xCA86FAB7FADC8353() < 5)
			{
				iLocal_28 = 2;
			}
			break;
		
		case 2:
			if (unk_0xCA86FAB7FADC8353() < 20 && unk_0xCA86FAB7FADC8353() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			break;
	}
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_25()
{
	if (func_27(9))
	{
		return 0;
	}
	if (func_26())
	{
		return 0;
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
	{
		return 0;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, Global_42009);
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_112257[iVar0] = 0;
		Global_112262[iVar0] = unk_0xDFB7BFA6482FEE1E();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_112267[iVar0] = 0;
		iVar0++;
	}
}

void func_31()
{
	unk_0x4BFE89D21F9885DC();
}

