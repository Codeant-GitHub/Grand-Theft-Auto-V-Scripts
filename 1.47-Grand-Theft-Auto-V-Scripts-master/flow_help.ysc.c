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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x9EC5BDC006623C42(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_106565.f_20404.f_145 > 0 || Global_105205)
		{
			if (!Global_105205)
			{
				if ((Global_36425 != 6 && Global_36425 != 15) && !Global_89719)
				{
					func_22();
				}
				if (!Global_105204)
				{
					if (Global_106565.f_20404.f_145 > 0)
					{
						if (func_19(&(Global_106565.f_20404[iLocal_21 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0x0E4018692D92041D(Global_106565.f_20404[iLocal_21 /*16*/].f_11, func_12()))
								{
									if (Global_106565.f_20404[iLocal_21 /*16*/].f_12 == Global_106565.f_20404.f_146[func_12()])
									{
										if (unk_0xE3903F59E2F22150() > Global_105207)
										{
											if (unk_0xE3903F59E2F22150() > Global_106565.f_20404[iLocal_21 /*16*/].f_8)
											{
												if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iLocal_21 /*16*/].f_4), ""))
												{
													unk_0xA2A8AFE6757C42D2(1);
													func_11(&(Global_106565.f_20404[iLocal_21 /*16*/]));
												}
												else
												{
													unk_0xA2A8AFE6757C42D2(1);
													func_10(&(Global_106565.f_20404[iLocal_21 /*16*/]), &(Global_106565.f_20404[iLocal_21 /*16*/].f_4));
												}
												if (Global_106565.f_20404[iLocal_21 /*16*/].f_13 != 0)
												{
													func_9(Global_106565.f_20404[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_106565.f_20404[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_106565.f_20404[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_106565.f_20404[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_106565.f_20404[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_106565.f_20404[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_106565.f_20404[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_106565.f_20404[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_106565.f_20404[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_106565.f_20404[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_106565.f_20404[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_105208 = { Global_106565.f_20404[iLocal_21 /*16*/] };
												Global_105206 = unk_0xE3903F59E2F22150();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_106565.f_20404.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_106565.f_20404.f_145 - 1));
												Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
												func_6();
												Global_105205 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0xCE3CFF625BEBAA04(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0xEDF90B96BED57BCE(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0xEDF90B96BED57BCE(0);
				}
				if ((unk_0xE3903F59E2F22150() - Global_105206) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_105207 = unk_0xE3903F59E2F22150() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_105206 = 0;
				Global_105205 = 0;
			}
			if (!unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iLocal_21 /*16*/]), &Local_20) && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iLocal_21 /*16*/]), ""))
			{
				if (Global_106565.f_20404[iLocal_21 /*16*/].f_10 != -1)
				{
					if (unk_0xE3903F59E2F22150() > Global_106565.f_20404[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_106565.f_20404.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_106565.f_20404.f_145 - 1));
						Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_106565.f_20404.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_36425 != 6 && Global_36425 != 15) && !Global_89719)
		{
			func_22();
		}
		wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCE3CFF625BEBAA04(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (unk_0xE3903F59E2F22150() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((unk_0xE3903F59E2F22150() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_6();
	}
}

int func_2(char* sParam0, int iParam1)
{
	unk_0x6D39881CA5436178(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_3(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_4()
{
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0xE3903F59E2F22150() - Global_105206) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_105204)
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (unk_0xCE3CFF625BEBAA04(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/].f_4), "", 16);
	Global_106565.f_20404[iParam0 /*16*/].f_8 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = -1;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_106565.f_20404[iParam0 /*16*/] = { Global_106565.f_20404[iParam1 /*16*/] };
	Global_106565.f_20404[iParam0 /*16*/].f_4 = { Global_106565.f_20404[iParam1 /*16*/].f_4 };
	Global_106565.f_20404[iParam0 /*16*/].f_8 = Global_106565.f_20404[iParam1 /*16*/].f_8;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = Global_106565.f_20404[iParam1 /*16*/].f_10;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = Global_106565.f_20404[iParam1 /*16*/].f_9;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = Global_106565.f_20404[iParam1 /*16*/].f_11;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = Global_106565.f_20404[iParam1 /*16*/].f_12;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = Global_106565.f_20404[iParam1 /*16*/].f_13;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = Global_106565.f_20404[iParam1 /*16*/].f_14;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = Global_106565.f_20404[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106565.f_8607[iParam0] = 1;
	Global_106565.f_8607.f_236[iParam0] = (unk_0xE3903F59E2F22150() + iParam1);
}

void func_10(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x092150016C06C431(0, 1, true, -1);
}

void func_11(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_12()
{
	func_13();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_16(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_15(unk_0x33CD235DF1E6A94E());
			if (func_17(iVar0) && (!func_14(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_17(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_14(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18()
{
	func_13();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_19(var uParam0)
{
	if (unk_0xFAC8F20FBC764F4D())
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (!unk_0x73DA1542B2F0C458())
	{
		return 0;
	}
	if (unk_0x15C85368E432C647())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_71588)
		{
			return 0;
		}
		if (Global_90632)
		{
			return 0;
		}
		if (!unk_0x0E4018692D92041D(uParam0->f_15, 1))
		{
			if (Global_90640)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_105205)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	Global_105206 = 0;
	Global_105205 = 0;
	unk_0x5894DC159447E10A();
}

