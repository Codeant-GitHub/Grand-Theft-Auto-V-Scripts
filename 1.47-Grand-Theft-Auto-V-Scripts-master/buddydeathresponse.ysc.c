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
	int iLocal_19 = 0;
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
	if (unk_0x9EC5BDC006623C42(2) || unk_0x1749F6302F2F8C4E())
	{
		unk_0x5894DC159447E10A();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_8(&iLocal_20))
	{
		wait(0);
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_20))
	{
		if (!Global_90207)
		{
			unk_0x0D21E1FDE062ED99(iLocal_20, true, 1);
			if (unk_0xD76D6BCC14B95CE1(iLocal_20, 1435919172) != 7)
			{
				unk_0xED68CDDDE25A144E(iLocal_20);
			}
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0) };
			unk_0x4A852F02088ECC9D(iLocal_20, 1);
			unk_0x99414FB2D30425C1(&uVar1);
			if (!unk_0xF0D230FB550CD6EB(iLocal_20, 0))
			{
				if (!unk_0x71E0DAA57FE7D5C7(iLocal_20, 0) && !unk_0xF0D230FB550CD6EB(iLocal_20, 0))
				{
					unk_0x9F878FE3F23E2C8B(0, vVar0, 6000);
				}
			}
			unk_0xAE5B044AA2973E2A(0, vVar0, 6000, 0, 2);
			unk_0xC734F59A13D39AEF(uVar1);
			unk_0x13A2D602CD10CBAC(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xBB5E373390A5F824())
	{
		wait(0);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_20))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_20))
		{
			unk_0x897EF720254BBEA3(iLocal_20, 1);
		}
		unk_0x1F45B4626AC4A4C0(&iLocal_20);
	}
	Global_90207 = 0;
	unk_0x5894DC159447E10A();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE3903F59E2F22150() + 1000;
	while (unk_0xE3903F59E2F22150() < iVar0 && !unk_0xBB5E373390A5F824())
	{
		wait(0);
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x33CD235DF1E6A94E()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x33CD235DF1E6A94E()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x33CD235DF1E6A94E()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91081[iLocal_18]) && !unk_0xBC2FC12AD0FBF72E(Global_91081[iLocal_18]))
		{
			if (Global_91081[iLocal_18] != unk_0x33CD235DF1E6A94E())
			{
				if (!unk_0x5A04E3BD0B5E7E49(Global_91081[iLocal_18]))
				{
					if (unk_0xF0D230FB550CD6EB(Global_91081[iLocal_18], 0) || !unk_0x9F4718FD61B07058(Global_91081[iLocal_18]))
					{
						if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(Global_91081[iLocal_18], 1), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_91081[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x72F7FAFD0710100C(Global_91081[iLocal_18], unk_0x33CD235DF1E6A94E(), 17))
									{
										if (unk_0xF0D230FB550CD6EB(Global_91081[iLocal_18], 0))
										{
											iVar0 = unk_0xF2C96862595654B4(Global_91081[iLocal_18], 0);
										}
										if ((unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0)) || !unk_0x765F6FEEFF39224F(iVar0))
										{
											*uParam0 = Global_91081[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0xBB5E373390A5F824())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_6(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_5(unk_0x33CD235DF1E6A94E());
			if (func_7(iVar0) && (!func_11(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_7(Global_106565.f_2357.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return Global_36425 == iParam0;
}

