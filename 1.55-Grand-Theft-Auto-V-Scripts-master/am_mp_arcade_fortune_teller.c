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
	var uLocal_79 = -1;
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
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	var uLocal_130 = 32;
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
	var uLocal_149 = 0;
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
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	struct<117> Local_164 = { 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> ScriptParam_0 = { 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x02BFF15CAA701972())
	{
		func_125(ScriptParam_0);
	}
	else
	{
		func_122();
	}
	while (true)
	{
		func_121();
		if (func_110())
		{
			func_122();
		}
		if (func_102())
		{
			func_122();
		}
		func_2();
		if (unk_0x443E2CA72E118E64())
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
	switch (Local_164.f_65)
	{
		case 0:
			func_96();
			break;
		
		case 1:
			func_74();
			break;
		
		case 2:
			func_43();
			break;
	}
	func_41();
	func_3();
}

void func_3()
{
	switch (Local_164.f_116)
	{
		case 1:
			func_40();
			break;
		
		case 2:
			func_36();
			break;
		
		case 3:
			func_28();
			break;
		
		case 4:
			func_23();
			break;
		
		case 5:
			func_8();
			break;
	}
	func_4();
}

void func_4()
{
	if (Local_164.f_116 > 0 && !unk_0x419E13582192CFEA(Local_164.f_64))
	{
		if (Local_164.f_8 != -1)
		{
			unk_0x791B4C3811D53DFA(Local_164.f_8);
			unk_0xBAB6F7501A822416(Local_164.f_8);
			Local_164.f_8 = -1;
		}
		if (Local_164.f_7 != -1)
		{
			unk_0x791B4C3811D53DFA(Local_164.f_7);
			unk_0xBAB6F7501A822416(Local_164.f_7);
			Local_164.f_7 = -1;
		}
		unk_0xF9135F131C423364(func_7(Local_164.f_10));
		func_6(0);
		func_5(&(Local_164.f_11));
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6(int iParam0)
{
	Local_164.f_116 = iParam0;
}

char* func_7(bool bParam0)
{
	char* sVar0;
	
	sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@MALE@";
	if (bParam0)
	{
		sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@FEMALE@";
	}
	return sVar0;
}

void func_8()
{
	struct<16> Var0;
	
	if (unk_0x698F51FB33ADAF7B(Local_164.f_64, func_7(Local_164.f_10), "prop_body_loop_outro", 3))
	{
		return;
	}
	if (Local_164.f_8 != -1)
	{
		unk_0x791B4C3811D53DFA(Local_164.f_8);
		unk_0xBAB6F7501A822416(Local_164.f_8);
		Local_164.f_8 = -1;
	}
	if (Local_164.f_7 != -1)
	{
		unk_0x791B4C3811D53DFA(Local_164.f_7);
		unk_0xBAB6F7501A822416(Local_164.f_7);
		Local_164.f_7 = -1;
	}
	StringCopy(&Var0, "HS3MN_EXIT", 64);
	func_10(Var0, 1);
	unk_0xF9135F131C423364(func_7(Local_164.f_10));
	func_6(0);
	func_5(&(Local_164.f_11));
	Local_164.f_6 = 0;
	Local_164.f_9 = -1;
	func_9(9);
}

void func_9(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Local_164, iParam0))
	{
		unk_0xC664C0067EEAB8D1(&Local_164, iParam0);
	}
}

void func_10(char[64] cParam0, bool bParam16)
{
	Local_164.f_9 = func_21(unk_0x1146A9AE09CE2B14());
	Local_164.f_76.f_36 = 11;
	Local_164.f_76.f_35 = Local_164.f_9;
	Local_164.f_76 = { cParam0 };
	Local_164.f_76.f_33 = 1;
	func_11(&(Local_164.f_76), bParam16);
}

void func_11(var uParam0, bool bParam1)
{
	struct<39> Var0;
	bool bVar39;
	int iVar40;
	
	Var0 = 1210822955;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!func_20(&(uParam0->f_37)))
	{
		func_19(&(uParam0->f_37), 0, 0);
	}
	bVar39 = true;
	if (unk_0xDA654EB115F9FF7D(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (func_20(&(uParam0->f_37)) && !func_18(&(uParam0->f_37), 1000, 0))
		{
			bVar39 = false;
		}
		else
		{
			func_5(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		func_5(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar39)
	{
		iVar40 = func_17(unk_0x1146A9AE09CE2B14());
		if (bParam1)
		{
			iVar40 = func_12(1, 1);
		}
		if (iVar40 != 0)
		{
			uParam0->f_32 = 1;
			unk_0xA5C82A39FF8ED272(1, &Var0, 39, iVar40);
		}
	}
}

var func_12(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_16(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_13(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_13(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_14(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_14(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_15()
{
	return Global_1312763;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

var func_17(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

int func_21(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2426865[iParam0 /*449*/].f_429.f_1;
	}
	return -1;
}

int func_22()
{
	return -1;
}

void func_23()
{
	if (func_20(&(Local_164.f_11)))
	{
		if (func_18(&(Local_164.f_11), Local_164.f_6, 0))
		{
			if (func_27())
			{
				if (!func_26(6))
				{
					unk_0xD89D6925FE9F861C(Local_164.f_64, 1, 1);
					unk_0xD89D6925FE9F861C(Local_164.f_64, 0, 1);
					func_25(6);
				}
				if (unk_0xFFE2CF1579FA5C68(Local_164.f_64, "prop_body_loop_outro", func_7(Local_164.f_10), 0.125f, 0, 0, 0, 0, 0))
				{
					if (func_24(unk_0x1146A9AE09CE2B14(), Local_164.f_64))
					{
						Local_164.f_8 = unk_0x5AD02BBC63E31E46();
						unk_0x4569EA65F1B056ED(Local_164.f_8, "fortune_bell", unk_0xD6E677FAD7521410(Local_164.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
					}
					func_9(6);
					func_6(5);
				}
			}
		}
	}
}

int func_24(int iParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if ((!unk_0x419E13582192CFEA(uParam1) || !unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iParam0))) || unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
	{
		return 0;
	}
	Var0 = { unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 1) };
	fVar3 = Var0.f_2;
	if (fVar3 <= -48f)
	{
		return unk_0x0BABEFEA577FCFA4(Var0, unk_0xD6E677FAD7521410(uParam1, 1), 1) <= 4f;
	}
	return 0;
}

void func_25(int iParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Local_164, iParam0))
	{
		unk_0x191DDA30577F440A(&Local_164, iParam0);
	}
}

bool func_26(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Local_164, iParam0);
}

bool func_27()
{
	unk_0x068BDE31F7D112BB(func_7(Local_164.f_10));
	return unk_0x0EC2B29D4172D225(func_7(Local_164.f_10));
}

void func_28()
{
	if (func_20(&(Local_164.f_11)))
	{
		if (func_18(&(Local_164.f_11), func_34(Local_164.f_4) + 2000, 0))
		{
			func_10(func_33(Local_164.f_3), 0);
			if (Local_164.f_76.f_32)
			{
				func_32(&(Local_164.f_11), 0, 0);
				Local_164.f_6 = func_29();
				func_25(9);
				func_6(4);
			}
		}
	}
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 5200;
	iVar1 = func_34(Local_164.f_4);
	iVar2 = func_30(Local_164.f_3);
	switch (iVar1)
	{
		case 2000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 5200;
					break;
				
				case 8000:
					iVar0 = 9400;
					break;
				
				case 12500:
					iVar0 = 16800;
					break;
			}
			break;
		
		case 4000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 6500;
					break;
				
				case 8000:
					iVar0 = 11000;
					break;
				
				case 12500:
					iVar0 = 15300;
					break;
			}
			break;
		
		case 7000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 4300;
					break;
				
				case 8000:
					iVar0 = 8700;
					break;
				
				case 12500:
					iVar0 = 16200;
					break;
			}
			break;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 5000;
	iVar1 = func_31(iParam0);
	if (iVar1 <= 5000)
	{
		iVar0 = 5000;
	}
	else if (iVar1 > 5000 && iVar1 <= 8000)
	{
		iVar0 = 8000;
	}
	else if (iVar1 > 8000)
	{
		iVar0 = 12500;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		
		case 1:
			return 8000;
		
		case 2:
			return 7000;
		
		case 3:
			return 14000;
		
		case 4:
			return 9000;
		
		case 5:
			return 7000;
		
		case 6:
			return 7000;
		
		case 7:
			return 6000;
		
		case 8:
			return 7000;
		
		case 9:
			return 1000;
		
		case 10:
			return 9000;
		
		case 11:
			return 7000;
		
		case 12:
			return 6000;
		
		case 13:
			return 9000;
		
		case 14:
			return 8000;
		
		case 15:
			return 11000;
		
		case 16:
			return 3000;
		
		case 17:
			return 3000;
		
		case 18:
			return 7000;
		
		case 19:
			return 7000;
		
		case 20:
			return 9000;
		
		case 21:
			return 9000;
		
		case 22:
			return 4000;
		
		case 23:
			return 5000;
		
		case 24:
			return 4000;
		
		case 25:
			return 8000;
		
		case 26:
			return 8000;
		
		case 27:
			return 7000;
		
		case 28:
			return 7000;
		
		case 29:
			return 7000;
		
		case 30:
			return 4000;
		
		case 31:
			return 4000;
		
		case 32:
			return 6000;
		
		case 33:
			return 7000;
		
		case 34:
			return 7000;
		
		case 35:
			return 6000;
		
		case 36:
			return 5000;
		
		case 37:
			return 4000;
		
		case 38:
			return 6000;
		
		case 39:
			return 5000;
		
		case 40:
			return 7000;
		
		case 41:
			return 6000;
		
		case 42:
			return 7000;
		
		case 43:
			return 6000;
		
		case 44:
			return 7000;
		
		case 45:
			return 7000;
		
		case 46:
			return 7000;
		
		case 47:
			return 7000;
		
		case 48:
			return 7000;
		
		default:
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

struct<16> func_33(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_FT_", 64);
	if (iParam0 > 28)
	{
		StringIntConCat(&Var0, iParam0 + 2, 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HS3MN_FT_130", 64);
			break;
		
		case 41:
			switch (unk_0x155BA90FAEAE7861())
			{
				case 1420204096:
					StringCopy(&Var0, "HS3MN_FT_43", 64);
					break;
				
				case 1840358669:
				case -1530260698:
				case 916995460:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
				
				case -1148613331:
				case 282916021:
					StringCopy(&Var0, "HS3MN_FT_45", 64);
					break;
				
				case -318724249:
				case 821931868:
					StringCopy(&Var0, "HS3MN_FT_46", 64);
					break;
				
				case -1233681761:
					StringCopy(&Var0, "HS3MN_FT_47", 64);
					break;
				
				case -273223690:
				case -1429616491:
					StringCopy(&Var0, "HS3MN_FT_48", 64);
					break;
				
				default:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
			}
			break;
		
		case 42:
			StringCopy(&Var0, "HS3MN_FT_55", 64);
			break;
		
		case 43:
			StringCopy(&Var0, "HS3MN_FT_56", 64);
			break;
		
		case 44:
			StringCopy(&Var0, "HS3MN_FT_50", 64);
			break;
		
		case 45:
			StringCopy(&Var0, "HS3MN_FT_51", 64);
			break;
		
		case 46:
			StringCopy(&Var0, "HS3MN_FT_57", 64);
			break;
		
		case 47:
			StringCopy(&Var0, "HS3MN_FT_58", 64);
			break;
		
		case 48:
			StringCopy(&Var0, "HS3MN_FT_53", 64);
			break;
	}
	return Var0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000;
	iVar1 = func_35(iParam0);
	if (iVar1 <= 2000)
	{
		iVar0 = 2000;
	}
	else if (iVar1 > 2000 && iVar1 <= 4000)
	{
		iVar0 = 4000;
	}
	else if (iVar1 > 4000)
	{
		iVar0 = 7000;
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4000;
		
		case 1:
			return 4000;
		
		case 2:
			return 3000;
		
		case 3:
			return 3000;
		
		case 4:
			return 2000;
		
		case 5:
			return 4000;
		
		case 6:
			return 3000;
		
		case 7:
			return 4000;
		
		case 8:
			return 7000;
		
		case 9:
			return 3000;
		
		default:
	}
	return 0;
}

void func_36()
{
	float fVar0;
	
	if (unk_0x698F51FB33ADAF7B(Local_164.f_64, func_7(Local_164.f_10), "prop_body_loop_intro", 3))
	{
		fVar0 = unk_0x4598B7969D5B0A28(Local_164.f_64, func_7(Local_164.f_10), "prop_body_loop_intro");
		if (fVar0 >= 0.96f)
		{
			if (func_38())
			{
				func_37();
				func_6(3);
			}
		}
	}
	else if (func_38())
	{
		func_37();
		func_6(3);
	}
}

void func_37()
{
	struct<20> Var0;
	
	Local_164.f_19 = 1;
	Local_164.f_19.f_1 = func_7(Local_164.f_10);
	Local_164.f_19.f_2 = "prop_body_loop";
	Local_164.f_19.f_3 = 0f;
	Local_164.f_19.f_4 = 1f;
	Local_164.f_19.f_5 = 1f;
	Local_164.f_19.f_17 = 0.125f;
	Local_164.f_19.f_18 = 0.125f;
	Local_164.f_19.f_19 = -1;
	Local_164.f_19.f_20 = 1;
	Local_164.f_19.f_21 = 0;
	Local_164.f_41 = 1;
	Local_164.f_41.f_1 = func_7(Local_164.f_10);
	Local_164.f_41.f_2 = "prop_mouth_loop";
	Local_164.f_41.f_3 = 0f;
	Local_164.f_41.f_4 = 1f;
	Local_164.f_41.f_5 = 1f;
	Local_164.f_41.f_17 = 0.125f;
	Local_164.f_41.f_18 = 0.125f;
	Local_164.f_41.f_19 = -1;
	Local_164.f_41.f_20 = 289;
	Local_164.f_41.f_21 = 0;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	unk_0x2E54D99E9DDB5FAF(Local_164.f_64, &(Local_164.f_19), &(Local_164.f_41), &Var0, 0.125f, 0.125f);
	func_19(&(Local_164.f_11), 0, 0);
}

bool func_38()
{
	struct<16> Var0;
	
	Var0 = { func_39(Local_164.f_4) };
	func_10(Var0, 0);
	return Local_164.f_76.f_32;
}

struct<16> func_39(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_PRE", 64);
	if (iParam0 > 0)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	return Var0;
}

void func_40()
{
	if (func_27())
	{
		if (unk_0xFFE2CF1579FA5C68(Local_164.f_64, "prop_body_loop_intro", func_7(Local_164.f_10), 0.125f, 0, 0, 0, 0, 0))
		{
			if (func_24(unk_0x1146A9AE09CE2B14(), Local_164.f_64))
			{
				Local_164.f_7 = unk_0x5AD02BBC63E31E46();
				unk_0x4569EA65F1B056ED(Local_164.f_7, "fortune_mech_loop", unk_0xD6E677FAD7521410(Local_164.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
			}
			func_6(2);
		}
	}
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 1537636534:
						if (Global_1394274.f_819)
						{
							return;
						}
						func_42(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_42(int iParam0)
{
	struct<6> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 6))
	{
		if (unk_0xFCC26BA7572E9F1F(Var0.f_1))
		{
			if (unk_0x419E13582192CFEA(Local_164.f_64))
			{
				Local_164.f_3 = Var0.f_4;
				Local_164.f_4 = Var0.f_3;
				Local_164.f_9 = Var0.f_5;
				Local_164.f_10 = Var0.f_2;
				func_6(1);
			}
		}
	}
}

void func_43()
{
	if (func_73("ARC_CAB_FRT_TLL_H"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	func_68();
	Local_164 = 0;
	Local_164.f_1 = -1;
	Local_164.f_10 = 0;
	func_5(&(Local_164.f_13));
	func_5(&(Local_164.f_15));
	func_67(0);
	func_66(&(Local_164.f_65), 0);
	func_25(8);
	func_56();
	func_44(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
}

void func_44(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
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
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_55())
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
	if (!unk_0x02BFF15CAA701972())
	{
		uVar0 = iParam2;
		unk_0xF99B8860747709DD(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xE45310E861787FC2())
		{
			bVar1 = false;
		}
		if (!func_53())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x8CFC2F41A749E236(iParam0) && (unk_0xCAD1755E530A6012(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_13(unk_0x1146A9AE09CE2B14(), 0) && !func_52()))
				{
					unk_0x4603196EEEA2355C(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x02BFF15CAA701972() && !bVar19)
					{
						unk_0x387A0B2797EBDE5F(0);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_49(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_48(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(uVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(uVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(uVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(uVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(uVar27) && unk_0x9038A2103B9BFD38(uVar27))
				{
					unk_0x9C4430B10B361917(uVar27);
				}
				unk_0xF5143FB7B9EC876D(uVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_47();
					func_46();
				}
				if (unk_0x7A4185C9A76C12B2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xCE84F8AB9BD41C13())
				{
				}
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_48(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(uVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(uVar27, 1);
						}
					}
					if (func_45(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(uVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x03903A362E41A74F(iParam0, 0);
				}
				else
				{
					unk_0x03903A362E41A74F(iParam0, 1);
				}
				unk_0x1D7A4E9E23D306D6(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(uVar27) && !unk_0xC49311A2A500FF09(uVar27, 0))
					{
						unk_0x16D66F11FE644901(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xF99B8860747709DD(iParam0, bParam1, iVar28);
		}
	}
}

bool func_45(int iParam0)
{
	return iParam0 == 17;
}

void func_46()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_47()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_48(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0x72D30262CF8C8603(iParam1))
			{
				if (!unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_51();
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0xA01D7927903507FB(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x191DDA30577F440A(&(Global_2359302.f_67), 1);
			}
		}
		if (func_13(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_50(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_51()
{
	int iVar0;
	
	if (!unk_0xDD14CDB3B8003696())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x5F95E51ABC3FC59A(iVar0);
				iVar0++;
			}
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 2);
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_52()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_53()
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return Global_1312485.f_18;
}

int func_55()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Local_164.f_2 == 19)
	{
		if (!func_63(27247, -1, -1))
		{
			func_62(27247, 1, -1, 1);
			func_61(1);
			func_62(28191, 1, -1, 1);
			func_60(10);
			func_57(18, 0);
		}
	}
	else if (Local_164.f_2 == 41)
	{
		unk_0x191DDA30577F440A(&Global_43185, 1);
	}
	else if (Local_164.f_2 == 42)
	{
		unk_0x191DDA30577F440A(&Global_43185, 2);
	}
	else if (Local_164.f_2 == 43)
	{
		unk_0x191DDA30577F440A(&Global_43185, 3);
	}
	else if (Local_164.f_2 == 44)
	{
		unk_0x191DDA30577F440A(&Global_43185, 4);
	}
	else if (Local_164.f_2 == 45)
	{
		unk_0x191DDA30577F440A(&Global_43185, 5);
	}
	else if (Local_164.f_2 == 46)
	{
		unk_0x191DDA30577F440A(&Global_43185, 7);
	}
	else if (Local_164.f_2 == 47)
	{
		unk_0x191DDA30577F440A(&Global_43185, 10);
	}
	else if (Local_164.f_2 == 48)
	{
		unk_0x191DDA30577F440A(&Global_43185, 8);
	}
	else if (Local_164.f_2 == 22)
	{
		func_62(28250, 1, -1, 1);
	}
	else if (Local_164.f_2 == 23)
	{
		func_62(28251, 1, -1, 1);
	}
	else if (Local_164.f_2 == 24)
	{
		func_62(28252, 1, -1, 1);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(6);
	}
	switch (iParam0)
	{
		case 0:
			func_58(3);
			break;
		
		case 1:
			func_58(12);
			break;
		
		case 7:
			func_58(21);
			break;
		
		case 8:
			func_58(31);
			break;
		
		case 9:
			func_58(32);
			break;
		
		case 10:
			func_58(33);
			break;
		
		case 11:
			func_58(34);
			break;
		
		case 12:
			func_58(35);
			break;
		
		case 13:
			func_58(36);
			break;
		
		case 14:
			func_58(37);
			break;
		
		case 15:
			func_58(38);
			break;
		
		case 16:
			func_58(39);
			break;
		
		case 17:
			func_58(40);
			break;
		
		case 18:
			func_58(41);
			break;
		
		case 4:
			func_58(59);
			break;
		
		case 19:
			func_58(70);
			break;
	}
}

void func_58(int iParam0)
{
	int iVar0;
	
	if (!func_59(iParam0))
	{
		iVar0 = iParam0;
		if (iVar0 > 31)
		{
			if (iVar0 <= 63)
			{
				iVar0 = (iVar0 - 32);
				unk_0x191DDA30577F440A(&(Global_2544210.f_6697), iVar0);
			}
			else if (iVar0 <= 95)
			{
				iVar0 = (iVar0 - 64);
				unk_0x191DDA30577F440A(&(Global_2544210.f_6698), iVar0);
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_6696), iVar0);
		}
	}
}

bool func_59(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	uVar1 = Global_2544210.f_6696;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2544210.f_6697;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2544210.f_6698;
			iVar0 = (iVar0 - 64);
		}
	}
	return unk_0x234B68AC2E35ED5A(uVar1, iVar0);
}

void func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_58(0);
			break;
		
		case 1:
			func_58(1);
			break;
		
		case 2:
			func_58(2);
			break;
		
		case 3:
			func_58(5);
			break;
		
		case 4:
			func_58(7);
			break;
		
		case 5:
			func_58(8);
			break;
		
		case 9:
			func_58(14);
			break;
		
		case 6:
			func_58(9);
			break;
		
		case 7:
			func_58(10);
			break;
		
		case 8:
			func_58(11);
			break;
		
		case 10:
			func_58(15);
			break;
		
		case 11:
			func_58(16);
			break;
		
		case 12:
			func_58(17);
			break;
		
		case 13:
			func_58(18);
			break;
		
		case 14:
			func_58(19);
			break;
		
		case 15:
			func_58(20);
			break;
		
		case 20:
			func_58(22);
			break;
		
		case 21:
			func_58(23);
			break;
		
		case 22:
			func_58(24);
			break;
		
		case 23:
			func_58(25);
			break;
		
		case 24:
			func_58(26);
			break;
		
		case 25:
			func_58(27);
			break;
		
		case 26:
			func_58(28);
			break;
		
		case 27:
			func_58(29);
			break;
		
		case 28:
			func_58(30);
			break;
		
		case 29:
			func_58(43);
			break;
		
		case 30:
			func_58(44);
			break;
		
		case 31:
			func_58(45);
			break;
		
		case 32:
			func_58(46);
			break;
		
		case 33:
			func_58(47);
			break;
		
		case 34:
			func_58(48);
			break;
		
		case 35:
			func_58(49);
			break;
		
		case 36:
			func_58(50);
			break;
		
		case 37:
			func_58(51);
			break;
		
		case 38:
			func_58(52);
			break;
		
		case 16:
			func_58(53);
			break;
		
		case 17:
			func_58(54);
			break;
		
		case 18:
			func_58(55);
			break;
		
		case 19:
			func_58(56);
			break;
		
		case 39:
			func_58(61);
			break;
		
		case 40:
			func_58(65);
			break;
		
		case 41:
			func_58(66);
			break;
		
		case 43:
			func_58(64);
			break;
		
		case 42:
			func_58(63);
			break;
		
		case 44:
			func_58(67);
			break;
		
		case 45:
			func_58(68);
			break;
		
		case 46:
			func_58(69);
			break;
		
		case 47:
			func_58(72);
			break;
		
		case 48:
			func_58(76);
			break;
		
		case 49:
			func_58(74);
			break;
		
		case 50:
			func_58(75);
			break;
		
		case 51:
			func_58(73);
			break;
	}
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_2, 14))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_2), 14);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_2, 14))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_2), 14);
	}
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

void func_66(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_67(int iParam0)
{
	Local_164.f_115 = iParam0;
}

void func_68()
{
	struct<11> Var0;
	struct<16> Var11;
	
	Var0 = -438538740;
	Var0.f_2 = 1;
	Var0.f_6 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_13));
	Var11 = { func_33(Local_164.f_2) };
	Var0.f_8 = unk_0x15173FB88ABC94F9(func_72(&Var11));
	if (Local_164.f_2 == 19)
	{
		Var0.f_9 = 1;
	}
	if (unk_0x1146A9AE09CE2B14() != func_22())
	{
		if (func_71(unk_0x1146A9AE09CE2B14()))
		{
			Var0.f_10 = 589001948;
		}
		else if (func_69(unk_0x1146A9AE09CE2B14()))
		{
			Var0.f_10 = 2003554330;
		}
		else
		{
			Var0.f_10 = 0;
		}
	}
	else
	{
		Var0.f_10 = 0;
	}
	unk_0x0243B92F54E119C8(&Var0);
}

int func_69(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_16(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_70(Global_2426865[iParam0 /*449*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_70(int iParam0)
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
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_71(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_16(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_70(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

bool func_73(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_74()
{
	switch (Local_164.f_115)
	{
		case 0:
			func_95();
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_86();
			break;
		
		case 3:
			func_82();
			break;
		
		case 4:
			func_75();
			break;
	}
}

void func_75()
{
	if (!func_26(5))
	{
		Local_164.f_67.f_4 = 0;
		Local_164.f_67.f_3 = 0;
		func_81(&(Local_164.f_67), 11);
		if (Local_164.f_67.f_5)
		{
			func_25(5);
		}
	}
	else if (func_76(unk_0x7D2B9E6A64637269(), 11))
	{
		func_66(&(Local_164.f_65), 2);
	}
}

int func_76(var uParam0, int iParam1)
{
	struct<18> Var0;
	
	if (func_80(uParam0))
	{
		Var0.f_2 = 14;
		func_77(Local_164.f_66, iParam1, 0, &Var0);
		return unk_0x698F51FB33ADAF7B(uParam0, &(Var0.f_17), Var0.f_1, 3);
	}
	return 0;
}

void func_77(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_78())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "start_game";
			break;
		
		case 1:
			uParam3->f_1 = "idle";
			break;
		
		case 11:
			uParam3->f_1 = "exit";
			break;
		
		case 21:
			uParam3->f_1 = "reaction_amused";
			break;
		
		case 22:
			uParam3->f_1 = "reaction_angry";
			break;
		
		case 23:
			uParam3->f_1 = "reaction_confused";
			break;
		
		case 24:
			uParam3->f_1 = "reaction_disgusted";
			break;
		
		case 25:
			uParam3->f_1 = "reaction_insulted";
			break;
		
		case 26:
			uParam3->f_1 = "reaction_pondering";
			break;
		
		case 27:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

bool func_78()
{
	return func_79(unk_0x1146A9AE09CE2B14());
}

int func_79(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_81(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 458618622;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429, 1))
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_20(&(uParam0->f_1)))
	{
		func_19(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_20(&(uParam0->f_1)) && !func_18(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_5(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_5(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_17(unk_0x1146A9AE09CE2B14());
		if (iVar10 != -1)
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_82()
{
	if (!func_26(2))
	{
		if (func_26(9) && func_18(&(Local_164.f_11), (func_31(Local_164.f_3) / 3) * 2, 0))
		{
			Local_164.f_67.f_4 = 0;
			Local_164.f_67.f_3 = 0;
			func_81(&(Local_164.f_67), Local_164.f_63);
			func_9(9);
			func_25(2);
		}
	}
	else if (func_83())
	{
		func_67(4);
	}
}

bool func_83()
{
	float fVar0;
	
	if (!func_26(3))
	{
		if (func_76(unk_0x7D2B9E6A64637269(), Local_164.f_63))
		{
			func_25(3);
		}
	}
	else if (!func_26(4))
	{
		Local_164.f_1 = unk_0x51FB94D5F3D17E35(func_85());
		fVar0 = func_84(Local_164.f_63);
		if (unk_0x0BC8768247440B3A(Local_164.f_1) >= fVar0)
		{
			func_25(4);
		}
	}
	return func_26(4);
}

float func_84(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 22:
			fVar0 = 0.65f;
			break;
		
		case 23:
			fVar0 = 0.85f;
			break;
		
		case 26:
			fVar0 = 0.9f;
			break;
		
		case 27:
			fVar0 = 0.9f;
			break;
	}
	return fVar0;
}

var func_85()
{
	return Global_1710057.f_1;
}

void func_86()
{
	if (func_18(&(Local_164.f_15), 2100, 0))
	{
		func_5(&(Local_164.f_15));
		Local_164.f_9 = func_21(unk_0x1146A9AE09CE2B14());
		func_87(Local_164.f_2, Local_164.f_5, Local_164.f_9, Local_164.f_10);
		func_67(3);
	}
}

void func_87(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<6> Var0;
	int iVar6;
	
	Var0 = 1537636534;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam3;
	Var0.f_3 = uParam1;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam2;
	iVar6 = func_88(1);
	if (!iVar6 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 6, iVar6);
	}
}

var func_88(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_16(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_89()
{
	Local_164.f_2 = func_94();
	Local_164.f_63 = func_91(Local_164.f_2);
	Local_164.f_5 = func_90();
	func_67(2);
}

int func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 10);
	iVar1 = 0;
	while (iVar0 == Local_164.f_5 && iVar1 < 10)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 10);
		iVar1++;
	}
	if (iVar1 >= 10)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 10);
	}
	return iVar0;
}

var func_91(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = func_93(23, 26);
			break;
		
		case 1:
			uVar0 = func_93(26, 27);
			break;
		
		case 2:
			uVar0 = func_93(21, 27);
			break;
		
		case 3:
			uVar0 = func_93(21, 26);
			break;
		
		case 4:
			uVar0 = func_93(23, 23);
			break;
		
		case 5:
			uVar0 = func_93(22, 23);
			break;
		
		case 6:
			uVar0 = func_93(26, 26);
			break;
		
		case 7:
			uVar0 = func_93(27, 23);
			break;
		
		case 8:
			uVar0 = func_93(23, 26);
			break;
		
		case 9:
			uVar0 = func_93(23, 23);
			break;
		
		case 10:
			uVar0 = func_93(22, 25);
			break;
		
		case 11:
			uVar0 = func_93(22, 21);
			break;
		
		case 12:
			uVar0 = func_93(22, 25);
			break;
		
		case 13:
			uVar0 = func_93(23, 26);
			break;
		
		case 14:
			uVar0 = func_93(27, 26);
			break;
		
		case 15:
			uVar0 = func_93(21, 24);
			break;
		
		case 16:
			uVar0 = func_93(23, 22);
			break;
		
		case 17:
			uVar0 = func_93(23, 26);
			break;
		
		case 18:
			uVar0 = func_93(22, 23);
			break;
		
		case 19:
			uVar0 = func_93(27, 27);
			break;
		
		case 20:
			uVar0 = func_93(27, 27);
			break;
		
		case 21:
			uVar0 = func_93(22, 25);
			break;
		
		case 22:
			uVar0 = func_93(23, 26);
			break;
		
		case 23:
			uVar0 = func_93(23, 26);
			break;
		
		case 24:
			uVar0 = func_93(23, 26);
			break;
		
		case 25:
			uVar0 = func_93(21, 21);
			break;
		
		case 26:
			uVar0 = func_93(27, 26);
			break;
		
		case 27:
			uVar0 = func_93(21, 22);
			break;
		
		case 28:
			uVar0 = func_93(23, 25);
			break;
		
		case 29:
			uVar0 = func_93(23, 26);
			break;
		
		case 30:
			uVar0 = func_93(23, 26);
			break;
		
		case 31:
			uVar0 = func_93(23, 26);
			break;
		
		case 32:
			uVar0 = func_93(23, 26);
			break;
		
		case 33:
			uVar0 = func_93(23, 26);
			break;
		
		case 34:
			uVar0 = func_93(23, 26);
			break;
		
		case 35:
			uVar0 = func_93(23, 26);
			break;
		
		case 36:
			uVar0 = func_93(23, 26);
			break;
		
		case 37:
			uVar0 = func_93(23, 26);
			break;
		
		case 38:
			uVar0 = func_93(23, 26);
			break;
		
		case 39:
			uVar0 = func_93(23, 26);
			break;
		
		case 40:
			uVar0 = func_93(23, 26);
			break;
		
		case 41:
			uVar0 = func_92();
			break;
		
		case 42:
			uVar0 = func_93(22, 25);
			break;
		
		case 43:
			uVar0 = func_93(27, 26);
			break;
		
		case 44:
			uVar0 = func_93(22, 25);
			break;
		
		case 45:
			uVar0 = func_93(22, 25);
			break;
		
		case 46:
			uVar0 = func_93(22, 25);
			break;
		
		case 47:
			uVar0 = func_93(22, 25);
			break;
		
		case 48:
			uVar0 = func_93(23, 26);
			break;
	}
	return uVar0;
}

int func_92()
{
	int iVar0;
	int iVar1;
	
	switch (unk_0x155BA90FAEAE7861())
	{
		case 1420204096:
			iVar0 = 24;
			iVar1 = 22;
			break;
		
		case 1840358669:
		case -1530260698:
		case 916995460:
			iVar0 = 21;
			iVar1 = 27;
			break;
		
		case -1148613331:
		case 282916021:
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case -318724249:
		case 821931868:
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case -1233681761:
			iVar0 = 22;
			iVar1 = 24;
			break;
		
		case -273223690:
		case -1429616491:
			iVar0 = 27;
			iVar1 = 27;
			break;
		
		default:
			iVar0 = 26;
			iVar1 = 26;
			break;
	}
	return func_93(iVar0, iVar1);
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 2);
	iVar1 = -1;
	switch (iVar0)
	{
		case 0:
			iVar1 = iParam0;
			if (Local_164.f_63 == iParam0)
			{
				iVar1 = iParam1;
			}
			break;
		
		case 1:
			iVar1 = iParam1;
			if (Local_164.f_63 == iParam1)
			{
				iVar1 = iParam0;
			}
			break;
	}
	return iVar1;
}

int func_94()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	iVar0 = 49;
	if (Global_43185 != 0)
	{
		iVar0 = 41;
	}
	else if (!Global_262145.f_26631)
	{
		iVar0 = 48;
	}
	iVar1 = unk_0xB36B8558948EA7A8(0, iVar0);
	uVar2 = func_63(27247, -1, -1);
	uVar3 = func_63(28250, -1, -1);
	uVar4 = func_63(28251, -1, -1);
	uVar5 = func_63(28252, -1, -1);
	iVar6 = 0;
	while ((((iVar1 == Local_164.f_2 || (iVar1 == 19 && uVar2)) || (iVar1 == 22 && uVar3)) || (iVar1 == 23 && uVar4)) || ((iVar1 == 24 && uVar5) && iVar6 < 10))
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, iVar0);
		iVar6++;
	}
	if (iVar6 >= 10)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, 19);
	}
	return iVar1;
}

void func_95()
{
	Local_164.f_10 = func_78();
	Local_164.f_67.f_4 = 0;
	Local_164.f_67.f_3 = 0;
	func_81(&(Local_164.f_67), 1);
	func_19(&(Local_164.f_13), 0, 0);
	func_67(1);
}

void func_96()
{
	if (func_99())
	{
		func_66(&(Local_164.f_65), 1);
	}
	else if (func_98(unk_0x1146A9AE09CE2B14()) == Local_164.f_66 && Local_164.f_66 == 11)
	{
		func_97();
	}
	else if (func_20(&(Local_164.f_17)))
	{
		func_5(&(Local_164.f_17));
	}
}

void func_97()
{
	struct<16> Var0;
	
	if (!func_20(&(Local_164.f_17)))
	{
		if (func_26(8))
		{
			func_9(8);
			func_32(&(Local_164.f_17), 0, 0);
		}
		else
		{
			StringCopy(&Var0, "HS3MN_ATTRCT", 64);
			func_10(Var0, 0);
			if (Local_164.f_76.f_32)
			{
				func_32(&(Local_164.f_17), 0, 0);
			}
		}
	}
	else if (func_18(&(Local_164.f_17), 40000, 0))
	{
		func_5(&(Local_164.f_17));
	}
}

int func_98(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2426865[iParam0 /*449*/].f_429.f_3;
	}
	return -1;
}

int func_99()
{
	if (!func_101(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_100(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_98(unk_0x1146A9AE09CE2B14()) != Local_164.f_66)
	{
		return 0;
	}
	return 1;
}

int func_100(int iParam0)
{
	if (iParam0 != func_22())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_429, 1);
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 != func_22())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_429, 0);
	}
	return 0;
}

int func_102()
{
	if (func_109())
	{
		return 1;
	}
	if (!func_53())
	{
		return 1;
	}
	if (func_106(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_105(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_103(11))
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1710057, func_104(iParam0));
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		default:
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_105(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		if (func_108(iParam0) && !func_107(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

bool func_109()
{
	return unk_0x234B68AC2E35ED5A(Global_1710057, 0);
}

int func_110()
{
	var uVar0;
	
	func_118(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(159))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_111() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_111()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	switch (func_113())
	{
		case 0:
			return func_112();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_112()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_113()
{
	return Global_31345;
}

bool func_114()
{
	return Global_2453009.f_698;
}

int func_115(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2463497;
}

bool func_117()
{
	return Global_2453009.f_693;
}

void func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_119(iVar0);
					break;
				
				case -1320260596:
					unk_0x53858F1E03A88AE1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_16(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar3))
			{
				if (unk_0xC49311A2A500FF09(iVar3, 0))
				{
					uVar4 = unk_0x75B58B38E45C6F9A(iVar3, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar4, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_120(uVar4, &bVar5))
						{
							unk_0x2B360ED559ED11A6(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x795957CD3A0042C8(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iParam0))
		{
			if (unk_0x456C91FDAFEEF560(iParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(iParam0)))
				{
					unk_0x4985CD0720AFD468(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(iParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121()
{
	SYSTEM::WAIT(0);
}

void func_122()
{
	func_124(11, 0);
	func_123();
}

void func_123()
{
	unk_0x4BFE89D21F9885DC();
}

void func_124(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_103(iParam0))
		{
			unk_0x191DDA30577F440A(&Global_1710057, func_104(iParam0));
		}
	}
	else if (func_103(iParam0))
	{
		unk_0xC664C0067EEAB8D1(&Global_1710057, func_104(iParam0));
	}
}

void func_125(struct<18> Param0)
{
	unk_0x35BEDD7AFD26FCD5(32, 0, Param0);
	func_128(0, -1, 0);
	unk_0xF784CE07ED70869A(&uLocal_163, 1);
	unk_0xC84352B5E80ABF68(&uLocal_130, 33);
	if (!func_127())
	{
		func_122();
	}
	Local_164.f_64 = Param0.f_1;
	Local_164.f_66 = Param0.f_17;
	if (unk_0x02BFF15CAA701972())
	{
	}
	else
	{
		func_122();
	}
	func_126();
}

void func_126()
{
	func_124(11, 0);
}

int func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x02BFF15CAA701972())
		{
			return 0;
		}
		if (unk_0x50309A384D827846())
		{
			return 1;
		}
		if (func_117())
		{
			return 0;
		}
		if (func_115(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_123();
			}
			else
			{
				return 0;
			}
		}
		if (!func_129())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_117())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_115(157))
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x930F75DAF7DE892B())
			{
				if (!bParam2)
				{
					func_123();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x41BB6B0BDB7933FF();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (!bParam2)
			{
				func_123();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x930F75DAF7DE892B())
	{
		if (!bParam2)
		{
			func_123();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_129()
{
	return Global_1312878;
}

