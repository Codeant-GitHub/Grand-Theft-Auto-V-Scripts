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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_83 = -1;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	char cLocal_127[16] = "";
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	char* sVar1;
	var uVar2[25];
	bool bVar28;
	struct<3> Var29;
	int iVar32;
	struct<3> Var33;
	bool bVar36;
	int iVar37;
	int iVar38;
	struct<3> Var39;
	bool bVar42;
	bool bVar43;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_107 = -1;
	Local_121 = { 0f, 0f, 0f };
	iLocal_118 = iScriptParam_0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_243();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_242(13) || func_242(14))
	{
		func_243();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_37941)
	{
		func_243();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_75137)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true) - ENTITY::GET_ENTITY_FORWARD_VECTOR(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_124 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_0, Local_121) };
	Global_1946799 = 0;
	Global_1946795 = 0;
	Global_1946906 = 0;
	while (bVar28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
		{
			if (iLocal_109)
			{
				if (!func_240(PLAYER::PLAYER_ID()))
				{
					if (!func_239(&uLocal_112))
					{
						func_238(&uLocal_112, 1, 0);
					}
				}
			}
			if (Global_1946795 && (func_237(PLAYER::PLAYER_ID()) || func_236(PLAYER::PLAYER_ID())))
			{
				if (!func_239(&uLocal_116))
				{
					func_238(&uLocal_116, 0, 0);
				}
				else if (func_235(&uLocal_116, 10000, 0))
				{
					func_234(&uLocal_116);
					Global_1946795 = 0;
				}
				func_228(0);
			}
			if (Global_1852981)
			{
				if (!bVar0)
				{
					iVar32 = ENTITY::GET_ENTITY_MODEL(iLocal_118);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						Var33 = { ENTITY::GET_ENTITY_ROTATION(iLocal_118, 2) };
						iLocal_118 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(iLocal_118, true), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_118, Var33, 2, true);
						bVar0 = true;
					}
				}
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iLocal_118, 0))
			{
				func_243();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(iLocal_118)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_118))
			{
				bVar36 = false;
				iVar37 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar38], false))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar36 = true;
						}
					}
					iVar38++;
				}
				if (Global_16)
				{
					bVar36 = true;
				}
				Var39 = { 0.6f, 0.6f, 0.8f };
				if (((func_227() || func_226(PLAYER::PLAYER_ID())) || func_236(PLAYER::PLAYER_ID())) || func_225())
				{
					Var39 = { 1f, 1f, 0.9f };
				}
				else if (func_224())
				{
					Var39 = { 0.75f, 0.55f, 1.25f };
				}
				bVar42 = func_223(PLAYER::PLAYER_ID());
				if (((((((((((((((((((!bVar36 && !Global_31781) && !func_222(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) && !func_221()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var29, Var39, false, true, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_118)) && !BitTest(Global_2621446, 15)) && !func_220()) && !(Global_77858 && func_219())) && !(!Global_77858 && func_218())) && !((Global_77858 && BitTest(Global_4718592.f_14, 24)) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) && !((Global_77858 && func_217()) && func_216())) && !(Global_77858 && func_214(PLAYER::PLAYER_ID()) == 5)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_76656) && !func_211()) && (!func_224() || func_210(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_118), 90f))) && !func_209()) && !func_208())
				{
					if ((!func_207(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30) && !func_206(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30, -1)) && !func_205(PLAYER::PLAYER_ID()))
					{
						if (iLocal_110 != bVar42)
						{
							if ((func_237(PLAYER::PLAYER_ID()) || func_204(PLAYER::PLAYER_ID())) || func_236(PLAYER::PLAYER_ID()))
							{
								if (iLocal_107 != -1)
								{
									func_203(&iLocal_107);
								}
								if (func_201())
								{
									HUD::CLEAR_HELP(true);
								}
							}
						}
						iLocal_110 = bVar42;
						if (iLocal_107 == -1)
						{
							if (bVar0)
							{
								func_200(&iLocal_107, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_227())
							{
								func_199(bVar42);
							}
							else if (func_197())
							{
								func_194(bVar42);
							}
							else if (func_225())
							{
								func_183(bVar42);
							}
							else if (func_224())
							{
								func_181(bVar42);
							}
							else
							{
								func_200(&iLocal_107, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((iLocal_107 != -1 && func_179(iLocal_107, 1)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_178())
					{
						if (iLocal_107 != -1)
						{
							func_203(&iLocal_107);
						}
						if (!bVar0)
						{
							if ((func_177() || func_176()) || func_175())
							{
								func_170();
							}
							if (func_227())
							{
								func_30(0, bVar42);
								func_29(0, 0, 1);
							}
							else if (func_225())
							{
								func_30(0, bVar42);
								func_29(0, 0, 3);
							}
							else if (func_197())
							{
								func_30(1, bVar42);
								func_29(0, 0, 2);
							}
							else if (func_224())
							{
								func_29(8, 0, 0);
							}
							else
							{
								func_29(0, 0, 0);
							}
							if (!iLocal_108)
							{
								func_22();
								iLocal_108 = 1;
							}
							bVar43 = true;
							if ((func_177() || func_176()) || func_175())
							{
								func_21(&uLocal_114, 0, 0);
								while (!func_235(&uLocal_114, 500, 0))
								{
									func_228(0);
									SYSTEM::WAIT(0);
								}
								func_234(&uLocal_114);
							}
							while (bVar43)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_118, true), 1.5f, 1.5f, 4f, false, true, 1))
								{
									Global_75030 = 1;
								}
								if (((func_177() || func_176()) || func_205(PLAYER::PLAYER_ID())) || func_175())
								{
									if (!func_20() && !Global_76656)
									{
										bVar43 = false;
									}
								}
								else if (func_20() || Global_75030)
								{
									bVar43 = false;
								}
								if (func_177())
								{
									func_228(0);
								}
								SYSTEM::WAIT(0);
							}
							if ((func_177() || func_176()) || func_175())
							{
								func_6();
							}
							func_228(0);
							func_234(&uLocal_116);
							iLocal_108 = 0;
						}
					}
					else if ((((iLocal_107 != -1 && PAD::IS_CONTROL_JUST_PRESSED(2, 52)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_178()) && func_175())
					{
						if (iLocal_107 != -1)
						{
							func_203(&iLocal_107);
							func_5();
						}
						func_170();
						MISC::SET_BIT(&(Global_1946941.f_4), 28);
						while (BitTest(Global_1946941.f_4, 28))
						{
							SYSTEM::WAIT(0);
						}
						func_6();
						func_4();
						func_228(0);
					}
				}
				else
				{
					if (iLocal_107 != -1)
					{
						func_203(&iLocal_107);
					}
					if (func_237(PLAYER::PLAYER_ID()) || func_204(PLAYER::PLAYER_ID()))
					{
						if (func_201())
						{
							HUD::CLEAR_HELP(true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
					{
						if (func_1())
						{
							bVar28 = false;
						}
					}
				}
			}
			else if (iLocal_107 != -1)
			{
				func_203(&iLocal_107);
			}
		}
		else
		{
			if (iLocal_107 != -1)
			{
				func_203(&iLocal_107);
			}
			bVar28 = false;
		}
		SYSTEM::WAIT(0);
	}
	if (bVar0)
	{
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar1))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sVar1);
		}
	}
}

int func_1()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_118);
		if (func_3(iVar0))
		{
			if (func_2(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_118, true) };
				return SYSTEM::VDIST2(Var1, Var4) > 10000f;
			}
		}
		else
		{
			return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_118);
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (iParam0 == joaat("prop_laptop_lester"))
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (Global_2703660.f_833.f_10)
	{
		Global_2703660.f_833.f_10 = 0;
	}
}

void func_5()
{
	if (!Global_2703660.f_833.f_10)
	{
		Global_2703660.f_833.f_10 = 1;
	}
}

void func_6()
{
	char* sVar0;
	
	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
					if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				if (func_7(1, &sVar0))
				{
					STREAMING::REMOVE_ANIM_DICT(&sVar0);
				}
				if (func_7(2, &sVar0))
				{
					if (iLocal_119 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
							iLocal_120 = -1;
						}
						iLocal_120 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_124, ENTITY::GET_ENTITY_ROTATION(iLocal_118, 2), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar0, "exit", 8f, -4f, 5, 0, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
						STREAMING::REMOVE_ANIM_DICT(&sVar0);
					}
				}
			}
		}
	}
	Global_1946794 = 0;
}

int func_7(int iParam0, char* sParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_12())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if ((!func_237(PLAYER::PLAYER_ID()) && !func_236(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_8(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_9(Global_2689224[iParam0 /*451*/].f_317.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_9(int iParam0)
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

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
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

int func_11()
{
	return -1;
}

int func_12()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_19())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17(159))
	{
		if (!func_16())
		{
			return 1;
		}
	}
	if (func_17(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_13() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_13()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	switch (func_15())
	{
		case 0:
			return func_14();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_14()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_15()
{
	return Global_31511;
}

bool func_16()
{
	return Global_2714635.f_698;
}

int func_17(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_18()
{
	return Global_2725233;
}

bool func_19()
{
	return Global_2714635.f_693;
}

bool func_20()
{
	return Global_75027;
}

void func_21(var uParam0, bool bParam1, bool bParam2)
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

void func_22()
{
	if (func_28() || func_27())
	{
		func_26();
		func_23();
	}
}

void func_23()
{
	if ((!func_25() && !func_24()) && Global_2715550)
	{
		Global_4718592.f_87009 = 0;
	}
}

bool func_24()
{
	return Global_2714635.f_691;
}

bool func_25()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

void func_26()
{
	Global_2714635.f_756 = 1;
}

var func_27()
{
	return Global_2714635.f_735;
}

var func_28()
{
	return BitTest(Global_2714635.f_2, 11);
}

int func_29(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_75140 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_75140)
	{
		case 3:
			Global_75138 = 0;
			break;
		
		case 4:
			Global_75138 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_77858 && func_219())
	{
		return 0;
	}
	if (!Global_77858 && func_218())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

void func_30(int iParam0, bool bParam1)
{
	if ((((!bParam1 && !func_169(PLAYER::PLAYER_ID(), 1)) && func_168() < func_167()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_163(PLAYER::PLAYER_ID()))
	{
		func_31(1, iParam0);
	}
}

void func_31(bool bParam0, int iParam1)
{
	struct<14> Var0;
	
	func_112(1, 1, iParam1);
	if (bParam0)
	{
		if (func_111(91) || func_111(98))
		{
			func_108();
		}
		func_93();
		func_92(17);
		Var0.f_2 = -1809326806;
		Var0.f_3 = iParam1;
		if (func_91(PLAYER::PLAYER_ID()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_89(Var0, func_90(0, 1));
		func_57();
		if (!func_91(PLAYER::PLAYER_ID()) && iParam1 != 1)
		{
			func_32(82, "GB_TXTMSG_INIT2", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_32(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7824, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_34(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8531 = iParam6;
			Global_8434[3 /*6*/] = { func_33(iParam0) };
			Global_8511 = iParam0;
			MISC::SET_BIT(&Global_7824, 1);
			MISC::SET_BIT(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_33(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_34(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_50();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_112922.f_14051[Global_19954 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_49() == 0)
	{
		func_47();
		return 0;
	}
	func_46(Global_22352);
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/]), sParam1, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112922.f_14141[Global_22352 /*104*/].f_24 = iParam2;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_25 = iParam7;
	Global_112922.f_14141[Global_22352 /*104*/].f_26 = uParam8;
	Global_112922.f_14141[Global_22352 /*104*/].f_29 = uParam9;
	Global_112922.f_14141[Global_22352 /*104*/].f_30 = uParam12;
	Global_112922.f_14141[Global_22352 /*104*/].f_31 = uParam11;
	Global_112922.f_14141[Global_22352 /*104*/].f_28 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_33), sParam4, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_50), sParam5, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_7824, 10))
	{
		Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 1;
		Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 1;
		Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 1;
		Global_8530 = 4;
		func_45(0);
		func_45(2);
		func_45(1);
	}
	else
	{
		func_50();
		switch (iParam16)
		{
			case 3:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[Global_19954] = 1;
				break;
			
			case 0:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19954)
			{
				case 0:
					func_45(0);
					Global_8530 = 0;
					break;
				
				case 1:
					func_45(1);
					Global_8530 = 1;
					break;
				
				case 2:
					func_45(2);
					Global_8530 = 2;
					break;
				
				case 3:
					func_45(3);
					Global_8530 = 3;
					break;
				
				default:
					Global_8530 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_7824, 10))
		{
			Global_112922.f_14051[0 /*20*/].f_17 = 1;
			Global_112922.f_14051[1 /*20*/].f_17 = 1;
			Global_112922.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112922.f_14051[Global_19954 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112922.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112922.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112922.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22354[Global_22352] = 0;
	if (bParam10)
	{
		func_50();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_44())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19943, true);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_43(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_40(1);
			func_43(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973361 != -1 && iParam0 == Global_1973361)
	{
		bVar1 = true;
	}
	func_35(iParam0, sParam1, bVar1, func_39(PLAYER::PLAYER_ID()));
	return 1;
}

void func_35(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_36())
	{
		return;
	}
	STATS::_PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973361 = -1;
	}
}

int func_36()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_37(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_37(int iParam0)
{
	return func_38(iParam0, 20);
}

bool func_38(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_39(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_205.f_6;
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_242(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725228)
							{
								if (iVar1 == 14)
								{
									func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112922.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112922.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112922.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77858)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43791;
											break;
										
										case 1:
											iVar6 = Global_43792;
											break;
										
										case 2:
											iVar6 = Global_43793;
											break;
										
										default:
											break;
									}
									func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7830);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_7825, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889925.f_1;
								func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_41(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_41(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_42(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_42(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_42(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_42(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_42(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_43(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_44()
{
	return Global_1575054;
}

void func_45(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112922.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_112922.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77858)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22352 = 34;
	Global_112922.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_48(Global_112922.f_14141[iVar2 /*104*/].f_18, Global_112922.f_14141[Global_22352 /*104*/].f_18))
		{
			Global_22352 = iVar2;
		}
		iVar2++;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_24 = 1;
}

int func_48(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77858)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22352 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22352 = 34;
	Global_112922.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 0 || Global_112922.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_48(Global_112922.f_14141[iVar2 /*104*/].f_18, Global_112922.f_14141[Global_22352 /*104*/].f_18))
			{
				Global_22352 = iVar2;
			}
		}
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22352 == 34)
	{
		return 0;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 0;
	return 1;
}

void func_50()
{
	if (func_242(14))
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
		Global_19954 = func_51();
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

var func_51()
{
	func_52();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_52()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_55(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_54(PLAYER::PLAYER_PED_ID());
			if (func_53(iVar0) && (!func_242(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_53(Global_112922.f_2363.f_539.f_4321))
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

bool func_53(int iParam0)
{
	return iParam0 < 3;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_55(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_55(int iParam0)
{
	if (func_53(iParam0))
	{
		return func_56(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_56(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_57()
{
	if ((!func_86() && func_71()) && func_69(PLAYER::PLAYER_ID()))
	{
		if (func_66())
		{
			func_58("GB_INFO_MC_L", 0);
		}
		else
		{
			func_58("GB_INFO_LFG", 0);
		}
	}
}

int func_58(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_59(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_65() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_62(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_60(iParam2);
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

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941037 - 1))
	{
		if (iParam0 > Global_1941037.f_5[iVar0 /*53*/].f_1)
		{
			func_61(iVar0);
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

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941037.f_5[iVar0 /*53*/] = { Global_1941037.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_63(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_64();
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

int func_64()
{
	return Global_1574915;
}

bool func_65()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_66()
{
	return func_67(PLAYER::PLAYER_ID());
}

bool func_67(int iParam0)
{
	return func_68(iParam0, 1);
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 != func_11())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_11())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!func_10(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_62(iParam0, 0))
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_139, 2) || BitTest(Global_1853131[iParam0 /*888*/].f_139, 5))
	{
		return 0;
	}
	if (func_70(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_38(iParam0, 9);
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_72(iVar1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	
	if (func_10(iParam0, 0, 1))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			iVar0 = 0;
			if (func_85(1))
			{
				if (func_84(iParam0, 9))
				{
					iVar0 = 1;
				}
			}
			else if (func_38(iParam0, 15))
			{
				iVar0 = 1;
			}
			if (iVar0 && func_73(iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!func_10(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_62(iParam0, 0))
	{
		return 0;
	}
	if (func_82(iParam0))
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_139, 2) || BitTest(Global_1853131[iParam0 /*888*/].f_139, 5))
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_79(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_37(iParam0))
		{
			return 0;
		}
		if (func_77(iParam0, 1))
		{
			return 0;
		}
	}
	else if (func_169(iParam0, 1))
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	if (func_70(iParam0))
	{
		return 0;
	}
	if (func_163(iParam0))
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	if (func_62(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return BitTest(Global_2621446, 3);
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_77(int iParam0, bool bParam1)
{
	return func_78(iParam0, bParam1, 1);
}

int func_78(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_68(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_11() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_80(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[iParam0 /*599*/].f_10 != func_11())
		{
			return iParam1 == Global_1893551[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_11())
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

bool func_81(int iParam0)
{
	return func_38(iParam0, 30);
}

int func_82(int iParam0)
{
	if (!func_38(iParam0, 2))
	{
		return 1;
	}
	if (func_38(iParam0, 1))
	{
		return 1;
	}
	if (func_83(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_23;
}

bool func_84(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_5, iParam1);
}

bool func_85(bool bParam0)
{
	return func_77(PLAYER::PLAYER_ID(), bParam0);
}

int func_86()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_11[iVar0] == func_11())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_87(func_88(iVar0)) };
			if (MISC::ARE_STRINGS_EQUAL(&Var17, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_87(int iParam0)
{
	return Global_2715551.f_3076.f_18[iParam0 /*16*/];
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return 0;
}

void func_89(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_90(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_62(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 26);
}

void func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810701.f_5194.f_7[iVar0]), iVar1);
}

void func_93()
{
	struct<8> Var0;
	int iVar16;
	
	Var0 = { func_107(61, 63, -1) };
	iVar16 = 0;
	if (func_85(1))
	{
		Var0 = { func_107(47, 48, -1) };
		iVar16 = 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		StringCopy(&Var0, func_105(PLAYER::PLAYER_ID(), 0), 64);
	}
	func_99(&Var0, iVar16, 0);
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
}

void func_94(int iParam0)
{
	MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

void func_95(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_96()
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (func_97())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_98())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_97()
{
	return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}

bool func_98()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

void func_99(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_85(1) || iParam1 == 1)
		{
			func_102(47, 48, sParam0, -1, 1);
			if (func_66() && iParam1 == 1)
			{
				func_101(sParam0, bParam2);
			}
		}
		else
		{
			func_102(61, 63, sParam0, -1, 1);
			if (func_216() && iParam1 == 0)
			{
				func_100(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_105), sParam0, 64);
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
}

void func_100(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_102(45, 46, sParam0, -1, 1);
			Var0 = { func_107(61, 63, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_102(61, 63, sParam0, -1, 1);
			}
		}
	}
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_338), sParam0, 64);
	}
}

void func_101(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_102(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_354), sParam0, 64);
	}
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
}

void func_102(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_104())
	{
		iVar0 = Global_2862274[iParam0 /*3*/][func_103(iParam3)];
		iVar1 = Global_2862274[iParam1 /*3*/][func_103(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, HUD::_GET_TEXT_SUBSTRING_SAFE(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, HUD::_GET_TEXT_SUBSTRING_SAFE(sParam2, 10, iVar18, 31), 32);
				}
			}
			STATS::STAT_SET_STRING(iVar0, &cVar2, bParam4);
			STATS::STAT_SET_STRING(iVar1, &cVar10, bParam4);
		}
	}
}

int func_103(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_64();
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

int func_104()
{
	return 1;
	return 0;
}

char* func_105(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_77(iParam0, 1))
		{
			return func_106();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_106()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

struct<16> func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = Global_2862274[iParam0 /*3*/][func_103(iParam2)];
	iVar1 = Global_2862274[iParam1 /*3*/][func_103(iParam2)];
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_109(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_109(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

void func_110(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_111(int iParam0)
{
	return Global_2703660.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_112(bool bParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	char* sVar10;
	struct<16> Var11;
	bool bVar27;
	int iVar28;
	
	if (!func_160())
	{
		return;
	}
	iVar7 = 1;
	if (func_91(PLAYER::PLAYER_ID()))
	{
		iVar7 = 2;
	}
	if (iParam2 == 1)
	{
		iVar7 = 3;
	}
	if (Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			STATS::_PLAYSTATS_BECOME_BOSS(iVar7);
			func_157(0);
			func_155(0);
			func_95(21);
			func_95(22);
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_466 = iVar7;
		}
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10 = PLAYER::PLAYER_ID();
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 = iParam2;
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_465 = iParam2;
		STATS::_0x6BC0ACD0673ACEBE(func_64(), &uVar8, &uVar9);
		func_154(uVar8, uVar9);
		sVar10 = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_153(Var11);
		func_152();
		if (func_151(10875, -1, 0) <= 0)
		{
			iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			iVar6 = (func_151(10875, -1, 0) - 43200);
		}
		func_148(iVar6);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
		}
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 = -1;
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_25 = -1;
		Global_2810701.f_5194.f_223 = -1;
		func_142();
		func_134(12, 0, 1);
		if (bParam0)
		{
			func_92(0);
		}
		if (Global_2810701.f_5194.f_259 != func_11())
		{
			Global_2810701.f_5194.f_259 = func_11();
		}
		if (BitTest(Global_2810701.f_1801, 15))
		{
			MISC::CLEAR_BIT(&(Global_2810701.f_1801), 15);
		}
		if (func_133(15))
		{
			func_132(15);
		}
		if (!func_131() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_130();
			func_129(2);
		}
		func_128(10915, 2, -1, 1, 0);
		func_95(31);
		func_93();
		func_127();
		func_126();
		func_125();
		if (iParam2 != 1)
		{
			if (!func_124(82, 3))
			{
				bVar27 = false;
				iVar28 = func_151(10872, -1, 0);
				if (!BitTest(iVar28, 11))
				{
					MISC::SET_BIT(&iVar28, 11);
					func_128(10872, iVar28, -1, 1, 0);
					bVar27 = true;
				}
				func_118(82, 3, bVar27);
			}
		}
		if (iParam2 == 1)
		{
			STATS::_PLAYSTATS_CHANGE_MC_ROLE(func_116(func_117()), func_115(func_117()), func_114(), func_113(), Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_429, 4, Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_467);
		}
	}
}

int func_113()
{
	if (Global_1944626.f_3 != 0)
	{
		return Global_1944626.f_3;
	}
	return -1;
}

int func_114()
{
	if (Global_1944626.f_2 != 0)
	{
		return Global_1944626.f_2;
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_8[1];
}

int func_116(int iParam0)
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_8[0];
}

int func_117()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		func_50();
		if (iParam1 == 4)
		{
			func_123(iParam0, 0, 1);
			func_123(iParam0, 1, 1);
			func_123(iParam0, 2, 1);
			func_122(iParam0, 0, 1);
			func_122(iParam0, 1, 1);
			func_122(iParam0, 2, 1);
		}
		else
		{
			if (func_121(iParam0, iParam1) == 1 && func_120(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_123(iParam0, iVar0, 1);
			func_122(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2810701.f_6725)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2810701.f_6724)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2810701.f_6724)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77858)
			{
				if (iParam1 != 4)
				{
					if (Global_19954 != iParam1)
					{
						Global_8483[iParam1 /*4*/] = { func_33(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_33(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_119();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_33(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_119();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_33(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
				func_119();
			}
		}
	}
}

void func_119()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1918[Global_8510 /*29*/].f_7)), 64);
	if (Global_8529 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8434[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8434[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7824, false);
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_121(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_122(int iParam0, int iParam1, int iParam2)
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

void func_123(int iParam0, int iParam1, int iParam2)
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

int func_124(int iParam0, int iParam1)
{
	if (func_121(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_125()
{
	if (!Global_2810701.f_5194.f_338)
	{
		Global_2810701.f_5194.f_338 = 1;
	}
}

void func_126()
{
	struct<16> Var0;
	
	Var0 = { func_107(49, 50, -1) };
	func_101(&Var0, 0);
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
}

void func_127()
{
	struct<16> Var0;
	
	Var0 = { func_107(45, 46, -1) };
	func_100(&Var0, 0);
	if ((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_96())
	{
		func_95(28);
	}
	else
	{
		func_94(28);
	}
}

void func_128(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_103(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_129(int iParam0)
{
	MISC::SET_BIT(&(Global_2653164.f_2), iParam0);
	if (Global_2653164)
	{
		return;
	}
	Global_2653164 = 1;
	Global_2653164.f_1 = 0;
}

void func_130()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2653090.f_28[iVar0 /*2*/] != -1 && Global_2653090.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_2653090.f_28[iVar0 /*2*/].f_1))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_2653090.f_28[iVar0 /*2*/].f_1, true);
			}
		}
		iVar0++;
	}
}

bool func_131()
{
	return Global_2714635.f_740;
}

void func_132(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2810701.f_5194.f_7[iVar0]), bVar1);
}

bool func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2810701.f_5194.f_7[iVar0], iVar1);
}

void func_134(int iParam0, int iParam1, bool bParam2)
{
	if (func_141())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_21(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_21(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_140(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_140(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_139()) && !func_135(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_135(int iParam0)
{
	if (func_136(iParam0, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_137(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_137(int iParam0)
{
	return func_138(iParam0);
}

var func_138(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_139()
{
	return Global_2714635.f_841;
}

void func_140(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_141())
		{
			if (func_10(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_10(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_141()
{
	return Global_1574582;
}

void func_142()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			func_144(1, bVar1);
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				func_143(bVar1);
			}
		}
		iVar0++;
	}
}

void func_143(bool bParam0)
{
	int iVar0;
	
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_101, bParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
		PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), bParam0, 1);
		PLAYER::_0x55FCC0C390620314(bParam0, PLAYER::PLAYER_ID(), 1);
		func_144(1, bParam0);
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_101), bParam0);
	}
}

void func_144(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_10(bParam1, 0, 1))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(bParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					VEHICLE::_0x7D6F9A3EF26136A0(iVar0, bParam0, true);
					if (func_79(bParam1, func_117(), 1))
					{
						if (func_117() == bParam1)
						{
							if (Global_2810701.f_5194.f_260[3] != iVar0)
							{
								Global_2810701.f_5194.f_260[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_145(func_117(), bParam1);
							if (iVar2 != -1)
							{
								if (Global_2810701.f_5194.f_260[iVar2] != iVar0)
								{
									Global_2810701.f_5194.f_260[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_79(bParam1, func_117(), 1))
				{
					if (func_117() == bParam1)
					{
						iVar0 = Global_2810701.f_5194.f_260[3];
						if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							VEHICLE::_0x7D6F9A3EF26136A0(iVar0, true, true);
							Global_2810701.f_5194.f_260[3] = 0;
						}
					}
					else
					{
						iVar3 = func_145(func_117(), bParam1);
						if (iVar3 != -1)
						{
							iVar0 = Global_2810701.f_5194.f_260[iVar3];
							if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								VEHICLE::_0x7D6F9A3EF26136A0(iVar0, true, true);
								Global_2810701.f_5194.f_260[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_223(iParam0))
	{
		if (func_79(iParam1, iParam0, 0) || func_147(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_146(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_146(int iParam0, int iParam1)
{
	if (func_223(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1893551[iParam0 /*599*/].f_10.f_11[iParam1];
		}
	}
	return func_11();
}

int func_147(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (Global_1893551[iParam0 /*599*/].f_10.f_26 != func_11())
		{
			return iParam1 == Global_1893551[iParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

void func_148(int iParam0)
{
	if (!func_160())
	{
		return;
	}
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_1 = iParam0;
	if (func_151(10875, -1, 0) != func_149(PLAYER::PLAYER_ID()))
	{
		func_128(10875, func_149(PLAYER::PLAYER_ID()), -1, 1, 0);
	}
}

int func_149(int iParam0)
{
	if (func_150(iParam0) == -1)
	{
		return -1;
	}
	return (func_150(iParam0) + 43200);
}

int func_150(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_1;
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_103(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_152()
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::_0x265559DA40B3F327(1);
		if (func_85(1))
		{
			HUD::_OVERRIDE_MULTIPLAYER_CHAT_PREFIX(joaat("PI_BIK_0_T"));
		}
		else
		{
			HUD::_OVERRIDE_MULTIPLAYER_CHAT_PREFIX(-1755491431);
		}
	}
}

void func_153(char[64] cParam0)
{
	Global_2715551.f_3076.f_2 = { cParam0 };
}

void func_154(var uParam0, var uParam1)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_8[0] = uParam0;
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_8[1] = uParam1;
}

void func_155(bool bParam0)
{
	func_156(204, bParam0, -1, 1);
}

void func_156(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_104())
	{
		iVar0 = Global_2860791[iParam0 /*3*/][func_103(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

void func_157(bool bParam0)
{
	if (bParam0)
	{
		if (func_159(4))
		{
			func_94(21);
			func_94(22);
		}
		func_94(31);
		func_158(bParam0);
	}
	else
	{
		if (func_38(PLAYER::PLAYER_ID(), 21))
		{
			func_95(21);
			if (!func_159(3) && func_159(4))
			{
				func_94(22);
			}
		}
		func_95(31);
		func_158(bParam0);
	}
}

void func_158(bool bParam0)
{
	func_156(424, bParam0, -1, 1);
}

bool func_159(int iParam0)
{
	return BitTest(Global_2810701.f_5194.f_47, iParam0);
}

int func_160()
{
	if (func_162() && func_161(0))
	{
		return 1;
	}
	return 0;
}

var func_161(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_162()
{
	return func_161(func_64() + 1);
}

bool func_163(int iParam0)
{
	return func_164(iParam0) > 0;
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_10(iParam0, 0, 1))
	{
		if (Global_1893551[iParam0 /*599*/].f_10.f_181 != -1)
		{
			iVar0 = Global_1893551[iParam0 /*599*/].f_10.f_181;
		}
		else
		{
			iVar0 = func_166(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_165()) - NETWORK::GET_CLOUD_TIME_AS_INT());
		return iVar1;
	}
	return -1;
}

int func_165()
{
	return Global_262145.f_15218;
}

int func_166(int iParam0)
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

int func_167()
{
	return Global_262145.f_12631;
}

int func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_223(bVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_169(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_223(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_11();
}

void func_170()
{
	char* sVar0;
	struct<3> Var16;
	bool bVar19;
	
	Global_1946794 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_118, 0.0328f, -0.8f, 0.3f) };
		bVar19 = false;
		func_234(&uLocal_114);
		if (func_7(0, &sVar0))
		{
			while (!bVar19)
			{
				func_228(0);
				if (!func_239(&uLocal_114))
				{
					func_238(&uLocal_114, 0, 0);
				}
				else if (func_235(&uLocal_114, 4000, 0))
				{
					bVar19 = true;
				}
				if (!func_174(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var16, 0.05f, 0) && !func_210(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_118), 5f))
				{
					if (!func_172(PLAYER::PLAYER_PED_ID(), 2106541073))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var16, 1f, 5000, ENTITY::GET_ENTITY_HEADING(iLocal_118), 0.25f);
					}
				}
				else
				{
					bVar19 = true;
				}
				GRAPHICS::DRAW_DEBUG_SPHERE(Var16, 0.1f, 255, 0, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(Var16, ENTITY::GET_ENTITY_COORDS(iLocal_118, true), 0, 255, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var16, 0, 0, 255, 255);
				SYSTEM::WAIT(0);
			}
			func_234(&uLocal_114);
			iLocal_119 = 0;
		}
	}
	while (iLocal_119 != 3)
	{
		func_171(iLocal_118);
		func_228(0);
		SYSTEM::WAIT(0);
	}
}

void func_171(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if ((!func_237(PLAYER::PLAYER_ID()) && !func_236(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	func_7(0, &sVar0);
	func_7(1, &sVar16);
	func_7(2, &sVar32);
	STREAMING::REQUEST_ANIM_DICT(&sVar32);
	STREAMING::REQUEST_ANIM_DICT(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_119)
	{
		case 0:
			iLocal_111 = 0;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
						iLocal_120 = -1;
					}
					iLocal_120 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_124, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar0, "enter", 4f, -2f, 5, 0, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
					STREAMING::REMOVE_ANIM_DICT(&sVar0);
					iLocal_119 = 1;
				}
			}
			break;
		
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&sVar16);
			iVar50 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_120);
			if (!iLocal_111)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar50) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					iLocal_111 = 1;
				}
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar16) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar50) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar50) >= 0.96f))
			{
				iVar51 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar49);
				if ((((MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_a") && iVar51 == 0) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_b") && iVar51 == 1)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_c") && iVar51 == 2)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					iLocal_120 = -1;
				}
				iLocal_120 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_124, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				switch (iVar51)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, "idle_a", 4f, -2f, 5, 0, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
						StringCopy(&cLocal_127, "idle_a", 16);
						iLocal_119 = 3;
						break;
					
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, "idle_b", 4f, -2f, 5, 0, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
						StringCopy(&cLocal_127, "idle_b", 16);
						iLocal_119 = 3;
						break;
					
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, "idle_c", 4f, -2f, 5, 0, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
						StringCopy(&cLocal_127, "idle_c", 16);
						iLocal_119 = 3;
						break;
					
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, "idle_d", 4f, -2f, 5, 0, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
						StringCopy(&cLocal_127, "idle_d", 16);
						iLocal_119 = 3;
						break;
					
					default:
						StringCopy(&cLocal_127, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_111 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_a", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_b", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_c", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar16, "idle_d", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			}
			iVar50 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_120);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar50))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					iLocal_120 = -1;
				}
				iLocal_120 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_124, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				iVar50 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_120);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar50))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar50, 0f);
				}
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, sVar48, 4f, -2f, 5, 0, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
				iLocal_119 = 3;
				return;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar16) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar50) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar50) >= 0.99f))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					iLocal_120 = -1;
				}
				iLocal_120 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_124, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, false, true, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, &sVar16, sVar48, 4f, -2f, 5, 0, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_120);
				iLocal_119 = 3;
				return;
			}
			break;
	}
}

int func_172(int iParam0, int iParam1)
{
	if (func_173(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	if (func_2(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

var func_175()
{
	return BitTest(Global_1946941.f_505, 30);
}

int func_176()
{
	if (func_236(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_1946941.f_505, 0) || BitTest(Global_1946941.f_505, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_177()
{
	if (func_237(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_1946941.f_505, 0) || BitTest(Global_1946941.f_505, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_178()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (func_223(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if (func_168() < func_167())
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_180(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_222(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43334[iVar0 /*32*/] == 1 && Global_43334[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43334[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43334[iVar0 /*32*/].f_5 = 1;
			Global_43334[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43334[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43334[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43334[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_181(bool bParam0)
{
	if (((func_175() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1946795)
	{
		func_200(&iLocal_107, 2, "ARENAWHINPUT", 0, 0, 0, 0);
	}
}

bool func_182()
{
	return Global_1946941.f_518;
}

void func_183(bool bParam0)
{
	if ((((func_205(PLAYER::PLAYER_ID()) && func_192(PLAYER::PLAYER_ID()) == func_191(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1946795)
	{
		if (func_189())
		{
			func_188("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_168() >= func_167())
			{
				func_200(&iLocal_107, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_163(PLAYER::PLAYER_ID()))
			{
				func_200(&iLocal_107, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_188("WHSECUROBLCK");
			}
			else
			{
				func_200(&iLocal_107, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_67(PLAYER::PLAYER_ID()))
		{
			func_188("WHBIKERBLCK");
		}
		else if ((func_239(&uLocal_112) && func_235(&uLocal_112, 10000, 1)) || !iLocal_109)
		{
			if (func_184(PLAYER::PLAYER_ID()) || Global_1946795 == 1)
			{
				iLocal_109 = 1;
				if (!Global_1946795)
				{
					func_188("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_201())
				{
					HUD::CLEAR_HELP(true);
				}
				iLocal_109 = 0;
				func_234(&uLocal_112);
				func_200(&iLocal_107, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_109)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_188("WHSECUROBLCK");
			}
			if (!func_184(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				iLocal_109 = 0;
			}
		}
	}
}

bool func_184(int iParam0)
{
	return func_185(func_186(iParam0));
}

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	if (func_187(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_187(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_188(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_189()
{
	if (func_190())
	{
		return 1;
	}
	return Global_2714635.f_744;
}

bool func_190()
{
	return Global_1575013 == 10;
}

int func_191(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_138;
}

int func_192(int iParam0)
{
	if (func_205(iParam0))
	{
		return func_193(Global_2689224[iParam0 /*451*/].f_317.f_6);
	}
	return 0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
			break;
		
		case 61:
			return 2;
			break;
		
		case 62:
			return 3;
			break;
		
		case 63:
			return 4;
			break;
		
		case 64:
			return 5;
			break;
		
		case 65:
			return 6;
			break;
		
		case 66:
			return 7;
			break;
		
		case 67:
			return 8;
			break;
		
		case 68:
			return 9;
			break;
		
		case 69:
			return 10;
			break;
	}
	return 0;
}

void func_194(bool bParam0)
{
	if (((((func_204(PLAYER::PLAYER_ID()) || func_176()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1946795) && func_210(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_118), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_188("WHSECUROBLCK");
		}
		else if (func_189())
		{
			if (func_204(PLAYER::PLAYER_ID()))
			{
				func_188("BIKERWHBLCKC");
			}
			else
			{
				func_188("BIKERWHBLCKD");
			}
		}
		else if (func_67(PLAYER::PLAYER_ID()))
		{
			if ((func_239(&uLocal_112) && func_235(&uLocal_112, 10000, 1)) || !iLocal_109)
			{
				if (func_195(PLAYER::PLAYER_ID()) || Global_1946795 == 1)
				{
					iLocal_109 = 1;
					if (!Global_1946795)
					{
						func_188("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_201())
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_109 = 0;
					func_234(&uLocal_112);
					func_200(&iLocal_107, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_109)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_188("WHSECUROBLCK");
				}
				if (!func_195(PLAYER::PLAYER_ID()))
				{
					iLocal_109 = 0;
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (!bParam0 && func_168() < func_167())
		{
			func_200(&iLocal_107, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_188("BIKERWHBLCKB");
		}
	}
}

bool func_195(int iParam0)
{
	return func_196(func_186(iParam0));
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_197()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		if (func_236(PLAYER::PLAYER_ID()) || func_198(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (func_206(Global_1853131[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

void func_199(bool bParam0)
{
	if (((func_177() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1946795)
	{
		if (func_189())
		{
			func_188("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_168() >= func_167())
			{
				func_200(&iLocal_107, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_163(PLAYER::PLAYER_ID()))
			{
				func_200(&iLocal_107, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_188("WHSECUROBLCK");
			}
			else
			{
				func_200(&iLocal_107, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_67(PLAYER::PLAYER_ID()))
		{
			func_188("WHBIKERBLCK");
		}
		else if ((func_239(&uLocal_112) && func_235(&uLocal_112, 10000, 1)) || !iLocal_109)
		{
			if (func_240(PLAYER::PLAYER_ID()) || Global_1946795 == 1)
			{
				iLocal_109 = 1;
				if (!Global_1946795)
				{
					func_188("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_201())
				{
					HUD::CLEAR_HELP(true);
				}
				iLocal_109 = 0;
				func_234(&uLocal_112);
				func_200(&iLocal_107, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_109)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_188("WHSECUROBLCK");
			}
			if (!func_240(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				iLocal_109 = 0;
			}
		}
	}
}

void func_200(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_203(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43334[iVar0 /*32*/])
		{
			Global_43334[iVar0 /*32*/] = 1;
			Global_43334[iVar0 /*32*/].f_1 = Global_43535;
			Global_43535++;
			Global_43334[iVar0 /*32*/].f_4 = 0;
			Global_43334[iVar0 /*32*/].f_29 = 0;
			Global_43334[iVar0 /*32*/].f_5 = 0;
			Global_43334[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43334[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43334[iVar0 /*32*/].f_6 = iParam3;
			Global_43334[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43334[iVar0 /*32*/].f_7 = 0;
			Global_43334[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43334[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43334[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43334[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43334[iVar0 /*32*/].f_12 = 0;
				Global_43334[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43334[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_201()
{
	if ((((((((((func_202("MP_OFF_LAP_1") || func_202("WHPRIVSESLAP")) || func_202("WHSECUROBLCK")) || func_202("SECINPUTTREGLAP")) || func_202("BIKERWHINPUT")) || func_202("BIKERWHBLCKA")) || func_202("BIKERWHBLCKB")) || func_202("WHBIKERBLCK")) || func_202("BIKERWHBLCKC")) || func_202("BIKERWHBLCKD")) || func_202("ARENAWHINPUT"))
	{
		return 1;
	}
	return 0;
}

bool func_202(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_203(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_180(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43334[iVar0 /*32*/])
		{
			Global_43334[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_204(int iParam0)
{
	if (func_206(Global_1853131[iParam0 /*888*/].f_267.f_30, -1) && !BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 1))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_9(Global_2689224[iParam0 /*451*/].f_317.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_206(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

bool func_208()
{
	return Global_76665;
}

int func_209()
{
	if (((func_2(PLAYER::PLAYER_PED_ID()) && func_169(PLAYER::PLAYER_ID(), 1)) && func_187(PLAYER::PLAYER_ID(), 0)) && func_70(PLAYER::PLAYER_ID()))
	{
		if (func_186(PLAYER::PLAYER_ID()) == 256)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0))
			{
				return 1;
			}
		}
		if (func_186(PLAYER::PLAYER_ID()) == 271)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.88f, -528.8513f, 75.0839f, -1472.63f, -526.5934f, 73.3136f, false, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.467f, -3167.947f, -37.5246f, 1006.903f, -3171.152f, -39.6192f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (func_213(PLAYER::PLAYER_ID()) == 150 && func_212(PLAYER::PLAYER_PED_ID(), 3084.511f, -4686.664f, 26.2522f, 50f))
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/];
	}
	return -1;
}

int func_214(int iParam0)
{
	if (func_186(iParam0) == 243)
	{
		return func_215(iParam0);
	}
	return -1;
}

int func_215(int iParam0)
{
	if (func_187(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_216()
{
	return func_223(PLAYER::PLAYER_ID());
}

bool func_217()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148;
}

var func_218()
{
	return Global_75028;
}

var func_219()
{
	return Global_1932667;
}

int func_220()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_221()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_11())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_224()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118) && func_8(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118) && func_205(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	if (func_206(Global_1853131[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_118) == joaat("ex_prop_monitor_01_ex") || func_237(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_228(int iParam0)
{
	if (func_233())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_222(0))
		{
			func_229(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_229(int iParam0)
{
	if (func_233())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_232())
		{
			func_231(1, 1);
		}
		else
		{
			func_231(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_230())
	{
		Global_19954.f_1 = 3;
	}
}

int func_230()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_231(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_222(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_232()
{
	return BitTest(Global_1958928, 5);
}

bool func_233()
{
	return BitTest(Global_1958928, 19);
}

void func_234(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_235(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_238(uParam0, bParam2, 0);
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

int func_236(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_9(Global_2689224[iParam0 /*451*/].f_317.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_9(Global_2689224[iParam0 /*451*/].f_317.f_6) == 0;
			}
		}
	}
	return 0;
}

void func_238(var uParam0, bool bParam1, bool bParam2)
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

bool func_239(var uParam0)
{
	return uParam0->f_1;
}

bool func_240(int iParam0)
{
	return func_241(func_186(iParam0));
}

int func_241(int iParam0)
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

bool func_242(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_243()
{
	if (iLocal_107 != -1)
	{
		func_203(&iLocal_107);
	}
	if (func_201())
	{
		HUD::CLEAR_HELP(true);
	}
	Global_1946795 = 0;
	Global_1946794 = 0;
}

