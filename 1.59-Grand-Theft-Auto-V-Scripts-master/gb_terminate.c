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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<11> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_102[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_731(ScriptParam_0))
		{
			func_676();
		}
	}
	while (true)
	{
		func_675();
		if (func_670())
		{
			func_676();
		}
		switch (func_669(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_668() == 1)
				{
					if (func_667())
					{
						func_666(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_668() == 1)
				{
					if (!func_664())
					{
						func_105();
					}
					if (func_53(1))
					{
						func_666(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (func_668() == 3)
				{
					func_666(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_676();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_52())
			{
				func_51(3);
			}
			switch (func_668())
			{
				case 0:
					if (func_43())
					{
						func_51(1);
					}
					break;
				
				case 1:
					if (func_42() == 3)
					{
						func_51(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_676();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_91.f_8)
	{
		case 0:
			if (func_41())
			{
				func_40(1);
			}
			func_38();
			break;
		
		case 1:
			func_38();
			func_2();
			break;
		
		case 2:
			if (BitTest(Local_91.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		MISC::SET_BIT(&(Local_91.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_40(2);
		MISC::SET_BIT(&(Local_91.f_1), 3);
	}
	if (BitTest(Local_91.f_1, 0))
	{
		if (func_3(&(Local_91.f_4), func_5(), 0))
		{
			MISC::SET_BIT(&(Local_91.f_1), 4);
		}
	}
	if (BitTest(Local_91.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (BitTest(Local_91.f_1, 1) || BitTest(Local_91.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_5()
{
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(bool bParam0, bool bParam1)
{
	return func_7(bParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_10() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(bool bParam0, int iParam1)
{
	if (bParam0 != func_10())
	{
		if (Global_1893551[bParam0 /*599*/].f_10 != func_10())
		{
			if (Global_1893551[bParam0 /*599*/].f_10 == bParam0 && Global_1893551[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_10()
{
	return -1;
}

bool func_11()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

void func_12(int iParam0)
{
	Local_91.f_9 = iParam0;
}

int func_13(bool bParam0)
{
	if (func_34(bParam0) && ((func_32(bParam0) == 142 || func_32(bParam0) == 164) || func_32(bParam0) == 148))
	{
		return 0;
	}
	if (bParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(bParam0, 0, 1))
	{
		return 0;
	}
	if (func_31(bParam0, 1, 0))
	{
		return 0;
	}
	if (func_30(bParam0))
	{
		return 0;
	}
	if (func_28(bParam0, 1) && func_27(bParam0) == func_11())
	{
		return 0;
	}
	if (func_23(bParam0))
	{
		return 0;
	}
	if (func_22(bParam0, 7))
	{
		return 0;
	}
	if (func_17(bParam0))
	{
		return 0;
	}
	if (func_14(bParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (func_16() != 0)
	{
		return 0;
	}
	if (!func_15(bParam0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (Global_1853131[bVar0 /*888*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703660.f_1, bParam0);
	}
	return 1;
}

int func_16()
{
	return Global_31511;
}

int func_17(bool bParam0)
{
	if (func_19(bParam0, 0))
	{
		return 1;
	}
	if (func_18())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[bParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_18()
{
	return BitTest(Global_2621446, 3);
}

bool func_19(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_20(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[bParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_21()
{
	return Global_1574915;
}

bool func_22(bool bParam0, int iParam1)
{
	return BitTest(Global_2689224[bParam0 /*451*/].f_215, iParam1);
}

bool func_23(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return func_26();
	}
	return BitTest(Global_1644218.f_241.f_136[func_25(10) /*33*/][bParam0], func_24(10));
}

int func_24(int iParam0)
{
	return (iParam0 % 32);
}

int func_25(int iParam0)
{
	return (iParam0 / 32);
}

bool func_26()
{
	return Global_1574582;
}

int func_27(bool bParam0)
{
	if (bParam0 != func_10())
	{
		return Global_1893551[bParam0 /*599*/].f_10;
	}
	return func_10();
}

bool func_28(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(bParam0))
		{
			return 0;
		}
	}
	return Global_1893551[bParam0 /*599*/].f_10 != func_10();
}

int func_29(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (Global_1893551[bParam0 /*599*/].f_10 != func_10())
		{
			return Global_1893551[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

bool func_30(bool bParam0)
{
	return Global_1853131[bParam0 /*888*/].f_192 != 0;
}

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_10())
	{
		return 0;
	}
	if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(bool bParam0)
{
	if (func_33(bParam0, 0))
	{
		return Global_1893551[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_33(bool bParam0, int iParam1)
{
	if (Global_1893551[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_29(iParam0))
	{
		if (func_35(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_36(bParam0, 9);
	}
	return 0;
}

bool func_36(bool bParam0, int iParam1)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_37()
{
	return Local_91.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (BitTest(Local_102[iVar2 /*4*/].f_1, 1))
			{
				func_39(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				MISC::SET_BIT(&(Local_91.f_1), true);
			}
			if (BitTest(Local_102[iVar2 /*4*/].f_1, 4))
			{
				func_39(func_11());
				MISC::SET_BIT(&(Local_91.f_1), 7);
			}
			if (BitTest(Local_102[iVar2 /*4*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_91.f_1), false);
			}
			if (BitTest(Local_102[iVar2 /*4*/].f_1, 2))
			{
				MISC::SET_BIT(&(Local_91.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (BitTest(Local_102[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			MISC::SET_BIT(&(Local_91.f_1), 5);
		}
		else if (func_3(&(Local_91.f_6), 10000, 0))
		{
			MISC::SET_BIT(&(Local_91.f_1), 5);
		}
	}
}

void func_39(bool bParam0)
{
	Local_91.f_3 = bParam0;
}

void func_40(int iParam0)
{
	Local_91.f_8 = iParam0;
}

int func_41()
{
	return 1;
}

int func_42()
{
	return Local_91.f_8;
}

int func_43()
{
	if (func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (BitTest(Local_91.f_1, 6))
	{
		return 1;
	}
	func_50(func_10());
	if (Global_2810701.f_5194.f_4 != func_10())
	{
	}
	else
	{
		func_51(3);
	}
	if (func_9(Global_2810701.f_5194.f_4, 0, 1))
	{
		if (!func_48(Global_2810701.f_5194.f_4, PLAYER::PLAYER_ID(), 1))
		{
			func_50(Global_2810701.f_5194.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			if (func_47(func_37(), 4))
			{
				Local_91.f_10 = 1;
			}
		}
		func_45(func_46(func_37()), 1);
		Global_2810701.f_5194.f_4 = func_10();
		MISC::SET_BIT(&(Local_91.f_1), 6);
		return 1;
	}
	else if (func_37() == func_10())
	{
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1114091621;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_46(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_47(bool bParam0, int iParam1)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_10.f_5, iParam1);
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(bParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[bParam0 /*599*/].f_10 != func_10())
		{
			return bParam1 == Global_1893551[bParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_10())
			{
				if (Global_1893551[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_50(bool bParam0)
{
	Local_91.f_2 = bParam0;
	if (bParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_91.f_0 = iParam0;
}

int func_52()
{
	if (Global_2810701.f_5194.f_42)
	{
		Global_2810701.f_5194.f_42 = 0;
		return 1;
	}
	return 0;
}

int func_53(bool bParam0)
{
	if (!func_104(PLAYER::PLAYER_ID(), 3) && func_64(1))
	{
		return 1;
	}
	if (Global_2810701.f_5194.f_43)
	{
		Global_2810701.f_5194.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_63() == func_10() || !func_9(func_63(), 0, 1))
		{
			return 1;
		}
	}
	if (func_104(PLAYER::PLAYER_ID(), 1) && !func_61(PLAYER::PLAYER_ID()))
	{
		if (func_54())
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (func_60(PLAYER::PLAYER_ID()) && func_57())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return 0;
}

bool func_55()
{
	return func_56() == 1;
}

int func_56()
{
	return Global_1973391;
}

int func_57()
{
	switch (func_58(func_59(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_59(bool bParam0)
{
	if (bParam0 != func_10() && func_9(bParam0, 1, 1))
	{
		return Global_2689224[bParam0 /*451*/].f_317.f_16;
	}
	return -1;
}

int func_60(bool bParam0)
{
	if (bParam0 != func_10() && func_9(bParam0, 1, 1))
	{
		return BitTest(Global_2689224[bParam0 /*451*/].f_317, 4);
	}
	return 0;
}

int func_61(bool bParam0)
{
	if (func_62(bParam0) != func_10())
	{
		return func_62(bParam0) == func_27(bParam0);
	}
	return 0;
}

int func_62(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_35;
}

bool func_63()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

int func_64(bool bParam0)
{
	bool bVar0;
	
	if (!func_103(1) && func_63() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != func_10())
		{
			if (func_9(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_102(func_32(PLAYER::PLAYER_ID())) == 0 || func_102(func_32(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_101(31);
				if (func_100(func_32(PLAYER::PLAYER_ID())))
				{
					func_101(81);
				}
				if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != func_10() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1889769 = func_66(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!func_65(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						func_101(88);
					}
				}
				else
				{
					Global_1889769 = 1;
				}
				Global_1889753 = { Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_66(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_17(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81734[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_17(PLAYER::PLAYER_ID()) || (func_99() && func_98())) && !BitTest(Global_2810701.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_97();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81734[iParam1] != -1)
							{
								return func_95(iParam1, bParam0, 0);
							}
							else
							{
								return func_79(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_79(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81734[iParam1] != -1)
				{
					return func_95(iParam1, bParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81734[iParam1] != -1)
		{
			return func_95(iParam1, bParam0, 0);
		}
		else
		{
			return func_79(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_79(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_68(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_78() || (func_77() && func_75())) && Global_1655692.f_1)
	{
		if (bParam1)
		{
			return func_74(iParam2, iVar0);
		}
		else
		{
			return func_74(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_4718592.f_87009, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138376 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9278[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 0);
				
				case 1:
					return BitTest(Global_4718592.f_544, 1);
				
				case 2:
					return BitTest(Global_4718592.f_544, 2);
				
				case 3:
					return BitTest(Global_4718592.f_544, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 4);
				
				case 1:
					return BitTest(Global_4718592.f_544, 5);
				
				case 2:
					return BitTest(Global_4718592.f_544, 6);
				
				case 3:
					return BitTest(Global_4718592.f_544, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 8);
				
				case 1:
					return BitTest(Global_4718592.f_544, 9);
				
				case 2:
					return BitTest(Global_4718592.f_544, 10);
				
				case 3:
					return BitTest(Global_4718592.f_544, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 12);
				
				case 1:
					return BitTest(Global_4718592.f_544, 13);
				
				case 2:
					return BitTest(Global_4718592.f_544, 14);
				
				case 3:
					return BitTest(Global_4718592.f_544, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_71(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_75()
{
	if (func_76())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_142560, 4);
}

bool func_76()
{
	return BitTest(Global_4718592.f_132162, 12);
}

bool func_77()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_142560, 0);
	}
	return ((BitTest(Global_4718592.f_142560, 0) || Global_1923666) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_78()
{
	if (func_76() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_79(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853131[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_85())
			{
				iVar3 = func_84(bParam0);
				if (!iVar3 == -1)
				{
					return func_82(iVar3);
				}
			}
			if ((func_81(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_73(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_72(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_80(1);
			}
			else
			{
				return func_68(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853131[bParam0 /*888*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_84(bParam0);
	if (!iVar4 == -1)
	{
		return func_82(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_80(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_81(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_82(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_83(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_83(int iParam0)
{
	return Global_2680263.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_84(bool bParam0)
{
	if (!bParam0 == func_10())
	{
		if (func_28(bParam0, 1))
		{
			return Global_2680263.f_818.f_11[func_27(bParam0)];
		}
	}
	return -1;
}

int func_85()
{
	if ((((((func_94() || func_93()) || func_92()) || func_91()) || func_90()) || func_88()) || func_86())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	return func_87(Global_4718592.f_87009);
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_88()
{
	return func_89(Global_4718592.f_87009);
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30700[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_90()
{
	return Global_2714635.f_24;
}

var func_91()
{
	return Global_2714635.f_21;
}

bool func_92()
{
	return Global_2714635.f_19;
}

var func_93()
{
	return Global_2714635.f_18;
}

var func_94()
{
	return Global_2714635.f_17;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058068.f_14[iParam0];
	if (func_85())
	{
		iVar2 = func_84(iParam1);
		if (!iVar2 == -1)
		{
			return func_82(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_595[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
	{
		if (Global_4718592.f_81734[iParam0] != -1 && Global_4718592.f_81734[iParam0] <= 4)
		{
			if (Global_4718592.f_81734[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81734[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81734[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81734[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81734[iParam0];
			}
		}
		else
		{
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_96(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_73(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_80(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138533;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138534;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138535;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138536;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_97()
{
	return Global_2621446.f_2;
}

var func_98()
{
	return BitTest(Global_2621446, 4);
}

var func_99()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148 && func_8(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_101(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810701.f_5194.f_7[iVar0]), bVar1);
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_103(bool bParam0)
{
	return func_28(PLAYER::PLAYER_ID(), bParam0);
}

int func_104(bool bParam0, int iParam1)
{
	if (func_33(bParam0, 0))
	{
		return func_102(Global_1893551[bParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

void func_105()
{
	switch (func_663())
	{
		case 0:
			func_648(151, 1, -1, 0);
			func_647(1);
			if (func_42() > 0)
			{
				func_646(1);
			}
			break;
		
		case 1:
			if (!BitTest(uLocal_89, 2))
			{
				func_643();
			}
			if (Global_1952835 == func_10())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
				{
					Global_1952835 = func_37();
				}
			}
			func_637();
			func_627();
			func_605();
			func_603();
			func_558();
			func_423(&(Global_1633711.f_534), &Global_1633711, 28, &(Global_1633711.f_1), &(Global_1633711.f_117), -1, 0, 0);
			if (func_42() > 1)
			{
				func_646(2);
			}
			break;
		
		case 2:
			if (!BitTest(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
			{
				func_421(0, func_10());
				func_377();
				func_106();
			}
			if (func_42() > 2)
			{
				func_646(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_106()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!BitTest(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
	{
		if ((BitTest(Local_91.f_1, 2) || BitTest(Local_91.f_1, 4)) || BitTest(Local_91.f_1, 4))
		{
			MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_376())
		{
			MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_370())
		{
			MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (BitTest(Local_91.f_1, 7))
		{
			func_107(151, 1, &Var0, 0);
		}
		else
		{
			func_107(151, BitTest(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
		}
		MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
	}
}

void func_107(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	
	func_368(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_367(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_366(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_363(iParam0))
	{
		if (bParam1)
		{
			if (func_362(PLAYER::PLAYER_ID()) > 0)
			{
				func_361();
			}
			else
			{
				func_360();
			}
		}
		else
		{
			func_359();
		}
	}
	func_343(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_341(iParam0, uParam2, &iVar0, &iVar5);
	func_321(iParam0, uParam2, &iVar0, &iVar5);
	func_318(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_301(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2810701.f_5194.f_387 = iVar4;
	}
	else
	{
		Global_2810701.f_5194.f_387 = iVar5;
	}
	bVar8 = func_63();
	if (bVar8 != func_10() && iParam0 != 148)
	{
		if (func_28(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_48(PLAYER::PLAYER_ID(), bVar8, 1))
			{
				func_287(&iVar0, 1);
			}
		}
	}
	func_281(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1944626.f_10 = iVar1;
		func_280();
		func_233(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1944626.f_9 = iVar0;
		func_210(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_209(iParam0, iVar0);
		if (func_208(iParam0))
		{
			if (func_207(iParam0) > -1)
			{
				func_206(func_207(iParam0), iVar0);
			}
		}
		Global_2727448 = iVar0;
		func_205(&Global_2725699, 0, 0);
	}
	if (func_35(PLAYER::PLAYER_ID()) || func_204(PLAYER::PLAYER_ID()))
	{
		func_193(iParam0);
	}
	if (func_100(iParam0))
	{
		Global_1944644.f_13 = iVar0;
		Global_1944644.f_14 = iVar1;
	}
	if (func_192(iParam0))
	{
		Global_1944698.f_13 = iVar0;
		Global_1944698.f_14 = iVar1;
	}
	if (func_191(iParam0))
	{
		Global_1944761.f_12 = iVar0;
		Global_1944761.f_13 = iVar1;
	}
	if (func_190(iParam0))
	{
		Global_1944805.f_12 = iVar0;
		Global_1944805.f_13 = iVar1;
	}
	if (func_189(iParam0))
	{
		Global_1944859.f_12 = iVar0;
		Global_1944859.f_13 = iVar1;
	}
	if (func_188(iParam0))
	{
		if (func_187(iParam0))
		{
			Global_1944941.f_12 = iVar0;
			Global_1944941.f_13 = iVar1;
		}
		else if (func_183(iParam0))
		{
			Global_1944995.f_12 = iVar0;
			Global_1944995.f_13 = iVar1;
		}
	}
	if (func_182(iParam0))
	{
		Global_1945079.f_12 = iVar0;
		Global_1945079.f_13 = iVar1;
	}
	if (func_181(iParam0))
	{
		Global_1945154.f_16 = iVar0;
		Global_1945154.f_17 = iVar1;
	}
	if (func_180(iParam0))
	{
		Global_1945241.f_16 = iVar0;
		Global_1945241.f_17 = iVar1;
	}
	if (func_179(iParam0) || func_178(iParam0))
	{
		Global_1945374.f_15 = iVar0;
		Global_1945374.f_16 = iVar1;
	}
	func_108(bParam1, iParam0);
}

void func_108(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (bParam0)
	{
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
		}
		if (bVar1)
		{
			if (func_177(iVar0) && !func_118(iVar0))
			{
				func_109(iVar0);
			}
			if (func_177(1) && !func_118(1))
			{
				func_109(1);
			}
		}
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		func_113(func_114(func_115(iParam0)), 1, -1);
		func_110(12, func_112(func_115(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_110(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_111(&Global_1652546);
	Global_1652546[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652546[iVar0 /*106*/].f_97 = iParam5;
	Global_1652546[iVar0 /*106*/].f_104 = iParam9;
	Global_1652546[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1652546[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_111(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return "CLO_FXM_U_10_2";
			break;
		
		case -1166011267:
		case -906547381:
			return "CLO_FXM_U_10_3";
			break;
		
		case -721794703:
		case 308133919:
			return "CLO_FXM_U_10_4";
			break;
		
		case 488495423:
		case 1072091359:
			return "CLO_FXM_U_10_0";
			break;
		
		case -523083487:
		case 508464559:
			return "CLO_FXM_U_10_1";
			break;
		
		case -1498989066:
		case 452715244:
			return "CLO_FXM_B_0_0";
			break;
		
		case 1281689967:
		case -112025702:
			return "CLO_FXM_B_0_1";
			break;
		
		case 841209069:
		case 128072761:
			return "CLO_FXM_B_0_2";
			break;
		
		case 1742192724:
		case -705996596:
			return "CLO_FXM_B_0_3";
			break;
		
		case -2022943269:
		case 733291825:
			return "CLO_FXM_B_1_0";
			break;
		
		case -804690608:
		case -101367374:
			return "CLO_FXM_B_1_1";
			break;
		
		case -1100955137:
		case 1328802862:
			return "CLO_FXM_B_1_2";
			break;
		
		case 2089631321:
		case 495519961:
			return "CLO_FXM_B_1_3";
			break;
		
		case 591101258:
		case -693204279:
			return "CLO_FXM_B_2_0";
			break;
		
		case -1278730655:
		case 150499164:
			return "CLO_FXM_B_2_1";
			break;
		
		case -1215879713:
		case -129905169:
			return "CLO_FXM_B_2_2";
			break;
		
		case -918271655:
		case 612902523:
			return "CLO_FXM_B_2_3";
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return "CLO_TRM_D_30_1";
			break;
		
		case 991513037:
		case -1634791241:
			return "CLO_TRM_DECL_8";
			break;
		
		case -675149090:
		case -1227437948:
			return "CLO_TRM_DECL_10";
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return "CLO_TRM_U_11_0";
			break;
		
		case -1686814509:
		case -1408179706:
			return "CLO_TRM_DECL_11";
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return "CLO_TRM_O_BS_1";
			break;
		
		case -126686984:
		case 2057911750:
			return "CLO_TRM_U_9_15";
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return "CLO_TRM_U_13_2";
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return "CLO_TRM_U_13_0";
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return "CLO_TRM_U_13_1";
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return "CLO_TRM_PH_1_0";
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return "CLO_TRM_PH_1_1";
			break;
		
		case -1174740608:
		case 1620783517:
			return "CLO_TRM_O_MS_0";
			break;
		
		case -1943796269:
		case -1699338794:
			return "CLO_TRM_O_MS_1";
			break;
		
		case -1372800957:
			return "PS_BAG_64";
			break;
		
		case -1125170035:
			return "PS_BAG_65";
			break;
		
		case 1276052663:
			return "PS_BAG_66";
			break;
		
		case 2138708412:
		case -1894139601:
			return "CLO_TRM_DECL_12";
			break;
		
		case 205793848:
		case -786254870:
			return "CLO_TRM_DECL_13";
			break;
		
		case 1325175663:
		case -773154515:
			return "CLO_TRM_DECL_14";
			break;
		
		case -368088972:
		case 1778247767:
			return "CLO_TRM_DECL_15";
			break;
		
		case -1771053026:
		case -648092145:
			return "CLO_TRM_DECL_16";
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return "CLO_TRM_O_BS_0";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return "CLO_H4M_DECL_55";
			break;
		
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return "CLO_H4M_DECL_57";
			break;
		
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return "CLO_H4M_DECL_59";
			break;
		
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return "CLO_H4M_DECL_61";
			break;
		
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return "CLO_H4M_DECL_63";
			break;
		
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return "CLO_H4M_DECL_65";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return "CLO_H4M_DECL_30";
			break;
		
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return "CLO_H4M_DECL_32";
			break;
		
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return "CLO_H4M_DECL_28";
			break;
		
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return "CLO_H4M_DECL_29";
			break;
		
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return "CLO_H4M_DECL_31";
			break;
		
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return "CLO_H4M_DECL_22";
			break;
		
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return "CLO_H4M_DECL_23";
			break;
		
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return "CLO_H4M_DECL_20";
			break;
		
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return "CLO_H4M_DECL_21";
			break;
		
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return "CLO_H4M_DECL_3";
			break;
		
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return "CLO_H4M_DECL_4";
			break;
		
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return "CLO_H4M_DECL_5";
			break;
		
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return "CLO_H4M_DECL_6";
			break;
		
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return "CLO_H4M_DECL_27";
			break;
		
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return "CLO_H4M_DECL_26";
			break;
		
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return "CLO_H4M_DECL_25";
			break;
		
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return "CLO_H4M_DECL_24";
			break;
		
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return "CLO_H4M_DECL_2";
			break;
		
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return "CLO_H4M_DECL_1";
			break;
		
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return "CLO_H4M_DECL_0";
			break;
		
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return "CLO_H4M_DECL_7";
			break;
		
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return "CLO_H4M_DECL_8";
			break;
		
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return "CLO_H4M_DECL_9";
			break;
		
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return "CLO_H4M_DECL_10";
			break;
		
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return "CLO_H4M_DECL_11";
			break;
		
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return "CLO_H4M_DECL_12";
			break;
		
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return "CLO_H4M_DECL_13";
			break;
		
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return "CLO_H4M_DECL_14";
			break;
		
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return "CLO_H4M_DECL_15";
			break;
		
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return "CLO_H4M_DECL_16";
			break;
		
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return "CLO_H4M_DECL_17";
			break;
		
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return "CLO_H4M_DECL_18";
			break;
		
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return "CLO_H4M_DECL_19";
			break;
		
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return "CLO_H4M_DECL_33";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return "CLO_H4F_U_8_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return "CLO_H4F_U_10_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return "CLO_H4F_U_5_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return "CLO_H4F_U_5_1";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return "CLO_H4F_U_7_1";
			break;
		
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return "CLO_H4M_DECL_48";
			break;
		
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return "CLO_H4M_DECL_47";
			break;
		
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return "CLO_H4M_DECL_45";
			break;
		
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return "CLO_H4M_DECL_46";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return "CLO_H4F_U_7_5";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return "CLO_H4F_U_7_4";
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return "CLO_H4F_D_0_0";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return "CLO_H4F_U_7_2";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return "CLO_H4F_U_7_3";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return "CLO_H4F_U_4_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return "CLO_H4F_U_6_4";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return "CLO_H4F_U_6_3";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return "CLO_H4F_U_6_2";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return "CLO_H4F_U_6_1";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return "CLO_H4F_U_6_0";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return "CLO_H4F_L_1_0";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return "CLO_H4F_L_1_1";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return "CLO_H4F_L_1_2";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return "CLO_H4F_L_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return "CLO_H4F_PH_1_0";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return "CLO_H4F_PH_1_1";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return "CLO_H4F_PH_1_2";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return "CLO_H4F_PH_1_3";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return "CLO_H4F_PH_1_4";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return "CLO_H4F_PLW_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return "CLO_H4F_PLW_0_1";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return "CLO_H4F_PLW_0_2";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return "CLO_H4F_PLW_0_3";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return "CLO_H4F_PLW_0_4";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return "CLO_H4F_PLW_0_5";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return "CLO_H4F_PLW_0_6";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return "CLO_H4F_PLW_0_7";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return "CLO_H4F_PLW_0_8";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return "CLO_H4F_PLW_0_9";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return "CLO_H4F_PLW_010";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return "CLO_H4F_PLW_011";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return "CLO_H4F_PEY_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return "CLO_H4F_PEY_0_1";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return "CLO_H4F_PEY_0_2";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return "CLO_H4F_PEY_0_3";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return "CLO_H4F_PEY_0_4";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return "CLO_H4F_PEY_0_5";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return "CLO_H4F_PEY_0_6";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return "CLO_H4F_PEY_0_7";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return "CLO_H4F_PEY_0_8";
			break;
		
		case joaat("ch1_12_props_combo10_87_lod"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return "CLO_H4F_PEY_0_9";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return "CLO_H4F_PEY_010";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return "CLO_H4F_PEY_011";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return "CLO_H4F_T_13_0";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return "CLO_H4F_T_13_1";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return "CLO_H4F_T_13_2";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return "CLO_H4F_T_13_3";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return "CLO_H4F_T_13_4";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return "CLO_H4F_T_13_5";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return "CLO_H4F_T_13_6";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return "CLO_H4F_T_13_7";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return "CLO_H4F_T_13_8";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return "CLO_H4F_T_13_9";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return "CLO_H4F_T_13_10";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return "CLO_H4F_T_13_11";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return "CLO_H4F_T_13_12";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return "CLO_H4F_T_13_13";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return "CLO_H4F_T_13_14";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return "CLO_H4F_T_13_15";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return "CLO_H4M_B_4_0";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return "CLO_H4M_B_4_1";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return "CLO_H4M_B_4_2";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return "CLO_H4M_B_4_3";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return "CLO_H4M_B_4_4";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return "CLO_H4M_B_4_5";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return "CLO_H4M_B_4_6";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return "CLO_H4M_B_4_7";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return "CLO_H4M_B_4_8";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return "CLO_H4M_B_4_9";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return "CLO_H4M_B_4_10";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return "CLO_H4M_B_4_11";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return "CLO_H4M_B_4_12";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return "CLO_H4M_B_4_13";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return "CLO_H4M_B_4_14";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return "CLO_H4M_B_4_15";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return "CLO_H4M_B_4_16";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return "CLO_H4M_B_4_17";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return "CLO_H4M_B_4_18";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return "CLO_H4M_B_4_19";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return "CLO_H4M_PEY_1_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return "CLO_H4M_PEY_1_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return "CLO_H4M_PEY_1_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return "CLO_H4M_PEY_1_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return "CLO_H4M_PEY_1_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return "CLO_H4M_PEY_1_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return "CLO_H4M_PEY_1_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return "CLO_H4M_PEY_1_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return "CLO_H4M_PEY_1_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return "CLO_H4M_PEY_1_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return "CLO_H4M_PEY_110";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return "CLO_H4M_PEY_111";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return "CLO_H4M_PEY_2_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return "CLO_H4M_PEY_2_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return "CLO_H4M_PEY_2_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return "CLO_H4M_PEY_2_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return "CLO_H4M_PEY_2_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return "CLO_H4M_PEY_2_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return "CLO_H4M_PEY_2_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return "CLO_H4M_PEY_2_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return "CLO_H4M_PEY_2_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return "CLO_H4M_PEY_2_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return "CLO_H4M_PEY_210";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return "CLO_H4M_PEY_211";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return "CLO_H4M_PEY_3_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return "CLO_H4M_PEY_3_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return "CLO_H4M_PEY_3_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return "CLO_H4M_PEY_3_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return "CLO_H4M_PEY_3_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return "CLO_H4M_PEY_3_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return "CLO_H4M_PEY_3_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return "CLO_H4M_PEY_3_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return "CLO_H4M_PEY_3_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return "CLO_H4M_PEY_3_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return "CLO_H4M_PEY_310";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return "CLO_H4M_PEY_311";
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
			return "CLO_SUM_DECL_0";
			break;
		
		case 676807987:
			return "CLO_SUF_DECL_0";
			break;
		
		case 1888753218:
			return "CLO_SUM_DECL_1";
			break;
		
		case 272160153:
			return "CLO_SUF_DECL_1";
			break;
		
		case -552467991:
			return "CLO_SUM_DECL_2";
			break;
		
		case 1593344440:
			return "CLO_SUF_DECL_2";
			break;
		
		case -1655919948:
			return "CLO_SUM_DECL_3";
			break;
		
		case 546222390:
			return "CLO_SUF_DECL_3";
			break;
		
		case -917106601:
			return "CLO_SUM_DECL_4";
			break;
		
		case 1983375900:
			return "CLO_SUF_DECL_4";
			break;
		
		case 1595446967:
			return "CLO_SUM_DECL_5";
			break;
		
		case -620589387:
			return "CLO_SUF_DECL_5";
			break;
		
		case -530593323:
			return "CLO_SUM_DECL_6";
			break;
		
		case 383923929:
			return "CLO_SUF_DECL_6";
			break;
		
		case 561619447:
			return "CLO_SUM_DECL_7";
			break;
		
		case -1703406594:
			return "CLO_SUF_DECL_7";
			break;
		
		case -1913656173:
			return "CLO_SUM_DECL_8";
			break;
		
		case -398286533:
			return "CLO_SUF_DECL_8";
			break;
		
		case -1766901922:
			return "CLO_SUM_DECL_9";
			break;
		
		case -80478106:
			return "CLO_SUF_DECL_9";
			break;
		
		case 2091781849:
			return "CLO_SUM_DECL_10";
			break;
		
		case 1835331655:
			return "CLO_SUF_DECL_10";
			break;
		
		case 1824588341:
			return "CLO_SUM_DECL_11";
			break;
		
		case -1650596870:
			return "CLO_SUF_DECL_11";
			break;
		
		case 242597641:
			return "CLO_SUM_DECL_12";
			break;
		
		case 1231926496:
			return "CLO_SUF_DECL_12";
			break;
		
		case 566785691:
			return "CLO_SUM_DECL_13";
			break;
		
		case -1506181253:
			return "CLO_SUF_DECL_13";
			break;
		
		case -2091312957:
			return "CLO_SUM_DECL_14";
			break;
		
		case -1737145605:
			return "CLO_SUF_DECL_14";
			break;
		
		case -2079214831:
			return "CLO_SUM_DECL_15";
			break;
		
		case 1673851512:
			return "CLO_SUF_DECL_15";
			break;
		
		case 1359156274:
			return "CLO_SUM_DECL_16";
			break;
		
		case 1023339598:
			return "CLO_SUF_DECL_16";
			break;
		
		case -1302300594:
			return "CLO_SUM_DECL_17";
			break;
		
		case -163738770:
			return "CLO_SUF_DECL_17";
			break;
		
		case -1351518396:
			return "CLO_SUM_DECL_18";
			break;
		
		case 1863218823:
			return "CLO_SUF_DECL_18";
			break;
		
		case -797874817:
			return "CLO_SUM_DECL_19";
			break;
		
		case 333966447:
			return "CLO_SUF_DECL_19";
			break;
		
		case -385507297:
			return "CLO_SUM_DECL_20";
			break;
		
		case 1412626052:
			return "CLO_SUF_DECL_20";
			break;
		
		case 2011910758:
			return "CLO_SUM_DECL_21";
			break;
		
		case -39100956:
			return "CLO_SUF_DECL_21";
			break;
		
		case -1953985443:
			return "CLO_SUM_DECL_22";
			break;
		
		case 1631533003:
			return "CLO_SUF_DECL_22";
			break;
		
		case -1124222352:
			return "CLO_SUM_DECL_23";
			break;
		
		case 1493430918:
			return "CLO_SUF_DECL_23";
			break;
		
		case -1806994767:
			return "CLO_SUM_DECL_24";
			break;
		
		case -196693334:
			return "CLO_SUF_DECL_24";
			break;
		
		case -1445761968:
			return "CLO_SUM_DECL_25";
			break;
		
		case 553507495:
			return "CLO_SUF_DECL_25";
			break;
		
		case -89186417:
			return "CLO_SUM_DECL_26";
			break;
		
		case 2003474700:
			return "CLO_SUF_DECL_26";
			break;
		
		case -308083083:
			return "CLO_SUM_DECL_27";
			break;
		
		case 1121792228:
			return "CLO_SUF_DECL_27";
			break;
		
		case 667714507:
			return "CLO_SUM_DECL_28";
			break;
		
		case -1424651669:
			return "CLO_SUF_DECL_28";
			break;
		
		case -1610210252:
			return "CLO_SUM_DECL_29";
			break;
		
		case -1454164346:
			return "CLO_SUF_DECL_29";
			break;
		
		case 1868506246:
			return "CLO_SUM_B_3_4";
			break;
		
		case -307572086:
			return "CLO_SUF_B_3_4";
			break;
		
		case 1686703834:
			return "CLO_SUM_B_3_5";
			break;
		
		case -1486436861:
			return "CLO_SUF_B_3_5";
			break;
		
		case -1811091999:
			return "CLO_SUM_B_3_6";
			break;
		
		case -1705464857:
			return "CLO_SUF_B_3_6";
			break;
		
		case 414381867:
			return "CLO_SUM_B_3_7";
			break;
		
		case -469188798:
			return "CLO_SUF_B_3_7";
			break;
		
		case -1206261789:
			return "CLO_SUM_L_1_25";
			break;
		
		case 692621401:
			return "CLO_SUF_L_2_25";
			break;
		
		case 1395785293:
			return "CLO_SUM_U_0_25";
			break;
		
		case 60231546:
			return "CLO_SUF_U_0_25";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
			return "CLO_VWM_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return "CLO_VWF_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
			return "CLO_VWM_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return "CLO_VWF_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
			return "CLO_VWM_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return "CLO_VWF_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
			return "CLO_VWM_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return "CLO_VWF_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
			return "CLO_VWM_U_23_5";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return "CLO_VWF_U_21_5";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
			return "CLO_VWM_U_23_8";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return "CLO_VWF_U_21_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
			return "CLO_VWM_U_23_9";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return "CLO_VWF_U_21_9";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
			return "CLO_VWM_U_23_10";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return "CLO_VWF_U_21_10";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
			return "CLO_VWM_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return "CLO_VWF_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
			return "CLO_VWM_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return "CLO_VMF_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
			return "CLO_VWM_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return "CLO_VWF_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
			return "CLO_VWM_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return "CLO_VWF_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
			return "CLO_VWM_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return "CLO_VWF_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
			return "CLO_VWM_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return "CLO_VWF_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
			return "CLO_VWM_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return "CLO_VWF_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
			return "CLO_VWM_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return "CLO_VWF_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
			return "CLO_VWM_U_23_0";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return "CLO_VMF_U_21_0";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
			return "CLO_VWM_U_23_2";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return "CLO_VMF_U_21_2";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
			return "CLO_VWM_U_23_4";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return "CLO_VMF_U_21_4";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
			return "CLO_VWM_U_23_7";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return "CLO_VMF_U_21_7";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
			return "CLO_AWM_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_000_F"):
			return "CLO_AWF_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_001_M"):
			return "CLO_AWM_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_001_F"):
			return "CLO_AWF_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_002_M"):
			return "CLO_AWM_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_002_F"):
			return "CLO_AWF_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_003_M"):
			return "CLO_AWM_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_003_F"):
			return "CLO_AWF_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_004_M"):
			return "CLO_AWM_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_004_F"):
			return "CLO_AWF_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_005_M"):
			return "CLO_AWM_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_005_F"):
			return "CLO_AWF_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_006_M"):
			return "CLO_AWM_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_006_F"):
			return "CLO_AWF_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_007_M"):
			return "CLO_AWM_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_007_F"):
			return "CLO_AWF_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_008_M"):
			return "CLO_AWM_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_008_F"):
			return "CLO_AWF_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_009_M"):
			return "CLO_AWM_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_009_F"):
			return "CLO_AWF_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_010_M"):
			return "CLO_AWM_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_010_F"):
			return "CLO_AWF_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_011_M"):
			return "CLO_AWM_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_011_F"):
			return "CLO_AWF_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_012_M"):
			return "CLO_AWM_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_012_F"):
			return "CLO_AWF_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_013_M"):
			return "CLO_AWM_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_013_F"):
			return "CLO_AWF_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_014_M"):
			return "CLO_AWM_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_014_F"):
			return "CLO_AWF_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_015_M"):
			return "CLO_AWM_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_015_F"):
			return "CLO_AWF_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_016_M"):
			return "CLO_AWM_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_016_F"):
			return "CLO_AWF_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_017_M"):
			return "CLO_AWM_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_017_F"):
			return "CLO_AWF_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_018_M"):
			return "CLO_AWM_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_018_F"):
			return "CLO_AWF_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_019_M"):
			return "CLO_AWM_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_019_F"):
			return "CLO_AWF_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_020_M"):
			return "CLO_AWM_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_020_F"):
			return "CLO_AWF_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_021_M"):
			return "CLO_AWM_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_021_F"):
			return "CLO_AWF_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_022_M"):
			return "CLO_AWM_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_022_F"):
			return "CLO_AWF_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_023_M"):
			return "CLO_AWM_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_023_F"):
			return "CLO_AWF_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_024_M"):
			return "CLO_AWM_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_024_F"):
			return "CLO_AWF_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_025_M"):
			return "CLO_AWM_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_025_F"):
			return "CLO_AWF_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_026_M"):
			return "CLO_AWM_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_026_F"):
			return "CLO_AWF_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_027_M"):
			return "CLO_AWM_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_027_F"):
			return "CLO_AWF_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_028_M"):
			return "CLO_AWM_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_028_F"):
			return "CLO_AWF_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_029_M"):
			return "CLO_AWM_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_029_F"):
			return "CLO_AWF_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_030_M"):
			return "CLO_AWM_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_030_F"):
			return "CLO_AWF_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_031_M"):
			return "CLO_AWM_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_031_F"):
			return "CLO_AWF_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_032_M"):
			return "CLO_AWM_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_032_F"):
			return "CLO_AWF_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_033_M"):
			return "CLO_AWM_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_033_F"):
			return "CLO_AWF_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_034_M"):
			return "CLO_AWM_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_034_F"):
			return "CLO_AWF_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_035_M"):
			return "CLO_AWM_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_035_F"):
			return "CLO_AWF_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_036_M"):
			return "CLO_AWM_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_036_F"):
			return "CLO_AWF_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_037_M"):
			return "CLO_AWM_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_037_F"):
			return "CLO_AWF_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_038_M"):
			return "CLO_AWM_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_038_F"):
			return "CLO_AWF_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_039_M"):
			return "CLO_AWM_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_039_F"):
			return "CLO_AWF_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_040_M"):
			return "CLO_AWM_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_040_F"):
			return "CLO_AWF_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_041_M"):
			return "CLO_AWM_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_041_F"):
			return "CLO_AWF_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_042_M"):
			return "CLO_AWM_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_042_F"):
			return "CLO_AWF_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_043_M"):
			return "CLO_AWM_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_043_F"):
			return "CLO_AWF_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_044_M"):
			return "CLO_AWM_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_044_F"):
			return "CLO_AWF_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_045_M"):
			return "CLO_AWM_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_045_F"):
			return "CLO_AWF_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_046_M"):
			return "CLO_AWM_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_046_F"):
			return "CLO_AWF_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_047_M"):
			return "CLO_AWM_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_047_F"):
			return "CLO_AWF_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_048_M"):
			return "CLO_AWM_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_048_F"):
			return "CLO_AWF_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_049_M"):
			return "CLO_AWM_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_049_F"):
			return "CLO_AWF_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_050_M"):
			return "CLO_AWM_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_050_F"):
			return "CLO_AWF_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_051_M"):
			return "CLO_AWM_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_051_F"):
			return "CLO_AWF_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_052_M"):
			return "CLO_AWM_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_052_F"):
			return "CLO_AWF_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_053_M"):
			return "CLO_AWM_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_053_F"):
			return "CLO_AWF_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_054_M"):
			return "CLO_AWM_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_054_F"):
			return "CLO_AWF_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_055_M"):
			return "CLO_AWM_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_055_F"):
			return "CLO_AWF_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_056_M"):
			return "CLO_AWM_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_056_F"):
			return "CLO_AWF_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_057_M"):
			return "CLO_AWM_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_057_F"):
			return "CLO_AWF_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_058_M"):
			return "CLO_AWM_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_058_F"):
			return "CLO_AWF_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_059_M"):
			return "CLO_AWM_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_059_F"):
			return "CLO_AWF_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_060_M"):
			return "CLO_AWM_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_060_F"):
			return "CLO_AWF_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_061_M"):
			return "CLO_AWMDECL_61";
		
		case joaat("MP_Christmas2018_Tee_061_F"):
			return "CLO_AWF_DECL_61";
		
		case joaat("MP_Christmas2018_Tee_062_M"):
			return "CLO_AWM_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_062_F"):
			return "CLO_AWF_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_063_M"):
			return "CLO_AWM_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_063_F"):
			return "CLO_AWF_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_064_M"):
			return "CLO_AWM_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_064_F"):
			return "CLO_AWF_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_065_M"):
			return "CLO_AWM_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_065_F"):
			return "CLO_AWF_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_066_M"):
			return "CLO_AWM_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_066_F"):
			return "CLO_AWF_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_067_M"):
			return "CLO_AWM_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_067_F"):
			return "CLO_AWF_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_068_M"):
			return "CLO_AWM_DECL_68";
		
		case joaat("MP_Christmas2018_Tee_068_F"):
			return "CLO_AWF_DECL_68";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
			return "CLO_X5F_U_16_0";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return "CLO_X5M_U_16_0";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
			return "CLO_X5F_U_16_1";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return "CLO_X5M_U_16_1";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
			return "CLO_X5F_U_16_2";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return "CLO_X5M_U_16_2";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
			return "CLO_X5F_U_16_3";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return "CLO_X5M_U_16_3";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
			return "CLO_X5F_U_16_4";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return "CLO_X5M_U_16_4";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
			return "CLO_X5F_U_16_5";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return "CLO_X5M_U_16_5";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
			return "CLO_X5F_U_16_6";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return "CLO_X5M_U_16_6";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
			return "CLO_X5F_U_16_7";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return "CLO_X5M_U_16_7";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
			return "CLO_X5F_U_16_8";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return "CLO_X5M_U_16_8";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
			return "CLO_X5F_U_16_9";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return "CLO_X5M_U_16_9";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
			return "CLO_X5F_U_16_10";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return "CLO_X5M_U_16_10";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
			return "CLO_X5F_U_16_11";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return "CLO_X5M_U_16_11";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
			return "CLO_X5F_U_16_12";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return "CLO_X5M_U_16_12";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
			return "CLO_X5F_U_16_13";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return "CLO_X5M_U_16_13";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return "CLO_BHM_DECL_0";
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return "CLO_BHM_DECL_1";
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return "CLO_BHM_DECL_2";
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return "CLO_BHM_DECL_3";
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return "CLO_BHM_DECL_4";
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return "CLO_BHM_DECL_5";
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return "CLO_BHM_DECL_6";
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return "CLO_BHM_DECL_7";
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return "CLO_BHM_DECL_8";
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return "CLO_BHM_DECL_9";
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return "CLO_BHM_DECL_10";
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return "CLO_BHM_DECL_11";
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return "CLO_BHM_DECL_12";
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return "CLO_BHM_DECL_13";
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return "CLO_BHM_DECL_14";
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return "CLO_BHM_DECL_15";
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return "CLO_BHM_DECL_16";
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return "CLO_BHM_DECL_17";
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return "CLO_BHM_DECL_18";
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return "CLO_BHM_DECL_19";
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return "CLO_BHM_DECL_20";
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return "BBNCSHIRT3";
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return "BBNCSHIRT4";
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return "BBNCSHIRT5";
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return "BBNCSHIRT1";
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return "BBNCSHIRT7";
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return "BBNCSHIRT2";
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return "BBNCSHIRT6";
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return "BBNCSHIRT8";
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return "BBNCSHIRT9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return "CLO_BHF_DECL_30";
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return "CLO_BHF_DECL_31";
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return "CLO_BHF_DECL_32";
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return "CLO_BHF_DECL_33";
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return "CLO_BHF_DECL_34";
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return "CLO_BHF_DECL_35";
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return "CLO_BHF_DECL_36";
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return "CLO_BHF_DECL_37";
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return "CLO_BHF_DECL_38";
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return "CLO_BHF_DECL_39";
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return "CLO_BHF_DECL_40";
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return "CLO_BHF_DECL_41";
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return "CLO_BHF_DECL_42";
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return "CLO_BHF_DECL_43";
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return "CLO_BHF_DECL_44";
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return "CLO_BHF_DECL_45";
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return "CLO_BHF_DECL_46";
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return "CLO_BHF_DECL_47";
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return "CLO_BHF_DECL_48";
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return "CLO_BHF_DECL_49";
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return "CLO_BHF_DECL_50";
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return "CLO_BHF_DECL_51";
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return "CLO_BHF_DECL_52";
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return "CLO_BHF_DECL_53";
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return "CLO_BHF_DECL_54";
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return "CLO_BHF_DECL_55";
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return "CLO_BHF_DECL_56";
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return "CLO_BHF_DECL_57";
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return "CLO_BHF_DECL_58";
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return "CLO_BHF_DECL_59";
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return "CLO_BHF_DECL_60";
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return "CLO_BHF_DECL_61";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
			return "CLO_X17M_O_M_0";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return "CLO_X17F_O_M_0";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
			return "CLO_X17M_O_M_1";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return "CLO_X17F_O_M_1";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
			return "CLO_X17M_O_M_2";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return "CLO_X17F_O_M_2";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
			return "CLO_X17M_O_M_3";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return "CLO_X17F_O_M_3";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
			return "CLO_X17M_O_M_4";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return "CLO_X17F_O_M_4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return "CLO_LTSM_O_14";
		
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return "UNLOCK_AWD_KRAMP1";
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return "UNLOCK_AWD_KRAMP2";
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return "UNLOCK_AWD_KRAMP3";
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return "UNLOCK_AWD_KRAMP4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
			return "CLO_GRM_PH_6_0";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return "CLO_GRF_PH_6_0";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
			return "CLO_GRM_PH_6_2";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return "CLO_GRF_PH_6_2";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
			return "CLO_GRM_PH_6_4";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return "CLO_GRF_PH_6_4";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
			return "CLO_GRM_PH_6_5";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return "CLO_GRF_PH_6_5";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
			return "CLO_GRM_PH_6_6";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return "CLO_GRF_PH_6_6";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
			return "CLO_GRM_PH_6_7";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return "CLO_GRF_PH_6_7";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
			return "CLO_GRM_PH_6_8";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return "CLO_GRF_PH_6_8";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
			return "CLO_GRM_PH_6_10";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return "CLO_GRF_PH_6_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return "CLO_GRF_U_25_0";
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return "CLO_GRF_U_25_1";
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return "CLO_GRM_U_20_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return "CLO_GRF_DECL_19";
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return "CLO_GRM_DECL_20";
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return "CLO_GRM_DECL_21";
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return "CLO_GRF_DECL_22";
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return "CLO_GRM_DECL_23";
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return "CLO_GRM_DECL_25";
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return "CLO_GRM_DECL_27";
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return "CLO_GRM_DECL_29";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return "CLO_GRF_DECL_0";
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return "CLO_GRM_DECL_2";
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return "CLO_GRF_DECL_3";
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return "CLO_GRF_DECL_5";
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return "CLO_GRF_DECL_6";
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return "CLO_GRM_DECL_9";
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return "CLO_GRM_DECL_10";
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return "CLO_GRF_DECL_11";
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return "CLO_GRF_DECL_12";
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return "CLO_GRM_DECL_14";
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return "CLO_GRM_DECL_15";
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return "CLO_GRM_DECL_16";
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return "CLO_GRM_DECL_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
			return "CLO_X4M_B_7_0";
		
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return "CLO_X4F_B_7_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Award_000_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_000_F"):
			return "CLO_BIF_DECL_56";
		
		case joaat("MP_Biker_Award_001_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_001_F"):
			return "CLO_BIF_DECL_57";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return "bikshirt4";
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return "bikshirt5";
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return "bikshirt7";
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return "bikshirt6";
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return "bikshirt3";
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return "bikshirt2";
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return "bikshirt1";
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return "bikshirt0";
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return "bikshirt8";
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return "bikshirt9";
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return "bikshirt10";
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return "bikshirt11";
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return "bikshirt12";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return "bikshirt13";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return "bikshirt14";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return "bikshirt15";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return "bikshirt16";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return "bikshirt17";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return "bikshirt18";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return "bikshirt19";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return "bikshirt20";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return "bikshirt21";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
			return "CLO_STM_O_E_0";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return "CLO_STF_O_E_0";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
			return "CLO_STM_O_E_1";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return "CLO_STF_O_E_1";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
			return "CLO_STM_O_E_2";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return "CLO_STF_O_E_2";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
			return "CLO_STM_O_E_3";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return "CLO_STF_O_E_3";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
			return "CLO_STM_O_E_4";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return "CLO_STF_O_E_4";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
			return "CLO_STM_O_E_15";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return "CLO_STF_O_E_5";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
			return "CLO_STM_O_E_6";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return "CLO_STF_O_E_6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
			return "CLO_EXF_EU_15_0";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return "CLO_EXM_EU_15_0";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
			return "CLO_EXF_EU_15_1";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return "CLO_EXM_EU_15_1";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
			return "CLO_EXF_EU_15_2";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return "CLO_EXM_EU_15_2";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
			return "CLO_EXF_EU_15_3";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return "CLO_EXM_EU_15_3";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
			return "CLO_EXF_EU_15_4";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return "CLO_EXM_EU_15_4";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
			return "CLO_EXF_EU_15_5";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return "CLO_EXM_EU_15_5";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
			return "CLO_EXF_EU_15_6";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return "CLO_EXM_EU_15_6";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
			return "CLO_EXF_EU_15_7";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return "CLO_EXM_EU_15_7";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
			return "CLO_EXF_EU_15_8";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return "CLO_EXM_EU_15_8";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
			return "CLO_EXF_EU_15_9";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return "CLO_EXM_EU_15_9";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
			return "CLO_EXF_EU_1510";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return "CLO_EXM_EU_1510";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
			return "CLO_EXF_EU_1511";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return "CLO_EXM_EU_1511";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
			return "CLO_EXF_EU_1512";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return "CLO_EXM_EU_1512";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
			return "CLO_EXF_EU_1513";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return "CLO_EXM_EU_1513";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return "SMOKINGJACKUNLOCK";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return "UNLOKLOWHATS0";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return "UNLOKLOWHATS1";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return "UNLOKLOWHATS2";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return "UNLOKLOWHATS3";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return "UNLOKLOWHATS4";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return "UNLOKLOWHATS5";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return "UNLOKLOWHATS6";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return "UNLOKLOWHATS7";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return "UNLOKLOWHATS8";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return "UNLOKLOWHATS9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "UNLOCK_NAME_BHAT1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "UNLOCK_NAME_BHAT2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "UNLOCK_NAME_BHAT3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "UNLOCK_NAME_BHAT4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "UNLOCK_NAME_BHAT5";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "UNLOCK_NAME_BHAT6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return "BBSHIRTUN15";
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return "BBSHIRTUN6";
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return "BBSHIRTUN1";
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return "BBSHIRTUN2";
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return "BBSHIRTUN4";
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return "BBSHIRTUN3";
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return "BBSHIRTUN0";
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return "BBSHIRTUN10";
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return "BBSHIRTUN8";
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return "BBSHIRTUN9";
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return "BBSHIRTUN14";
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return "BBSHIRTUN12";
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return "BBSHIRTUN5";
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return "BBSHIRTUN13";
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return "BBSHIRTUN7";
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return "UNLOCK_NAME_SHIRT14";
		
		default:
	}
	switch (iParam0)
	{
		case 1743008394:
			return "CLO_X3F_U_1_0";
		
		case 1084175393:
			return "CLO_X3M_U_1_0";
		
		case -1090232119:
			return "CLO_X3F_U_1_1";
		
		case 787255484:
			return "CLO_X3M_U_1_1";
		
		case -1133356123:
			return "CLO_X3F_U_1_2";
		
		case -566366372:
			return "CLO_X3M_U_1_2";
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
			return "CLO_X2F_HT_4_0";
		
		case 2026483804:
			return "CLO_X2F_HT_5_0";
		
		case 1831101822:
			return "CLO_X2M_HT_4_0";
		
		case 1411612772:
			return "CLO_X2M_HT_5_0";
		
		case 1875861023:
			return "CLO_X2F_HT_4_3";
		
		case -1385031204:
			return "CLO_X2F_HT_5_3";
		
		case -703154335:
			return "CLO_X2M_HT_4_3";
		
		case 798340921:
			return "CLO_X2M_HT_5_3";
		
		case -1208373599:
			return "CLO_X3M_B_10_0";
		
		case 1656518170:
			return "CLO_X3F_B_10_0";
		
		case -970054678:
			return "CLO_X2M_B_1_0";
		
		case -840010097:
			return "CLO_X2F_B_1_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
			return "CLO_INDF_HT_6_0";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "CLO_INDM_HT_6_0";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
			return "CLO_INDF_HT_6_1";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "CLO_INDM_HT_6_1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
			return "CLO_INDF_HT_6_2";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "CLO_INDM_HT_6_2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
			return "CLO_INDF_HT_6_3";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "CLO_INDM_HT_6_3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
			return "CLO_INDF_HT_6_4";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "CLO_INDM_HT_6_4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
			return "CLO_INDF_HT_6_5";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "CLO_INDM_HT_6_5";
		
		default:
	}
	return "UNLOCK_AWD_SHIRT";
}

void func_113(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return 32309;
			break;
		
		case -1166011267:
		case -906547381:
			return 32310;
			break;
		
		case -721794703:
		case 308133919:
			return 32311;
			break;
		
		case 488495423:
		case 1072091359:
			return 32307;
			break;
		
		case -523083487:
		case 508464559:
			return 32308;
			break;
		
		case -1498989066:
		case 452715244:
			return 32295;
			break;
		
		case 1281689967:
		case -112025702:
			return 32296;
			break;
		
		case 841209069:
		case 128072761:
			return 32297;
			break;
		
		case 1742192724:
		case -705996596:
			return 32298;
			break;
		
		case -2022943269:
		case 733291825:
			return 32299;
			break;
		
		case -804690608:
		case -101367374:
			return 32300;
			break;
		
		case -1100955137:
		case 1328802862:
			return 32301;
			break;
		
		case 2089631321:
		case 495519961:
			return 32302;
			break;
		
		case 591101258:
		case -693204279:
			return 32303;
			break;
		
		case -1278730655:
		case 150499164:
			return 32304;
			break;
		
		case -1215879713:
		case -129905169:
			return 32305;
			break;
		
		case -918271655:
		case 612902523:
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 32273;
			break;
		
		case 991513037:
		case -1634791241:
			return 31768;
			break;
		
		case -675149090:
		case -1227437948:
			return 31769;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 31784;
			break;
		
		case -1686814509:
		case -1408179706:
			return 31770;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 31777;
			break;
		
		case -126686984:
		case 2057911750:
			return 31788;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 31787;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 31786;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 31785;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 31766;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 31767;
			break;
		
		case -1174740608:
		case 1620783517:
			return 31789;
			break;
		
		case -1943796269:
		case -1699338794:
			return 31790;
			break;
		
		case -1372800957:
			return 31791;
			break;
		
		case -1125170035:
			return 31792;
			break;
		
		case 1276052663:
			return 31793;
			break;
		
		case 2138708412:
		case -1894139601:
			return 31771;
			break;
		
		case 205793848:
		case -786254870:
			return 31772;
			break;
		
		case 1325175663:
		case -773154515:
			return 31773;
			break;
		
		case -368088972:
		case 1778247767:
			return 31774;
			break;
		
		case -1771053026:
		case -648092145:
			return 31775;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		
		case joaat("ch1_12_props_combo10_87_lod"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
		case 676807987:
			return 30260;
			break;
		
		case 1888753218:
		case 272160153:
			return 30261;
			break;
		
		case -552467991:
		case 1593344440:
			return 30262;
			break;
		
		case -1655919948:
		case 546222390:
			return 30263;
			break;
		
		case -917106601:
		case 1983375900:
			return 30264;
			break;
		
		case 1595446967:
		case -620589387:
			return 30265;
			break;
		
		case -530593323:
		case 383923929:
			return 30266;
			break;
		
		case 561619447:
		case -1703406594:
			return 30267;
			break;
		
		case -1913656173:
		case -398286533:
			return 30268;
			break;
		
		case -1766901922:
		case -80478106:
			return 30269;
			break;
		
		case 2091781849:
		case 1835331655:
			return 30270;
			break;
		
		case 1824588341:
		case -1650596870:
			return 30271;
			break;
		
		case 242597641:
		case 1231926496:
			return 30272;
			break;
		
		case 566785691:
		case -1506181253:
			return 30273;
			break;
		
		case -2091312957:
		case -1737145605:
			return 30274;
			break;
		
		case -2079214831:
		case 1673851512:
			return 30275;
			break;
		
		case 1359156274:
		case 1023339598:
			return 30276;
			break;
		
		case 1904247246:
		case -163738770:
			return 30277;
			break;
		
		case -1351518396:
		case 1863218823:
			return 30278;
			break;
		
		case -797874817:
		case 333966447:
			return 30279;
			break;
		
		case -385507297:
		case 1412626052:
			return 30280;
			break;
		
		case 2011910758:
		case -39100956:
			return 30281;
			break;
		
		case -1953985443:
		case 1631533003:
			return 30282;
			break;
		
		case -1124222352:
		case 1493430918:
			return 30283;
			break;
		
		case -1806994767:
		case -196693334:
			return 30284;
			break;
		
		case -1445761968:
		case 553507495:
			return 30285;
			break;
		
		case -89186417:
		case 2003474700:
			return 30286;
			break;
		
		case -308083083:
		case 1121792228:
			return 30287;
			break;
		
		case 667714507:
		case -1424651669:
			return 30288;
			break;
		
		case -1610210252:
		case -1454164346:
			return 30289;
			break;
		
		case 1868506246:
		case -307572086:
			return 30290;
			break;
		
		case 1686703834:
		case -1486436861:
			return 30291;
			break;
		
		case -1811091999:
		case -1705464857:
			return 30292;
			break;
		
		case 414381867:
		case -469188798:
			return 30293;
			break;
		
		case -1206261789:
		case 692621401:
			return 30294;
			break;
		
		case 1395785293:
		case 60231546:
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		
		default:
	}
	switch (iParam0)
	{
		case -1641688020:
			return 25002;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		
		case 1743008394:
		case 1084175393:
			return 110;
		
		case -1090232119:
		case 787255484:
			return 111;
		
		case -1133356123:
		case -566366372:
			return 112;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
			return 4333;
		
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 4334;
		
		case -1208373599:
		case 1656518170:
			return 4335;
		
		case -970054678:
		case -840010097:
			return 3750;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		
		default:
	}
	return -1;
}

int func_115(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_116())
		{
			return Global_262145.f_31436[iVar0];
		}
		else
		{
			return Global_262145.f_31424[iVar0];
		}
	}
	return -1;
}

bool func_116()
{
	return func_117(PLAYER::PLAYER_ID());
}

int func_117(bool bParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = func_115(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (func_116())
	{
		iVar3 = func_176(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = func_173(joaat("mp_f_freemode_01"), iVar0, func_176(iVar0), 4);
		}
		iVar2 = func_172(iVar0, 4);
		if ((func_171(func_114(iVar0), -1) || (iVar2 != -1 && func_167(iVar2, -1))) || (iVar1 != -99 && func_119(joaat("mp_f_freemode_01"), func_176(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = func_176(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = func_173(joaat("mp_m_freemode_01"), iVar0, func_176(iVar0), 3);
		}
		iVar2 = func_172(iVar0, 3);
		if ((func_171(func_114(iVar0), -1) || (iVar2 != -1 && func_167(iVar2, -1))) || (iVar1 != -99 && func_119(joaat("mp_m_freemode_01"), func_176(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

var func_119(int iParam0, int iParam1, int iParam2)
{
	Global_77669[1 /*14*/] = { func_120(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_77669[1 /*14*/].f_6, 2);
}

struct<14> func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_166();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_150(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_121(iParam1, iParam2, iParam3);
	}
	return Global_77669[0 /*14*/];
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_149(iParam1, iParam2);
			break;
		
		case 11:
			func_148(iParam1, iParam2);
			break;
		
		case 8:
			func_147(iParam1, iParam2);
			break;
		
		case 9:
			func_146(iParam1, iParam2);
			break;
		
		case 3:
			func_145(iParam1, iParam2);
			break;
		
		case 4:
			func_144(iParam1, iParam2);
			break;
		
		case 6:
			func_143(iParam1, iParam2);
			break;
		
		case 1:
			func_142(iParam1, iParam2);
			break;
		
		case 7:
			func_141(iParam1, iParam2);
			break;
		
		case 10:
			func_140(iParam1, iParam2);
			break;
		
		case 14:
			func_139(iParam1, iParam2);
			break;
		
		case 12:
			func_138(iParam1, iParam2);
			break;
		
		case 5:
			func_137(iParam1, iParam2);
			break;
		
		case 0:
			func_134(iParam1, iParam2);
			break;
		
		case 13:
			func_122(iParam1);
			break;
	}
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_133(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), true);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_132(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_130(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_130(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_130(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_130(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_130(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_130(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), true);
			MISC::CLEAR_BIT(&(uParam0->f_6), false);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_129(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
		}
		if (func_129(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_129(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_132(14))
			{
				return;
			}
			iVar0 = func_126(func_128(iParam1, uParam0->f_2), Global_77666, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), true);
			}
			iVar0 = func_126(func_125(iParam1, uParam0->f_2), Global_77666, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_124(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_126(iVar1, Global_77666, 0);
				if (!BitTest(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_124(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_125(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_127(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_128(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/][iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return 0;
}

int func_130(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77666;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_131(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_126(iVar2, iVar0, 0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

bool func_131(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12581;
	if ((bParam4 && Global_4532516) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4532516)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10302;
					break;
				
				case 232:
					*uParam2 = 10303;
					break;
				
				case 233:
					*uParam2 = 10304;
					break;
				
				case 234:
					*uParam2 = 10305;
					break;
				
				case 235:
					*uParam2 = 10306;
					break;
				
				case 236:
					*uParam2 = 10307;
					break;
				
				case 237:
					*uParam2 = 10308;
					break;
				
				case 238:
					*uParam2 = 10309;
					break;
				
				case 239:
					*uParam2 = 10310;
					break;
				
				case 240:
					*uParam2 = 10311;
					break;
				
				case 241:
					*uParam2 = 10312;
					break;
				
				case 242:
					*uParam2 = 10313;
					break;
				
				case 243:
					*uParam2 = 10314;
					break;
				
				case 244:
					*uParam2 = 10315;
					break;
				
				case 245:
					*uParam2 = 10316;
					break;
				
				case 246:
					*uParam2 = 10317;
					break;
				
				case 247:
					*uParam2 = 10318;
					break;
				
				case 248:
					*uParam2 = 10319;
					break;
				
				case 249:
					*uParam2 = 10320;
					break;
				
				case 250:
					*uParam2 = 10321;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10322;
					break;
				
				case 232:
					*uParam2 = 10323;
					break;
				
				case 233:
					*uParam2 = 10324;
					break;
				
				case 234:
					*uParam2 = 10325;
					break;
				
				case 235:
					*uParam2 = 10326;
					break;
				
				case 236:
					*uParam2 = 10327;
					break;
				
				case 237:
					*uParam2 = 10328;
					break;
				
				case 238:
					*uParam2 = 10329;
					break;
				
				case 239:
					*uParam2 = 10330;
					break;
				
				case 240:
					*uParam2 = 10331;
					break;
				
				case 241:
					*uParam2 = 10332;
					break;
				
				case 242:
					*uParam2 = 10333;
					break;
				
				case 243:
					*uParam2 = 10334;
					break;
				
				case 244:
					*uParam2 = 10335;
					break;
				
				case 245:
					*uParam2 = 10336;
					break;
				
				case 246:
					*uParam2 = 10337;
					break;
				
				case 247:
					*uParam2 = 10338;
					break;
				
				case 248:
					*uParam2 = 10339;
					break;
				
				case 249:
					*uParam2 = 10340;
					break;
				
				case 250:
					*uParam2 = 10341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12581;
}

bool func_132(int iParam0)
{
	return Global_42602 == iParam0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77669[0 /*14*/].f_5 = 4;
	func_135(iVar0, iParam0, 0, iParam1);
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_77669[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar18 > iVar17)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_123(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_123(&(Global_77669[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar38 > iVar37)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2883588 = Var19.f_1;
				Global_2883589 = Var19.f_0;
				func_123(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var39);
		if (iParam3 != -1 && Global_77839)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
			Global_2883588 = Var39.f_1;
			Global_2883589 = Var39.f_0;
			func_123(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_136(iParam0));
			if (iVar57 > iVar56)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
				Global_2883588 = Var39.f_1;
				Global_2883589 = Var39.f_0;
				func_123(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_137(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2043[iVar12]) * Global_294284.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2164[iVar13]) * Global_294284.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2189[iVar14]) * Global_294284.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2318[iVar15]) * Global_294284.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 327, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_26));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_56));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_28));
			}
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_140(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 55, iParam1);
			if (Global_77669[0 /*14*/].f_7 > 0)
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_294284.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 26, iParam1);
			if (Global_77669[0 /*14*/].f_7 > 0)
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2016[iVar11]) * Global_294284.f_29));
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1759[iVar11]) * Global_294284.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 256, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_25));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_144(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1245[iVar11]) * Global_294284.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 256, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_23));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_145(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 136, iParam1);
			if (Global_77669[0 /*14*/].f_7 > 0)
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_167(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_167(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_294284.f_24));
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_167(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979) * Global_294284.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[4]) * Global_294284.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978) * Global_294284.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_167(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977) * Global_294284.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1502[9]) * Global_294284.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1502[iVar11]) * Global_294284.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_77669[0 /*14*/].f_5 = 4;
		func_135(iVar10, iParam0, 256, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_24));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_149(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2455[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 4;
			func_135(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_165(iParam1, iParam2);
			break;
		
		case 11:
			func_164(iParam1, iParam2);
			break;
		
		case 8:
			func_163(iParam1, iParam2);
			break;
		
		case 9:
			func_162(iParam1, iParam2);
			break;
		
		case 3:
			func_161(iParam1, iParam2);
			break;
		
		case 4:
			func_160(iParam1, iParam2);
			break;
		
		case 6:
			func_159(iParam1, iParam2);
			break;
		
		case 1:
			func_158(iParam1, iParam2);
			break;
		
		case 7:
			func_157(iParam1, iParam2);
			break;
		
		case 10:
			func_156(iParam1, iParam2);
			break;
		
		case 14:
			func_155(iParam1, iParam2);
			break;
		
		case 12:
			func_154(iParam1, iParam2);
			break;
		
		case 5:
			func_153(iParam1, iParam2);
			break;
		
		case 0:
			func_152(iParam1, iParam2);
			break;
		
		case 13:
			func_151(iParam1);
			break;
	}
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77669[0 /*14*/].f_5 = 3;
	func_135(iVar0, iParam0, 0, iParam1);
}

void func_153(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_954[iVar12]) * Global_294284.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1075[iVar13]) * Global_294284.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1100[iVar14]) * Global_294284.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1229[iVar15]) * Global_294284.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77669[0 /*14*/].f_5 = 3;
		func_135(iVar10, iParam0, 327, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_18));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_20));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_21));
			}
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_156(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 92, iParam1);
			if (Global_77669[0 /*14*/].f_7 > 0)
			{
				Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_57));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_294284.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_927[iVar11]) * Global_294284.f_22));
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_670[iVar11]) * Global_294284.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_77669[0 /*14*/].f_5 = 3;
		func_135(iVar10, iParam0, 256, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_17));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_160(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_175[iVar11]) * Global_294284.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_77669[0 /*14*/].f_5 = 3;
		func_135(iVar10, iParam0, 256, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_15));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_161(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_167(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_432[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_167(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_432[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar14]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_294284.f_16));
	if (iParam0 >= 241)
	{
		Global_77669[0 /*14*/].f_5 = 3;
		func_135(iVar10, iParam0, 241, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_16));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_164(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_167(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2979) * Global_294284.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_432[23]) * Global_294284.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2978) * Global_294284.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_167(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2977) * Global_294284.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_432[28]) * Global_294284.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_432[iVar11]) * Global_294284.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_77669[0 /*14*/].f_5 = 3;
		func_135(iVar10, iParam0, 237, iParam1);
		if (Global_77669[0 /*14*/].f_7 > 0)
		{
			Global_77669[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77669[0 /*14*/].f_7) * Global_294284.f_16));
		}
	}
	else
	{
		func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_165(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[65]));
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2532[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_77669[0 /*14*/].f_5 = 3;
			func_135(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_123(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_166()
{
	Global_77669[0 /*14*/].f_1 = -1;
	Global_77669[0 /*14*/].f_2 = -1;
	Global_77669[0 /*14*/].f_5 = -1;
	Global_77669[0 /*14*/].f_3 = -1;
	Global_77669[0 /*14*/].f_4 = -1;
	Global_77669[0 /*14*/].f_7 = 0;
	Global_77669[0 /*14*/].f_6 = 0;
	Global_77669[0 /*14*/].f_13 = -1;
	Global_77669[0 /*14*/].f_12 = 0;
	Global_77669[0 /*14*/] = 0;
	StringCopy(&(Global_77669[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_167(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_169(iParam0) == 12581)
	{
		return 0;
	}
	uVar0 = func_168(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_24(iVar1));
}

int func_168(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_126(func_169(uParam0), iParam1, 0);
	return iVar0;
}

int func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_25(iVar0);
	if ((func_16() == 0 || func_170() == 0) || (func_16() == 999 && func_170() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8905;
				break;
			
			case 44:
				return 8908;
				break;
			
			case 45:
				return 8911;
				break;
			
			case 46:
				return 10286;
				break;
			
			case 47:
				return 10289;
				break;
		}
	}
	return 12581;
}

int func_170()
{
	return Global_31512;
}

bool func_171(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = FILES::_0x10144267DD22866C(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_173(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar0 = FILES::_0x6CEBE002E58DEE97(iParam1);
		if (iVar0 != -1)
		{
			return (func_175(iParam0) + iVar0);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_136(iParam2));
		iVar1 = FILES::_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_174(iParam0, func_136(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
		case -1166011267:
		case -906547381:
		case -721794703:
		case 308133919:
			return 11;
			break;
		
		case 488495423:
		case -523083487:
		case 1072091359:
		case 508464559:
			return 11;
			break;
		
		case -1498989066:
		case 1281689967:
		case 841209069:
		case 1742192724:
		case -2022943269:
		case -804690608:
		case -1100955137:
		case 2089631321:
		case 591101258:
		case -1278730655:
		case -1215879713:
		case -918271655:
		case 452715244:
		case -112025702:
		case 128072761:
		case -705996596:
		case 733291825:
		case -101367374:
		case 1328802862:
		case 495519961:
		case -693204279:
		case 150499164:
		case -129905169:
		case 612902523:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 10;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 11;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 12;
			break;
		
		case -126686984:
		case 2057911750:
			return 11;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 11;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 11;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 11;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 0;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 0;
			break;
		
		case -1174740608:
		case 1620783517:
			return 12;
			break;
		
		case -1943796269:
		case -1699338794:
			return 12;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 12;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 11;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 4;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 0;
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 10;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
		case joaat("ch1_12_props_combo10_87_lod"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case 1868506246:
		case -307572086:
		case 1686703834:
		case -1486436861:
		case -1811091999:
		case -1705464857:
		case 414381867:
		case -469188798:
			return 1;
			break;
		
		case -1206261789:
		case 692621401:
			return 4;
			break;
		
		case 1395785293:
		case 60231546:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 10;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
			return 12;
		
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 1;
		
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
			return 4;
		
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
			return 6;
		
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 11;
		
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 10;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 10;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
			return 12;
		
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 4;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 0;
		
		case 1743008394:
		case 1084175393:
		case -1090232119:
		case 787255484:
		case -1133356123:
		case -566366372:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 0;
		
		case -1208373599:
		case 1656518170:
		case -970054678:
		case -840010097:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 1;
		
		default:
	}
	return -1;
}

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_116())
		{
			if (Global_262145.f_31436[iVar0] != -1)
			{
				return 1;
			}
		}
		else if (Global_262145.f_31424[iVar0] != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_183(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_184(func_185(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(bool bParam0)
{
	if (func_32(bParam0) == 237 || func_32(bParam0) == 250)
	{
		return func_186(bParam0);
	}
	return -1;
}

int func_186(bool bParam0)
{
	if (func_33(bParam0, 0))
	{
		return Global_1893551[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_187(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_193(int iParam0)
{
	if (func_203(PLAYER::PLAYER_ID()) && func_202())
	{
		if (func_201(iParam0))
		{
			func_197(11004, -1);
		}
		else if (func_196(iParam0))
		{
			func_197(11006, -1);
		}
		else if (func_195(iParam0, 1))
		{
			func_197(11007, -1);
		}
		else if (func_194(iParam0))
		{
			func_197(11008, -1);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_127(iParam1), 0);
	iVar0++;
	if (!func_200(iParam0))
	{
		func_199(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_198(iParam0, iVar0, iParam1, 1);
	}
}

void func_198(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_127(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_127(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_127(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_127(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_127(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_127(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_127(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_127(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_127(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_127(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_127(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_127(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_127(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_127(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_127(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_127(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_127(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_127(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_127(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_127(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_127(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_127(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_127(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_127(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_127(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_127(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_127(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_127(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_127(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_127(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_127(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_127(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_127(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_127(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_127(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_127(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_127(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_127(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_127(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_127(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_127(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_127(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_127(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_127(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_127(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_127(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_127(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_127(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_127(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_127(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_127(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_127(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_127(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_127(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_199(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_127(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_200(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10874:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_202()
{
	return func_65(PLAYER::PLAYER_ID());
}

int func_203(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853131[bParam0 /*888*/].f_267.f_127, 14);
}

bool func_204(bool bParam0)
{
	return func_36(bParam0, 20);
}

void func_205(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_206(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23766 == 0 || Global_262145.f_23766 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23766 == 1)
			{
				Global_2810701.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810701.f_284 = iParam1;
				Global_2810701.f_285 = 0;
			}
		}
	}
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_209(int iParam0, int iParam1)
{
	if (func_203(PLAYER::PLAYER_ID()) && func_202())
	{
		if (func_201(iParam0) && iParam1 > 0)
		{
			func_199(11005, (func_126(11005, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;
	
	bVar5 = func_11();
	if (bVar5 != func_10())
	{
		func_232(bVar5, &iVar0, &iVar1);
	}
	bVar6 = !func_103(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_231())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_202())
			{
				if (!func_231())
				{
					Var7 = { func_230() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_229(Var7.f_0)), func_228(Var7.f_0), iParam4);
				}
			}
			else if (func_231())
			{
				func_217(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_216())
			{
				if (!func_231())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_229(func_215(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_231())
			{
				func_217(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_216())
			{
				if (!func_231())
				{
					iVar2 = func_211(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_231())
			{
				func_217(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, iVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_231())
			{
				func_217(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_216())
			{
				if (!func_231())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_231())
			{
				func_217(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_231())
			{
				func_217(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1);
			}
			break;
		
		case 249:
			if (func_231())
			{
				func_217(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_231())
			{
				func_217(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
			}
			break;
		
		case 243:
			if (func_231())
			{
				func_217(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_231())
				{
					func_217(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_231())
			{
				func_217(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_231())
			{
				func_217(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4528329[iVar4 /*85*/].f_6 = iVar0;
				Global_4528329[iVar4 /*85*/].f_7 = iVar1;
				Global_4528329[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_BOSS_AGENCY(iVar0, iVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_211(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_214(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_212(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_212(int iParam0, int iParam1)
{
	return (func_213(iParam0) * iParam1);
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22579;
		
		case 0:
			return Global_262145.f_22580;
		
		case 1:
			return Global_262145.f_22581;
		
		case 2:
			return Global_262145.f_22582;
		
		case 3:
			return Global_262145.f_22583;
		
		case 4:
			return Global_262145.f_22584;
		
		case 5:
			return Global_262145.f_22585;
		
		case 6:
			return Global_262145.f_22586;
		
		case 7:
			return Global_262145.f_22587;
		
		default:
	}
	return 0;
}

float func_214(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22589);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22591;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22588);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22591;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22588);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22592;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22593;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22590);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_215(bool bParam0)
{
	if (bParam0 == func_10())
	{
		return 0;
	}
	return Global_1853131[bParam0 /*888*/].f_267.f_187[5 /*13*/];
}

bool func_216()
{
	return func_29(PLAYER::PLAYER_ID());
}

void func_217(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_231())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_218(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_218(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_218(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_218(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_218(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_231())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_21()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_225(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_224(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_219(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_220(iParam0);
	}
}

void func_220(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_231())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_223(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_221(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_221(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_222(&(uParam0->f_14));
	func_222(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_222(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_223(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_224(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_231())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_226(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_46(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_227();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_227()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_229(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_230()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_194;
}

int func_231()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_232(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1893551[bParam0 /*599*/].f_10.f_8[0];
	*uParam2 = Global_1893551[bParam0 /*599*/].f_10.f_8[1];
}

int func_233(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_234(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_234(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_244(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_240(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_235(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_235(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_238(iParam0, 1) };
	if (iParam0 == func_237(PLAYER::PLAYER_PED_ID()))
	{
		func_236(1);
	}
	func_240(Var0, iParam1, 0, sParam2, iParam3);
}

void func_236(int iParam0)
{
	Global_2703660.f_1568 = iParam0;
}

int func_237(int iParam0)
{
	return iParam0;
}

Vector3 func_238(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_239(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_239(int iParam0)
{
	return iParam0;
}

void func_240(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703660.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703660.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703660.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703660.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703660.f_967[iVar1 /*30*/].f_4 = func_243(Global_2703660.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703660.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_967[iVar1 /*30*/].f_3 = iParam3;
			Global_2703660.f_967[iVar1 /*30*/].f_8 = iParam4;
			Global_2703660.f_967[iVar1 /*30*/].f_9 = func_242();
			Global_2703660.f_967[iVar1 /*30*/].f_10 = func_241();
			StringCopy(&(Global_2703660.f_967[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703660.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_241()
{
	if (Global_2703660.f_1568)
	{
		Global_2703660.f_1568 = 0;
		return 1;
	}
	Global_2703660.f_1568 = 0;
	return 0;
}

var func_242()
{
	var uVar0;
	
	uVar0 = Global_2703660.f_1570;
	Global_2703660.f_1570 = 1;
	return uVar0;
}

float func_243(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_245(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_245(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_279(PLAYER::PLAYER_ID()) || func_278(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9894 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9894;
		}
	}
	else if (func_276() || func_275(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23051 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23051;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_274(sParam2))
	{
	}
	if (func_273())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_271(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_270(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_267(0, &iVar1);
					break;
				
				case 3:
					func_267(1, &iVar1);
					break;
				
				case 1:
					func_264(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957933)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_263(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_256((func_262(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_263(1166, iVar1, -1);
				}
				func_250(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_246((func_248(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_246((func_248(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_246(int iParam0)
{
	if (func_273())
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_247(joaat("mpply_globalxp"), iParam0);
	}
}

void func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_248(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_9(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_249(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853131[bParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_249(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_250(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_255(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_253(func_254(&Var0));
			if (iVar13 == 0)
			{
				func_252(&Global_1655492, iParam0);
				func_251(joaat("mpply_crew_local_xp_0"), Global_1655492);
			}
			else if (iVar13 == 1)
			{
				func_252(&Global_1655493, iParam0);
				func_251(joaat("mpply_crew_local_xp_1"), Global_1655493);
			}
			else if (iVar13 == 2)
			{
				func_252(&Global_1655494, iParam0);
				func_251(joaat("mpply_crew_local_xp_2"), Global_1655494);
			}
			else if (iVar13 == 3)
			{
				func_252(&Global_1655495, iParam0);
				func_251(joaat("mpply_crew_local_xp_3"), Global_1655495);
			}
			else if (iVar13 == 4)
			{
				func_252(&Global_1655496, iParam0);
				func_251(joaat("mpply_crew_local_xp_4"), Global_1655496);
			}
		}
	}
}

void func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655496 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655497 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655498 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655499 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655500 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655501 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655502 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655503 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_253(int iParam0)
{
	if (iParam0 == Global_1655487)
	{
		return 0;
	}
	else if (iParam0 == Global_1655488)
	{
		return 1;
	}
	else if (iParam0 == Global_1655489)
	{
		return 2;
	}
	else if (iParam0 == Global_1655490)
	{
		return 3;
	}
	else if (iParam0 == Global_1655491)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_254(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725175;
		}
	}
	return Global_2725175;
}

struct<13> func_255(bool bParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	if (func_273())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9862 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655637[func_127(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655637[func_127(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_15(PLAYER::PLAYER_ID()))
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_260(iParam0, 1);
		}
		func_198(640, iParam0, -1, 1);
		func_199(641, func_260(iParam0, 1), -1, 1, 0);
		Global_1655637[func_127(-1)] = iParam0;
		func_257(-1109644434, 7, 0);
	}
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_259(iParam1, iParam2))
	{
		iVar0 = func_258();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_258()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_259(int iParam0, var uParam1)
{
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_261(iParam0, 0);
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294354[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294354[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_262(bool bParam0)
{
	if (Global_1574631.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655637[func_127(-1)];
			}
			else if (func_15(bParam0))
			{
				return Global_1853131[bParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655637[func_127(-1)];
	}
	return 0;
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_127(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_200(iParam0))
	{
		func_199(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_198(iParam0, iVar0, iParam2, 1);
	}
}

void func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_73(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_266(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_265(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_265(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_265(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_266(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783316 = { func_255(bParam0) };
		Global_2783329 = { func_255(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783316))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783329))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783281, 35, &Global_2783329);
				if (Global_2783246 == Global_2783281)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_267(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_9(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_266(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_9(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_268(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_266(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_265(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_265(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_268(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_269(bParam0), func_269(bParam1));
	return 0f;
}

Vector3 func_269(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_265(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_271(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_262(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_262(PLAYER::PLAYER_ID());
		}
	}
	if (func_272(8000, 0, 0) > 0)
	{
		if (func_272(8000, 0, 0) < (iParam0 + func_262(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_272(8000, 0, 0) - func_262(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_272(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294354[iParam0];
}

int func_273()
{
	return 1;
}

int func_274(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_275(bool bParam0)
{
	return func_189(func_32(bParam0));
}

bool func_276()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_92();
	}
	return func_277(Global_4718592.f_87009);
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_278(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 2;
}

bool func_279(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 7;
}

void func_280()
{
	Global_2726789 = 1;
}

void func_281(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_286(7))
	{
		return;
	}
	iVar0 = func_284(iParam0);
	iVar1 = func_283(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2810701.f_5194.f_269, NETWORK::GET_NETWORK_TIME()));
	if (func_282(iParam0) != -1)
	{
		if (iVar2 > func_282(iParam0))
		{
			iVar2 = func_282(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12660)
	{
		iVar2 = Global_262145.f_12660;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_282(int iParam0)
{
	if (func_195(iParam0, 0) || func_196(iParam0))
	{
		return Global_262145.f_18754;
	}
	if (func_201(iParam0))
	{
		return Global_262145.f_18753;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18750;
		
		case 191:
			return Global_262145.f_18752;
		
		case 190:
			return Global_262145.f_18751;
		
		case 227:
			return Global_262145.f_21312;
		
		case 226:
			return Global_262145.f_21300;
		
		case 225:
			return Global_262145.f_21320;
		
		case 230:
			return Global_262145.f_22576;
		
		case 229:
			return Global_262145.f_22480;
		
		case 233:
			return Global_262145.f_23056;
		
		case 237:
			return Global_262145.f_24226;
		
		case 238:
			return Global_262145.f_24337;
		
		case 249:
			return Global_262145.f_24353;
		
		case 243:
			return Global_262145.f_26756;
		
		default:
	}
	return -1;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12751;
		
		case 152:
			return Global_262145.f_12786;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12774;
		
		case 157:
			return Global_262145.f_12741;
		
		case 159:
			return Global_262145.f_12724;
		
		case 164:
			return Global_262145.f_12764;
		
		case 160:
			return Global_262145.f_12814;
		
		case 162:
			return Global_262145.f_12834;
		
		case 163:
			return Global_262145.f_12799;
		
		case 154:
			return Global_262145.f_12869;
		
		case 155:
			return Global_262145.f_12859;
		
		case 153:
			return Global_262145.f_12823;
		
		case 170:
			return Global_262145.f_15262;
		
		case 171:
			return Global_262145.f_15321;
		
		case 172:
			return Global_262145.f_15339;
		
		case 173:
			return Global_262145.f_15280;
		
		case 166:
			return Global_262145.f_15295;
		
		case 167:
			return Global_262145.f_15386;
		
		case 169:
			return Global_262145.f_15358;
		
		case 168:
			return Global_262145.f_15351;
		
		case 179:
			return Global_262145.f_18633;
		
		case 180:
			return Global_262145.f_18411;
		
		case 182:
			return Global_262145.f_18411;
		
		case 183:
			return Global_262145.f_18411;
		
		case 185:
			return Global_262145.f_18411;
		
		case 186:
			return Global_262145.f_18411;
		
		case 189:
			return Global_262145.f_18633;
		
		case 190:
			return Global_262145.f_18287;
		
		case 191:
			return Global_262145.f_18378;
		
		case 192:
			return Global_262145.f_18172;
		
		case 193:
			return Global_262145.f_18633;
		
		case 194:
			return Global_262145.f_18633;
		
		case 195:
			return Global_262145.f_18411;
		
		case 197:
			return Global_262145.f_18411;
		
		case 198:
			return Global_262145.f_18411;
		
		case 199:
			return Global_262145.f_18633;
		
		case 200:
			return Global_262145.f_18633;
		
		case 201:
			return Global_262145.f_18633;
		
		case 205:
			return Global_262145.f_18633;
		
		case 207:
			return Global_262145.f_18411;
		
		case 208:
			return Global_262145.f_18411;
		
		case 209:
			return Global_262145.f_18411;
		
		case 210:
			return Global_262145.f_18633;
		
		case 211:
			return Global_262145.f_18633;
		
		case 214:
			return Global_262145.f_19483;
		
		case 215:
			return Global_262145.f_19485;
		
		case 216:
			return Global_262145.f_19487;
		
		case 217:
			return Global_262145.f_19489;
		
		case 218:
			return Global_262145.f_19491;
		
		case 219:
			return Global_262145.f_19493;
		
		case 220:
			return Global_262145.f_19495;
		
		case 221:
			return Global_262145.f_19497;
		
		case 225:
			if (!func_216())
			{
				return Global_262145.f_21322;
			}
			break;
		
		case 226:
			if (!func_216())
			{
				return Global_262145.f_21302;
			}
			break;
		
		case 227:
			if (!func_216())
			{
				return Global_262145.f_21314;
			}
			break;
		
		case 229:
			if (!func_216())
			{
				return Global_262145.f_22482;
			}
			break;
		
		case 230:
			if (!func_216())
			{
				return Global_262145.f_22578;
			}
			break;
		
		case 233:
			if (!func_216())
			{
				return Global_262145.f_23055;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_216())
			{
				return Global_262145.f_24228;
			}
			break;
		
		case 238:
			if (!func_216())
			{
				return Global_262145.f_24339;
			}
			break;
		
		case 249:
			if (!func_216())
			{
				return Global_262145.f_24355;
			}
			break;
		
		case 243:
			if (!func_216())
			{
				return Global_262145.f_26759;
			}
			break;
		
		case 158:
			if (!func_216())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12750;
		
		case 152:
			return Global_262145.f_12785;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12773;
		
		case 157:
			return Global_262145.f_12740;
		
		case 159:
			return Global_262145.f_12723;
		
		case 164:
			return Global_262145.f_12763;
		
		case 160:
			return Global_262145.f_12813;
		
		case 162:
			return Global_262145.f_12833;
		
		case 163:
			return Global_262145.f_12798;
		
		case 154:
			return Global_262145.f_12868;
		
		case 155:
			return Global_262145.f_12858;
		
		case 153:
			return Global_262145.f_12822;
		
		case 170:
			return Global_262145.f_15261;
		
		case 171:
			return Global_262145.f_15320;
		
		case 172:
			return Global_262145.f_15338;
		
		case 173:
			return Global_262145.f_15279;
		
		case 166:
			return Global_262145.f_15294;
		
		case 179:
			return Global_262145.f_18632;
		
		case 180:
			return Global_262145.f_18410;
		
		case 182:
			return Global_262145.f_18410;
		
		case 183:
			return Global_262145.f_18410;
		
		case 185:
			return Global_262145.f_18410;
		
		case 186:
			return Global_262145.f_18410;
		
		case 189:
			return Global_262145.f_18632;
		
		case 193:
			return Global_262145.f_18632;
		
		case 194:
			return Global_262145.f_18632;
		
		case 195:
			return Global_262145.f_18410;
		
		case 197:
			return Global_262145.f_18410;
		
		case 198:
			return Global_262145.f_18410;
		
		case 199:
			return Global_262145.f_18632;
		
		case 200:
			return Global_262145.f_18632;
		
		case 201:
			return Global_262145.f_18632;
		
		case 205:
			return Global_262145.f_18632;
		
		case 207:
			return Global_262145.f_18410;
		
		case 208:
			return Global_262145.f_18410;
		
		case 209:
			return Global_262145.f_18410;
		
		case 210:
			return Global_262145.f_18632;
		
		case 211:
			return Global_262145.f_18632;
		
		case 190:
			if (func_285(0))
			{
				return Global_262145.f_18286;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_285(0))
			{
				return Global_262145.f_18377;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_285(0))
			{
				return Global_262145.f_18171;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19482;
		
		case 215:
			return Global_262145.f_19484;
		
		case 216:
			return Global_262145.f_19486;
		
		case 217:
			return Global_262145.f_19488;
		
		case 218:
			return Global_262145.f_19490;
		
		case 219:
			return Global_262145.f_19492;
		
		case 220:
			return Global_262145.f_19494;
		
		case 221:
			return Global_262145.f_19496;
		
		case 225:
			if (func_285(0))
			{
				return Global_262145.f_21321;
			}
			break;
		
		case 226:
			if (func_285(0))
			{
				return Global_262145.f_21301;
			}
			break;
		
		case 227:
			if (func_285(0))
			{
				return Global_262145.f_21313;
			}
			break;
		
		case 229:
			if (func_285(0))
			{
				return Global_262145.f_22481;
			}
			break;
		
		case 230:
			if (func_285(0))
			{
				return Global_262145.f_22577;
			}
			break;
		
		case 233:
			if (func_285(0))
			{
				return Global_262145.f_23057;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_285(0))
			{
				return Global_262145.f_24227;
			}
			break;
		
		case 238:
			if (func_285(0))
			{
				return Global_262145.f_24338;
			}
			break;
		
		case 249:
			if (func_285(0))
			{
				return Global_262145.f_24354;
			}
			break;
		
		case 243:
			return Global_262145.f_26755;
		
		case 158:
			if (func_285(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_285(bool bParam0)
{
	return func_6(PLAYER::PLAYER_ID(), bParam0);
}

bool func_286(int iParam0)
{
	return BitTest(Global_2810701.f_5194.f_47, iParam0);
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_216())
		{
			if (func_103(0))
			{
				if (!func_285(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_11()))
					{
						if (func_300() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_300());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_298(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_291("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1);
						}
						func_101(20);
						func_288(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_288(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(bParam0, 0, 1))
	{
		Var0.f_0 = 657959395;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_290(bParam0);
		func_289(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_46(bParam0));
	}
}

void func_289(var uParam0, var uParam1)
{
	*uParam0 = Global_1921039.f_9;
	*uParam1 = Global_1921039.f_10;
}

var func_290(bool bParam0)
{
	return Global_1893551[bParam0 /*599*/].f_510;
}

int func_291(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_66(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_296(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_292(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_292(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_295() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_19(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_293(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941037.f_5[iVar0 /*53*/] = iParam0;
		Global_1941037.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941037.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941037.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941037.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941037.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941037.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941037 - 1))
	{
		if (iParam0 > Global_1941037.f_5[iVar0 /*53*/].f_1)
		{
			func_294(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941037++;
	if (Global_1941037 > 5)
	{
		Global_1941037 = 5;
		return Global_1941037;
	}
	return (Global_1941037 - 1);
}

void func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941037.f_5[iVar0 /*53*/] = { Global_1941037.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_295()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_296(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_297(&cVar0);
}

var func_297(char[4] cParam0)
{
	return cParam0;
}

void func_298(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_299(1);
	}
	else
	{
		iVar1 = func_299(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_299(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12655;
}

int func_300()
{
	return Global_262145.f_12654;
}

void func_301(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	
	bVar18 = func_285(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_216())
		{
			bVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar17 = func_11();
		}
		bVar11 = bVar17;
		if (bVar11 != -1)
		{
			iVar0 = Global_1853131[bVar11 /*888*/].f_865.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1853131[bVar11 /*888*/].f_865.f_2;
			}
			else
			{
				iVar2 = func_317(Global_1853131[bVar11 /*888*/].f_865.f_4, Global_1853131[bVar11 /*888*/].f_865.f_1, *uParam3, Global_1853131[bVar11 /*888*/].f_865.f_2, Global_1853131[bVar11 /*888*/].f_865.f_3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_316(*iParam2);
			if (iVar10 > 0)
			{
				if (bVar17 == PLAYER::PLAYER_ID())
				{
					func_315("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1944941.f_49 = *uParam3;
			if (bVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_314(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_312(*uParam3);
				}
				iVar6 = func_311(&uVar5);
				iVar7 = Global_262145.f_24257;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24256));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_101(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								bVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_310(bVar23))
								{
									func_302(bVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2810701.f_5194.f_386 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24229;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24230;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957945 = *iParam2;
					func_101(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_302(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_304(bParam0);
	func_303(bParam0, uVar0, iParam1, iParam2);
}

void func_303(bool bParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1890277845;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_290(bParam0);
	func_289(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_46(bParam0));
		}
	}
}

int func_304(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_309();
	iVar0 = func_307(bParam0, iVar0);
	iVar1 = Global_1893551[func_11() /*599*/].f_10.f_427;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15222));
	if (iVar0 < func_306())
	{
		iVar0 = func_306();
	}
	if (iVar0 > func_305())
	{
		iVar0 = func_305();
	}
	return iVar0;
}

int func_305()
{
	return Global_262145.f_15223;
}

int func_306()
{
	return Global_262145.f_16398;
}

int func_307(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_362(bParam0) * func_308());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_308()
{
	return Global_262145.f_16397;
}

var func_309()
{
	return Global_262145.f_12646;
}

int func_310(bool bParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		if (bParam0 != PLAYER::PLAYER_ID())
		{
			if (func_48(bParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_36(bParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_19(bVar2, 0) && !func_48(bVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_19(bVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_312(int iParam0)
{
	func_313(iParam0, 7238);
}

void func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_126(iParam1, -1, 0);
	func_199(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_314(int iParam0)
{
	func_313(iParam0, 7233);
}

int func_315(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_292(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_292(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_316(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24258);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_317(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam2 == iParam1)
	{
		return uParam3;
	}
	iVar0 = uParam3;
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		iVar0 = (iVar0 - iParam4);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam2) / SYSTEM::TO_FLOAT(iParam1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_318(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	*uParam4 = 0;
	bVar16 = func_285(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_216())
		{
			bVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar15 = func_11();
		}
		if (bVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_212(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_211(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_320(*iParam2) > 0)
			{
				if (bVar15 == PLAYER::PLAYER_ID())
				{
					func_315("SMTICK_RONCUT", func_320(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_320(*iParam2));
			}
			if (bVar15 == PLAYER::PLAYER_ID())
			{
				func_319(iVar2, iVar9);
				iVar6 = func_311(&uVar5);
				iVar7 = Global_262145.f_22595;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22594));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_101(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_310(bVar20))
								{
									func_302(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2810701.f_5194.f_386 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22528;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22529;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957945 = *iParam2;
					func_101(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_319(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_313(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_313(iParam1, 6119);
	}
}

int func_320(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22562);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22563))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22563);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_321(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	bVar17 = func_285(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_216())
		{
			bVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar15 = func_11();
		}
		if (bVar15 != -1)
		{
			iVar16 = func_215(bVar15);
			iVar0 = (func_340(bVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_336(bVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21304));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21303));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (bVar15 == PLAYER::PLAYER_ID())
			{
				func_332(iVar16, iVar2);
				if (func_328(iVar16) >= Global_262145.f_20850 || iVar2 >= Global_262145.f_20850)
				{
					func_322(5);
				}
				iVar6 = func_311(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21306);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21305));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_101(108);
					}
					else
					{
						func_101(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_310(bVar20))
								{
									func_302(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2810701.f_5194.f_386 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21307;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21308;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1957945 = *iParam2;
					func_101(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20838)
			{
				if (func_324(Global_262145.f_20839))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20840)
			{
				if (func_324(Global_262145.f_20841))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20842)
			{
				if (func_324(Global_262145.f_20843))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20844)
			{
				if (func_324(Global_262145.f_20845))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20846)
			{
				if (func_324(Global_262145.f_20847))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20848)
			{
				if (func_324(Global_262145.f_20849))
				{
					func_315("CLOTHAWDSTRAP3", Global_262145.f_20850, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20851)
			{
				if (func_324(Global_262145.f_20852))
				{
					func_315("CLOTHAWDSTRAP5", Global_262145.f_20986, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20854)
			{
				if (func_324(Global_262145.f_20855))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20856)
			{
				if (func_324(Global_262145.f_20857))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20858)
			{
				if (func_324(Global_262145.f_20859))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20860)
			{
				if (func_324(Global_262145.f_20861))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20862)
			{
				if (func_324(Global_262145.f_20863))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20864)
			{
				if (func_324(Global_262145.f_20865))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20866)
			{
				if (func_324(Global_262145.f_20867))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20868)
			{
				if (func_324(Global_262145.f_20869))
				{
					func_323("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_323(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2783316 = { func_255(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2783246.f_22), "Leader") && Global_2783246.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2783246.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar1, false, Global_2783246, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1576211, Global_1576212, Global_1576213);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_292(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_171(15417, -1))
			{
				func_113(15417, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_171(15418, -1))
			{
				func_113(15418, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_171(15425, -1))
			{
				func_113(15425, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_171(15405, -1))
			{
				func_113(15405, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_171(15393, -1))
			{
				func_113(15393, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_171(15409, -1))
			{
				func_113(15409, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_171(15396, -1))
			{
				func_113(15396, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_171(15412, -1))
			{
				func_113(15412, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_171(15403, -1))
			{
				func_113(15403, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_171(15389, -1))
			{
				func_113(15389, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_171(15398, -1))
			{
				func_113(15398, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_171(15400, -1))
			{
				func_113(15400, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_171(15408, -1))
			{
				func_113(15408, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_171(15411, -1))
			{
				func_113(15411, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_171(15397, -1))
			{
				func_113(15397, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_171(15413, -1))
			{
				func_113(15413, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_171(15391, -1))
			{
				func_113(15391, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_171(15388, -1))
			{
				func_113(15388, 1, -1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_171(15401, -1))
			{
				func_113(15401, 1, -1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_171(15394, -1))
			{
				func_113(15394, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_171(15406, -1))
			{
				func_113(15406, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_171(15395, -1))
			{
				func_113(15395, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_171(15410, -1))
			{
				func_113(15410, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_171(15407, -1))
			{
				func_113(15407, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_171(15414, -1))
			{
				func_113(15414, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_171(15415, -1))
			{
				func_113(15415, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_171(15399, -1))
			{
				func_113(15399, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_171(15404, -1))
			{
				func_113(15404, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_171(15392, -1))
			{
				func_113(15392, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_171(15390, -1))
			{
				func_113(15390, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_171(15402, -1))
			{
				func_113(15402, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_171(15416, -1))
			{
				func_113(15416, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_327(209, -1))
			{
				func_325(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_171(15426, -1))
			{
				func_113(15426, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_171(15422, -1))
			{
				func_113(15422, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_171(15423, -1))
			{
				func_113(15423, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_171(15421, -1))
			{
				func_113(15421, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_171(15427, -1))
			{
				func_113(15427, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_171(15419, -1))
			{
				func_113(15419, 1, -1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_171(15420, -1))
			{
				func_113(15420, 1, -1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_325(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_326())
	{
		iVar0 = Global_2860791[iParam0 /*3*/][func_127(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_326()
{
	return 1;
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860791[iParam0 /*3*/][func_127(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = func_330(iParam0);
	return func_126(func_329(iVar0), -1, 0);
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3953;
		
		case 1:
			return 3954;
		
		case 2:
			return 3955;
		
		case 3:
			return 3956;
		
		case 4:
			return 3957;
		
		case 5:
			return 5458;
		
		default:
	}
	return 3953;
}

int func_330(int iParam0)
{
	int iVar0;
	
	if (func_331(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iVar0 /*13*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_331(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_332(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_330(iParam0);
	iVar1 = func_329(iVar0);
	iVar2 = (func_126(iVar1, -1, 0) + iParam1);
	func_199(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_335(9357, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
			{
				iVar1 = func_329(iVar0);
				iVar3 = (iVar3 + func_126(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_334(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_333(9357, iVar5, -1);
	}
}

void func_333(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_335(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_336(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_228(iParam1);
	if (func_331(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17227;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17232);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17237);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17226;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17231);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17236);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17225;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17230);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17235);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17223;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17228);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17233);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17224;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17229);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17234);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21329;
				if (func_337(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21331);
				}
				if (func_337(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21330);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_339(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_5, iParam2);
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_331(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_339(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_331(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_340(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (bParam0 == func_10())
	{
		return 0;
	}
	if (func_331(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[bParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853131[bParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_341(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_202())
			{
				Var0 = { func_230() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_336(PLAYER::PLAYER_ID(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18862);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18861);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_311(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18852);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18851));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_101(86);
				}
				Global_2810701.f_5194.f_386 = *iParam2;
			}
			else if (func_285(0))
			{
				Var15 = { func_342(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_336(func_11(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18862));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18861));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18901;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18902;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_342(bool bParam0)
{
	return Global_1893551[bParam0 /*599*/].f_10.f_194;
}

void func_343(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (iParam0 == 167)
	{
		if (func_29(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_358();
			}
			func_357();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_29(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_349(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_348(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_311(&uVar2);
					iVar4 = Global_262145.f_16408;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15617));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_101(44);
					}
				}
				func_346(*iParam3);
				func_345();
				Global_2810701.f_5194.f_386 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						bVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_310(bVar9))
						{
							func_302(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(PLAYER::PLAYER_ID()))
		{
			func_344();
		}
	}
}

void func_344()
{
	int iVar0;
	
	iVar0 = Global_2863900[func_21()];
	iVar0++;
	func_198(3669, iVar0, -1, 1);
}

void func_345()
{
	int iVar0;
	
	iVar0 = Global_2863906[func_21()];
	iVar0++;
	func_198(3668, iVar0, -1, 1);
}

void func_346(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2863909[func_21()];
	iVar0 = (iVar0 + iParam0);
	func_198(3670, iVar0, -1, 1);
	if (func_335(7666, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_347(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_333(7666, iVar2, -1);
	}
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16541;
			break;
		
		case 2:
			return Global_262145.f_16542;
			break;
		
		case 3:
			return Global_262145.f_16543;
			break;
		
		case 4:
			return Global_262145.f_16544;
			break;
		
		case 5:
			return Global_262145.f_16545;
			break;
		
		case 6:
			return Global_262145.f_16546;
			break;
		
		case 7:
			return Global_262145.f_16547;
			break;
		
		case 8:
			return Global_262145.f_16548;
			break;
		
		case 9:
			return Global_262145.f_16549;
			break;
		
		case 10:
			return Global_262145.f_16550;
			break;
		
		case 11:
			return Global_262145.f_16551;
			break;
		
		case 12:
			return Global_262145.f_16552;
			break;
		
		case 13:
			return Global_262145.f_16553;
			break;
		
		case 14:
			return Global_262145.f_16554;
			break;
		
		case 15:
			return Global_262145.f_16555;
			break;
		
		case 16:
			return Global_262145.f_16556;
			break;
		
		case 17:
			return Global_262145.f_16557;
			break;
		
		case 18:
			return Global_262145.f_16558;
			break;
		
		case 19:
			return Global_262145.f_16559;
			break;
		
		case 20:
			return Global_262145.f_16560;
			break;
		
		case 21:
			return Global_262145.f_16561;
			break;
		
		case 22:
			return Global_262145.f_16562;
			break;
		
		case 23:
			return Global_262145.f_16563;
			break;
		
		case 24:
			return Global_262145.f_16564;
			break;
	}
	return 0;
}

var func_348(int iParam0)
{
	if (iParam0 >= Global_262145.f_15595)
	{
		return Global_262145.f_15616;
	}
	else if (iParam0 >= Global_262145.f_15594)
	{
		return Global_262145.f_15615;
	}
	else if (iParam0 >= Global_262145.f_15593)
	{
		return Global_262145.f_15614;
	}
	else if (iParam0 >= Global_262145.f_15592)
	{
		return Global_262145.f_15613;
	}
	else if (iParam0 >= Global_262145.f_15591)
	{
		return Global_262145.f_15612;
	}
	else if (iParam0 >= Global_262145.f_15590)
	{
		return Global_262145.f_15611;
	}
	else if (iParam0 >= Global_262145.f_15589)
	{
		return Global_262145.f_15610;
	}
	else if (iParam0 >= Global_262145.f_15588)
	{
		return Global_262145.f_15609;
	}
	else if (iParam0 >= Global_262145.f_15587)
	{
		return Global_262145.f_15608;
	}
	else if (iParam0 >= Global_262145.f_15586)
	{
		return Global_262145.f_15607;
	}
	else if (iParam0 >= Global_262145.f_15585)
	{
		return Global_262145.f_15606;
	}
	else if (iParam0 >= Global_262145.f_15584)
	{
		return Global_262145.f_15605;
	}
	else if (iParam0 >= Global_262145.f_15583)
	{
		return Global_262145.f_15604;
	}
	else if (iParam0 >= Global_262145.f_15582)
	{
		return Global_262145.f_15603;
	}
	else if (iParam0 >= Global_262145.f_15581)
	{
		return Global_262145.f_15602;
	}
	else if (iParam0 >= Global_262145.f_15580)
	{
		return Global_262145.f_15601;
	}
	else if (iParam0 >= Global_262145.f_15579)
	{
		return Global_262145.f_15600;
	}
	else if (iParam0 >= Global_262145.f_15578)
	{
		return Global_262145.f_15599;
	}
	else if (iParam0 >= Global_262145.f_15577)
	{
		return Global_262145.f_15598;
	}
	else if (iParam0 >= Global_262145.f_15576)
	{
		return Global_262145.f_15597;
	}
	return Global_262145.f_15596;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_356(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_355(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_354(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_350(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_350(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_354(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_350(int iParam0)
{
	int iVar0;
	
	if (func_353(iParam0))
	{
		iVar0 = func_351(func_352(iParam0));
		return func_126(iVar0, -1, 0);
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3648;
	}
	else if (iParam0 == 1)
	{
		return 3649;
	}
	else if (iParam0 == 2)
	{
		return 3650;
	}
	else if (iParam0 == 3)
	{
		return 3651;
	}
	else if (iParam0 == 4)
	{
		return 3652;
	}
	return 3648;
}

int func_352(int iParam0)
{
	int iVar0;
	
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_353(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15795;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15793;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15797;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15791;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15789;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15799;
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1946645[iVar0] == iParam1 && Global_1946652[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	int iVar0;
	
	if (func_353(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_357()
{
	int iVar0;
	
	iVar0 = Global_2863897[func_21()];
	iVar0++;
	Global_2863897[func_21()] = iVar0;
	func_198(3667, iVar0, -1, 1);
}

void func_358()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2863894[func_21()];
	iVar1 = Global_2863903[func_21()];
	iVar0++;
	iVar1++;
	Global_2863894[func_21()] = iVar0;
	Global_2863903[func_21()] = iVar1;
	Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_132 = iVar1;
	func_198(3665, iVar0, -1, 1);
	func_198(3666, iVar1, -1, 1);
}

void func_359()
{
	if (func_216())
	{
		Global_2715551.f_3076.f_134 = 0;
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715551.f_3076.f_134;
	}
}

void func_360()
{
	if (func_216())
	{
		if (Global_2715551.f_3076.f_134 < 10)
		{
			Global_2715551.f_3076.f_134++;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715551.f_3076.f_134;
		}
	}
}

void func_361()
{
	if (func_216())
	{
		if (Global_2715551.f_3076.f_134 > 0)
		{
			Global_2715551.f_3076.f_134 = (Global_2715551.f_3076.f_134 - 1);
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715551.f_3076.f_134;
		}
	}
}

int func_362(bool bParam0)
{
	return Global_1893551[bParam0 /*599*/].f_10.f_28;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_103(1) && !func_285(1))
			{
				if (func_365(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_364(iParam0) == 0)
	{
		if (func_103(1) && !func_285(1))
		{
			if (func_365(func_11()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_365(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 26);
}

int func_366(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18548;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12771) * Global_262145.f_12776));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12721) * Global_262145.f_12726));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12748) * Global_262145.f_12752));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12761) * Global_262145.f_12765));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12783) * Global_262145.f_12788));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12945) * Global_262145.f_12946));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12951) * Global_262145.f_12952));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12949) * Global_262145.f_12950));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12943) * Global_262145.f_12944));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12947) * Global_262145.f_12948));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12941) * Global_262145.f_12942));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15318;
		
		case 172:
			return Global_262145.f_15334;
		
		case 173:
			return Global_262145.f_15277;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18556;
		
		case 180:
			return Global_262145.f_18431;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18439;
		
		case 185:
			return Global_262145.f_18448;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18644;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18661;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18508;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18692;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18570;
		
		case 205:
			return Global_262145.f_18679;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18537;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18674;
		
		case 211:
			return Global_262145.f_18638;
		
		case 214:
			return Global_262145.f_19232;
		
		case 215:
			return Global_262145.f_19242;
		
		case 216:
			return Global_262145.f_19252;
		
		case 217:
			return Global_262145.f_19261;
		
		case 218:
			return Global_262145.f_19270;
		
		case 219:
			return Global_262145.f_19286;
		
		case 241:
			return Global_262145.f_24374;
		
		case 242:
			return Global_262145.f_24370;
		
		case 248:
			return Global_262145.f_24373;
		
		case 244:
			return Global_262145.f_24371;
		
		case 239:
			return Global_262145.f_24375;
		
		case 240:
			return Global_262145.f_24376;
		
		case 243:
			return Global_262145.f_26754;
		
		default:
	}
	return 0;
}

int func_367(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18549;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12772) * Global_262145.f_12777));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12722) * Global_262145.f_12727));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12749) * Global_262145.f_12753));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12762) * Global_262145.f_12766));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12784) * Global_262145.f_12789));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12821) * Global_262145.f_12824));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12867) * Global_262145.f_12870));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12857) * Global_262145.f_12860));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12812) * Global_262145.f_12815));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12832) * Global_262145.f_12837));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12797) * Global_262145.f_12800));
		
		case 170:
			return Global_262145.f_15260;
		
		case 171:
			return Global_262145.f_15319;
		
		case 172:
			return Global_262145.f_15335;
		
		case 173:
			return Global_262145.f_15278;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17357;
		
		case 168:
			return Global_262145.f_17356;
		
		case 179:
			return Global_262145.f_18557;
		
		case 180:
			return Global_262145.f_18432;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18440;
		
		case 185:
			return Global_262145.f_18449;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18645;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18662;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18509;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18693;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18571;
		
		case 205:
			return Global_262145.f_18680;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18538;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18675;
		
		case 211:
			return Global_262145.f_18639;
		
		case 214:
			return Global_262145.f_19233;
		
		case 215:
			return Global_262145.f_19243;
		
		case 216:
			return Global_262145.f_19253;
		
		case 217:
			return Global_262145.f_19262;
		
		case 218:
			return Global_262145.f_19271;
		
		case 219:
			return Global_262145.f_19287;
		
		case 178:
			if (func_216())
			{
				return Global_262145.f_19110;
			}
			else if (bParam1)
			{
				return Global_262145.f_19111;
			}
			break;
		
		case 188:
			if (func_216())
			{
				return Global_262145.f_19194;
			}
			else if (bParam1)
			{
				return Global_262145.f_19195;
			}
			break;
		
		case 225:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21317;
				}
				else
				{
					return Global_262145.f_21318;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21319;
			}
			break;
		
		case 226:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21297;
				}
				else
				{
					return Global_262145.f_21298;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21299;
			}
			break;
		
		case 227:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21309;
				}
				else
				{
					return Global_262145.f_21310;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21311;
			}
			break;
		
		case 229:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22477;
				}
				else
				{
					return Global_262145.f_22478;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_22479;
			}
			break;
		
		case 230:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22573;
				}
				else
				{
					return Global_262145.f_22574;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_22575;
			}
			break;
		
		case 233:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23053;
				}
				else
				{
					return Global_262145.f_23054;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_23052;
			}
			break;
		
		case 241:
			return Global_262145.f_24381;
		
		case 242:
			return Global_262145.f_24377;
		
		case 244:
			return Global_262145.f_24378;
		
		case 248:
			return Global_262145.f_24380;
		
		case 239:
			return Global_262145.f_24382;
		
		case 240:
			return Global_262145.f_24383;
		
		case 237:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24223;
				}
				else
				{
					return Global_262145.f_24224;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_24225;
			}
			break;
		
		case 238:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24334;
				}
				else
				{
					return Global_262145.f_24335;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_24336;
			}
			break;
		
		case 249:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24350;
				}
				else
				{
					return Global_262145.f_24351;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_24352;
			}
			break;
		
		case 243:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26757;
				}
				else
				{
					return Global_262145.f_26758;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_26757;
			}
			break;
		
		case 158:
			if (func_216() && !func_202())
			{
				if (func_365(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_202())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_368(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_369(iParam0))
	{
		if (!func_216())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12665;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (func_100(iParam0))
		{
			*uParam1 = (Global_262145.f_18408 / 100f);
			*uParam2 = (Global_262145.f_18408 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24384;
			*uParam2 = Global_262145.f_24384;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24385;
			*uParam2 = Global_262145.f_24385;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24387;
			*uParam2 = Global_262145.f_24387;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24388;
			*uParam2 = Global_262145.f_24388;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24389;
			*uParam2 = Global_262145.f_24389;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24390;
			*uParam2 = Global_262145.f_24390;
		}
		else
		{
			*uParam1 = Global_262145.f_12662;
			*uParam2 = Global_262145.f_12661;
		}
	}
	else if (func_100(iParam0))
	{
		*uParam1 = (Global_262145.f_18409 / 100f);
		*uParam2 = (Global_262145.f_18409 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24391;
		*uParam2 = Global_262145.f_24391;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24392;
		*uParam2 = Global_262145.f_24392;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24394;
		*uParam2 = Global_262145.f_24394;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24395;
		*uParam2 = Global_262145.f_24395;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24396;
		*uParam2 = Global_262145.f_24396;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24397;
		*uParam2 = Global_262145.f_24397;
	}
	else
	{
		*uParam1 = Global_262145.f_12664;
		*uParam2 = Global_262145.f_12663;
	}
	iVar0 = func_63();
	if (iVar0 != func_10())
	{
		if (func_48(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_370()
{
	if ((func_36(PLAYER::PLAYER_ID(), 21) || func_36(PLAYER::PLAYER_ID(), 22)) || func_375())
	{
		return 1;
	}
	if (func_372())
	{
		func_371(22);
		return 1;
	}
	return 0;
}

void func_371(bool bParam0)
{
	MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_372()
{
	if (func_33(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_26() && !func_374()) || func_22(PLAYER::PLAYER_ID(), 21)) || func_22(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_373(27);
		}
	}
	return 0;
}

void func_373(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

bool func_374()
{
	return Global_1574582.f_1;
}

bool func_375()
{
	return func_327(424, -1);
}

int func_376()
{
	return 0;
}

void func_377()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_420())
	{
		return;
	}
	if (func_419())
	{
		func_412();
	}
	if (func_411())
	{
		func_410();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!BitTest(Local_91.f_1, 2) && !BitTest(Local_91.f_1, 4)) && !BitTest(Local_91.f_1, 3))
	{
		if (BitTest(Local_91.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_91.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_91.f_10)
			{
				func_401(101, sVar0, sVar1, func_403(), func_402(PLAYER::PLAYER_ID()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_400(87, func_37(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_399() != PLAYER::PLAYER_ID())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_91.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_91.f_10)
			{
				func_401(101, sVar0, sVar1, func_403(), func_402(PLAYER::PLAYER_ID()), func_399(), func_37(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_398(91, func_399(), func_37(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_91.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_91.f_10)
			{
				func_401(101, "GB_WINNER", sVar1, func_403(), func_402(PLAYER::PLAYER_ID()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_400(87, func_37(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
			}
		}
	}
	else if (BitTest(Local_91.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_379(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (BitTest(Local_91.f_1, 4) || func_31(func_37(), 1, 0))
		{
			if (PLAYER::PLAYER_ID() == func_63())
			{
				Var2.f_10 = func_63();
				Var2.f_2 = -19244849;
				func_378(Var2, func_46(func_37()));
			}
		}
	}
}

void func_378(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_379(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_395(&(Var0.f_69), iParam7);
	}
	return func_380(&Var0);
}

int func_380(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703660.f_2722)
		{
			return 0;
		}
	}
	func_394(uParam0, uParam0->f_17);
	func_391(uParam0);
	if (func_92())
	{
		func_391(uParam0);
	}
	if (func_390(uParam0->f_1))
	{
		func_383();
		if (Global_2703660.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[0 /*80*/] = { *uParam0 };
			if (func_382(uParam0->f_69, 8192))
			{
				Global_1932201 = 1;
			}
			return 1;
		}
		if (((Global_2703660.f_2400[0 /*80*/].f_1 == 13 || Global_2703660.f_2400[0 /*80*/].f_1 == 53) || Global_2703660.f_2400[0 /*80*/].f_1 == 54) || Global_2703660.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703660.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703660.f_2400[iVar0 + 1 /*80*/] = { Global_2703660.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703660.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_383();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_395(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_382(uParam0->f_69, 128))
			{
				if (func_381(Global_2703660.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
					func_395(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_382(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_383()
{
	bool bVar0;
	
	if (Global_2703660.f_2723)
	{
		return;
	}
	if (!Global_78126)
	{
		Global_78126 = 1;
		bVar0 = true;
	}
	func_384();
	if (bVar0)
	{
		Global_78126 = 0;
	}
}

void func_384()
{
	Global_2703660.f_2724 = 0;
	Global_2703660.f_2724.f_582 = 0;
	func_388(&(Global_2703660.f_2724.f_1));
	Global_2703660.f_2724.f_1.f_1 = 0;
	func_385(&(Global_2703660.f_2724.f_1), 1);
}

void func_385(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78126)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78127)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_387(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_386(0);
}

void func_386(int iParam0)
{
	Global_78118 = iParam0;
	Global_78119 = iParam0;
}

int func_387(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_388(var uParam0)
{
	func_389(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_389(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_390(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_391(var uParam0)
{
	if (func_393(uParam0->f_1))
	{
		uParam0->f_72 = func_392();
	}
}

int func_392()
{
	return 21;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_394(var uParam0, int iParam1)
{
	if (func_393(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_381(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_66(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_395(var uParam0, int iParam1)
{
	func_396(uParam0, iParam1);
}

void func_396(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_397(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_398(int iParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = bParam1;
	Var0.f_18 = bParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_380(&Var0);
}

bool func_399()
{
	return Local_91.f_3;
}

int func_400(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = bParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_395(&(Var0.f_69), iParam8);
	}
	return func_380(&Var0);
}

int func_401(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_395(&(Var0.f_69), 4);
	return func_380(&Var0);
}

int func_402(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_84(bParam0);
	if (iVar0 != -1)
	{
		return func_82(iVar0);
	}
	return 1;
}

char* func_403()
{
	bool bVar0;
	char* sVar1;
	
	bVar0 = func_27(PLAYER::PLAYER_ID());
	if (bVar0 != func_10())
	{
		if (bVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_36(bVar0, 28) || func_36(PLAYER::PLAYER_ID(), 28)) || func_409(bVar0)) && !func_408(bVar0))
			{
				return func_406(bVar0, 0);
			}
			if (!func_405() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_406(bVar0, 0);
			}
		}
		sVar1 = func_404(&(Global_1893551[bVar0 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_406(bVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_404(var uParam0)
{
	return uParam0;
}

bool func_405()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

char* func_406(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(bParam0, 1))
		{
			return func_407();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_407()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_408(bool bParam0)
{
	struct<13> Var0;
	
	Var0 = { func_255(bParam0) };
	if (func_405())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_409(bool bParam0)
{
	struct<13> Var0;
	
	if (bParam0 != func_10())
	{
		Var0 = { func_255(bParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !unk_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_405() || unk_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_410()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_395(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_411()
{
	return Global_2703660.f_2400[0 /*80*/].f_1 != 0;
}

void func_412()
{
	if (!func_418())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574755.f_9)
	{
		return;
	}
	func_413();
}

void func_413()
{
	func_415();
	func_414(0);
}

void func_414(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574755 = 20;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
	if (bVar0)
	{
		Global_1574755.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574755.f_12), "", 16);
	StringCopy(&(Global_1574755.f_16), "", 64);
	StringCopy(&(Global_1574755.f_32), "", 64);
	Global_1574755.f_52 = 0;
	Global_1574755.f_53 = 0;
	Global_1574755.f_54 = 0;
	Global_1574755.f_55 = -1;
	Global_1574755.f_56 = 0;
	Global_1574755.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_415()
{
	if (!func_417())
	{
	}
	if (func_418())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574755.f_12));
		func_416();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_416()
{
	switch (Global_1574755)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		default:
	}
}

bool func_417()
{
	if (!func_418())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574755.f_12));
	func_416();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_418()
{
	if (Global_1574755 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_419()
{
	return func_418();
}

int func_420()
{
	if (!Global_2703660.f_4.f_10 || func_664())
	{
		return 1;
	}
	return 0;
}

void func_421(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1))
		{
			if (bParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_422(bParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2810701.f_5194.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_422(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam0 != func_10() && bParam1 != func_10())
	{
		iVar0 = func_27(bParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_27(bParam1);
		}
	}
	return 0;
}

void func_423(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_554(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_552() || iParam2 == 28)
	{
		if (func_499(iParam1, iParam2, uParam3, Global_1836353, 0, func_550(), sParam7))
		{
			func_498(1);
			if ((!func_497() && !func_496()) || BitTest(Global_2810701.f_4657, 1))
			{
				if (func_495())
				{
					func_494();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_493(1);
						Global_1836353 = 0;
						iVar54 = -1;
						if (Global_1836576 != 1)
						{
							func_492(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_19(bVar35, 0))
									{
										if ((func_488(bVar35) || Global_2689224[bVar35 /*451*/].f_243 != -1) || func_30(bVar35))
										{
											bVar44 = bVar35;
											if (func_29(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_487(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_485(PLAYER::PLAYER_ID(), 0) && func_32(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_484())
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_10();
								}
							}
							else
							{
								bVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_483(bVar35) && func_478(bVar35, iParam2)) && func_9(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
								Var38 = { func_473(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_255(bVar35) };
								iVar37 = func_467(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1836353++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_484())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_462(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_461(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_460(bVar35, 0);
								if (bVar34)
								{
									if (func_28(bVar35, 1) && iVar1[bVar44] != -1)
									{
										iVar53 = iVar1[bVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_459(iParam5))
								{
									func_458(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_458(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, bVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_9(bVar35, 0, 1) && !BitTest(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_10();
							}
							if (func_483(bVar35))
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
									Var38 = { func_473(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_255(bVar35) };
									iVar37 = func_467(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1836353++;
									iVar51 = func_460(bVar35, 1);
									if (bVar34)
									{
										if (func_28(bVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
									func_438(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_435(uParam3, iParam1, iParam2);
						}
						func_434(&(uParam3->f_21));
						func_433();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_432(uParam3, iParam1);
							func_431(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_432(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_427(uParam3))
						{
							Global_1836576 = 1;
						}
						func_424(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_433();
			func_493(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_424(var uParam0)
{
	if (!func_426(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_434(&(uParam0->f_21));
		func_425(0);
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_426(var uParam0)
{
	return uParam0->f_1;
}

int func_427(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_10() && func_9(bVar15, 0, 1))
	{
		Var2 = { func_255(bVar15) };
		iVar1 = func_430(uParam0, uParam0->f_37);
		if (func_429(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_428(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_428(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_428(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_428(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_428(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_428(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_428(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_429(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_430(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_431(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_432(var uParam0, int* iParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_433()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_434(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_435(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_10())
		{
			if (func_9(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_437(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_436(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853131[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_436(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_437(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_438(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_457() && iParam4 < func_456())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_455(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_455("");
			if (uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				func_455(&sParam5);
			}
			func_443(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_442(uParam3))
			{
				func_441("DPAD_FRIEND");
			}
			else if (func_440(uParam3))
			{
				func_441("DPAD_FRIEND");
			}
			else if (func_439(uParam3))
			{
				func_441("DPAD_CREW");
			}
			else
			{
				func_441("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_439(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_440(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_441(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_442(var uParam0)
{
	if (func_440(uParam0) && func_439(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_443(var uParam0, bool bParam1)
{
	if (func_454(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_447(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2689224[bParam1 /*451*/].f_424, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_444())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_444()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_445() || func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_445()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_94();
	}
	return func_446(Global_4718592.f_87009);
}

int func_446(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_447(bool bParam0)
{
	if ((func_9(bParam0, 0, 1) && func_448()) && func_6(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_448()
{
	if (func_453(PLAYER::PLAYER_ID()) || func_452())
	{
		if (!func_449(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_449(bool bParam0)
{
	if (func_451(bParam0) == 236 || func_451(bParam0) == 150)
	{
		return func_450(bParam0);
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_451(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/];
	}
	return -1;
}

int func_452()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_453(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/] != -1;
	}
	return 0;
}

int func_454(bool bParam0)
{
	if (func_444())
	{
		if (func_9(bParam0, 0, 1))
		{
			return func_29(bParam0);
		}
	}
	if ((func_9(bParam0, 0, 1) && func_448()) && func_8(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_455(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_456()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_457()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_458(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_457() && iParam3 < func_456())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_441(sParam16);
				}
				else
				{
					func_455(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_484())
				{
					func_455("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_441(&(uParam2->f_104));
					}
					else
					{
						func_455("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_455("");
				}
				if (uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					func_455(&sParam4);
				}
				func_443(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_455("");
					func_455("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_442(uParam2))
				{
					func_441("DPAD_FRIEND");
				}
				else if (func_440(uParam2))
				{
					func_441("DPAD_FRIEND");
				}
				else if (func_439(uParam2))
				{
					func_441("DPAD_CREW");
				}
				else
				{
					func_441("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_459(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_453(bParam0)) && !func_204(bParam0))
	{
		iVar0 = func_392();
	}
	iVar1 = func_84(bParam0);
	if (!iVar1 == -1)
	{
		return func_82(iVar1);
	}
	return iVar0;
}

char* func_461(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_462(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_466(iParam3))
	{
		*fParam1 = (func_463(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_459(iParam3))
	{
		*fParam1 = (func_463(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_463(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_465(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_464(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_464(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_465(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_467(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_470(bParam0);
	if (iVar0 == -1)
	{
		func_468(bParam0, 1);
		return 0;
	}
	Global_1656661[iVar0 /*5*/].f_4 = 1;
	return Global_1656661[iVar0 /*5*/].f_2;
}

void func_468(bool bParam0, bool bParam1)
{
	if (!func_9(bParam0, 0, 1))
	{
		return;
	}
	if (func_470(bParam0) != -1)
	{
		return;
	}
	if (Global_1656824)
	{
		if (bParam0 == Global_1656824.f_1)
		{
			return;
		}
	}
	if (func_469(bParam0))
	{
		return;
	}
	if (Global_1656862 >= 32)
	{
		return;
	}
	Global_1656829[Global_1656862] = bParam0;
	Global_1656862++;
	if (bParam1)
	{
	}
}

int func_469(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656862)
	{
		if (Global_1656829[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_470(bool bParam0)
{
	int iVar0;
	
	if (!func_9(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656822 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656822)
	{
		if (Global_1656661[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1656661[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_471(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_471(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1656822)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656661[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1656661[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1656661[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1656822)
	{
		Global_1656661[iVar32 /*5*/] = { Global_1656661[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_472(&(Global_1656661[iVar32 /*5*/]));
	Global_1656822 = (Global_1656822 - 1);
}

void func_472(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_473(bool bParam0)
{
	char cVar0[32];
	
	if (func_9(bParam0, 0, 1))
	{
		Global_2783316 = { func_255(bParam0) };
		if (func_405())
		{
			if (func_429(Global_2783316))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2783316))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_477(&Global_2783316))
		{
			Global_2783246 = { func_475(bParam0) };
			func_474(&Global_2783246, &cVar0);
		}
	}
	return cVar0;
}

void func_474(var* uParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_475(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_476(bParam0))
	{
		return Global_1575086[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_255(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_476(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_477(var* uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_478(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_482(bParam0) || func_481(bParam0)) || func_480(bParam0))
		{
			return 0;
		}
	}
	if (!func_479(bParam0))
	{
		return 0;
	}
	if ((!func_488(bParam0) && Global_2689224[bParam0 /*451*/].f_243 == -1) && !func_30(bParam0))
	{
		return 0;
	}
	return 1;
}

bool func_479(bool bParam0)
{
	return BitTest(Global_1853131[bParam0 /*888*/].f_139, 22);
}

int func_480(bool bParam0)
{
	if (func_482(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 8);
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1893551[iParam0 /*599*/].f_1, 10) || BitTest(Global_1893551[iParam0 /*599*/].f_1, 9));
	}
	return 0;
}

bool func_482(int iParam0)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_1, 2);
}

int func_483(bool bParam0)
{
	bool bVar0;
	
	if (bParam0 == func_10())
	{
		return 0;
	}
	if (func_19(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853131[bVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_484()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_451(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		switch (func_32(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_449(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_485(bool bParam0, int iParam1)
{
	if (Global_1893551[bParam0 /*599*/].f_10.f_33 != -1 && func_486(Global_1893551[bParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893551[bParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_486(Global_1893551[bParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_195(iParam0, 0);
	return 0;
}

void func_487(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_19(bVar1, 0))
			{
				if ((func_488(bVar1) || Global_2689224[bVar1 /*451*/].f_243 != -1) || func_30(bVar1))
				{
					if (func_48(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_488(bool bParam0)
{
	if (!func_9(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_9(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_489(bParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(bParam0, PLAYER::PLAYER_ID()) || func_32(bParam0) == 233) || func_32(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_489(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_490(PLAYER::PLAYER_ID());
	bVar1 = func_490(bParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_490(bool bParam0)
{
	return func_491(&(Global_2689224[bParam0 /*451*/].f_433), 0);
}

var func_491(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_492(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_493(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644215.f_2 == 0)
		{
			Global_1644215.f_2 = 1;
		}
	}
	else if (Global_1644215.f_2 == 1)
	{
		Global_1644215.f_2 = 0;
	}
}

void func_494()
{
	if (BitTest(Global_2810701.f_4657, 1))
	{
		if (func_411())
		{
			func_410();
		}
	}
}

int func_495()
{
	if (BitTest(Global_2810701.f_4657, 0) && func_411())
	{
		return 1;
	}
	if (BitTest(Global_2810701.f_4657, 1) && func_411())
	{
		return 1;
	}
	return 0;
}

int func_496()
{
	if (func_411())
	{
		if (func_381(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_497()
{
	if (func_411())
	{
		if (func_393(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_498(int iParam0)
{
	if (Global_1644215.f_1 != Global_1644215)
	{
		Global_1644215.f_1 = Global_1644215;
	}
	if (Global_1644215 != iParam0)
	{
		Global_1644215 = iParam0;
	}
}

int func_499(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_549(iParam1);
	fVar7 = func_548();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_547())
		{
			if (func_546() > 0 && Global_1836355)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_529())
		{
			func_528(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2810701.f_4660, 26))
	{
		func_528(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_426(&(uParam2->f_19)))
	{
		if (func_546() == 1)
		{
			func_527(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_528(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (func_426(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_546() == 0 && !bParam5))
		{
			func_528(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_526();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_526();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_527(bVar6, iParam0, 0))
				{
					func_492(iParam0, 0, 0);
					sVar4 = func_524(iParam1, &(Global_4718592.f_87016), bParam4);
					Var0 = { func_522(iParam1) };
					if (bParam4)
					{
						func_519(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_512(iParam0, func_516(uParam2), func_513(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_508(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_506(iParam0, sVar9, func_507(), -1);
					}
					else if (func_444())
					{
						uParam2->f_34 = Global_1836354;
						func_519(iParam0, sVar4, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_501(iParam1);
						uParam2->f_34 = Global_1836354;
						func_519(iParam0, sVar4, "", 0, iVar8, func_500(), 1);
					}
					else
					{
						iVar8 = func_501(iParam1);
						func_519(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_500()
{
	return Global_1836354;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_505())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_504(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_503(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_502(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_276())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_502(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 4;
}

bool func_503(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 7;
}

bool func_504(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 2;
}

bool func_505()
{
	return Global_4718592.f_1 == 0;
}

void func_506(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_441(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_441("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_507()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_508(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_510())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_285(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_285(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_509(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_509(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_510()
{
	return (func_511() && func_65(func_63()));
}

bool func_511()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148;
}

void func_512(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_441(sParam1);
		}
		else if (func_451(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_441("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_513(var uParam0)
{
	int iVar0;
	
	iVar0 = func_451(PLAYER::PLAYER_ID());
	if (func_515())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_514())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_514()
{
	if (func_451(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2810701.f_5115;
	}
	return -1;
}

bool func_515()
{
	return Global_1853004;
}

char* func_516(var uParam0)
{
	int iVar0;
	
	iVar0 = func_451(PLAYER::PLAYER_ID());
	if (func_515())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_518() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_518() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_514())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_517() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_517()
{
	return Global_2810701.f_5118;
}

int func_518()
{
	if (func_451(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2810701.f_5113;
	}
	return -1;
}

void func_519(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_455(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_441(sParam1);
		}
		if (func_547() && iParam6)
		{
			if (func_521())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_441(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_520(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_92())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_520(bool bParam0)
{
	if (func_504(bParam0) || func_503(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_521()
{
	return Global_1836355;
}

struct<4> func_522(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_523(PLAYER::PLAYER_ID()) || func_502(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_528, 16);
			break;
	}
	if (func_444() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_528, 16);
	}
	return Var0;
}

bool func_523(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 5;
}

char* func_524(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_444() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_525();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_525()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_526()
{
	Global_43534 = 1;
}

bool func_527(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_528(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_433();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_426(&(uParam1->f_19)))
		{
			func_434(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), false);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_529()
{
	if (func_545())
	{
		return 0;
	}
	if (func_544())
	{
		return 0;
	}
	if (!func_542())
	{
		return 0;
	}
	if (!func_540())
	{
		return 0;
	}
	if (func_539(8, -1))
	{
		return 0;
	}
	if (func_546() == 2)
	{
		return 0;
	}
	if (Global_2810701.f_4612)
	{
		return 0;
	}
	if (func_538())
	{
		return 0;
	}
	else if (!func_535(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_534(1) || func_532(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_531() && Global_1965735 == 2)
	{
		return 0;
	}
	if (func_17(PLAYER::PLAYER_ID()) && !func_531())
	{
		return 0;
	}
	if (Global_1932195)
	{
		return 0;
	}
	if (Global_1932200)
	{
		return 0;
	}
	if (func_286(0))
	{
		return 0;
	}
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637036)
	{
		return 0;
	}
	if ((Global_1959937.f_718.f_5 || Global_1962763.f_718.f_5) || Global_1958965.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966739.f_724.f_5 || Global_1966739.f_744.f_724.f_5) || Global_1966739.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973525.f_726.f_5)
	{
		return 0;
	}
	if (func_530(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1637072 || Global_1637073) || Global_1637074)
	{
		return 0;
	}
	return 1;
}

int func_530(bool bParam0)
{
	if (bParam0 == func_10())
	{
		return 0;
	}
	return BitTest(Global_2689224[bParam0 /*451*/].f_317.f_4, 6);
}

bool func_531()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965736, 0));
}

int func_532(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_533(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_533(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_534(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

int func_535(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_536(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[bParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_536(int iParam0)
{
	return func_537(iParam0);
}

var func_537(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_538()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

int func_540()
{
	if (func_541() == 0)
	{
		return 1;
	}
	return 0;
}

int func_541()
{
	return Global_1574631.f_18;
}

int func_542()
{
	if (func_543())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_543()
{
	return Global_1574604;
}

bool func_544()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 5;
}

bool func_545()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

int func_546()
{
	return Global_1644218.f_68;
}

int func_547()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_548()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_550()
{
	if (func_551(PLAYER::PLAYER_ID()))
	{
		return Global_1581335;
	}
	return 0;
}

int func_551(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_19(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

int func_552()
{
	if (func_550())
	{
		return 1;
	}
	if (func_480(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_515())
	{
		return 1;
	}
	if (func_453(PLAYER::PLAYER_ID()))
	{
		switch (func_451(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_553(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_553(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_553(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_553(bool bParam0)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 4);
}

int func_554(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_453(PLAYER::PLAYER_ID()) && !func_204(PLAYER::PLAYER_ID())) && !func_449(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_33(PLAYER::PLAYER_ID(), 0) && func_204(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_555(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_555(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_453(bParam0) && !func_482(bParam0)) && !BitTest(Global_1893551[bParam0 /*599*/].f_1, 8));
	bVar2 = func_204(bParam0);
	uVar3 = func_26();
	bVar4 = func_370();
	if ((bVar1 && (func_450(bParam0) || func_557(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_35(bParam0)) && !func_556(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810701.f_5194.f_220 != iVar0)
	{
		Global_2810701.f_5194.f_220 = iVar0;
	}
	return iVar0;
}

bool func_556(int iParam0)
{
	return func_36(iParam0, 19);
}

int func_557(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_558()
{
	if (func_9(func_37(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_37()), false))
	{
		func_559(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_37()), true), &uLocal_90, 1140457472, 1144750080, 0);
	}
}

void func_559(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_453(PLAYER::PLAYER_ID()) && !func_482(PLAYER::PLAYER_ID())) && !BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 8)) && (func_450(PLAYER::PLAYER_ID()) || func_557(PLAYER::PLAYER_ID()))) || func_602(Param1))
	{
		return;
	}
	Global_1944617 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	func_598(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_35(PLAYER::PLAYER_ID()) || func_34(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_22(PLAYER::PLAYER_ID(), 21) || func_22(PLAYER::PLAYER_ID(), 25)))
		{
			func_597(Param1, 1, 0);
		}
		if (!*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_596(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_595(iParam0));
				if (func_594(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1944617.f_3), false);
				}
			}
			if (func_593(iParam0))
			{
				fVar1 = func_592(iParam0);
				if (fVar1 != 1f)
				{
					func_589(fVar1);
					MISC::SET_BIT(&(Global_1944617.f_3), true);
				}
			}
			if (!Global_2653189)
			{
				if (func_588(iParam0) && func_35(PLAYER::PLAYER_ID()))
				{
					func_586(1);
					func_585(2);
				}
			}
			func_371(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_36(PLAYER::PLAYER_ID(), 19))
			{
				func_373(19);
			}
		}
		if (*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_596(iParam0))
			{
				if (BitTest(Global_1944617.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1944617.f_3), false);
				}
			}
			if (func_593(iParam0))
			{
				func_584();
				MISC::CLEAR_BIT(&(Global_1944617.f_3), true);
			}
			if (iParam7 && !func_453(PLAYER::PLAYER_ID()))
			{
				if (func_32(PLAYER::PLAYER_ID()) != 152)
				{
					func_561();
				}
			}
			if (func_286(2))
			{
				func_586(0);
				func_560(2);
			}
		}
	}
}

void func_560(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_47), bParam0);
}

void func_561()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_24), &Global_2671507, 2);
	MISC::_COPY_MEMORY(&(Global_2667223.f_26), &Global_2671509, 19);
	func_582();
	func_564(1, 1, 0);
	func_562();
}

void func_562()
{
	func_563(0, 0);
}

void func_563(int iParam0, int iParam1)
{
	Global_2667223.f_22 = iParam0;
	Global_2667223.f_23 = iParam1;
}

void func_564(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_45), &Global_2671528, 323);
	}
	else
	{
		Global_2667223.f_45 = { Global_2671528 };
		Global_2667223.f_45.f_49 = { Global_2671528.f_49 };
		Global_2667223.f_45.f_52 = Global_2671528.f_52;
		Global_2667223.f_45.f_53 = Global_2671528.f_53;
	}
	if (bParam0)
	{
		func_581();
	}
	if (!bParam2)
	{
		func_567(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_566(0);
	func_565();
}

void func_565()
{
	struct<6> Var0;
	
	if (Global_2667223.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667223.f_490 = { Var0 };
	}
}

void func_566(bool bParam0)
{
	if (bParam0)
	{
		Global_2667223.f_713 = 0;
	}
	else
	{
		Global_2667223.f_713 = 1;
	}
}

void func_567(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_580())
		{
			func_579();
		}
		Global_2667223.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667223.f_714.f_504 = iParam1;
		Global_2667223.f_714.f_505 = iParam2;
		Global_2667223.f_714.f_506 = iParam10;
		func_577();
		func_571(8, 0, 0, 0, 0);
		Global_2667223.f_714.f_507 = iParam11;
		Global_2667223.f_714.f_512 = iParam3;
		Global_2667223.f_714.f_513 = iParam4;
		Global_2667223.f_714.f_510 = iParam5;
		Global_2667223.f_714.f_511 = iParam6;
		Global_2667223.f_714.f_514 = iParam7;
		Global_2667223.f_714.f_515 = iParam8;
		Global_2667223.f_714.f_516 = iParam9;
		Global_2667223.f_714.f_517 = iParam14;
		Global_2667223.f_714.f_508 = iParam12;
		Global_2667223.f_714.f_509 = iParam13;
		Global_2667223.f_1753 = 1;
	}
	else
	{
		func_568();
	}
}

void func_568()
{
	if (func_580() && !func_570())
	{
		func_579();
	}
	if (func_570())
	{
		func_569();
	}
	else
	{
		func_577();
		func_571(0, 0, 0, 0, 0);
		Global_2667223.f_1753 = 0;
		Global_2667223.f_1752 = 0;
	}
}

void func_569()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_714), &(Global_2667223.f_1233), 519);
	Global_2667223.f_490 = { Global_2667223.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		Global_2667223.f_1752 = 0;
	}
}

int func_570()
{
	if ((Global_2667223.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_571(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703660.f_1571.f_703.f_16 != func_10())
	{
		if (BitTest(Global_2689224[Global_2703660.f_1571.f_703.f_16 /*451*/].f_415, 0) && func_572())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674952 = 0;
	}
	Global_2667223.f_490 = iParam0;
	Global_2667223.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667223.f_490.f_2 = iParam1;
	Global_2667223.f_490.f_3 = iParam2;
	Global_2667223.f_490.f_4 = iParam3;
	Global_2667223.f_490.f_5 = iParam4;
}

int func_572()
{
	if ((((((func_32(PLAYER::PLAYER_ID()) == 229 || func_32(PLAYER::PLAYER_ID()) == 191) || func_576()) || func_575()) || func_574()) || Global_2784006.f_227 == 1) || (Global_2667223.f_1753 && func_573(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_573(int iParam0)
{
	if (func_450(iParam0))
	{
		return 1;
	}
	if (func_204(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_574()
{
	return Global_2784005;
}

var func_575()
{
	return Global_1836575;
}

int func_576()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_577()
{
	if (func_580() && !func_570())
	{
		func_579();
	}
	func_578();
	Global_2667223.f_714 = 0;
}

void func_578()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667223.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_579()
{
	if (func_570())
	{
		if (Global_2667223.f_714.f_518 == Global_2667223.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_1233), &(Global_2667223.f_714), 519);
		Global_2667223.f_496 = { Global_2667223.f_490 };
		Global_2667223.f_1752 = 1;
	}
}

int func_580()
{
	if ((Global_2667223.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_581()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_368), &Global_2671851, 121);
}

void func_582()
{
	func_583();
}

void func_583()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667223.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667223.f_2262 = 0;
}

void func_584()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2810701.f_5189 < 1f)
		{
			return;
		}
	}
	Global_2810701.f_5190 = -1;
	Global_2810701.f_5189 = 1f;
}

void func_585(bool bParam0)
{
	MISC::SET_BIT(&(Global_2810701.f_5194.f_47), iParam0);
}

void func_586(int iParam0)
{
	if (func_587() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_587()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_589(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_590())
	{
		return;
	}
	fVar0 = (Global_2810701.f_5189 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2810701.f_5189 = fParam0;
	Global_2810701.f_5190 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_590()
{
	switch (func_16())
	{
		case 0:
			return func_591();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_591()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_592(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	if (func_364(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_594(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_595(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_597(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2667223.f_45.f_49 = { Param0 };
	Global_2667223.f_45.f_52 = iParam3;
	Global_2667223.f_45.f_53 = iParam4;
}

void func_598(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_601(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_599();
	}
}

void func_599()
{
	if (!func_600(PLAYER::PLAYER_ID()))
	{
		func_371(25);
	}
}

bool func_600(int iParam0)
{
	return func_36(iParam0, 25);
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12787;
		
		case 142:
			return Global_262145.f_12775;
		
		case 157:
			return Global_262145.f_12742;
		
		case 159:
			return Global_262145.f_12725;
		
		case 162:
			return Global_262145.f_12836;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_602(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_603()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_604(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_604(int iParam0)
{
	struct<6> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && ENTITY::IS_ENTITY_A_PED(Var0.f_0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == PLAYER::GET_PLAYER_PED(func_37()))
		{
			if (Var0.f_5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), true);
					}
				}
			}
		}
	}
}

void func_605()
{
	if (!BitTest(uLocal_89, 3))
	{
		if (func_9(func_37(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
		{
			func_625(func_37(), func_626(6), 1, 0);
			func_623(func_37(), 432, 1, 0);
			func_621(func_37(), 1, 1, 0);
			func_620(func_37(), Global_262145.f_12620, 1, 0);
			func_617(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_606(func_37(), 1, 7000);
			}
			MISC::SET_BIT(&uLocal_89, 3);
		}
	}
}

void func_606(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (bParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	bVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703660)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678391[bVar0]))
		{
			MISC::SET_BIT(&(Global_2678391.f_370), bVar0);
			MISC::CLEAR_BIT(&(Global_2678391.f_375), bVar0);
			HUD::SET_BLIP_FLASHES(Global_2678391[bVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678391[bVar0], 250);
			func_607(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678391.f_375), bVar0);
			}
			else
			{
				Global_2678391.f_201[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678391.f_370), bVar0);
			MISC::CLEAR_BIT(&(Global_2678391.f_375), bVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678391.f_375), bVar0);
			}
			else
			{
				Global_2678391.f_201[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678391.f_370), bVar0);
		MISC::CLEAR_BIT(&(Global_2678391.f_375), bVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678391[bVar0]))
		{
			func_607(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678391[bVar0], false);
		}
	}
}

void func_607(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (func_9(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678391[iVar0]))
		{
			Global_2678391.f_1504[iVar0] = func_608(bParam0);
			HUD::SET_BLIP_PRIORITY(Global_2678391[iVar0], Global_2678391.f_1504[iVar0]);
		}
	}
}

int func_608(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (func_9(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678391[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2678391[iVar0]);
			if (BitTest(Global_2678391.f_386, iVar0) || BitTest(Global_2678391.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2678391.f_371, iVar0) || BitTest(Global_2678391.f_370, iVar0)) || BitTest(Global_2678391.f_388, iVar0))
			{
				return func_614(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_614(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_614(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703660))
						{
							return func_614(6);
						}
						else
						{
							return func_614(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703660))
						{
							return func_614(6);
						}
						else
						{
							return func_614(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_81(Global_2703660, bParam0, -2, 0))
						{
							return func_614(6);
						}
						else
						{
							return func_614(5);
						}
						break;
					
					case 303:
					case 418:
						return func_614(10);
						break;
					
					case 364:
						if (func_612(Global_2703660, bParam0, 1))
						{
							return func_614(10);
						}
						else
						{
							return func_614(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_614(10);
						break;
					
					case 417:
						if ((func_611(bParam0) || func_610(bParam0)) || func_609(bParam0))
						{
							if (func_612(Global_2703660, bParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_612(Global_2703660, bParam0, 1))
						{
							return func_614(6);
						}
						else
						{
							return func_614(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_612(Global_2703660, bParam0, 1))
						{
							return func_614(6);
						}
						else
						{
							return func_614(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_609(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_58(Global_2689224[bParam0 /*451*/].f_317.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_610(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_58(Global_2689224[bParam0 /*451*/].f_317.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_611(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_58(Global_2689224[bParam0 /*451*/].f_317.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_612(int iParam0, bool bParam1, bool bParam2)
{
	if (func_66(iParam0, -2, 0, 0, 0) == func_66(bParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_613(func_66(iParam0, -2, 0, 0, 0)) && func_613(func_66(bParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_613(int iParam0)
{
	if (iParam0 == func_72(1) || iParam0 == func_72(0))
	{
		return 1;
	}
	return 0;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_616())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_615(iParam0);
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_616()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2703660);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return BitTest(Global_4718592.f_595[iVar0 /*17044*/].f_10660, 4);
	}
	return 0;
}

void func_617(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_619(bParam0))
	{
		return;
	}
	func_618(&(Global_2678391.f_723[bParam0]), &(Global_2678391.f_1086[bParam0]), &(Global_2678391.f_393), bParam1, bParam0, bParam2, &uVar0);
}

int func_618(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_619(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_590())
	{
		return 1;
	}
	return 0;
}

void func_620(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_619(bParam0))
	{
		return;
	}
	if (func_618(&(Global_2678391.f_756[bParam0]), &(Global_2678391.f_1119[bParam0]), &(Global_2678391.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_558[bParam0] = fParam1;
		}
	}
}

void func_621(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_619(bParam0))
	{
		return;
	}
	if (func_618(&(Global_2678391.f_822[bParam0]), &(Global_2678391.f_1185[bParam0]), &(Global_2678391.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_622(bParam0, bParam2);
	}
}

void func_622(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2678391.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2678391.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2678391[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678391[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678391[bParam0], true);
		}
	}
}

void func_623(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_619(bParam0))
	{
		return;
	}
	if (func_618(&(Global_2678391.f_591[bParam0]), &(Global_2678391.f_954[bParam0]), &(Global_2678391.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_426[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_624();
		}
	}
}

void func_624()
{
	Global_2678391.f_1651 = 1;
}

void func_625(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_619(bParam0))
	{
		return;
	}
	if (func_618(&(Global_2678391.f_624[bParam0]), &(Global_2678391.f_987[bParam0]), &(Global_2678391.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_459[bParam0] = uParam1;
		}
	}
}

int func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_627()
{
	char* sVar0;
	
	if (func_420())
	{
		if (func_419())
		{
			func_412();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_91.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_634(sVar0))
	{
		func_628(sVar0, func_37(), 1, 0);
	}
}

void func_628(char* sParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_629(sParam0, PLAYER::GET_PLAYER_NAME(bParam1), bParam3, 1);
}

int func_629(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_633(sParam0, sParam1) && Global_1574755.f_56 == Global_1574755.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574755.f_54;
	func_413();
	Global_1574755 = 9;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	StringCopy(&(Global_1574755.f_16), sParam1, 64);
	Global_1574755.f_58 = iParam3;
	Global_1574755.f_56 = iParam3;
	Global_1574755.f_54 = uVar0;
	func_632();
	func_631(bParam2);
	func_630();
	return 1;
}

void func_630()
{
	MISC::SET_BIT(&(Global_1574755.f_59), true);
}

void func_631(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574755.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574755.f_59), false);
}

void func_632()
{
	Global_1574755.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_633(char* sParam0, char* sParam1)
{
	if (!func_418())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

int func_634(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_635(sParam0);
}

bool func_635(char* sParam0)
{
	if (!func_418())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		return func_636(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12));
}

bool func_636(char* sParam0)
{
	if (!func_418())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

void func_637()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_420())
	{
		return;
	}
	if (BitTest(Local_91.f_1, 0))
	{
		if (func_426(&(Local_91.f_4)))
		{
			iVar1 = (func_5() - func_642(&(Local_91.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_641(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_638(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_638(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_638(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_640(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_639(7, bVar0);
		Global_1645748.f_4617[bVar0] = iParam0;
		StringCopy(&(Global_1645748.f_4617.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_4617.f_172[bVar0] = iParam2;
		Global_1645748.f_4617.f_216[bVar0] = iParam3;
		Global_1645748.f_4617.f_183[bVar0] = iParam4;
		Global_1645748.f_4617.f_194[bVar0] = iParam5;
		Global_1645748.f_4617.f_249[bVar0] = iParam6;
		Global_1645748.f_4617.f_260[bVar0] = iParam7;
		Global_1645748.f_4617.f_205[bVar0] = iParam8;
		Global_1645748.f_4617.f_314[bVar0] = iParam9;
		Global_1645748.f_4617.f_325[bVar0] = iParam10;
		Global_1645748.f_4617.f_357[bVar0] = iParam11;
		Global_1645748.f_4617.f_238[bVar0] = iParam12;
		Global_1645748.f_4617.f_271[bVar0] = iParam13;
		Global_1645748.f_4617.f_368[bVar0] = iParam14;
		Global_1645748.f_4617.f_379[bVar0] = iParam15;
		Global_1645748.f_4617.f_390[bVar0] = iParam16;
		Global_1645748.f_4617.f_227[bVar0] = iParam17;
	}
}

void func_639(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), bParam1);
}

int func_640(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_641(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_642(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_643()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_420())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() != func_63())
	{
		if (BitTest(uLocal_89, 0))
		{
			if (!func_411())
			{
				sVar0 = "GBTER_START";
				if (func_6(PLAYER::PLAYER_ID(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_91.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_645(sVar0, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
				func_644(1);
				MISC::SET_BIT(&uLocal_89, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_91.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_410();
			func_400(86, func_37(), -1, sVar2, sVar1, 1, -1, 2, 0);
			MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
		}
	}
	else if (BitTest(uLocal_89, 0))
	{
		if (!func_411())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_91.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_645(sVar3, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
			MISC::SET_BIT(&uLocal_89, 2);
			func_644(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_91.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_410();
		func_400(86, func_37(), -1, sVar5, sVar4, 1, -1, 2, 0);
		MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
	}
	MISC::SET_BIT(&uLocal_89, false);
}

void func_644(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_285(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_411())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_645(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_646(int iParam0)
{
	Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = iParam0;
}

void func_647(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(PLAYER::PLAYER_ID(), 9))
		{
			if (func_555(PLAYER::PLAYER_ID()) != 0)
			{
				func_371(9);
			}
		}
	}
	else if (func_36(PLAYER::PLAYER_ID(), 9))
	{
		func_373(9);
	}
}

void func_648(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		func_662(-1);
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (func_661() != -1)
		{
			func_660(-1);
		}
		if (func_659() != -1)
		{
			func_658(-1);
		}
		func_657(iParam2);
		func_655(iParam0);
		if (!func_593(iParam0))
		{
			fVar0 = func_592(iParam0);
			if (fVar0 != 1f)
			{
				func_589(fVar0);
				MISC::SET_BIT(&(Global_1944617.f_3), true);
			}
		}
		if (!func_596(iParam0) || iParam3)
		{
			if (func_594(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1944617.f_3), false);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_26())
		{
			func_371(27);
		}
		if (bParam1)
		{
			if (!func_370())
			{
				func_586(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2810701.f_4624, 1) || BitTest(Global_2810701.f_4624, 4)) || BitTest(Global_2810701.f_4624, 0))
			{
				func_101(6);
			}
			func_654();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_453(PLAYER::PLAYER_ID()) && func_35(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		func_650();
		if (func_649(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1944617.f_3), 6);
		}
		Global_2810701.f_6702 = 0;
	}
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_650()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_653();
	iVar2 = func_27(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_48(bVar1, iVar2, 1) || func_651(bVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), bVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(bVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_651(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1) && func_28(iParam1, 1))
	{
		return (func_652(iParam0) == func_27(iParam1) || func_652(iParam1) == func_27(iParam0));
	}
	return 0;
}

int func_652(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1893551[func_27(iParam0) /*599*/].f_10.f_462;
	}
	return func_10();
}

int func_653()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return BitTest(Global_1893551[iVar1 /*599*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_654()
{
	if (BitTest(Global_2810701.f_4624, 1))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_4624), true);
	}
	if (BitTest(Global_2810701.f_4624, 4))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_4624), 4);
	}
	if (BitTest(Global_2810701.f_4624, 6))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_4624), 6);
	}
	MISC::CLEAR_BIT(&(Global_2810701.f_4624), false);
	MISC::CLEAR_BIT(&(Global_2810701.f_4624), 2);
	MISC::CLEAR_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887), 17);
	if (Global_2810701.f_4626 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2810701.f_4626);
	}
	Global_2810701.f_4625 = 0;
}

void func_655(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_126(3793, -1, 0);
	bVar1 = func_656(iParam0);
	if (bVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, bVar1);
		func_199(3793, iVar0, -1, 1, 0);
	}
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_657(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1893551[iVar0 /*599*/].f_10.f_182 != iParam0)
	{
		Global_1893551[iVar0 /*599*/].f_10.f_182 = iParam0;
	}
}

void func_658(int iParam0)
{
	if (Global_2810701.f_5194.f_345 != iParam0)
	{
		Global_2810701.f_5194.f_345 = iParam0;
	}
}

int func_659()
{
	return Global_2810701.f_5194.f_345;
}

void func_660(int iParam0)
{
	if (Global_2810701.f_5194.f_344 != iParam0)
	{
		Global_2810701.f_5194.f_344 = iParam0;
	}
}

int func_661()
{
	return Global_2810701.f_5194.f_344;
}

void func_662(int iParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_32 = iParam0;
}

int func_663()
{
	return Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_664()
{
	if (func_665(151) || func_370())
	{
		return 1;
	}
	return 0;
}

int func_665(int iParam0)
{
	if (!func_216() && !func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_35(PLAYER::PLAYER_ID()))
		{
			if (func_370())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_666(int iParam0, int iParam1)
{
	Local_102[iParam0 /*4*/] = iParam1;
}

int func_667()
{
	return 1;
}

int func_668()
{
	return Local_91.f_0;
}

int func_669(int iParam0)
{
	return Local_102[iParam0 /*4*/];
}

int func_670()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_674())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672(159))
	{
		if (!func_671())
		{
			return 1;
		}
	}
	if (func_672(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_590() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_590()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_671()
{
	return Global_2714635.f_698;
}

int func_672(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_673()
{
	return Global_2725233;
}

bool func_674()
{
	return Global_2714635.f_693;
}

void func_675()
{
	SYSTEM::WAIT(0);
}

void func_676()
{
	func_412();
	if (func_9(func_37(), 0, 1))
	{
		func_620(func_37(), 1f, 1, 0);
		func_45(func_46(func_37()), 0);
	}
	Global_1952835 = func_10();
	func_677(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_677(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1633711.f_1.f_108 != 0)
	{
		Global_1633711.f_1.f_108 = 0;
	}
	Global_1633711.f_1.f_109 = -1;
	Global_1633711.f_1.f_110 = -1;
	if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 167 || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 168)
	{
		func_729();
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 4);
	}
	if ((func_202() && iParam1 != 0) && Global_262145.f_17248)
	{
		if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 190 || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 192)
		{
			func_709(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 164 || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 208) || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 250) || Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != -1)
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = -1;
		if (!BitTest(Global_1836833.f_1, 14) && !func_453(PLAYER::PLAYER_ID()))
		{
			func_586(0);
		}
	}
	else if (func_707(PLAYER::PLAYER_ID()) != -1)
	{
		func_662(-1);
	}
	func_706(func_10());
	if (func_286(16))
	{
		func_560(16);
	}
	func_703(0);
	func_657(-1);
	func_702();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_699(iVar0);
		iVar0++;
	}
	if (BitTest(Global_1944617.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1944617.f_3), false);
	}
	if (BitTest(Global_1944617.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 5);
	}
	iVar1 = func_698();
	if ((func_486(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_697(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_201(iVar1))
	{
		func_694(-1, 1);
	}
	else if (((((func_693(iVar1) || func_692(iVar1)) || func_691(iVar1)) || func_191(iVar1)) || func_190(iVar1)) || func_189(iVar1))
	{
	}
	else
	{
		func_694(-1, 1);
	}
	func_373(19);
	func_373(20);
	func_373(21);
	func_373(22);
	func_373(27);
	func_560(3);
	func_560(4);
	func_560(7);
	func_690();
	if (func_35(PLAYER::PLAYER_ID()))
	{
		func_647(0);
	}
	func_373(29);
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = func_10();
	if (Global_2810701.f_5194.f_43 != 0)
	{
		Global_2810701.f_5194.f_43 = 0;
	}
	if (bParam0)
	{
		func_561();
	}
	if (!func_453(PLAYER::PLAYER_ID()))
	{
		func_584();
		MISC::CLEAR_BIT(&(Global_1944617.f_3), true);
	}
	if (BitTest(Global_1944617.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 6);
	}
	if (BitTest(Global_1944617.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 7);
	}
	if (BitTest(Global_1944617.f_3, 8))
	{
		func_689("IMPEXP_SELFDES", 0);
		func_680("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 8);
	}
	func_678(iVar1, 0);
}

void func_678(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_1944617.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_679(iParam0));
			MISC::SET_BIT(&(Global_1944617.f_3), 9);
		}
	}
	else if (BitTest(Global_1944617.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_679(iParam0));
		MISC::CLEAR_BIT(&(Global_1944617.f_3), 9);
	}
}

char* func_679(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_680(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112922.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112922.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_112922.f_14141[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_682();
					Global_112922.f_14141[iVar0 /*104*/].f_99[Global_19954] = 0;
					if (func_681(iVar0))
					{
					}
					else
					{
						Global_112922.f_14141[iVar0 /*104*/].f_24 = 0;
						Global_112922.f_14141[iVar0 /*104*/].f_28 = 0;
						Global_112922.f_14141[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_112922.f_14141[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_681(int iParam0)
{
	if ((Global_112922.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_112922.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_112922.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_682()
{
	if (func_132(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_683();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_683()
{
	func_684();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_684()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_687(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_686(PLAYER::PLAYER_PED_ID());
			if (func_685(iVar0) && (!func_132(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_685(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_685(int iParam0)
{
	return iParam0 < 3;
}

int func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_687(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_687(int iParam0)
{
	if (func_685(iParam0))
	{
		return func_688(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_688(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_689(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112922.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112922.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_112922.f_14141[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112922.f_14141[iVar0 /*104*/].f_24 = 1;
				if (Global_112922.f_14141[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112922.f_14141[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112922.f_14051[0 /*20*/].f_17 = 0;
					}
					if (Global_112922.f_14141[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112922.f_14051[1 /*20*/].f_17 = 0;
					}
					if (Global_112922.f_14141[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112922.f_14051[2 /*20*/].f_17 = 0;
					}
					if (Global_112922.f_14141[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112922.f_14051[3 /*20*/].f_17 = 0;
					}
					Global_112922.f_14141[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112922.f_14141[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_690()
{
	if (func_600(PLAYER::PLAYER_ID()))
	{
		func_373(25);
	}
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_692(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_694(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_698();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_62(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2784993.f_93[func_696(iParam0)] = 1;
			}
		}
		iVar0 = func_696(159);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(157);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(148);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(164);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(142);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(152);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(166);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(170);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(173);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(179);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(200);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(201);
		if (func_695(iVar0, Global_262145.f_12871, bParam1))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(182);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(183);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(185);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(186);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(180);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(195);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(197);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(198);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(207);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(208);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(209);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(214);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(215);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(216);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(217);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(218);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(219);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(220);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(221);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_695(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(PLAYER::PLAYER_ID(), 19) && !func_36(PLAYER::PLAYER_ID(), 20)) && !func_36(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2784993.f_93[iParam0] == 1 && func_426(&(Global_2784993[iParam0 /*2*/])))
	{
		if (func_642(&(Global_2784993[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2784993.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_697(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_698();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2784993.f_93[func_696(iParam0)] = 1;
		}
		iVar0 = func_696(155);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(163);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(160);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(153);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(162);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(154);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(171);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(172);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(199);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(194);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(193);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(210);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(205);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(189);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_696(211);
		if (func_695(iVar0, Global_262145.f_12872, 0))
		{
			func_434(&(Global_2784993[iVar0 /*2*/]));
			func_4(&(Global_2784993[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_698()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_699(int iParam0)
{
	if (!func_700(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam0 /*3*/], func_701(), 0))
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam0 /*3*/] = { func_701() };
	}
	if (!func_700(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam0 /*3*/], func_701(), 0))
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam0 /*3*/] = { func_701() };
	}
}

bool func_700(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_701()
{
	struct<3> Var0;
	
	return Var0;
}

void func_702()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1836066 = { Var0 };
	Global_1836066.f_13 = func_10();
	if (BitTest(Global_1835493, 3))
	{
		MISC::CLEAR_BIT(&Global_1835493, 3);
	}
}

void func_703(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(PLAYER::PLAYER_ID(), 5))
		{
			func_705(5);
		}
	}
	else if (func_47(PLAYER::PLAYER_ID(), 5))
	{
		func_704(5);
	}
}

void func_704(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_5), bParam0);
}

void func_705(bool bParam0)
{
	MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_5), bParam0);
}

void func_706(int iParam0)
{
	if (func_29(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 != iParam0)
			{
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_707(int iParam0)
{
	if (func_708(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_32;
	}
	return -1;
}

int func_708(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_32 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_709(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_339(iParam0, iParam1) && func_728(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		func_713(iVar0, bParam2, bParam3);
		func_710(iVar0, 1);
	}
}

void func_710(int iParam0, bool bParam1)
{
	if (!func_712(iParam0))
	{
		return;
	}
	func_113(func_711(iParam0), bParam1, -1);
	Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iParam0 /*13*/].f_6 = bParam1;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_712(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_713(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_727(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_726(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2783579[iParam0];
		iVar0 = func_725(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1946791 = -1;
		}
		func_724(iParam0, 0, bParam2);
	}
	else if (func_722(iParam0, bParam2))
	{
		iVar0 = func_721(iVar2, 0);
		iVar3 = func_720(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_719(iVar2, bParam2);
		iVar5 = func_721(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_718(iVar2) && func_717(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_726(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_716(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_715(iParam0, (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iParam0 /*13*/].f_2 - (func_719(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_721(iVar2, bParam2) / func_716(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_718(iVar2) && func_717(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_714(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_714(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_331(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1853131[iParam0 /*888*/].f_267.f_267 = iParam2;
				}
				else
				{
					Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_715(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iParam0 /*13*/].f_2)
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_187[iParam0 /*13*/].f_2 = iParam1;
	}
}

int func_716(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_331(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_717(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_331(iParam1) && func_718(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_12;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_718(int iParam0)
{
	return func_228(iParam0) == 5;
}

int func_719(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_228(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17217;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17222;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_17216;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17221;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_17215;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17220;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_17213;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17218;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_17214;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17219;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21343;
				if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21344;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21327;
				if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21328;
				}
			}
			break;
	}
	return uVar0;
}

int func_720(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_331(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_721(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_228(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17198;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17207);
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17212);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_17199;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17206);
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17211);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_17200;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17205);
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17210);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_17201;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17203);
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17208);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_17202;
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17204);
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17209);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21340;
			}
			else
			{
				iVar0 = Global_262145.f_21324;
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21341);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21325);
				}
			}
			if (func_337(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21342);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21326);
				}
			}
			if (func_717(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_722(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_171(15384, -1);
	}
	return func_171(func_723(iParam0), -1);
}

int func_723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_724(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_113(15384, bParam1, -1);
		return;
	}
	func_113(func_723(iParam0), bParam1, -1);
}

int func_725(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2783579[iParam0];
	iVar1 = func_727(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2783586;
	}
	if (func_718(iVar1))
	{
		if (func_717(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_726(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2783586 = iParam1;
		return;
	}
	Global_2783579[iParam0] = iParam1;
}

int func_727(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_331(Global_1853131[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/]))
	{
		uVar0 = Global_1853131[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/];
	}
	return uVar0;
}

int func_728(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_339(iParam0, iParam1))
	{
		iVar0 = func_338(iParam0, iParam1);
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4 > 0 && Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_729()
{
	MISC::CLEAR_BIT(&(Global_2810701.f_1801), 28);
	MISC::CLEAR_BIT(&(Global_2810701.f_1801), 29);
	func_730(24);
}

void func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_7[iVar0]), iVar1);
}

int func_731(struct<21> Param0)
{
	func_783(func_784(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_780(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_91, 11, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_102, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_732(0, 0, 0);
	return 1;
}

void func_732(int iParam0, bool bParam1, bool bParam2)
{
	func_779();
	if (func_61(PLAYER::PLAYER_ID()))
	{
		func_738(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_737(bParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1944612, false);
				break;
			}
	}
	if (!func_216() && !func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (func_375())
		{
			func_585(3);
		}
	}
	func_585(4);
	if (func_103(0))
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = func_11();
	}
	if (func_100(iParam0))
	{
		func_736();
		Global_1944644.f_18 = func_735(func_63());
	}
	else if (func_192(func_707(PLAYER::PLAYER_ID())))
	{
		func_734();
		Global_1944698.f_18 = func_735(func_63());
	}
	if (bParam2)
	{
		if (!func_370())
		{
			func_586(1);
		}
	}
	func_733();
}

void func_733()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1633711.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1633711.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_734()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1944698 = { Var0 };
	Global_1944698.f_24 = 0;
	Global_1944698.f_25 = 0;
	Global_1944698.f_17 = 0;
}

int func_735(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_429;
	}
	return -1;
}

void func_736()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1944644 = { Var0 };
	Global_1944644.f_29 = 0;
	Global_1944644.f_30 = 0;
	Global_1944644.f_17 = 0;
}

int func_737(int iParam0, bool bParam1)
{
	return func_48(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_738(bool bParam0)
{
	int iVar0;
	
	func_730(33);
	func_730(34);
	func_730(35);
	func_730(36);
	func_730(37);
	func_730(38);
	func_730(39);
	func_730(40);
	func_730(43);
	func_730(41);
	func_730(54);
	func_730(42);
	func_730(47);
	func_778(23);
	func_778(24);
	func_730(92);
	MISC::CLEAR_BIT(&(Global_2810701.f_1801), 2);
	func_777();
	func_772();
	func_767();
	func_762();
	func_751();
	func_747();
	func_743();
	func_740();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2810701.f_5194.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_739(3))
	{
		func_778(3);
	}
	else if (func_739(4))
	{
		func_778(4);
	}
	else if (func_739(5))
	{
		func_778(5);
	}
	else if (func_739(6))
	{
		func_778(6);
	}
	else if (func_739(7))
	{
		func_778(7);
	}
	else if (((((((((((((((((func_739(0) || func_739(1)) || func_739(2)) || func_739(8)) || func_739(9)) || func_739(10)) || func_739(11)) || func_739(12)) || func_739(13)) || func_739(14)) || func_739(15)) || func_739(16)) || func_739(17)) || func_739(18)) || func_739(19)) || func_739(20)) || func_739(21)) || func_739(22))
	{
		func_778(8);
		func_778(0);
		func_778(1);
		func_778(2);
		func_778(9);
		func_778(10);
		func_778(11);
		func_778(12);
		func_778(13);
		func_778(14);
		func_778(15);
		func_778(16);
		func_778(17);
		func_778(18);
		func_778(19);
		func_778(20);
		func_778(21);
		func_778(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2810701.f_5194.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_14[iVar0], iVar1);
}

void func_740()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 55)
	{
		if (func_742(iVar0))
		{
			func_741(iVar0);
		}
		iVar0++;
	}
}

void func_741(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_35[iVar0]), iVar1);
}

bool func_742(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_35[iVar0], iVar1);
}

void func_743()
{
	if (func_745())
	{
		func_744(0);
		func_744(1);
		func_744(2);
		func_744(3);
	}
}

void func_744(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_33[iVar0]), iVar1);
}

int func_745()
{
	if (((func_746(0) || func_746(1)) || func_746(2)) || func_746(3))
	{
		return 1;
	}
	return 0;
}

var func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_33[iVar0], iVar1);
}

void func_747()
{
	if (func_749())
	{
		func_748(4);
		func_748(5);
		func_748(6);
		func_748(7);
	}
}

void func_748(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_31[iVar0]), iVar1);
}

int func_749()
{
	if (((func_750(4) || func_750(5)) || func_750(6)) || func_750(7))
	{
		return 1;
	}
	return 0;
}

var func_750(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_31[iVar0], iVar1);
}

void func_751()
{
	int iVar0;
	
	if (func_761())
	{
		func_760(8);
		func_760(9);
		func_760(10);
		func_760(12);
		func_760(13);
		func_760(14);
		func_760(19);
		func_760(20);
		func_760(21);
		func_760(22);
		func_760(23);
		func_760(24);
		func_760(25);
		func_760(26);
		func_760(15);
		func_760(16);
		func_760(17);
		func_760(18);
		func_760(35);
		func_760(45);
		func_760(46);
		if (func_759(11))
		{
			func_760(11);
			iVar0 = func_126(7228, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_199(7228, iVar0, -1, 1, 0);
		}
	}
	if (func_759(48))
	{
		if (func_757(151, 3))
		{
			func_755(151, 3);
		}
		func_760(48);
	}
	if (func_759(49))
	{
		if (func_757(152, 3))
		{
			func_755(152, 3);
		}
		func_760(49);
	}
	if (func_759(50))
	{
		if (func_757(153, 3))
		{
			func_755(153, 3);
		}
		func_760(50);
	}
	if (func_759(51))
	{
		if (func_757(func_752(), 3))
		{
			func_755(func_752(), 3);
		}
		func_760(51);
	}
}

int func_752()
{
	if (func_754())
	{
		func_753(154, Global_19954, 1);
	}
	return 154;
}

void func_753(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112922.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_754()
{
	int iVar0;
	
	iVar0 = func_27(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_10()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && bVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_756(iParam0, iVar0, 0);
			func_753(iParam0, iVar0, 0);
		}
	}
}

void func_756(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112922.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_757(int iParam0, int iParam1)
{
	if (func_758(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_758(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

bool func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_26[iVar0], iVar1);
}

void func_760(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_26[iVar0]), iVar1);
}

int func_761()
{
	if (((((((((((((((((((((func_759(8) || func_759(9)) || func_759(10)) || func_759(12)) || func_759(11)) || func_759(13)) || func_759(14)) || func_759(19)) || func_759(20)) || func_759(21)) || func_759(22)) || func_759(23)) || func_759(24)) || func_759(25)) || func_759(26)) || func_759(15)) || func_759(16)) || func_759(17)) || func_759(18)) || func_759(35)) || func_759(45)) || func_759(46))
	{
		return 1;
	}
	return 0;
}

void func_762()
{
	if (func_766())
	{
		func_765(0);
		func_765(1);
		func_765(2);
		func_765(3);
		func_765(4);
		func_765(5);
		if (func_764(32))
		{
			if (func_757(func_763(), 3))
			{
				func_755(func_763(), 3);
			}
			func_765(32);
		}
	}
}

int func_763()
{
	if (func_754())
	{
		func_753(12, Global_19954, 1);
	}
	return 12;
}

bool func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_23[iVar0], iVar1);
}

void func_765(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_23[iVar0]), iVar1);
}

int func_766()
{
	if ((((func_764(1) || func_764(0)) || func_764(2)) || func_764(4)) || func_764(5))
	{
		return 1;
	}
	return 0;
}

void func_767()
{
	if (func_771())
	{
		func_770(0);
		func_770(1);
		func_770(2);
		func_770(3);
		func_770(4);
		func_770(5);
		func_770(6);
		func_770(7);
		if (func_769(8))
		{
			func_770(8);
		}
		if (func_769(15))
		{
			if (func_757(func_768(), 3))
			{
				func_755(func_768(), 3);
			}
			func_770(15);
		}
	}
}

int func_768()
{
	if (func_754())
	{
		func_753(20, Global_19954, 1);
	}
	return 20;
}

bool func_769(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_21[iVar0], iVar1);
}

void func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_21[iVar0]), iVar1);
}

int func_771()
{
	if ((((((((func_769(0) || func_769(1)) || func_769(2)) || func_769(3)) || func_769(4)) || func_769(5)) || func_769(6)) || func_769(7)) || func_769(8))
	{
		return 1;
	}
	return 0;
}

void func_772()
{
	if (func_776())
	{
		func_775(0);
		func_775(1);
		func_775(2);
		func_775(3);
		func_775(4);
		func_775(5);
		func_775(6);
		func_775(7);
		func_775(8);
		func_775(9);
		func_775(10);
		func_775(11);
		func_775(12);
		if (func_774(13))
		{
			if (func_757(func_773(), 3))
			{
				func_755(func_773(), 3);
			}
			func_775(13);
		}
	}
}

int func_773()
{
	if (func_754())
	{
		func_753(76, Global_19954, 1);
	}
	return 76;
}

bool func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_19[iVar0], iVar1);
}

void func_775(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_19[iVar0]), iVar1);
}

int func_776()
{
	if ((((((((((((func_774(0) || func_774(1)) || func_774(2)) || func_774(3)) || func_774(4)) || func_774(5)) || func_774(6)) || func_774(7)) || func_774(8)) || func_774(9)) || func_774(10)) || func_774(11)) || func_774(12))
	{
		return 1;
	}
	return 0;
}

void func_777()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2810701.f_5194.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_778(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_14[iVar0]), iVar1);
}

void func_779()
{
	struct<14> Var0;
	
	Global_1944626 = { Var0 };
	Global_1944626.f_14 = 0;
	Global_1944626.f_15 = 0;
}

int func_780(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_782();
			}
			else
			{
				return 0;
			}
		}
		if (!func_781())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_782();
					}
					else
					{
						return 0;
					}
				}
				if (func_674())
				{
					if (!bParam2)
					{
						func_782();
					}
					else
					{
						return 0;
					}
				}
				if (func_672(157))
				{
					if (!bParam2)
					{
						func_782();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_782();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_782();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_782();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_781()
{
	return Global_1575030;
}

void func_782()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_783(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_782();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_364(func_785(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_785(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

