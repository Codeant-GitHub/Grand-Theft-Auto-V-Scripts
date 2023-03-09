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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	float fLocal_96 = 0f;
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
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	struct<4> Local_115 = { 2, 0, 0, 3 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 2;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 2;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<8> Local_139[32];
	struct<184> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<21> Local_154 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	iLocal_112 = -1;
	iLocal_113 = -1;
	vLocal_114 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_149 = -1;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_179(ScriptParam_154);
	}
	else
	{
		func_176();
	}
	while (true)
	{
		func_175();
		func_167();
		if (func_156() || unk_0x69E8EDFEA57E361D())
		{
			func_176();
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			if ((func_150() && !Global_262145.f_21341) && !unk_0x289064CB38B560AA())
			{
				func_145();
			}
			if (func_39())
			{
				func_176();
			}
			if (func_36(unk_0x95B959F18401C09A()))
			{
				if (!unk_0x0E4018692D92041D(Local_140.f_182, 3))
				{
					unk_0x8950ED5730F62EE8(&(Local_140.f_182), 3);
				}
			}
			if (((((((((!Global_1573970 && !func_35(2)) && !func_32(unk_0x95B959F18401C09A(), 0)) && !unk_0x71EC91BA8C88BCE0()) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && !func_30(unk_0x95B959F18401C09A())) && !func_28(func_29(unk_0x95B959F18401C09A()))) && !func_26(unk_0x95B959F18401C09A(), 146)) && !func_22(unk_0x95B959F18401C09A())) && !func_21(unk_0x95B959F18401C09A()))
			{
				if (func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 1000, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 1000))
				{
					if (!unk_0x0E4018692D92041D(Global_2528542.f_4546, 0))
					{
						if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (!func_150())
							{
								func_18();
								if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
								{
									if (func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 0, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 0))
									{
										if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 4)
										{
											unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(4) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
										}
										else
										{
											unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
										}
									}
									else if (!func_17(&(Local_140.f_3)))
									{
										func_14(&(Local_140.f_3));
									}
									else if (func_11(&(Local_140.f_3)) > 20f || Local_140.f_177)
									{
										if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 4)
										{
											unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(4) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
										}
										else
										{
											unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
										}
									}
								}
								else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 4)
								{
									unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(4) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
								}
								else
								{
									unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
								}
							}
							else
							{
								if (Global_2528542.f_6256)
								{
									bLocal_142 = false;
									Global_2528542.f_6256 = 0;
								}
								if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0 && !iLocal_146)
								{
									iLocal_146 = 1;
								}
								if (Global_262145.f_21330 && !func_9(unk_0x95B959F18401C09A()))
								{
									if ((!bLocal_142 && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) != 0) && iLocal_146)
									{
										unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
										unk_0xD875615F72CD34A6(0);
										iLocal_145 = 1;
									}
									if (func_2() && !bLocal_142)
									{
										bLocal_142 = true;
										unk_0xD875615F72CD34A6(5);
									}
								}
								if (func_2() && !bLocal_142)
								{
									bLocal_142 = true;
								}
								if (bLocal_142)
								{
									if (bLocal_143)
									{
										if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 2)
										{
											unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(2) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
										}
										else
										{
											unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
										}
									}
									else if (bLocal_144)
									{
										if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 3)
										{
											unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(3) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
										}
										else
										{
											unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
										}
									}
									else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < Global_262145.f_21267)
									{
										unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(Global_262145.f_21267) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
									}
									else
									{
										unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_140.f_3)))
							{
								func_1(&(Local_140.f_3));
							}
							if (Local_140.f_177)
							{
								Local_140.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_140.f_177)
						{
							Local_140.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_140.f_177)
					{
						Local_140.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_176();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 1000, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 1000)) && !func_8()) && !func_21(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_21261)
		{
			return 0;
		}
		if (((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0x95B959F18401C09A()))
		{
			bLocal_143 = false;
			bLocal_144 = false;
			return 1;
		}
		if (Global_262145.f_21268)
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if (unk_0xFB89D9B67066DB2C(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_143 = true;
							bLocal_144 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xFB89D9B67066DB2C(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
			{
				if ((!func_5(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1) && !func_4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))) && !func_3(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					bLocal_143 = true;
					bLocal_144 = false;
					return 1;
				}
			}
		}
		if (Global_2528542.f_6254 || Global_2528542.f_6255)
		{
			if (Global_2528542.f_6255)
			{
				bLocal_143 = false;
				bLocal_144 = true;
			}
			else
			{
				bLocal_143 = true;
				bLocal_144 = false;
			}
			Global_2528542.f_6254 = 0;
			Global_2528542.f_6255 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0x854E8B95CE1C5D29("MPBitset", 3) && unk_0xA0EDFFB6CF5B314A(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xE48FAA8A938257C9(iParam0, "MPBitset");
			if (unk_0x0E4018692D92041D(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((unk_0x854E8B95CE1C5D29("CreatedByPegasus", 2) && unk_0xA0EDFFB6CF5B314A(iParam0, "CreatedByPegasus")) && unk_0x821D9C8EA372B2F8(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && (!bParam1 || unk_0x91D5C8283D19AF49(iParam0, 0)))
		{
			if (unk_0xA0EDFFB6CF5B314A(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x65F35477FEAD6F0F(unk_0x378BD4B3881338C2(iParam0));
	iVar1 = unk_0x30B9FCF52BAAEB11(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0xDE9B75BB528AC06E(iVar0) && unk_0xDE9B75BB528AC06E(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0xD4B4F68F3449CBEC(unk_0x378BD4B3881338C2(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0xD4B4F68F3449CBEC(unk_0x378BD4B3881338C2(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

void func_18()
{
	if (iLocal_145)
	{
		unk_0xD875615F72CD34A6(5);
	}
	Global_2528542.f_6254 = 0;
	Global_2528542.f_6255 = 0;
	iLocal_145 = 0;
	bLocal_142 = false;
	bLocal_143 = false;
	iLocal_146 = 0;
}

int func_19(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_21(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
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

bool func_22(int iParam0)
{
	return func_23(func_24(iParam0));
}

int func_23(int iParam0)
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

int func_24(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_27(iParam0);
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_27(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_30(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_33(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_34()
{
	return Global_1312745;
}

bool func_35(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1573969, iParam0);
}

int func_36(int iParam0)
{
	if (iParam0 != func_38() && func_37(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	return -1;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x06C1EBC003C18F1F())
	{
		if (func_122())
		{
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_40()
{
	int iVar0;
	
	switch (Local_140.f_6)
	{
		case 0:
			func_121();
			if (((((((func_118(unk_0x95B959F18401C09A(), 1) && func_117()) || func_24(unk_0x95B959F18401C09A()) == 159) || func_24(unk_0x95B959F18401C09A()) == 225) || func_24(unk_0x95B959F18401C09A()) == 233) || func_29(unk_0x95B959F18401C09A()) == 236) || Global_1574400) || (unk_0x289064CB38B560AA() && func_8()))
			{
				unk_0x8C4EA5F6857553AE(joaat("rhino"), 1);
			}
			func_115(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/]), 1);
			Local_140.f_176 = 1;
			Local_140.f_6 = 1;
			break;
		
		case 1:
			if (func_114())
			{
				func_115(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/]), 2);
				Local_140.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_113(Local_115.f_20, 1))
			{
				Local_140.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_118(unk_0x95B959F18401C09A(), 1) && !func_117()) && !func_150())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_107(iVar0);
					iVar0++;
				}
			}
			if (unk_0xB331FCEB94EB05C8())
			{
				if ((((func_105() && !func_118(unk_0x95B959F18401C09A(), 1)) && !func_117()) && !unk_0x289064CB38B560AA()) && func_103(unk_0x95B959F18401C09A()) != 6)
				{
					func_48();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_41(iVar0);
				iVar0++;
			}
			if ((((func_24(unk_0x95B959F18401C09A()) == 225 || func_24(unk_0x95B959F18401C09A()) == 233) || func_29(unk_0x95B959F18401C09A()) == 236) || Global_1574400) || (unk_0x289064CB38B560AA() && func_8()))
			{
				unk_0x8C4EA5F6857553AE(joaat("rhino"), 1);
			}
			if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_140.f_6 = 4;
			}
			break;
		
		case 4:
			if (((((((func_118(unk_0x95B959F18401C09A(), 1) && func_117()) || func_24(unk_0x95B959F18401C09A()) == 159) || func_24(unk_0x95B959F18401C09A()) == 225) || func_24(unk_0x95B959F18401C09A()) == 233) || func_29(unk_0x95B959F18401C09A()) == 236) || Global_1574400) || (unk_0x289064CB38B560AA() && func_8()))
			{
				unk_0x8C4EA5F6857553AE(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/]))
	{
		if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xE38E3CF1625A4145(Local_140.f_172[iParam0]))
			{
				unk_0x1ABDB383C83A336A(&(Local_140.f_172[iParam0]));
			}
		}
		else if (!unk_0xE38E3CF1625A4145(Local_140.f_172[iParam0]) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) >= 2)
		{
			Local_140.f_172[iParam0] = unk_0x8848A15CBDADDC60(unk_0xF2D53AA87148ACED(Local_115.f_3[iParam0 /*5*/]));
			unk_0xB9E84A421C105943(Local_140.f_172[iParam0], 1);
		}
	}
	else if (unk_0xE38E3CF1625A4145(Local_140.f_172[iParam0]))
	{
		unk_0x1ABDB383C83A336A(&(Local_140.f_172[iParam0]));
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0], 16))
			{
				Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0] = 0;
				func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) >= 4)
						{
							if (func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 500, 0))
							{
								func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0], 2))
			{
				if (func_45(iParam0))
				{
					iVar2 = unk_0x378BD4B3881338C2(Local_115.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]);
					if (!unk_0xD62C4419A41F106A(iVar2, 0))
					{
						if (unk_0xA5C8D37514ACC1FA(iVar2))
						{
							iVar3 = unk_0xF2C96862595654B4(iVar2, 0);
							if ((!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iVar1, 0)) && !unk_0xD62C4419A41F106A(iVar3, 0))
							{
								unk_0x4EA529533F2C0E2A(iVar0, iVar1, iVar3, iVar2, unk_0xFBB1F99A825CAB09(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0xE9FB70AC1925C2B4(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x8A5F86362E03852B(iVar0, false);
							}
						}
					}
				}
				if (func_44(iParam0))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x378BD4B3881338C2(Local_115.f_3[iParam0 /*5*/].f_4);
					if (!unk_0xD62C4419A41F106A(iVar2, 0))
					{
						if (unk_0xA5C8D37514ACC1FA(iVar2))
						{
							unk_0x80007E8C84E0DF9E(iVar0, iVar2, unk_0xFBB1F99A825CAB09(iVar2, 1));
						}
					}
				}
				if (func_43(iParam0, 6))
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0], 8))
			{
				if (func_45(iParam0))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]);
					if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iVar1, 0))
					{
						unk_0x4EA529533F2C0E2A(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_43(iParam0, 9))
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x22C3124A898FB82A(Local_115.f_3[iParam0 /*5*/]) || unk_0x22C3124A898FB82A(Local_115.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_115.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x36D8569A54BAC634(unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_115.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/].f_1) && unk_0x6F3D61B58C7B4025(Local_115.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0xF2D53AA87148ACED(Local_115.f_3[iParam0 /*5*/].f_1);
						unk_0xFD5D4D96D91EEAAD(&uVar4);
					}
					if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/]) && unk_0x6F3D61B58C7B4025(Local_115.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0xF2D53AA87148ACED(Local_115.f_3[iParam0 /*5*/]);
						unk_0xFD5D4D96D91EEAAD(&uVar5);
					}
				}
			}
			else if (func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0], 16))
			{
				func_42(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x82C50DFCB0299F4C(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x0A81FE3D92AE2AC9(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x0A81FE3D92AE2AC9(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_102();
	func_97();
	vVar2 = { vLocal_114 };
	if (((func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 1000, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 1000)) || func_95(unk_0x33CD235DF1E6A94E())) && func_94(unk_0x33CD235DF1E6A94E()))
	{
		bVar0 = true;
	}
	else
	{
		Local_140.f_178 = 0;
	}
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_140.f_179 = 0;
	}
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_140.f_181 = 1;
	}
	else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_140.f_181 = 2;
	}
	if (func_92(bVar0, bVar1))
	{
		func_90();
		if (!func_89())
		{
			Global_1573347 = 1;
			func_88(&(Local_140.f_7), 2);
			func_87(&(Local_140.f_7), 2);
			func_86(&(Local_140.f_7), 2, 0, "AIRMECH", 0, 1);
			func_85(&(Local_140.f_7), 2, vVar2);
			Global_15155.f_162 = { vVar2 };
			Var3 = { func_84() };
			if (!unk_0x786AF4A44E1B5B4B(&Var3))
			{
				if (func_67(&(Local_140.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_49(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_89())
	{
		if (!unk_0x0E4018692D92041D(Local_140.f_182, 2))
		{
			Global_1573347 = 0;
			func_88(&(Local_140.f_7), 2);
			func_87(&(Local_140.f_7), 2);
			unk_0x8950ED5730F62EE8(&(Local_140.f_182), 2);
		}
	}
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_64(16000, -1, -1))
		{
			func_63(16000, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_64(16001, -1, -1))
		{
			func_63(16001, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		Local_140.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_64(15999, -1, -1))
		{
			func_63(15999, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_140.f_181 == 1)
		{
			if (!func_64(16002, -1, -1))
			{
				func_63(16002, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_140.f_181 == 2)
		{
			if (func_51(18097, -1, -1) == 0)
			{
				func_50(18097, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_140.f_179 = 1;
		Local_140.f_181 = 0;
	}
	if (unk_0x0E4018692D92041D(Local_140.f_182, 2))
	{
		unk_0xCE689A8E8C42ED78(&(Local_140.f_182), 2);
	}
}

var func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6668A708A3DA7FB4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	iVar1 = func_53(iParam0, iParam1);
	uVar2 = func_52(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

void func_54(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

void func_55(char* sParam0)
{
	if (unk_0xFAC8F20FBC764F4D())
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (!func_56(sParam0))
	{
		func_54(sParam0, -1);
	}
}

bool func_56(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_57()
{
	if (func_60(unk_0x95B959F18401C09A()) && !func_58(unk_0x95B959F18401C09A(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_38();
}

int func_59(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_38())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (func_62(iParam0))
	{
		iVar0 = func_61(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_68(sParam2, iParam3, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					unk_0xD92171BC6C48DB90(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_82();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_80();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam2)
			{
				func_73();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_72())
				{
					return 0;
				}
				if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
					if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
				}
			}
			if (func_71())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x0E4018692D92041D(Global_2423, 9))
				{
					return 0;
				}
			}
			func_70();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_69();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_82();
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD92171BC6C48DB90(false);
	Global_15866 = 1;
}

void func_70()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2424, 16);
}

int func_71()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52370FB78E42E275() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_73()
{
	if (func_79(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_74();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_74()
{
	func_75();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_75()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_78(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_77(unk_0x33CD235DF1E6A94E());
			if (func_76(iVar0) && (!func_79(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_76(Global_106565.f_2357.f_539.f_4321))
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

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_79(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

void func_82()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if ((unk_0xA30F14B621E3269D() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

struct<6> func_84()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_64(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_64(16002, -1, -1) || func_51(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 1000, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 1000)) || func_95(unk_0x33CD235DF1E6A94E())) && func_94(unk_0x33CD235DF1E6A94E()))
	{
		if (!func_64(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_64(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_85(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_86(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x990A34F9DA8E506D(iParam2, 0);
			}
			else
			{
				unk_0x990A34F9DA8E506D(iParam2, 1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC36B7971576CC42F(iParam2, 0);
			}
			else
			{
				unk_0xC36B7971576CC42F(iParam2, 1);
			}
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_88(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_89()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	Global_14732 = 0;
	func_91();
}

void func_91()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

int func_92(bool bParam0, bool bParam1)
{
	if (func_21(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_140.f_178)
		{
			if (unk_0x0E4018692D92041D(Local_140.f_182, 1))
			{
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					if (!func_64(16000, -1, -1) || !func_64(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_140.f_179)
		{
			if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || func_93())
				{
					if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_64(15999, -1, -1) || !func_64(16002, -1, -1))
						{
							if (unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()) >= -25f && unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_64(15999, -1, -1) || func_51(18097, -1, -1) == 0)
						{
							if (unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()) >= 160f && unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0xFB89D9B67066DB2C(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_94(int iParam0)
{
	if (unk_0xA5C8D37514ACC1FA(iParam0) || unk_0xBEAC9DF5323BB074(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && func_96(iParam0))
	{
		if ((unk_0xD4B4F68F3449CBEC(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_97()
{
	if (Local_140.f_180)
	{
		if (!func_101(&(Local_140.f_183)))
		{
			func_100(&(Local_140.f_183), 0, 0);
		}
		else if (!func_99(&(Local_140.f_183), 17000, 0))
		{
			if (!func_56("AB_ENTRY_HT"))
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (func_99(&(Local_140.f_183), 17000, 0))
		{
			if (func_56("AB_ENTRY_HT"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			func_98(&(Local_140.f_183));
			Local_140.f_180 = 0;
		}
	}
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_99(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_100(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

bool func_101(var uParam0)
{
	return uParam0->f_1;
}

void func_102()
{
	if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
	{
		if ((func_20(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 3, 1000, 0) || func_19(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 1000)) || func_95(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0x0E4018692D92041D(Local_140.f_182, 0))
			{
				if ((((func_94(unk_0x33CD235DF1E6A94E()) && unk_0x7DD221C91135596A(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0) && func_93()) && !Global_1681564)
				{
					if (!unk_0x0E4018692D92041D(Local_140.f_182, 1) && !unk_0x0E4018692D92041D(Local_140.f_182, 3))
					{
						unk_0x8950ED5730F62EE8(&(Local_140.f_182), 1);
					}
				}
				unk_0x8950ED5730F62EE8(&(Local_140.f_182), 0);
			}
		}
		else
		{
			if (unk_0x0E4018692D92041D(Local_140.f_182, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Local_140.f_182), 0);
			}
			if (unk_0x0E4018692D92041D(Local_140.f_182, 1))
			{
				unk_0xCE689A8E8C42ED78(&(Local_140.f_182), 1);
			}
			if (unk_0x0E4018692D92041D(Local_140.f_182, 3))
			{
				unk_0xCE689A8E8C42ED78(&(Local_140.f_182), 3);
			}
			if (Global_1681564)
			{
				Global_1681564 = 0;
			}
		}
	}
}

int func_103(int iParam0)
{
	if (func_24(iParam0) == 233)
	{
		return func_104(iParam0);
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (func_37(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x95B959F18401C09A())
			{
				if (func_106(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A()), unk_0x378BD4B3881338C2(iVar1)))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar1), 0);
					if (unk_0x7BDC41A7CA0C77A2(iVar2, -1, 0) == unk_0x378BD4B3881338C2(iVar1))
					{
						if (func_60(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0xF0D230FB550CD6EB(iParam0, 0) || !unk_0xF0D230FB550CD6EB(iParam1, 0))
	{
		return 0;
	}
	return unk_0xF2C96862595654B4(iParam0, 0) == unk_0xF2C96862595654B4(iParam1, 0);
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115[iParam0]))
	{
		return;
	}
	iVar0 = unk_0xBB28786B7F552D0B(Local_115[iParam0]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return;
	}
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 64))
			{
				Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0] = 0;
				func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 900f)
					{
						func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 2) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 900f) && !func_21(unk_0x95B959F18401C09A()))
			{
				func_86(&(Local_140.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_112(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					unk_0x4DDF5809B68AA635(iVar0, func_110(iParam0), -1, 0);
				}
				if (func_109(iParam0, 1630799643))
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 8) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 900f) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 1)
			{
				if (!func_17(&Local_140))
				{
					func_14(&Local_140);
				}
				if (func_11(&Local_140) >= 7f && !func_21(unk_0x95B959F18401C09A()))
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 8);
					func_112(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_140))
			{
				func_1(&Local_140);
			}
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 900f)
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, unk_0xC223020D5BE76715(4));
					}
					else
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, unk_0xC223020D5BE76715(Global_262145.f_21267));
					}
				}
			}
			if (func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iVar0, 1)) > 900f)
					{
						func_42(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 900f)
				{
					func_46(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(4) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
					}
					else
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 36, (unk_0xC223020D5BE76715(Global_262145.f_21267) - unk_0xC223020D5BE76715(unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()))));
					}
				}
			}
			if (func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iVar0, 1)) > 900f)
					{
						func_42(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_109(iParam0, 1630799643))
			{
				if (func_111(iParam0))
				{
					unk_0x4DDF5809B68AA635(iVar0, func_110(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_47(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					unk_0xED68CDDDE25A144E(iVar0);
				}
				if (!func_109(iParam0, 1435919172))
				{
					func_42(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 4);
					func_42(&(Local_139[unk_0x72B85B341ADBE9DE() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xBB28786B7F552D0B(Local_115[iParam0]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
	{
		return 1;
	}
	if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iVar0))
	{
		return 1;
	}
	if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iVar0))
	{
		return 1;
	}
	if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0xBB28786B7F552D0B(Local_115[iParam0]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xD76D6BCC14B95CE1(iVar0, iParam1) != 1 && unk_0xD76D6BCC14B95CE1(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar2 = unk_0x378BD4B3881338C2(unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0)));
			if (!unk_0xD62C4419A41F106A(iVar2, 0))
			{
				fVar4 = vdist2(unk_0xFBB1F99A825CAB09(iVar2, 1), unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_115[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xBB28786B7F552D0B(Local_115[iParam0]);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x0A81FE3D92AE2AC9(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_112(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 1;
	return func_68(sParam2, iParam3, 0);
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114()
{
	if (!unk_0x5D98D654CDC2165A(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_115(var uParam0, int iParam1)
{
	func_116(uParam0, iParam1);
}

void func_116(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_117()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0);
}

bool func_120(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_121()
{
	unk_0xB815670C37E03CDE(joaat("s_m_y_marine_01"));
	unk_0xB815670C37E03CDE(joaat("lazer"));
	unk_0xB815670C37E03CDE(joaat("s_m_y_pilot_01"));
}

int func_122()
{
	int iVar0;
	
	switch (Local_115.f_19)
	{
		case 0:
			if (func_144())
			{
				Local_115.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_143())
			{
				Local_115.f_19 = 2;
			}
			break;
		
		case 2:
			if ((((((func_118(unk_0x95B959F18401C09A(), 1) || func_117()) || func_24(unk_0x95B959F18401C09A()) == 225) || func_24(unk_0x95B959F18401C09A()) == 233) || func_29(unk_0x95B959F18401C09A()) == 236) || Global_1574400) || (unk_0x289064CB38B560AA() && func_8()))
			{
				func_115(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			else if (func_141())
			{
				func_115(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_118(unk_0x95B959F18401C09A(), 1) && !func_117())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_138(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_125(iVar0);
					iVar0++;
				}
			}
			if ((((func_24(unk_0x95B959F18401C09A()) == 225 || func_24(unk_0x95B959F18401C09A()) == 233) || func_29(unk_0x95B959F18401C09A()) == 236) || Global_1574400) || (unk_0x289064CB38B560AA() && func_8()))
			{
				func_124();
			}
			if (func_123())
			{
				Local_115.f_19 = 4;
			}
			break;
		
		case 4:
			func_124();
			return 1;
			break;
	}
	return 0;
}

int func_123()
{
	if (unk_0x396A8511217F9C1A() > 1)
	{
		return 0;
	}
	if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x4F94F07DAD382CDA(Local_115[iVar0]))
		{
			iVar1 = unk_0xBB28786B7F552D0B(Local_115[iVar0]);
			if (!unk_0xD62C4419A41F106A(iVar1, 0))
			{
				unk_0x1F45B4626AC4A4C0(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xBB28786B7F552D0B(Local_115.f_3[iVar0 /*5*/].f_1);
			if (!unk_0xD62C4419A41F106A(iVar1, 0))
			{
				unk_0x1F45B4626AC4A4C0(&iVar1);
			}
		}
		if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0xFC00F22E930BFD55(Local_115.f_3[iVar0 /*5*/]);
			if (!unk_0xD62C4419A41F106A(iVar2, 0))
			{
				unk_0x65F544B458249682(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0xD62C4419A41F106A(unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0xBB28786B7F552D0B(Local_115.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					unk_0x1F45B4626AC4A4C0(&iVar0);
					if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam0 /*5*/]))
					{
						if (!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0xFC00F22E930BFD55(Local_115.f_3[iParam0 /*5*/]);
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_137(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
				Local_115.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_134(iParam0) };
			if (!func_133(vVar3))
			{
				if (!unk_0x36D8569A54BAC634(vVar3, 20f) && !unk_0x73E7A21FD53144AB(vVar3, 20f))
				{
					if (func_128(vVar3, unk_0xC472E34C8FBEC678(unk_0x378BD4B3881338C2(Local_115.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_115.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_137(iParam0, 2))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0x378BD4B3881338C2(Local_115.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x765F6FEEFF39224F(iVar4))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xD62C4419A41F106A(iVar4, 0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xA5C8D37514ACC1FA(iVar4) || unk_0xBEAC9DF5323BB074(iVar4))
			{
				if (func_127(unk_0xF2C96862595654B4(iVar4, 0)))
				{
					Local_115.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_137(iParam0, 8))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 6;
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_126(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_135(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (!unk_0x17260B4EA0652E1C(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_128(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x06C1EBC003C18F1F())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!func_130(&(Local_115.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0x6B091F0028E6FE5F(unk_0xFC00F22E930BFD55(Local_115.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!unk_0x4F94F07DAD382CDA(Local_115.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_129(&(Local_115.f_3[iParam2 /*5*/].f_1), Local_115.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0xE9FB70AC1925C2B4(unk_0xBB28786B7F552D0B(Local_115.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x8A5F86362E03852B(unk_0xBB28786B7F552D0B(Local_115.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_129(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	if (!unk_0x22C3124A898FB82A(uParam1))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x50403C3BFA227FE5(unk_0xE196503B36B6194B(unk_0xFC00F22E930BFD55(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xBB28786B7F552D0B(*uParam0), iParam7);
		if (unk_0x0371ECBEC27AF4BE(unk_0xBB28786B7F552D0B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_130(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xE96A50F1DE6657CB(iParam1))
	{
		return 0;
	}
	if (!unk_0x9907FB1F75C1A914(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7350047030F7672(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x765F6FEEFF39224F(iVar1))
	{
		*uParam0 = unk_0x0C9AA119B878DDB0(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (unk_0x22C3124A898FB82A(*uParam0))
		{
			if (bParam13)
			{
				unk_0xA6C43DE7267202AC(iVar1, 1);
			}
			unk_0xFE8201EFB515D77B(iVar1, iParam8);
			if (unk_0x0371ECBEC27AF4BE(iVar1))
			{
				if (bParam6)
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 1);
				}
				else
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x5A48E05E63034C1F(*uParam0, unk_0x95B959F18401C09A(), 1);
				}
			}
			unk_0x2D5A67427544788C(iVar1, bParam7);
			unk_0x720715BA9E55E55A(iVar1, 1);
			if (bParam10)
			{
				unk_0xCBE9DB870BCC6085(iVar1);
				unk_0xF49FF7B4A27C1B94(iVar1, 5, 5, 1f);
			}
			func_131(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_131(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_132(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam3;
	}
}

int func_132(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x7EECA16E87982278((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x378BD4B3881338C2(Local_115.f_3[iParam0 /*5*/].f_4);
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(iVar0, 1), unk_0xC472E34C8FBEC678(iVar0), 0f, -250f, (40f * to_float(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar1 = unk_0x378BD4B3881338C2(unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0)));
			if (!func_136(unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0))))
			{
				if (unk_0xA5C8D37514ACC1FA(iVar1) || unk_0xBEAC9DF5323BB074(iVar1))
				{
					if (unk_0x002F527E1A3238DC(unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0))) >= 4)
					{
						vVar2 = { unk_0xFBB1F99A825CAB09(iVar1, 0) };
						if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_115.f_3[iParam0 /*5*/].f_4 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x378BD4B3881338C2(iParam0);
	if (!unk_0x765F6FEEFF39224F(iVar0))
	{
		return 1;
	}
	if (unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0x378BD4B3881338C2(Local_115.f_3[iVar1 /*5*/].f_4);
		if (unk_0x765F6FEEFF39224F(iVar2))
		{
			if (iParam0 == Local_115.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_138(int iParam0)
{
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (func_140(iParam0, 64))
			{
				Local_115.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_139(iParam0, 2))
			{
				Local_115.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_140(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_139(iParam0, 8))
			{
				Local_115.f_21[iParam0] = 5;
			}
			if (!func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			if (func_139(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_139(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			if (!func_139(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_139(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_141()
{
	int iVar0;
	
	if (!unk_0x06C1EBC003C18F1F())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_142(&(Local_115[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4F94F07DAD382CDA(Local_115[0]))
	{
		unk_0x697EBA5CF1A6AB57(unk_0xBB28786B7F552D0B(Local_115[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_142(&(Local_115[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4F94F07DAD382CDA(Local_115[1]))
	{
		unk_0x697EBA5CF1A6AB57(unk_0xBB28786B7F552D0B(Local_115[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_142(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	iVar0 = unk_0x9BA5CF280376EEA4(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x50403C3BFA227FE5(iVar0);
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(iVar0, iParam7);
		if (unk_0x0371ECBEC27AF4BE(iVar0))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			if (!func_113(Local_139[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			if (!func_113(Local_139[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_145()
{
	if (func_101(&uLocal_152) && func_99(&uLocal_152, Global_262145.f_21342, 0))
	{
		func_98(&uLocal_152);
	}
	if (func_101(&uLocal_150) && func_99(&uLocal_150, Global_262145.f_21343, 0))
	{
		func_98(&uLocal_150);
		iLocal_147 = 0;
	}
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) <= 0)
	{
		if (func_146())
		{
			if (!Global_2528542.f_6262)
			{
				Global_2528542.f_6262 = 1;
				func_54("BASE_EXP_WARN", -1);
			}
			if (!iLocal_147)
			{
				iLocal_147 = 1;
				func_100(&uLocal_152, 0, 0);
				func_100(&uLocal_150, 0, 0);
			}
			else if (!func_101(&uLocal_152))
			{
				unk_0xD875615F72CD34A6(5);
				bLocal_142 = true;
				bLocal_143 = true;
				iLocal_147 = 0;
				func_98(&uLocal_152);
				func_98(&uLocal_150);
			}
		}
	}
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_149(&iLocal_148, iVar1);
		iLocal_149 = func_148();
		if (iLocal_149 >= 0)
		{
			iVar0 = func_147(iLocal_149);
			if (unk_0x765F6FEEFF39224F(iVar0) && unk_0x068481DAF84B9654(iVar0))
			{
				if (unk_0x22B02EC53152632C(iVar0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_147(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0x99304A001736BD91(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_148()
{
	if (unk_0xCF50815BECDF585D(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0xCF50815BECDF585D(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_149(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_60(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_155(1))
	{
		iVar0 = func_154();
		if (iVar0 != func_38())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_37(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x95B959F18401C09A())
			{
				if (func_155(1))
				{
					if (func_152(unk_0x95B959F18401C09A(), iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_151(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A()), unk_0x378BD4B3881338C2(iVar2)))
				{
					iVar3 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar2), 0);
					if (unk_0x7BDC41A7CA0C77A2(iVar3, -1, 0) == unk_0x378BD4B3881338C2(iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x765F6FEEFF39224F(iParam1))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0xF0D230FB550CD6EB(iParam0, 0) && unk_0xF0D230FB550CD6EB(iParam1, 0))
			{
				iVar0 = unk_0xF2C96862595654B4(iParam0, 0);
				iVar1 = unk_0xF2C96862595654B4(iParam1, 0);
				if (unk_0x765F6FEEFF39224F(iVar0) && unk_0x765F6FEEFF39224F(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_153(iParam0);
	if (!iVar0 == func_38())
	{
		if (iVar0 == func_153(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_38();
}

var func_154()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_155(bool bParam0)
{
	return func_58(unk_0x95B959F18401C09A(), bParam0);
}

int func_156()
{
	var uVar0;
	
	func_164(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_163())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (func_161(157))
	{
		if (!func_160())
		{
			return 1;
		}
	}
	if (func_161(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_157() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_157()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	switch (func_159())
	{
		case 0:
			return func_158();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_158()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_159()
{
	return Global_25765;
}

bool func_160()
{
	return Global_2448756.f_586;
}

int func_161(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_2458613;
}

bool func_163()
{
	return Global_2448756.f_581;
}

void func_164(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_165(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_165(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_166(iVar2, &bVar3))
						{
							unk_0xD4A76B5E6C175542(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_166(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_167()
{
	if (unk_0x276149CFFB30EADE(false, 0) != 5)
	{
		if (func_174(5, 0, 1))
		{
			if (unk_0x5AC0475D36815E75(0) <= 5)
			{
				unk_0x4F8CF72358604361(5);
			}
		}
	}
	if (unk_0x04C948F9025CE510(false, 0) != 3)
	{
		if (func_168(3, 0, 1))
		{
			if (unk_0xB04099E66CDC7052(0) <= 3)
			{
				unk_0x9D34F024713B3952(3);
			}
		}
	}
}

bool func_168(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(1, iParam0, 1, bParam1, bParam2);
}

int func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_173(iParam0) - func_172(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_171(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_172(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_170(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return unk_0x276149CFFB30EADE(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return unk_0x04C948F9025CE510(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return unk_0x88CD84C553EF6ED9(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

bool func_174(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(0, iParam0, 1, bParam1, bParam2);
}

void func_175()
{
	wait(0);
}

void func_176()
{
	int iVar0;
	
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			if (func_123())
			{
				func_124();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE38E3CF1625A4145(Local_140.f_172[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(Local_140.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_145)
	{
		unk_0xD875615F72CD34A6(5);
		iLocal_145 = 0;
	}
	Global_1681564 = 0;
	func_178();
	func_177();
}

void func_177()
{
	unk_0x5894DC159447E10A();
}

void func_178()
{
	if (!Local_140.f_176)
	{
		return;
	}
	if (unk_0x5D98D654CDC2165A(joaat("s_m_y_marine_01")))
	{
		unk_0x71CA80D41E1338B4(joaat("s_m_y_marine_01"));
	}
	if (unk_0x5D98D654CDC2165A(joaat("lazer")))
	{
		unk_0x71CA80D41E1338B4(joaat("lazer"));
	}
	if (unk_0x5D98D654CDC2165A(joaat("s_m_y_pilot_01")))
	{
		unk_0x71CA80D41E1338B4(joaat("s_m_y_pilot_01"));
	}
}

void func_179(struct<21> Param0)
{
	func_183(func_184(Param0), Param0);
	func_181(0, -1, 0);
	unk_0x4F8CF72358604361(5);
	unk_0x9D34F024713B3952(3);
	unk_0x7643BB59992A9E6E(&Local_115, 27);
	unk_0x568D314D73140729(&Local_139, 257);
	unk_0x9980AE643A60F372(0);
	if (!func_180())
	{
		func_176();
	}
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_176();
	}
	Global_2528542.f_6256 = 0;
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_163())
		{
			return 0;
		}
		if (func_161(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_181(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_182())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_163())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_161(155))
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_177();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1312844;
}

void func_183(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_177();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_184(int iParam0)
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
		
		case 79:
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
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
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
		
		case 125:
			return 32;
		
		case 126:
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
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}

