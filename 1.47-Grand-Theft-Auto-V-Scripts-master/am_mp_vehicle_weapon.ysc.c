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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
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
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 32;
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
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<150> Local_149 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	struct<21> Local_162 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_201(ScriptParam_162);
	}
	else
	{
		func_192(0);
	}
	while (true)
	{
		func_191();
		if (func_180())
		{
			func_192(0);
		}
		if (func_177())
		{
			func_192(0);
		}
		func_2();
		if (unk_0x06C1EBC003C18F1F())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_174();
	if (func_173(0))
	{
		func_161();
	}
	else if (func_173(1))
	{
		if (func_160())
		{
			func_137();
		}
		else
		{
			func_129();
		}
	}
	else if (func_173(2))
	{
		if (func_112())
		{
			func_111(3);
		}
		func_102();
		if (func_98())
		{
			return;
		}
		func_89();
		func_88();
		func_59();
		func_48();
		func_46();
		func_3();
	}
	else if (func_173(3))
	{
		func_192(1);
	}
}

void func_3()
{
	func_45();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_5(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_6()
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(Local_149.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (unk_0x5D79F3D06EB318A0(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (unk_0x5D79F3D06EB318A0(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x8950ED5730F62EE8(&(Local_149.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x5D79F3D06EB318A0(0))
	{
		if (!unk_0x0E4018692D92041D(Local_149.f_5, 6))
		{
			unk_0x8950ED5730F62EE8(&(Local_149.f_5), 6);
			unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 4);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_149.f_5, 6))
	{
		unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 6);
		unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(unk_0x95B959F18401C09A(), 0))
		{
			return;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x86CF3D110E5DD82F() == 0 || unk_0xE3F7CBC28F745843())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (unk_0xEABBA3F8727C0FE7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0x4464D5595CEED843(2, Global_17411.f_5026[iVar1], true), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0xF745CA12DC8836EB(2, Global_17411.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x8DAB5B12D7B9AD29((1f - (Global_17411.f_5081 / 100f)));
			unk_0x818901B332D5541D();
			if (unk_0x4CE1DD5CFC1F941E())
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar1 /*4*/])) != unk_0x36163153849DFDA1("PREV"))
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					func_9(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar2 /*4*/])) == unk_0x36163153849DFDA1("PREV"))
					{
						func_9(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_8(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xDC97362660946DF9(iVar3, 70);
						}
						else
						{
							unk_0xE800DC85FDF60F85(iVar3);
						}
						unk_0x36F3AA9FFAAF8606();
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (Global_17411.f_5026[iVar1] != 359 && unk_0x0E4018692D92041D(Global_17411.f_5052, iVar1))
						{
							unk_0x295B86DE57A0721D(true);
							unk_0x4D9DA18AB3C2A466(Global_17411.f_5026[iVar1]);
						}
						else
						{
							unk_0x295B86DE57A0721D(false);
							unk_0x4D9DA18AB3C2A466(359);
						}
					}
					unk_0x818901B332D5541D();
				}
				iVar1++;
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_16)) != unk_0x36163153849DFDA1(""))
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(Global_17411.f_4769);
				func_9(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_8(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iVar4, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iVar4);
					}
					unk_0x36F3AA9FFAAF8606();
				}
				unk_0x818901B332D5541D();
			}
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(80);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				unk_0x4D9DA18AB3C2A466(1);
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(0);
			}
			unk_0x818901B332D5541D();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iParam2, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iParam2);
					}
					unk_0x36F3AA9FFAAF8606();
					unk_0x818901B332D5541D();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4D9DA18AB3C2A466(iVar1);
				unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
				if (bParam5)
				{
					unk_0xDC97362660946DF9(iParam2, 70);
				}
				else
				{
					unk_0xE800DC85FDF60F85(iParam2);
				}
				unk_0x36F3AA9FFAAF8606();
				unk_0x818901B332D5541D();
			}
		}
		unk_0x1382AC429D0EA2BB(76, 66);
		unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				unk_0x7049F65F85106838(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			unk_0x019859CB72B1DB4C(15);
			Global_17411.f_8353 = 0;
		}
		unk_0x94A8B1D385430451();
		if (Global_17411.f_5055)
		{
			unk_0x1382AC429D0EA2BB(82, 66);
			unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
			unk_0x5A2C46836B4DF5B3(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94A8B1D385430451();
		}
		else
		{
			unk_0xFF524AE40FB6301A(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_9(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x4951EE4BB7B6B4F7(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_14()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x73DA1542B2F0C458() || (func_17(8, -1) && func_16() != 64)) || (unk_0x1B9A01A53920FD50() != 0 && !bParam1)) || (unk_0x71EC91BA8C88BCE0() && !bParam0)) || unk_0xBAA5E93732372E34()) || Global_71850) || Global_17411.f_8352) || unk_0x15C85368E432C647()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1312802;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0xB331FCEB94EB05C8() && unk_0xE36862B47CD70685())
		{
			iParam2 = unk_0x3031F3812E92B62B();
		}
	}
	StringCopy(&cVar0, unk_0xD178EF744F20B712(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x36163153849DFDA1(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17411.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17411.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17411.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x4464D5595CEED843(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_20(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF745CA12DC8836EB(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(false);
		unk_0x818901B332D5541D();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_18(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		unk_0x2EE8D1440C9060EF(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!unk_0x65F173513F5EF79C(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0A06DEFFF267C21E("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!unk_0xD83C9F072D059CC4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0A06DEFFF267C21E("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!unk_0xD83C9F072D059CC4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				*uParam0 = unk_0x199B24FF79A52CCF(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x11AE7F6A404414C9(*uParam0))
					{
						uParam0->f_8 = unk_0xE3903F59E2F22150();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_24()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	
	if (func_160())
	{
		if (!unk_0x11AE7F6A404414C9(Local_149.f_62))
		{
			Local_149.f_62 = unk_0x199B24FF79A52CCF(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_149.f_8 > -1 || unk_0x0E4018692D92041D(Local_149.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (unk_0x117DAF3BF7232886(Local_149.f_61))
		{
			vVar0 = { unk_0xF165F9F874811603(Local_149.f_61, 2) };
			func_32(round(-vVar0.z));
		}
		func_31(Local_149.f_33);
	}
	else if (unk_0x117DAF3BF7232886(Local_149.f_61))
	{
		vVar1 = { unk_0xF165F9F874811603(Local_149.f_61, 2) };
		fVar2 = vVar1.z;
		if (unk_0x765F6FEEFF39224F(func_30()))
		{
			if (!unk_0xD62C4419A41F106A(func_30(), 0))
			{
				vVar8 = { unk_0xFBB1F99A825CAB09(func_30(), 1) };
				fVar4 = unk_0xC472E34C8FBEC678(func_30());
			}
		}
		while (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		while (fVar2 > 360f)
		{
			fVar2 = (fVar2 - 360f);
		}
		while (fVar4 < 0f)
		{
			fVar4 = (fVar4 + 360f);
		}
		while (fVar4 > 360f)
		{
			fVar4 = (fVar4 - 360f);
		}
		fVar7 = fVar2;
		func_25(&fVar9);
		fVar5 = (fVar4 - fVar9);
		fVar6 = (fVar4 + fVar9);
		if (fVar7 < fVar5 && (fVar7 + 360f) <= fVar6)
		{
			fVar7 = (fVar7 + 360f);
		}
		if (fVar7 > fVar6 && (fVar7 - 360f) >= fVar5)
		{
			fVar7 = (fVar7 - 360f);
		}
		fVar3 = ((fVar7 - fVar5) / (fVar6 - fVar5));
		if (fVar3 == 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 == -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 < 0f && fVar3 >= -0.5f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 < 0f && fVar3 > -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 > 1.5f && fVar3 < 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 > 2f || fVar3 < -1f)
		{
			fVar3 = 0.5f;
		}
		unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_ALT_FOV_HEADING");
		unk_0x8DAB5B12D7B9AD29(vVar8.z);
		unk_0x8DAB5B12D7B9AD29(fVar3);
		unk_0x8DAB5B12D7B9AD29(fVar2);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_CAM_LOGO");
		unk_0x4D9DA18AB3C2A466(0);
		unk_0x818901B332D5541D();
	}
	unk_0x5C58D0ADA22491FA(1);
	unk_0xFF524AE40FB6301A(Local_149.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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
		case 79:
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
	}
	return -1;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (unk_0x765F6FEEFF39224F(Global_1365159))
		{
			return Global_1365159;
		}
		if (Global_1589668 != -1)
		{
			if (unk_0x765F6FEEFF39224F(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_MISSILE_PERCENTAGE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_32(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_HEADING");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_33()
{
	if (Local_149.f_59 <= 60f && Local_149.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_149.f_59 <= 55f && Local_149.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_149.f_59 <= 50f && Local_149.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_149.f_59 <= 45f && Local_149.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_149.f_59 <= 40f && Local_149.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_ZOOM");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_35(int iParam0)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_RETICLE_STATE");
	unk_0x4D9DA18AB3C2A466(iParam0);
	unk_0x818901B332D5541D();
}

void func_36(bool bParam0)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, "SET_RETICLE_ON_TARGET");
	unk_0x295B86DE57A0721D(bParam0);
	unk_0x818901B332D5541D();
}

void func_37(char* sParam0, bool bParam1)
{
	unk_0xBB698266C5FDF0A7(Local_149.f_62, sParam0);
	unk_0x295B86DE57A0721D(bParam1);
	unk_0x818901B332D5541D();
}

char* func_38()
{
	if (func_160())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_43(0))
		{
			func_40(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_40(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (Global_14725)
	{
		func_42(0, 0);
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
	if (!func_41())
	{
		Global_14553.f_1 = 3;
	}
}

int func_41()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

bool func_44()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_45()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

void func_46()
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	if (!func_160())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((unk_0x117DAF3BF7232886(Local_149.f_61) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61)) && func_47(Local_149.f_84[iVar1])) && func_47(func_30()))
		{
			vVar6 = { unk_0xB29314FDACFD865E(Local_149.f_61) };
			vVar7 = { unk_0xFBB1F99A825CAB09(Local_149.f_84[iVar1], 1) };
			switch (Local_149.f_10[iVar1])
			{
				case 0:
					Local_149.f_98[iVar1] = unk_0x36FB861F8CCF0EA4(vVar6, vVar7, 511, 0, 7);
					if (Local_149.f_98[iVar1] != 0)
					{
						Local_149.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar5 = unk_0x819B6E76423AE494(Local_149.f_98[iVar1], &iVar0, &vVar3, &uVar2, &iVar4);
					if (iVar5 == 2)
					{
						if (iVar0 == 0)
						{
							Local_149.f_17[iVar1] = 1;
							vVar3 = { 0f, 0f, 0f };
							if (unk_0x0E4018692D92041D(Local_149.f_7, iVar1))
							{
								unk_0xCE689A8E8C42ED78(&(Local_149.f_7), iVar1);
							}
						}
						else
						{
							Local_149.f_17[iVar1] = 2;
							if (unk_0x0E4018692D92041D(Local_149.f_7, iVar1))
							{
								unk_0xCE689A8E8C42ED78(&(Local_149.f_7), iVar1);
							}
							if (unk_0x765F6FEEFF39224F(iVar4))
							{
								if (Local_149.f_84[iVar1] == iVar4)
								{
									if (!unk_0x0E4018692D92041D(Local_149.f_7, iVar1))
									{
										unk_0x8950ED5730F62EE8(&(Local_149.f_7), iVar1);
									}
								}
							}
							Local_149.f_98[iVar1] = 0;
							Local_149.f_10[iVar1] = 0;
						}
					}
					else if (iVar5 == 0)
					{
						Local_149.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (unk_0x0E4018692D92041D(Local_149.f_7, iVar1))
		{
			unk_0xCE689A8E8C42ED78(&(Local_149.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_47(int iParam0)
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

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (!func_160())
	{
		return;
	}
	iVar0 = 208;
	if (unk_0x5D79F3D06EB318A0(0))
	{
		iVar0 = 237;
	}
	if ((unk_0xF1CDE9FD207C4CD8(2, iVar0) || unk_0x1CAA347A3C84C225(2, iVar0)) || unk_0x0E4018692D92041D(Local_149.f_5, 5))
	{
		iVar1 = 250;
		iVar2 = func_58();
		if (Local_149.f_8 > -1)
		{
			if (!unk_0x0E4018692D92041D(Local_149.f_5, 3))
			{
				if (!func_57(&(Local_149.f_115)))
				{
					func_56(&(Local_149.f_115), 0, 0);
					Local_149.f_31 = 0;
					unk_0x8950ED5730F62EE8(&(Local_149.f_5), 5);
				}
				else if (func_55(&(Local_149.f_115), 300, 0) || Local_149.f_31 == 0)
				{
					if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
					{
						Local_149.f_31 = 0;
					}
					if (unk_0x765F6FEEFF39224F(Local_149.f_84[Local_149.f_31]) && !unk_0xD62C4419A41F106A(Local_149.f_84[Local_149.f_31], 0))
					{
						iVar3 = unk_0x89DDAAE6EFF42DD9(func_30(), func_54());
						if (iVar3 != -1)
						{
							vVar4 = { unk_0x2D49816199C51B0C(func_30(), iVar3) + func_53(Local_149.f_31) };
							vVar5 = { unk_0x8BE3F20792F38FEB(2) };
							vVar6 = { (-sin(vVar5.z) * cos(vVar5.x)), (cos(vVar5.z) * cos(vVar5.x)), sin(vVar5.x) };
							vVar7 = { 1f, 1f, 1f };
							vVar8 = { vVar4 + vVar6 * vVar7 };
							unk_0xDAAE40D23C256135(vVar4, vVar8, iVar1, 1, func_52(0), unk_0x33CD235DF1E6A94E(), 1, 1, -1f, iVar2, 0, 0, Local_149.f_84[Local_149.f_31], 1, 0, 1);
							unk_0xEC95D37A139F1D5C(-1, "Fire", vVar4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_149.f_32++;
							func_51(&(Local_149.f_115), 0, 0);
						}
					}
					if (Local_149.f_32 == Local_149.f_8)
					{
						Local_149.f_31 = 0;
						Local_149.f_33 = 0;
						Local_149.f_32 = -1;
						unk_0x8950ED5730F62EE8(&(Local_149.f_5), 3);
						unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 5);
						func_56(&(Local_149.f_119), 0, 0);
						func_50(&(Local_149.f_115));
					}
					Local_149.f_31++;
				}
			}
		}
		else if (!unk_0x0E4018692D92041D(Local_149.f_5, 1))
		{
			if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
			{
				Local_149.f_31 = 0;
			}
			iVar9 = unk_0x89DDAAE6EFF42DD9(func_30(), func_54());
			if (iVar9 != -1)
			{
				vVar10 = { unk_0x2D49816199C51B0C(func_30(), iVar9) + func_53(Local_149.f_31) };
				vVar11 = { unk_0x8422CE67C0A53728() };
				vVar12 = { unk_0x8BE3F20792F38FEB(2) };
				vVar13 = { (-sin(vVar12.z) * cos(vVar12.x)), (cos(vVar12.z) * cos(vVar12.x)), sin(vVar12.x) };
				vVar14 = { 10f, 10f, 10f };
				if (!func_49(Local_149.f_56))
				{
					vVar14.x = unk_0x16E00F066AFFEA0D(Local_149.f_56, vVar11, false);
					vVar14.y = unk_0x16E00F066AFFEA0D(Local_149.f_56, vVar11, false);
					vVar14.z = unk_0x16E00F066AFFEA0D(Local_149.f_56, vVar11, false);
				}
				vVar15 = { vVar11 + vVar13 * vVar14 };
				unk_0xDAAE40D23C256135(vVar10, vVar15, iVar1, 1, func_52(1), unk_0x33CD235DF1E6A94E(), 1, 1, -1f, iVar2, 0, 0, 0, 1, 0, 1);
				unk_0xEC95D37A139F1D5C(-1, "Fire", vVar10, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				unk_0x8950ED5730F62EE8(&(Local_149.f_5), 1);
				Local_149.f_33 = 0;
				func_56(&(Local_149.f_134), 0, 0);
				Local_149.f_31++;
			}
		}
	}
}

int func_49(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2)
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

int func_52(int iParam0)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (iParam0 == 0)
		{
			return 2011877270;
		}
		else
		{
			return 1987049393;
		}
	}
	return 0;
}

Vector3 func_53(int iParam0)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_54()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_55(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_56(uParam0, bParam2, 0);
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

void func_56(var uParam0, bool bParam1, bool bParam2)
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

bool func_57(var uParam0)
{
	return uParam0->f_1;
}

int func_58()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		return Global_1365159;
	}
	return -1;
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	if (!func_160())
	{
		return;
	}
	if (unk_0x0E4018692D92041D(Local_149.f_5, 3))
	{
		if (func_57(&(Local_149.f_119)))
		{
			if (!func_55(&(Local_149.f_119), 5000, 0))
			{
				iVar0 = (100 * unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_149.f_119)));
				Local_149.f_33 = (iVar0 / 5000);
				func_87();
				return;
			}
			else
			{
				func_50(&(Local_149.f_119));
				unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 3);
				Local_149.f_32 = -1;
				Local_149.f_33 = 100;
			}
		}
	}
	if (unk_0x0E4018692D92041D(Local_149.f_5, 1))
	{
		if (func_57(&(Local_149.f_134)))
		{
			if (!func_55(&(Local_149.f_134), 1500, 0))
			{
				iVar1 = (100 * unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Local_149.f_134)));
				Local_149.f_33 = (iVar1 / 1500);
				func_87();
				return;
			}
			else
			{
				func_50(&(Local_149.f_134));
				unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 1);
				Local_149.f_33 = 100;
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_149.f_5, 1) && !unk_0x0E4018692D92041D(Local_149.f_5, 5))
	{
		switch (Local_149.f_111)
		{
			case 0:
				func_84();
				break;
			
			case 1:
				func_74();
				break;
		}
		func_67();
	}
	func_61();
	func_60();
}

void func_60()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	
	if ((unk_0x117DAF3BF7232886(Local_149.f_61) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61)) && func_47(func_30()))
	{
		vVar4 = { unk_0x8422CE67C0A53728() };
		vVar5 = { unk_0x8BE3F20792F38FEB(2) };
		vVar6 = { (-sin(vVar5.z) * cos(vVar5.x)), (cos(vVar5.z) * cos(vVar5.x)), sin(vVar5.x) };
		vVar7 = { 300f, 300f, 300f };
		vVar8 = { vVar4 + vVar6 * vVar7 };
		vVar9 = { vVar4 + vVar6 * Vector(1f, 1f, 1f) };
		switch (Local_149.f_27)
		{
			case 0:
				Local_149.f_106 = unk_0x36FB861F8CCF0EA4(vVar9, vVar8, 511, func_30(), 7);
				if (Local_149.f_106 != 0)
				{
					Local_149.f_27 = 1;
				}
				break;
			
			case 1:
				iVar3 = unk_0x819B6E76423AE494(Local_149.f_106, &iVar0, &(Local_149.f_56), &uVar1, &uVar2);
				if (iVar3 == 2)
				{
					if (iVar0 == 0)
					{
						Local_149.f_26 = 1;
						Local_149.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_149.f_26 = 2;
						Local_149.f_27 = 0;
					}
				}
				else if (iVar3 == 0)
				{
					Local_149.f_27 = 0;
				}
				break;
			}
	}
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_62(Local_149.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xD83C9F072D059CC4("helicopterhud"))
	{
		unk_0x5C58D0ADA22491FA(1);
		if (Local_149.f_8 > -1)
		{
			if (func_47(iParam0))
			{
				unk_0x2663979B26E8B87E(unk_0xFBB1F99A825CAB09(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (unk_0x068481DAF84B9654(iParam0))
					{
						iVar7 = unk_0x22B02EC53152632C(iParam0);
						if (unk_0xE09156665EC2D83B(iVar7))
						{
							iVar8 = unk_0x5C7617A25D50AAE9(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_66(iVar8, -1))
								{
									unk_0xB9F6E53E8232BF77(unk_0xF2C96862595654B4(iVar7, 0), 2);
								}
							}
						}
					}
					else if (unk_0x680558231C80291D(iParam0))
					{
						iVar9 = unk_0x7BDC41A7CA0C77A2(unk_0xEAE1362B9F5C7B18(iParam0), -1, 0);
						if (unk_0x765F6FEEFF39224F(iVar9))
						{
							if (unk_0xE09156665EC2D83B(iVar9))
							{
								iVar10 = unk_0x5C7617A25D50AAE9(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									unk_0xB9F6E53E8232BF77(unk_0xEAE1362B9F5C7B18(iParam0), 2);
								}
							}
						}
					}
					if (!unk_0x0E4018692D92041D(Local_149.f_48, iParam2))
					{
						if ((unk_0x66DE54BD13B1BD88(Local_149.f_34[iParam2]) && Local_149.f_34[iParam2] == -1) && !func_65())
						{
							Local_149.f_34[iParam2] = unk_0x8CCC0A0504C52531();
							unk_0x0F8EAEEC97DDBCB3(Local_149.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_56(&(Local_149.f_136[iParam2 /*2*/]), 0, 0);
							unk_0x8950ED5730F62EE8(&(Local_149.f_48), iParam2);
						}
					}
					else if (!unk_0x0E4018692D92041D(Local_149.f_48, iParam2 + 6))
					{
						if (func_57(&(Local_149.f_136[iParam2 /*2*/])))
						{
							if (func_55(&(Local_149.f_136[iParam2 /*2*/]), 1000, 0))
							{
								func_64(iParam2, 0);
								if (unk_0x66DE54BD13B1BD88(Local_149.f_41[iParam2]) && Local_149.f_41[iParam2] == -1)
								{
									Local_149.f_41[iParam2] = unk_0x8CCC0A0504C52531();
									unk_0x0F8EAEEC97DDBCB3(Local_149.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_56(&(Local_149.f_149[iParam2 /*2*/]), 0, 0);
									unk_0x8950ED5730F62EE8(&(Local_149.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_57(&(Local_149.f_149[iParam2 /*2*/])))
					{
						if (func_55(&(Local_149.f_149[iParam2 /*2*/]), 700, 0))
						{
							func_63(iParam2, 0);
						}
					}
					unk_0xB9769E6563311806(unk_0xFBB1F99A825CAB09(iParam0, 1), 0);
					if (!unk_0x0E4018692D92041D(Local_149.f_48, iParam2 + 6))
					{
						unk_0x1256E5EA03020804(15, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					else
					{
						unk_0x1256E5EA03020804(6, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					if (!bParam1)
					{
						unk_0x281206A3ED9B7B48("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar3, iVar4, iVar5, iVar6, 1);
					}
					unk_0x281206A3ED9B7B48("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0x281206A3ED9B7B48("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0x281206A3ED9B7B48("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar3, iVar4, iVar5, iVar6, 1);
					unk_0x5B9A42789310A300();
				}
				else
				{
					func_64(iParam2, 1);
					func_63(iParam2, 1);
				}
			}
			else
			{
				func_64(iParam2, 1);
				func_63(iParam2, 1);
			}
		}
		else
		{
			func_64(iParam2, 1);
			func_63(iParam2, 1);
		}
	}
}

void func_63(int iParam0, bool bParam1)
{
	if (unk_0x0E4018692D92041D(Local_149.f_48, iParam0 + 6))
	{
		if (!unk_0x66DE54BD13B1BD88(Local_149.f_41[iParam0]))
		{
			unk_0xCBE6AF58552C63B2(Local_149.f_41[iParam0]);
			unk_0x44D426446FAF55FB(Local_149.f_41[iParam0]);
		}
		Local_149.f_41[iParam0] = -1;
		if (bParam1)
		{
			unk_0xCE689A8E8C42ED78(&(Local_149.f_48), iParam0 + 6);
		}
		func_50(&(Local_149.f_149[iParam0 /*2*/]));
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (unk_0x0E4018692D92041D(Local_149.f_48, iParam0))
	{
		if (!unk_0x66DE54BD13B1BD88(Local_149.f_34[iParam0]))
		{
			unk_0xCBE6AF58552C63B2(Local_149.f_34[iParam0]);
			unk_0x44D426446FAF55FB(Local_149.f_34[iParam0]);
		}
		Local_149.f_34[iParam0] = -1;
		if (bParam1)
		{
			unk_0xCE689A8E8C42ED78(&(Local_149.f_48), iParam0);
		}
		func_50(&(Local_149.f_136[iParam0 /*2*/]));
	}
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0x66DE54BD13B1BD88(Local_149.f_34[iVar0]) || !unk_0x66DE54BD13B1BD88(Local_149.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iParam0), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iParam0), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x33CD235DF1E6A94E() == unk_0x7BDC41A7CA0C77A2(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]))
		{
			if (unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]))
			{
				if (!unk_0x0E4018692D92041D(Local_149.f_7, iVar0))
				{
					if (func_57(&(Local_149.f_121[iVar0 /*2*/])))
					{
						if (func_55(&(Local_149.f_121[iVar0 /*2*/]), 1000, 0))
						{
							Local_149.f_84[iVar0] = -1;
							if (Local_149.f_8 > -1)
							{
								Local_149.f_17[iVar0] = 0;
								func_50(&(Local_149.f_121[iVar0 /*2*/]));
								Local_149.f_8 = (Local_149.f_8 - 1);
							}
						}
					}
					else
					{
						func_56(&(Local_149.f_121[iVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_50(&(Local_149.f_121[iVar0 /*2*/]));
				}
				if ((!func_73(Local_149.f_84[iVar0]) || !unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0])) || !func_68(Local_149.f_84[iVar0]))
				{
					if (!unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]))
					{
					}
					if (!func_73(Local_149.f_84[iVar0]))
					{
					}
					Local_149.f_84[iVar0] = -1;
					if (Local_149.f_8 > -1)
					{
						Local_149.f_17[iVar0] = 0;
						func_50(&(Local_149.f_121[iVar0 /*2*/]));
						Local_149.f_8 = (Local_149.f_8 - 1);
					}
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_149.f_8 != iVar1)
	{
		Local_149.f_8 = iVar1;
	}
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x680558231C80291D(iParam0))
		{
			if (func_72(unk_0xEAE1362B9F5C7B18(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_71(unk_0x541D5C57194E73C4(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x068481DAF84B9654(iParam0))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam0);
			if (unk_0xE09156665EC2D83B(iVar0))
			{
				if (!func_69(unk_0x5C7617A25D50AAE9(iVar0), unk_0x95B959F18401C09A()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_70(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_29();
}

int func_71(int iParam0)
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("pranger")) || iParam0 == joaat("policet"))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xC92AA0DBDDDE8BB8(iParam0) + 1;
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x67FFBB75D2430704(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x7BDC41A7CA0C77A2(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x765F6FEEFF39224F(iVar2))
					{
						if (unk_0xE09156665EC2D83B(iVar2))
						{
							if (!bParam2 && func_69(unk_0x5C7617A25D50AAE9(iVar2), unk_0x95B959F18401C09A()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xBC2FC12AD0FBF72E(iVar2))
				{
					if (unk_0xE09156665EC2D83B(iVar2))
					{
						if (!bParam2 && func_69(unk_0x5C7617A25D50AAE9(iVar2), unk_0x95B959F18401C09A()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_73(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		unk_0x2663979B26E8B87E(unk_0xFBB1F99A825CAB09(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_74()
{
	if (Local_149.f_28 < 0 || Local_149.f_28 >= 20)
	{
		Local_149.f_28 = 0;
	}
	else if (unk_0x765F6FEEFF39224F(Local_149.f_63[Local_149.f_28]) && !unk_0xD62C4419A41F106A(Local_149.f_63[Local_149.f_28], 0))
	{
		func_82(Local_149.f_63[Local_149.f_28]);
		if (func_55(&(Local_149.f_117), 1000, 0))
		{
			if (Local_149.f_112 == 2)
			{
				if (unk_0x0E4018692D92041D(Local_149.f_5, 0))
				{
					if (Local_149.f_8 < 5)
					{
						if (func_81(Local_149.f_63[Local_149.f_28]))
						{
							Local_149.f_63[Local_149.f_28] = -1;
							unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
							func_50(&(Local_149.f_117));
							Local_149.f_28++;
						}
					}
					else
					{
						if (func_78(Local_149.f_63[Local_149.f_28]))
						{
							func_75(Local_149.f_63[Local_149.f_28]);
						}
						Local_149.f_63[Local_149.f_28] = -1;
						unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
						Local_149.f_25 = 0;
						func_50(&(Local_149.f_117));
						Local_149.f_28++;
					}
				}
				else
				{
					Local_149.f_25 = 0;
					Local_149.f_63[Local_149.f_28] = -1;
					unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
					func_51(&(Local_149.f_117), 0, 0);
					Local_149.f_28++;
				}
			}
		}
	}
	else
	{
		Local_149.f_63[Local_149.f_28] = -1;
		Local_149.f_25 = 0;
		func_50(&(Local_149.f_117));
		Local_149.f_28++;
	}
	if (Local_149.f_28 == 20)
	{
		Local_149.f_111 = 0;
		Local_149.f_25 = 0;
		func_50(&(Local_149.f_117));
		Local_149.f_28 = 0;
	}
}

void func_75(int iParam0)
{
	if (func_76() != -1 && func_76() < 6)
	{
		if (unk_0x765F6FEEFF39224F(Local_149.f_84[func_76()]) && unk_0x765F6FEEFF39224F(iParam0))
		{
			Local_149.f_84[func_76()] = iParam0;
		}
	}
}

int func_76()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (unk_0x117DAF3BF7232886(Local_149.f_61) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61))
	{
		vVar2 = { unk_0xB29314FDACFD865E(Local_149.f_61) };
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			if (unk_0x765F6FEEFF39224F(Local_149.f_84[iVar3]) && !unk_0xD62C4419A41F106A(Local_149.f_84[iVar3], 0))
			{
				vVar4 = { unk_0xFBB1F99A825CAB09(Local_149.f_84[iVar3], 1) - vVar2 };
				fVar5 = func_77(vVar4);
				if (fVar5 > fVar1)
				{
					fVar1 = fVar5;
					iVar0 = iVar3;
				}
			}
			iVar3++;
		}
	}
	Local_149.f_9 = iVar0;
	return iVar0;
}

float func_77(vector3 vParam0)
{
	return sqrt((((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)) + (vParam0.z * vParam0.z)));
}

int func_78(int iParam0)
{
	if (func_76() != -1)
	{
		if ((func_47(Local_149.f_84[func_76()]) && func_47(iParam0)) && func_47(func_80()))
		{
			if (func_79(func_80(), Local_149.f_84[func_76()], 1) > func_79(func_80(), iParam0, 1) && func_79(Local_149.f_84[func_76()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_79(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, 0) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, bParam2);
}

int func_80()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (unk_0x6B7EE7681161BCAB() != -1)
		{
			return Global_2437364.f_1122[unk_0x6B7EE7681161BCAB()];
		}
	}
	return -1;
}

int func_81(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]))
		{
			Local_149.f_84[iVar0] = uParam0;
			Local_149.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_82(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (((unk_0x117DAF3BF7232886(Local_149.f_61) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61)) && func_47(iParam0)) && func_47(func_30()))
	{
		vVar0 = { unk_0xB29314FDACFD865E(Local_149.f_61) };
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
		switch (Local_149.f_25)
		{
			case 0:
				Local_149.f_105 = unk_0x36FB861F8CCF0EA4(vVar0, vVar1, 511, 0, 7);
				if (Local_149.f_105 != 0)
				{
					Local_149.f_25 = 1;
				}
				break;
			
			case 1:
				Local_149.f_112 = unk_0x819B6E76423AE494(Local_149.f_105, &iVar2, &vVar4, &uVar3, &iVar5);
				if (Local_149.f_112 == 2)
				{
					if (iVar2 == 0)
					{
						Local_149.f_24 = 1;
						vVar4 = { 0f, 0f, 0f };
						if (unk_0x0E4018692D92041D(Local_149.f_5, 0))
						{
							unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
						}
					}
					else
					{
						Local_149.f_24 = 2;
						if (unk_0x765F6FEEFF39224F(iVar5))
						{
							if (unk_0x680558231C80291D(iVar5) || (unk_0x068481DAF84B9654(iVar5) && unk_0xE09156665EC2D83B(unk_0x22B02EC53152632C(iVar5))))
							{
								if (iVar5 == func_83(iParam0))
								{
									if (!unk_0xD62C4419A41F106A(iParam0, 0))
									{
										if (!unk_0x0E4018692D92041D(Local_149.f_5, 0))
										{
											unk_0x8950ED5730F62EE8(&(Local_149.f_5), 0);
										}
									}
								}
							}
							else if (unk_0x0E4018692D92041D(Local_149.f_5, 0))
							{
								unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
							}
						}
						Local_149.f_105 = 0;
						Local_149.f_25 = 0;
					}
				}
				else if (Local_149.f_112 == 0)
				{
					Local_149.f_25 = 0;
				}
				break;
		}
	}
	else if (unk_0x0E4018692D92041D(Local_149.f_5, 0))
	{
		unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 0);
	}
}

int func_83(int iParam0)
{
	return iParam0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x117DAF3BF7232886(Local_149.f_61) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61))
	{
		if (func_28(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (func_47(func_80()))
			{
				iVar5 = unk_0x51DB799C16AEFBC7(&uVar2);
				if (iVar5 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (!unk_0x765F6FEEFF39224F(uVar2[iVar0]))
						{
						}
						else if ((!unk_0x680558231C80291D(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_68(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_86(uVar2[iVar0]) && !func_85(uVar2[iVar0]))
						{
							if (func_73(uVar2[iVar0]) && func_79(uVar2[iVar0], func_80(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (unk_0xC4DEA49C5B465481(unk_0x7C1C88877E8AAA50(iVar0)))
					{
						iVar3 = unk_0x7C1C88877E8AAA50(iVar0);
						iVar4 = unk_0x378BD4B3881338C2(iVar3);
						if ((iVar3 == unk_0x95B959F18401C09A() || !func_68(iVar4)) || unk_0xD62C4419A41F106A(iVar4, 0))
						{
						}
						else if (func_86(iVar4) && !func_85(iVar4))
						{
							if (func_79(iVar4, func_80(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = iVar4;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_149.f_111 = 1;
			}
		}
	}
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((unk_0x765F6FEEFF39224F(Local_149.f_84[iVar0]) && !unk_0xD62C4419A41F106A(Local_149.f_84[iVar0], 0)) && unk_0x765F6FEEFF39224F(iParam0)) && !unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (iParam0 == Local_149.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (iParam0 == Local_149.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_64(iVar0, 1);
		func_63(iVar0, 1);
		iVar0++;
	}
}

void func_88()
{
	int iVar0;
	
	if ((func_47(func_30()) && unk_0x117DAF3BF7232886(Local_149.f_61)) && unk_0xFAA5C555ED0CEC9B(Local_149.f_61))
	{
		iVar0 = unk_0x89DDAAE6EFF42DD9(func_30(), func_54());
		if (iVar0 != -1)
		{
			if (!unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380), 0);
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380, 0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380), 0);
	}
}

void func_89()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar16;
	vector3 vVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	vector3 vVar29;
	int iVar30;
	int iVar31;
	
	if (((unk_0x117DAF3BF7232886(Local_149.f_61) && (unk_0xFAA5C555ED0CEC9B(Local_149.f_61) || !unk_0x0E4018692D92041D(Local_149.f_5, 2))) && func_47(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_97(&fVar1);
		if (unk_0x5D79F3D06EB318A0(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_96(&fVar8, &fVar7);
		func_95(&fVar10, &fVar9);
		func_94(&fVar12, &fVar11);
		func_25(&fVar13);
		unk_0x636CEDA67977F07B(2);
		unk_0x144904D2EAA84341(0, 39);
		if (unk_0x5D79F3D06EB318A0(0))
		{
			fVar14 = 15f;
			fVar5 = (unk_0x2EEE89525F08C860(0, 291) * -fVar14);
			fVar6 = (unk_0x2EEE89525F08C860(0, 290) * fVar14);
		}
		else
		{
			iVar4 = floor((unk_0x2EEE89525F08C860(0, 291) * -fVar14));
			iVar3 = floor((unk_0x2EEE89525F08C860(0, 290) * fVar14));
		}
		iVar2 = floor((unk_0x2D0598FBFD4D8A23(0, 39) * fVar14));
		if (!unk_0x5D79F3D06EB318A0(0))
		{
			iVar16 = round((IntToFloat(iVar16) * fVar14));
			if (unk_0xEE14D9A9F531ADDC(iVar2) < iVar16)
			{
				iVar2 = 0;
			}
			vVar17 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (vmag(vVar17) < IntToFloat(iVar16))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar18 = ((vVar15.x / fVar7) * 0.5f);
		if (fVar18 > 0f)
		{
			fVar18 = (fVar18 + 1f);
		}
		else
		{
			fVar18 = 1f;
		}
		if (unk_0x5D79F3D06EB318A0(0))
		{
			Local_149[2] = ((fVar5 * Local_149.f_59) * fVar1);
			Local_149[3] = (((fVar6 * Local_149.f_59) * fVar1) * fVar18);
		}
		else
		{
			Local_149[2] = (((to_float(iVar4) * Local_149.f_59) * fVar1) * timestep());
			Local_149[3] = ((((to_float(iVar3) * Local_149.f_59) * fVar1) * fVar18) * timestep());
		}
		Local_149[3] = func_93(Local_149[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			vVar15 = { unk_0xF165F9F874811603(Local_149.f_61, 2) };
		}
		if (!func_92(unk_0xB29314FDACFD865E(Local_149.f_61), 0f, 0f, 0f, 0))
		{
			if (!unk_0xD62C4419A41F106A(func_30(), 0))
			{
				fVar19 = unk_0xC472E34C8FBEC678(func_30());
				fVar20 = (fVar19 - vVar15.z);
				while (unk_0x7EECA16E87982278(fVar20) >= 180f && iVar21 < 30)
				{
					if (fVar20 < 0f)
					{
						fVar20 = (fVar20 + 360f);
					}
					else
					{
						fVar20 = (fVar20 - 360f);
					}
					iVar21++;
					if (iVar21 == 30)
					{
					}
				}
				if (fVar20 >= fVar11)
				{
					if (fVar20 > 0f)
					{
						vVar15.z = (fVar19 - fVar11);
					}
					else
					{
						vVar15.z = (fVar19 + fVar11);
					}
				}
				if (fVar20 < fVar12)
				{
					if (fVar20 > 0f)
					{
						vVar15.z = (fVar19 - unk_0x7EECA16E87982278(fVar12));
					}
					else
					{
						vVar15.z = (fVar19 + unk_0x7EECA16E87982278(fVar12));
					}
				}
			}
			fVar22 = 0f;
			fVar23 = 0f;
			if (func_92(Local_149.f_50, 0f, 0f, 0f, 0))
			{
				Local_149.f_50 = { unk_0x60B5C1FD066CB864(func_30(), 2) };
			}
			else
			{
				vVar24 = { unk_0x60B5C1FD066CB864(func_30(), 2) };
				fVar25 = ((unk_0x7EECA16E87982278(Local_149.f_53.f_2) - 90f) / -90f);
				fVar22 = (fVar22 + ((vVar24.x - Local_149.f_50) * fVar25));
				fVar23 = (fVar23 + (vVar24.z - Local_149.f_50.f_2));
				if (fVar23 > 180f)
				{
					fVar23 = (fVar23 - 360f);
				}
				if (fVar23 < -180f)
				{
					fVar23 = (fVar23 + 360f);
				}
				if (vVar24.x < -80f || vVar24.x > 80f)
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				if (unk_0x95BBE5C8D52FE24B(func_30()))
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				Local_149.f_50 = { vVar24 };
			}
			if ((((Local_149[2] != 0f || Local_149[3] != 0f) || fVar22 != 0f) || fVar23 != 0f) || !unk_0x0E4018692D92041D(Local_149.f_5, 2))
			{
				fVar26 = (((Local_149.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar26 < 3f)
				{
					fVar26 = 3f;
				}
				Local_149[2] = (Local_149[2] * fVar26);
				Local_149[3] = (Local_149[3] * fVar26);
				Local_149.f_53 = (Local_149.f_53 + Local_149[2]);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - Local_149[3]);
				Local_149.f_53 = (Local_149.f_53 - fVar22);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - fVar23);
				if (Local_149.f_53 < fVar8)
				{
					Local_149.f_53 = fVar8;
				}
				if (Local_149.f_53 > fVar7)
				{
					Local_149.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_149.f_53.f_2 > 180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 - 360f);
					}
					while (Local_149.f_53.f_2 < -180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_149.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_149.f_53.f_2 > (fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!unk_0x0E4018692D92041D(Local_149.f_5, 2))
			{
				if (func_160())
				{
					Local_149.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_149.f_53 = { fVar7, 0f, 0f };
				}
				unk_0x8950ED5730F62EE8(&(Local_149.f_5), 2);
			}
			if (!func_91(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_381[0 /*3*/], Local_149.f_53, 0f, Local_149.f_53.f_2, 1056964608, 0))
			{
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_381[0 /*3*/] = { Local_149.f_53, 0f, Local_149.f_53.f_2 };
			}
			if (func_160())
			{
				unk_0xA9DA5627709BE683(Local_149.f_61, func_30(), unk_0x89DDAAE6EFF42DD9(func_30(), "weapon_1d"), 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_90(), 1);
			}
			else
			{
				unk_0xA9DA5627709BE683(Local_149.f_61, func_30(), 0, 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_90(), 1);
			}
		}
		Local_149.f_59 = (Local_149.f_59 + (((to_float(iVar2) / 5f) * timestep()) * fVar0));
		if (Local_149.f_59 > fVar9)
		{
			Local_149.f_59 = fVar9;
		}
		if (Local_149.f_59 < fVar10)
		{
			Local_149.f_59 = fVar10;
		}
		unk_0x03B5E90BFD644101(1f);
		unk_0x63B608CD1957089E(Local_149.f_61, Local_149.f_59);
		fVar27 = ((Local_149.f_59 - 5f) / 42f);
		unk_0xFD0CAA61ACBC8CEA(fVar27);
		if (unk_0xBE799439B122CA21("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((unk_0xEE14D9A9F531ADDC(iVar2) > 0 && Local_149.f_59 <= fVar9) && Local_149.f_59 >= fVar10)
			{
				iVar28 = Local_149.f_29;
				if (iVar28 != -1)
				{
					if (unk_0x66DE54BD13B1BD88(iVar28))
					{
						unk_0x0F8EAEEC97DDBCB3(iVar28, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					unk_0x1819081E2D6040CB(iVar28, "Ctrl", to_float(iVar2));
					if (iVar2 < 0)
					{
						unk_0x1819081E2D6040CB(iVar28, "Dir", -1f);
					}
					else
					{
						unk_0x1819081E2D6040CB(iVar28, "Dir", 1f);
					}
				}
			}
			else if (Local_149.f_29 != -1)
			{
				if (!unk_0x66DE54BD13B1BD88(Local_149.f_29))
				{
					unk_0xCBE6AF58552C63B2(Local_149.f_29);
				}
			}
			vVar29 = { -Vector(unk_0x2EEE89525F08C860(0, 290), 0f, unk_0x2EEE89525F08C860(0, 291)) };
			if (vmag(vVar29) > 0f)
			{
				iVar30 = Local_149.f_30;
				if (iVar30 != -1)
				{
					if (unk_0x66DE54BD13B1BD88(iVar30))
					{
						unk_0x0F8EAEEC97DDBCB3(iVar30, "COP_HELI_CAM_TURN", 0, 1);
					}
					unk_0x1819081E2D6040CB(iVar30, "Ctrl", vmag(vVar29));
				}
			}
			else
			{
				iVar31 = Local_149.f_30;
				if (iVar31 != -1)
				{
					if (!unk_0x66DE54BD13B1BD88(iVar31))
					{
						unk_0xCBE6AF58552C63B2(iVar31);
					}
				}
			}
		}
	}
}

Vector3 func_90()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (unk_0x765F6FEEFF39224F(func_30()))
	{
		switch (unk_0x541D5C57194E73C4(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_91(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x7EECA16E87982278((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_92(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

float func_93(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_94(var uParam0, var uParam1)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_97(float fParam0)
{
	*fParam0 = 0.0015f;
}

int func_98()
{
	if (unk_0xD9C92B0885A075F8() || unk_0xBAA5E93732372E34())
	{
		return 1;
	}
	if (func_101(1))
	{
		return 1;
	}
	if (func_99(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_100())
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

bool func_100()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

void func_102()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_110())
	{
		func_109(1);
	}
	unk_0x8588EE3A8DC4CA1C(0, 1);
	if (func_160())
	{
		func_108();
	}
	else if (unk_0x765F6FEEFF39224F(Local_149.f_107))
	{
		unk_0xCC6DFCFE9B9E68B0(Local_149.f_107);
	}
	vVar0 = { unk_0x8422CE67C0A53728() };
	if ((((unk_0xD9C92B0885A075F8() || func_107()) || unk_0x833B1A3D9F713E03(2, 199)) || unk_0xF1CDE9FD207C4CD8(2, 199)) || unk_0x1771F6BAF60B44FA(2, 199))
	{
		unk_0x1466A087F0134E36(vVar0.x, vVar0.y);
		unk_0x94C24EC488BD2C6E(vVar0.x, vVar0.y, 0);
		if (unk_0xD9C92B0885A075F8() || func_107())
		{
			if (unk_0xE38E3CF1625A4145(unk_0x9FF59D8C46007501()))
			{
				unk_0xE447A1B9434714F3(unk_0x9FF59D8C46007501(), 255);
			}
		}
	}
	else if (func_160())
	{
		if (unk_0xE38E3CF1625A4145(unk_0x9FF59D8C46007501()))
		{
			unk_0xE447A1B9434714F3(unk_0x9FF59D8C46007501(), 0);
		}
	}
	unk_0x1753FAC57CD1B746(vVar0.x, vVar0.y);
	unk_0x290A31B89E6CDC52();
	unk_0x6A26C1F1DE3F6B15();
	if (unk_0x117DAF3BF7232886(Local_149.f_61))
	{
		unk_0xF1BA00CED5460724(Local_149.f_61, 1);
	}
	unk_0xA06D7733F3953152(0);
	if (func_160())
	{
		vVar1 = { unk_0x8BE3F20792F38FEB(0) };
		vVar1 = { func_106(vVar1) };
		if (!unk_0xE38E3CF1625A4145(Local_149.f_109))
		{
			Local_149.f_108 = func_104(vVar0, 0);
			unk_0xA20C1DE21F2F071C(Local_149.f_108, 425);
			unk_0x983D75D9630FD905(Local_149.f_108, 0);
			unk_0xAE71BEA7BBBFB78F(Local_149.f_108, 4);
			unk_0xB9E84A421C105943(Local_149.f_108, func_103(2));
			unk_0x2FAA2F0322C319FC(Local_149.f_108, 1);
			unk_0xCE5C49921A521962(Local_149.f_108, 0.54f);
			unk_0xC51C58C963968740(Local_149.f_108, 13 + 1);
			Local_149.f_109 = func_104(vVar0, 0);
			unk_0xA20C1DE21F2F071C(Local_149.f_109, 425);
			unk_0x983D75D9630FD905(Local_149.f_109, 0);
			unk_0xAE71BEA7BBBFB78F(Local_149.f_109, 4);
			unk_0xB9E84A421C105943(Local_149.f_109, func_103(18));
			unk_0x2FAA2F0322C319FC(Local_149.f_109, 1);
			unk_0xCE5C49921A521962(Local_149.f_109, 0.44f);
			unk_0xC51C58C963968740(Local_149.f_109, 13 + 1);
			unk_0x5F26734E3288784F(Local_149.f_109, 1);
			unk_0x9D148E7C7C25619B(Local_149.f_109, round(unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y)));
			unk_0x5F26734E3288784F(Local_149.f_108, 1);
			unk_0x9D148E7C7C25619B(Local_149.f_108, round(unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y)));
		}
		else
		{
			unk_0xA0220BF0AB292278(Local_149.f_109, vVar0);
			unk_0x9D148E7C7C25619B(Local_149.f_109, round(unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y)));
			unk_0xAE71BEA7BBBFB78F(Local_149.f_109, 5);
			unk_0xA0220BF0AB292278(Local_149.f_108, vVar0);
			unk_0x9D148E7C7C25619B(Local_149.f_108, round(unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y)));
			unk_0xAE71BEA7BBBFB78F(Local_149.f_108, 5);
		}
	}
}

int func_103(int iParam0)
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
	unk_0x1256E5EA03020804(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_104(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_105(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, iParam1);
	return iVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_106(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = cos(vParam0.x);
	vVar0.y = cos(vParam0.z);
	vVar0.z = sin(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -sin(vParam0.z));
	return vVar0;
}

bool func_107()
{
	return unk_0x1B9A01A53920FD50() != 0;
}

void func_108()
{
	Global_1312666 = 1;
}

void func_109(int iParam0)
{
	Global_2460889 = iParam0;
}

bool func_110()
{
	return Global_2460889;
}

void func_111(int iParam0)
{
	if (Local_149.f_110 != iParam0)
	{
		Local_149.f_110 = iParam0;
	}
}

int func_112()
{
	vector3 vVar0;
	float fVar1;
	
	if (func_128() && !func_98())
	{
		if ((func_126(0) || func_101(1)) || func_125())
		{
		}
		else
		{
			if (func_160())
			{
				if (unk_0x833B1A3D9F713E03(2, 80) || unk_0x5EBE50D55314CEAD(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (unk_0x833B1A3D9F713E03(0, 51) || unk_0x5EBE50D55314CEAD(0, 51))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_149.f_107, 0))
					{
						unk_0x470437D86809BAE6(Local_149.f_107, 1f);
						unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					}
					return 1;
				}
				if (func_47(func_30()))
				{
					if (unk_0x117DAF3BF7232886(Local_149.f_61))
					{
						vVar0 = { unk_0xB29314FDACFD865E(Local_149.f_61) };
						if (unk_0x8C1596BAD35D957A(vVar0, &fVar1, 0, 0))
						{
							if (vdist(vVar0, vVar0.x, vVar0.y, fVar1) < 2f)
							{
								return 1;
							}
						}
					}
					if (unk_0x8AE34E8B10270D31(func_30()))
					{
						return 1;
					}
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_149.f_107, 0))
					{
						unk_0x470437D86809BAE6(Local_149.f_107, 1f);
						unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_123())
			{
				return 1;
			}
		}
	}
	if (func_121(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (func_47(func_113()))
		{
			if ((unk_0xE77FA521699F639C() % 30) == 0)
			{
				if (unk_0xD4B4F68F3449CBEC(func_113(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (unk_0x95BBE5C8D52FE24B(func_113()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_113()
{
	if (Global_1589668 != func_29())
	{
		if (!func_114(Global_1589668))
		{
			if (unk_0x765F6FEEFF39224F(Global_1365159))
			{
				return Global_1365159;
			}
			if (unk_0x765F6FEEFF39224F(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	return -1;
}

int func_114(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_3, 4);
	}
	return 0;
}

int func_115()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (Global_1589668 != func_29())
		{
			if (func_114(Global_1589668) || func_120(Global_1589668))
			{
				return 1;
			}
			if (func_119(Global_1589668))
			{
				if (func_27(func_118(Global_1589668)) == 11)
				{
					if (func_27(func_117(Global_1589668)) == 11)
					{
						if (func_116(Global_1589668) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	return unk_0xA8B379916562FD8E(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

int func_117(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_15;
	}
	return -1;
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 14);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_122(iParam0) && !func_119(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_123()
{
	int iVar0;
	int iVar1;
	
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (unk_0x765F6FEEFF39224F(func_30()))
		{
			iVar0 = unk_0x7BDC41A7CA0C77A2(func_30(), -1, 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					iVar1 = unk_0x5C7617A25D50AAE9(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_124(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1626536[iVar0 /*603*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_125()
{
	return Global_17272.f_135;
}

int func_126(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_127(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xF1CDE9FD207C4CD8(0, 25) || unk_0xF1CDE9FD207C4CD8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 19) || (!bParam0 && unk_0x1CAA347A3C84C225(0, 19)))
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (((unk_0xF1CDE9FD207C4CD8(0, 166) || unk_0xF1CDE9FD207C4CD8(0, 167)) || unk_0xF1CDE9FD207C4CD8(0, 168)) || unk_0xF1CDE9FD207C4CD8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1CAA347A3C84C225(0, 166) || unk_0x1CAA347A3C84C225(0, 167)) || unk_0x1CAA347A3C84C225(0, 168)) || unk_0x1CAA347A3C84C225(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (unk_0xF9FB5255747DBE88())
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_128()
{
	return unk_0x0E4018692D92041D(Global_1681627, 1);
}

void func_129()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (func_136())
	{
		if (!unk_0x117DAF3BF7232886(Local_149.f_61))
		{
			Local_149.f_61 = unk_0x8E09C0735236F309(26379945, 1);
			unk_0x63B608CD1957089E(Local_149.f_61, Local_149.f_59);
			vVar0 = { unk_0x60B5C1FD066CB864(func_30(), 2) };
			unk_0x833A05A7AD82EA44(Local_149.f_61, 0f, 0f, vVar0.z, 2);
			unk_0x5A488F57F21B3451(Local_149.f_61, func_30(), func_135(), 1);
			func_132(1);
			func_131(1);
			func_89();
			unk_0x3DE34B8864800B14();
		}
		else if (unk_0x0E4018692D92041D(Local_149.f_5, 2))
		{
			func_102();
			func_3();
			unk_0x63F0B040CE6EDF0F(true, 0, 0, 1, 1, 0);
			unk_0x29B6D8EFAD395B92("eyeinthesky");
			if (Local_149.f_49 == -1)
			{
				Local_149.f_49 = unk_0x8CCC0A0504C52531();
				unk_0x0F8EAEEC97DDBCB3(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_149.f_107 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				vVar1 = { unk_0xFBB1F99A825CAB09(Local_149.f_107, 1) };
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0x9DB29D916EF1BFB2(unk_0x33CD235DF1E6A94E(), Local_149.f_107, 0, 0, vVar1, 4, 0f, -1f, -1f, -1, -1, -1f, 0);
				unk_0x470437D86809BAE6(Local_149.f_107, 0f);
			}
			func_130("HUNTGUN_2b", -1);
			func_111(2);
		}
	}
	else
	{
		func_111(3);
	}
}

void func_130(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328, 25))
		{
			unk_0x8950ED5730F62EE8(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328), 25);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328, 25))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_328), 25);
	}
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!func_128())
		{
			unk_0x8950ED5730F62EE8(&Global_1681627, 1);
		}
	}
	else
	{
		if (func_128())
		{
			unk_0xCE689A8E8C42ED78(&Global_1681627, 1);
		}
		func_133(0);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_134())
		{
			unk_0x8950ED5730F62EE8(&Global_1681627, 2);
		}
	}
	else if (func_134())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681627, 2);
	}
}

bool func_134()
{
	return unk_0x0E4018692D92041D(Global_1681627, 2);
}

Vector3 func_135()
{
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (unk_0x765F6FEEFF39224F(func_30()))
	{
		switch (unk_0x541D5C57194E73C4(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_136()
{
	if (!unk_0x765F6FEEFF39224F(func_30()))
	{
		return 0;
	}
	if (unk_0x765F6FEEFF39224F(func_30()) && unk_0xD62C4419A41F106A(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_137()
{
	vector3 vVar0;
	
	if (func_136())
	{
		if (func_146())
		{
			if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
			{
				func_138(unk_0x95B959F18401C09A(), 0, 32768, 0);
			}
			if (!func_57(&(Local_149.f_113)))
			{
				if (func_47(func_30()))
				{
					if (unk_0x1F6A09AE9372AE6C(unk_0xFBB1F99A825CAB09(func_30(), 1), 100f, 1))
					{
						func_56(&(Local_149.f_113), 0, 0);
					}
				}
			}
			else if (func_55(&(Local_149.f_113), 2000, 0))
			{
				unk_0x1C86BD57D4DAB0D3(func_30());
			}
		}
		if (func_57(&(Local_149.f_113)))
		{
			if (func_55(&(Local_149.f_113), 5000, 0))
			{
				if (unk_0x4E1190A8D88ABDB7())
				{
					if (!unk_0x117DAF3BF7232886(Local_149.f_61))
					{
						Local_149.f_61 = unk_0x8E09C0735236F309(26379945, 1);
						unk_0x63B608CD1957089E(Local_149.f_61, Local_149.f_59);
						vVar0 = { unk_0x60B5C1FD066CB864(func_30(), 2) };
						unk_0x833A05A7AD82EA44(Local_149.f_61, 0f, 0f, vVar0.z, 2);
						unk_0x5A488F57F21B3451(Local_149.f_61, func_30(), func_135(), 1);
						func_132(1);
						func_131(1);
						func_89();
						unk_0x3DE34B8864800B14();
						unk_0xDEFB5E2E5CBD460A("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (unk_0x0E4018692D92041D(Local_149.f_5, 2))
					{
						func_102();
						func_3();
						unk_0x4ABB9EF39DA515D7();
						unk_0x63F0B040CE6EDF0F(true, 0, 0, 1, 1, 0);
						if (Local_149.f_49 == -1)
						{
							Local_149.f_49 = unk_0x8CCC0A0504C52531();
							unk_0x0F8EAEEC97DDBCB3(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_111(2);
					}
				}
			}
		}
	}
	else
	{
		func_111(3);
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC78552DAEE19D97B())
		{
			unk_0x05CFB4D665C2A88D(false);
		}
	}
	if (func_145())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		iVar0 = iParam2;
		unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_143())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC4DEA49C5B465481(iParam0) && (unk_0xF272A2699B521CE6(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xD62C4419A41F106A(unk_0x378BD4B3881338C2(iParam0), 0))
			{
				return;
			}
			iVar25 = unk_0x378BD4B3881338C2(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xB331FCEB94EB05C8())
				{
					unk_0x7FB656A6AFE2A7A8(1);
				}
				else if (bVar13 || (!func_10(unk_0x95B959F18401C09A(), 0) && !func_100()))
				{
					unk_0x0CDD28A9DFCE2FCE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xB331FCEB94EB05C8() && !bVar18)
					{
						unk_0x7FB656A6AFE2A7A8(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_142(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, true, 0);
					}
				}
				if (!unk_0x9F4718FD61B07058(iVar25))
				{
					if (!bVar20)
					{
						unk_0xF70578F5CD9822CB(iVar25, false);
					}
					unk_0xFE8201EFB515D77B(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xF70578F5CD9822CB(iVar25, false);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, true);
				unk_0xF23201C524E43F1C(iParam0, 0);
				unk_0x1B9C92466C9CAC2A(iParam0, 0);
				if (unk_0x055C6611FF8B993C(iVar25) && unk_0x7B3767E83E6F888A(iVar25))
				{
					unk_0x1130EB06CDE2ECD0(iVar25);
				}
				unk_0xC2A270E9C5578803(iVar25, 1);
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) == 0)
				{
					func_141();
					func_140();
				}
				if (unk_0x5D1B43675B257F3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE980BAFD70E8A4B3())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_142(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, !bVar14, 0);
					}
					if (!unk_0x9F4718FD61B07058(iVar25))
					{
						if (!bVar20)
						{
							unk_0xF70578F5CD9822CB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFE8201EFB515D77B(iVar25, 1);
						}
					}
					if (func_139(Global_4456448.f_161209))
					{
						unk_0xF70578F5CD9822CB(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xF23201C524E43F1C(iParam0, 0);
				}
				else
				{
					unk_0xF23201C524E43F1C(iParam0, 1);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x691E8EF7DCB53AAD(iVar25) && !unk_0xF0D230FB550CD6EB(iVar25, 0))
					{
						unk_0x31826EF4A8BC8E9F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar26);
		}
	}
}

bool func_139(int iParam0)
{
	return iParam0 == 17;
}

void func_140()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_141()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_143()
{
	if (func_144() == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	return Global_1312467.f_18;
}

int func_145()
{
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if (((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_147())
		{
			return 0;
		}
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	if (func_159(unk_0x95B959F18401C09A()))
	{
		iVar0 = func_158(unk_0x95B959F18401C09A());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_122(iVar0) && func_27(func_118(iVar0)) == 4) && unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar0))) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0))) && unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0)) && unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0))) && func_157(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0)))
			{
				return 1;
			}
			if (!func_156(Global_4456448.f_138474))
			{
				if (func_159(iVar0))
				{
					if (func_155(iVar0))
					{
						return 1;
					}
					else if (func_122(unk_0x95B959F18401C09A()) || func_154())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1681655)
	{
		return 1;
	}
	if (func_153(unk_0x95B959F18401C09A()))
	{
		iVar0 = func_152(unk_0x95B959F18401C09A());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_122(iVar0) && func_27(func_118(iVar0)) == 9) && unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar0))) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0))) && unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0)) && unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0))) && unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_151(iVar0))
			{
				return 1;
			}
			else if (func_122(unk_0x95B959F18401C09A()) || func_154())
			{
				return 1;
			}
		}
	}
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		iVar0 = func_150(unk_0x95B959F18401C09A());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1589668 != func_29() && func_122(Global_1589668)) && func_27(func_118(Global_1589668)) == 11) && func_66(Global_1589668, -1)) && unk_0xD470A4E16E9AAE0E(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(Global_1589668), 0), -1988428699))
			{
				return 1;
			}
			else if (func_114(iVar0))
			{
				return 1;
			}
			else if (func_122(unk_0x95B959F18401C09A()) || func_154())
			{
				return 1;
			}
		}
	}
	if (func_153(unk_0x95B959F18401C09A()) || func_149(unk_0x95B959F18401C09A()))
	{
		switch (Global_1319095)
		{
			case 1:
				if (Global_262145.f_22457)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22458)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22459)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319093 == 1)
	{
		return 1;
	}
	if (func_148(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574432 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_148(int iParam0)
{
	return Global_262145.f_5003[iParam0] == Global_4456448.f_138474;
}

int func_149(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_151(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_2, 6);
	}
	return 0;
}

int func_152(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_154()
{
	return unk_0x0E4018692D92041D(Global_1671295, 6);
}

int func_155(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 6);
	}
	return 0;
}

bool func_156(int iParam0)
{
	return Global_262145.f_4994[4] == iParam0;
}

int func_157(int iParam0)
{
	if (unk_0x541D5C57194E73C4(iParam0) == 387748548 || unk_0x541D5C57194E73C4(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_159(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_160()
{
	return unk_0x0E4018692D92041D(Local_149.f_5, 7);
}

void func_161()
{
	if (!func_98())
	{
		if (func_28(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!func_167())
			{
				if (func_160())
				{
					if ((func_163() && !func_146()) && func_162("MP_HTRUCK_T_2"))
					{
						if (unk_0x1771F6BAF60B44FA(2, 176) || unk_0xC6FADCE8D6467372(2, 176))
						{
							func_133(1);
							func_111(1);
							unk_0xEDF90B96BED57BCE(1);
						}
					}
				}
				else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if ((!unk_0xFAC8F20FBC764F4D() && !unk_0x6B59932722922B69()) && !func_162("HUNTGUN_1b"))
					{
						func_130("HUNTGUN_1b", -1);
					}
					else if (!func_162("HUNTGUN_1b"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					else if (unk_0x833B1A3D9F713E03(0, 51) || unk_0x5EBE50D55314CEAD(0, 51))
					{
						func_133(1);
						func_111(1);
						unk_0xEDF90B96BED57BCE(1);
					}
				}
				else if (func_162("HUNTGUN_1b"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
			else if (func_162("HUNTGUN_1b"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
	}
}

int func_162(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_163()
{
	if ((func_26(unk_0x95B959F18401C09A(), 0) && Global_1319089 == 2) && func_164())
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if ((((unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_165(unk_0x33CD235DF1E6A94E(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_147())
		{
			return 0;
		}
	}
	return 1;
}

int func_165(int iParam0, int iParam1)
{
	if (func_166(iParam0))
	{
		if (unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 1 || unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (func_47(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (Global_262145.f_24023)
		{
			return 1;
		}
	}
	if (func_172())
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (func_114(Global_1589668))
		{
			return 1;
		}
	}
	if (func_124(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (func_43(0))
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (func_168())
	{
		return 1;
	}
	if (!func_136())
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_1319093)
	{
		return 1;
	}
	if (func_26(unk_0x95B959F18401C09A(), 0))
	{
		if (func_47(func_113()))
		{
			if (unk_0xD4B4F68F3449CBEC(func_113(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x95BBE5C8D52FE24B(func_113()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (!func_160())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (func_47(iVar0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, 1) };
				if (unk_0x8C1596BAD35D957A(vVar1, &fVar2, 0, 0))
				{
					if (vdist(vVar1, vVar1.x, vVar1.y, fVar2) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_168()
{
	return Global_91021;
}

int func_169()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_1671295.f_163;
}

int func_171()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_172()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

bool func_173(int iParam0)
{
	return Local_149.f_110 == iParam0;
}

void func_174()
{
	vector3 vVar0;
	
	if (func_173(1) || func_173(2))
	{
		if (func_47(func_30()))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(func_30(), 1) };
			unk_0xFB8EF66C2F0B1429(vVar0, 100f, 200f);
			unk_0x56297A8CE5365606();
			if ((unk_0xE77FA521699F639C() % 120) == 0)
			{
				unk_0xC79AC4010C2279A0(vVar0, 300f, 30);
			}
		}
	}
	if (func_173(2))
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			func_138(unk_0x95B959F18401C09A(), 1, 0, 0);
		}
		func_175();
		unk_0xAE4810E427AD9203(0, 19, 1);
		unk_0xAE4810E427AD9203(0, 166, 1);
		unk_0xAE4810E427AD9203(0, 167, 1);
		unk_0xAE4810E427AD9203(0, 168, 1);
		unk_0xAE4810E427AD9203(0, 169, 1);
		unk_0xAE4810E427AD9203(2, 218, 1);
		unk_0xAE4810E427AD9203(2, 219, 1);
		unk_0xAE4810E427AD9203(2, 220, 1);
		unk_0xAE4810E427AD9203(2, 221, 1);
		unk_0xAE4810E427AD9203(2, 205, 1);
		unk_0xAE4810E427AD9203(2, 206, 1);
		unk_0xAE4810E427AD9203(2, 207, 1);
		unk_0xAE4810E427AD9203(2, 208, 1);
		unk_0xAE4810E427AD9203(2, 209, 1);
		unk_0xAE4810E427AD9203(2, 210, 1);
		unk_0xAE4810E427AD9203(2, 202, 1);
		unk_0xAE4810E427AD9203(2, 80, 1);
		unk_0xAE4810E427AD9203(2, 51, 1);
		unk_0xAE4810E427AD9203(2, 190, 1);
		unk_0xAE4810E427AD9203(2, 199, 1);
		unk_0xAE4810E427AD9203(2, 200, 1);
		if (unk_0x5D79F3D06EB318A0(0))
		{
			unk_0xAE4810E427AD9203(0, 238, 1);
			unk_0xAE4810E427AD9203(0, 237, 1);
		}
		if (unk_0xD9C92B0885A075F8())
		{
			unk_0xAE4810E427AD9203(0, 201, 1);
			unk_0xAE4810E427AD9203(0, 202, 1);
			unk_0xAE4810E427AD9203(0, 188, 1);
			unk_0xAE4810E427AD9203(0, 187, 1);
			unk_0xAE4810E427AD9203(0, 189, 1);
			unk_0xAE4810E427AD9203(2, 195, 1);
			unk_0xAE4810E427AD9203(2, 196, 1);
			unk_0xAE4810E427AD9203(2, 198, 1);
			unk_0xAE4810E427AD9203(2, 197, 1);
		}
	}
}

void func_175()
{
	func_176();
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		unk_0x3FD9339AA95E323F(0, iVar0, 1);
		iVar0++;
	}
}

int func_177()
{
	if (!func_143())
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!func_160())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!func_178(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0) == unk_0x33CD235DF1E6A94E() && unk_0x67FFBB75D2430704(iParam0, 0, 1))
		{
			switch (unk_0x541D5C57194E73C4(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_179()
{
	return unk_0x0E4018692D92041D(Global_1681627, 0);
}

int func_180()
{
	var uVar0;
	
	func_188(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_187())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_186())
	{
		return 1;
	}
	if (func_185(157))
	{
		if (!func_184())
		{
			return 1;
		}
	}
	if (func_185(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_181() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_181()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_181()
{
	switch (func_183())
	{
		case 0:
			return func_182();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_182()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_183()
{
	return Global_25765;
}

bool func_184()
{
	return Global_2448756.f_586;
}

int func_185(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_186()
{
	return Global_2458613;
}

bool func_187()
{
	return Global_2448756.f_581;
}

void func_188(var uParam0)
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
					func_189(iVar0);
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

void func_189(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_190(iVar2, &bVar3))
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

int func_190(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, false, 1);
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

void func_191()
{
	wait(0);
}

void func_192(bool bParam0)
{
	int iVar0;
	
	if (!func_160())
	{
		if (func_162("HUNTGUN_1b"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		unk_0x3DE34B8864800B14();
	}
	if (func_47(func_30()))
	{
		unk_0x21675F65D589CACE();
	}
	unk_0x30F6F0B876E12AD8("helicopterhud");
	unk_0x30F6F0B876E12AD8("droneHUD");
	unk_0x83A1D480DB0B52CC(&(Local_149.f_62));
	func_200();
	func_199();
	if (func_110())
	{
		func_109(0);
	}
	unk_0xD3260F66BCA580A2();
	unk_0x740205F4F57B2537();
	if (func_143() && !func_122(unk_0x95B959F18401C09A()))
	{
		if (!unk_0x5D1B43675B257F3A())
		{
			func_138(unk_0x95B959F18401C09A(), 1, 0, 0);
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
		}
	}
	func_50(&(Local_149.f_113));
	func_50(&(Local_149.f_115));
	func_50(&(Local_149.f_117));
	func_50(&(Local_149.f_119));
	func_132(0);
	func_131(0);
	Local_149.f_32 = -1;
	Local_149.f_31 = 0;
	Local_149.f_5 = 0;
	Local_149.f_24 = 0;
	Local_149.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_17[iVar0] = 0;
		func_50(&(Local_149.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_87();
	if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380, 0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_380), 0);
	}
	Local_149.f_48 = 0;
	func_198();
	func_196(1, -1);
	if (unk_0xE38E3CF1625A4145(Local_149.f_108))
	{
		unk_0x1ABDB383C83A336A(&(Local_149.f_108));
	}
	if (unk_0xE38E3CF1625A4145(Local_149.f_109))
	{
		unk_0x1ABDB383C83A336A(&(Local_149.f_109));
	}
	if (!bParam0)
	{
		func_195(0);
		func_194();
	}
	else
	{
		func_193(0);
	}
}

void func_193(bool bParam0)
{
	int iVar0;
	
	Local_149.f_33 = 100;
	Local_149.f_59 = 50f;
	Local_149.f_62 = unk_0x199B24FF79A52CCF(func_38());
	unk_0xBE799439B122CA21("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	unk_0x0A06DEFFF267C21E("helicopterhud", 0);
	unk_0x0A06DEFFF267C21E("droneHUD", 0);
	Local_149.f_29 = unk_0x8CCC0A0504C52531();
	Local_149.f_30 = unk_0x8CCC0A0504C52531();
	func_111(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_34[iVar0] = -1;
		Local_149.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_194()
{
	unk_0x5894DC159447E10A();
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		if (!func_179())
		{
			unk_0x8950ED5730F62EE8(&Global_1681627, 0);
		}
	}
	else if (func_179())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681627, 0);
	}
}

void func_196(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		unk_0x019859CB72B1DB4C(15);
		Global_17411.f_8353 = 0;
	}
	unk_0x5E1FA2076D53C3F5(0f);
	if (Global_17411.f_5628[iVar0])
	{
		unk_0xB073DB452891DC0B(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		unk_0x30F6F0B876E12AD8("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		unk_0x30F6F0B876E12AD8("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_197(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_197(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*uParam0))
		{
			unk_0x83A1D480DB0B52CC(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_198()
{
	if (Local_149.f_30 != -1)
	{
		unk_0xCBE6AF58552C63B2(Local_149.f_30);
		unk_0x44D426446FAF55FB(Local_149.f_30);
		Local_149.f_30 = -1;
	}
	if (Local_149.f_29 != -1)
	{
		unk_0xCBE6AF58552C63B2(Local_149.f_29);
		unk_0x44D426446FAF55FB(Local_149.f_29);
		Local_149.f_29 = -1;
	}
	if (Local_149.f_49 != -1)
	{
		unk_0xCBE6AF58552C63B2(Local_149.f_49);
		unk_0x44D426446FAF55FB(Local_149.f_49);
		Local_149.f_49 = -1;
	}
	unk_0x7CED302277C0F3D3("DLC_GR_MOC_Turret_View_Scene");
	unk_0xE0EAA5C6AE73CD58();
}

void func_199()
{
	if (Local_149.f_6 == -1)
	{
		unk_0xCBE6AF58552C63B2(Local_149.f_6);
		unk_0x44D426446FAF55FB(Local_149.f_6);
		Local_149.f_6 = -1;
	}
}

void func_200()
{
	if (unk_0x117DAF3BF7232886(Local_149.f_61))
	{
		unk_0x2F8A4DF7D0DFF0A8(Local_149.f_61, 0);
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		unk_0x3DE34B8864800B14();
	}
}

void func_201(struct<19> Param0, var uParam1, var uParam2)
{
	unk_0x210E46A190FB3CB3(32, 0, Param0.f_16);
	func_204(0, -1, 0);
	unk_0x7643BB59992A9E6E(&uLocal_148, 1);
	unk_0x568D314D73140729(&uLocal_115, 33);
	if (!func_203())
	{
		func_192(0);
	}
	if (unk_0xB331FCEB94EB05C8())
	{
	}
	else
	{
		func_192(0);
	}
	if (Param0.f_18 == 1)
	{
		func_202(1);
	}
	else
	{
		func_202(0);
	}
	func_193(1);
}

void func_202(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Local_149.f_5, 7))
		{
			unk_0x8950ED5730F62EE8(&(Local_149.f_5), 7);
		}
	}
	else if (unk_0x0E4018692D92041D(Local_149.f_5, 7))
	{
		unk_0xCE689A8E8C42ED78(&(Local_149.f_5), 7);
	}
}

int func_203()
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
		if (func_187())
		{
			return 0;
		}
		if (func_185(155))
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

int func_204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_194();
			}
			else
			{
				return 0;
			}
		}
		if (!func_205())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_194();
					}
					else
					{
						return 0;
					}
				}
				if (func_187())
				{
					if (!bParam2)
					{
						func_194();
					}
					else
					{
						return 0;
					}
				}
				if (func_185(155))
				{
					if (!bParam2)
					{
						func_194();
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
					func_194();
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
				func_194();
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
			func_194();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_205()
{
	return Global_1312844;
}

