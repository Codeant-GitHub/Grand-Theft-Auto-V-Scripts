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
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	struct<5> Local_112 = { 0, 0, 1065353216, 1065353216, 1 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = -1;
	var uLocal_127 = -1;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	vector3 vLocal_161 = { 0f, 0f, 0f };
	vector3 vLocal_162 = { 0f, 0f, 0f };
	vector3 vLocal_163 = { 0f, 0f, 0f };
	vector3 vLocal_164 = { 0f, 0f, 0f };
	float fLocal_165 = 0f;
	vector3 vLocal_166[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_167[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170[4] = { 0, 0, 0, 0 };
	int iLocal_171[3] = { 0, 0, 0 };
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	struct<99> Local_182 = { 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1030275036, -1660661558, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0 } ;
	vector3 vLocal_183[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_184 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	iLocal_153 = 1;
	iLocal_154 = 1;
	vLocal_161 = { 4f, 4f, 3f };
	vLocal_162 = { 23.19f, 0f, 1.2f };
	vLocal_163 = { 29.52f, 0f, 1.2f };
	vLocal_164 = { 19.53f, 0f, 3.2f };
	fLocal_165 = 9.5f;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_1721(ScriptParam_184))
		{
			func_910(1);
		}
	}
	while (true)
	{
		func_909();
		func_895();
		if (!func_893(func_894()))
		{
			func_876(152, func_894(), &uLocal_148, 500f, 750f, iLocal_149);
		}
		func_858(152);
		switch (func_857(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_856() == 1)
				{
					if (func_853())
					{
						func_852(unk_0x72B85B341ADBE9DE(), 1);
					}
				}
				if (func_856() == 3)
				{
					func_852(unk_0x72B85B341ADBE9DE(), 3);
				}
				break;
			
			case 1:
				if (func_856() == 1)
				{
					func_276();
					func_125(&(Global_1361808.f_534), &Global_1361808, 27, &(Global_1361808.f_1), &(Global_1361808.f_117), -1, 0, 0);
				}
				else if (func_856() == 3)
				{
					func_852(unk_0x72B85B341ADBE9DE(), 3);
				}
				break;
			
			case 3:
				func_910(0);
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_856())
			{
				case 0:
					if (func_60())
					{
						func_59(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	func_58();
	switch (func_57())
	{
		case 1:
		case 2:
			func_53();
			func_41();
			func_40();
			func_38();
			if (func_15())
			{
				if (func_5())
				{
					func_4(4);
				}
			}
			if (!func_3(&(Local_182.f_74)))
			{
				func_2(&(Local_182.f_74), 0, 0);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			func_59(3);
			break;
	}
}

void func_2(var uParam0, bool bParam1, bool bParam2)
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

bool func_3(var uParam0)
{
	return uParam0->f_1;
}

void func_4(int iParam0)
{
	Local_182.f_96 = iParam0;
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0E4018692D92041D(Local_182.f_1, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar3 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				iVar4 = unk_0x378BD4B3881338C2(iVar3);
				if (iVar3 != func_14())
				{
					if (!func_11(iVar3) && !func_9(iVar3))
					{
						if (unk_0xD4B4F68F3449CBEC(iVar4, func_8(), func_7(), func_6(), 0, true, 0))
						{
							iVar1++;
							iVar2 = iVar0;
						}
					}
				}
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (iVar2 != -1)
			{
				Local_182.f_7 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar2));
				Local_182.f_6 = iVar1;
			}
		}
		else if (iVar1 > 1)
		{
			Local_182.f_6 = iVar1;
		}
		else
		{
			Local_182.f_6 = 0;
		}
		return 1;
	}
	return 0;
}

var func_6()
{
	return Local_182.f_25;
}

Vector3 func_7()
{
	return Local_182.f_22;
}

Vector3 func_8()
{
	return Local_182.f_19;
}

int func_9(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (func_10() == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_10()
{
	return Local_182.f_8;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, func_10(), 0);
}

int func_12(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_14())
	{
		if (!bParam2)
		{
			if (func_13(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
		{
			return iParam1 == Global_1626536[iParam0 /*603*/].f_11;
		}
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam1 != func_14())
	{
		if (iParam0 != func_14())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_14()
{
	return -1;
}

int func_15()
{
	if (unk_0x0E4018692D92041D(Local_182.f_1, 7))
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

bool func_16()
{
	return unk_0x0E4018692D92041D(Local_182.f_1, 5);
}

int func_17()
{
	if (func_21())
	{
		if (func_3(&(Local_182.f_78)))
		{
			if (func_19(&(Local_182.f_78), func_20(), 0))
			{
				unk_0x8950ED5730F62EE8(&(Local_182.f_1), 2);
				return 1;
			}
		}
	}
	else if (func_3(&(Local_182.f_74)))
	{
		if (func_19(&(Local_182.f_74), func_18(), 0))
		{
			unk_0x8950ED5730F62EE8(&(Local_182.f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	return Global_262145.f_12404;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

int func_20()
{
	return Global_262145.f_12405;
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (iVar1 != func_14())
			{
				if (!func_11(iVar1) && !func_9(iVar1))
				{
					if (func_22(iVar1))
					{
						if (unk_0xD4B4F68F3449CBEC(unk_0x378BD4B3881338C2(iVar1), func_8(), func_7(), func_6(), 0, true, 0))
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

int func_22(int iParam0)
{
	if (!func_37(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_32(iParam0))
	{
		return 0;
	}
	if (func_31(iParam0, 21))
	{
		return 0;
	}
	if (func_31(iParam0, 22))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(vLocal_183[iParam0 /*3*/].f_1, 9))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(vLocal_183[iParam0 /*3*/].f_1, 10))
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	if (func_25(iParam0))
	{
		return 0;
	}
	if (func_24(iParam0))
	{
		return 0;
	}
	if (func_23(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_25(int iParam0)
{
	if (func_26(iParam0) == 146)
	{
		if (iParam0 == Global_2528542.f_4814)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

bool func_27(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return func_30();
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_241.f_136[func_29(10) /*33*/][iParam0], func_28(10));
}

int func_28(int iParam0)
{
	return (iParam0 % 32);
}

int func_29(int iParam0)
{
	return (iParam0 / 32);
}

bool func_30()
{
	return Global_1312417;
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_32(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_33())
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

bool func_33()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312745;
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

void func_38()
{
	if (func_21())
	{
		if (!func_3(&(Local_182.f_78)))
		{
			func_2(&(Local_182.f_78), 0, 0);
		}
	}
	else if (func_3(&(Local_182.f_78)))
	{
		func_39(&(Local_182.f_78));
	}
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_40()
{
	if (!func_16())
	{
		if (func_10() != func_14())
		{
			if (!unk_0xC4DEA49C5B465481(func_10()))
			{
				unk_0x8950ED5730F62EE8(&(Local_182.f_1), 5);
			}
		}
	}
}

void func_41()
{
	if (func_52())
	{
		if (unk_0x22C3124A898FB82A(Local_182.f_70[iLocal_160]))
		{
			if (func_48(iLocal_160))
			{
				if (!func_3(&(Local_182.f_89[iLocal_160 /*2*/])))
				{
					func_2(&(Local_182.f_89[iLocal_160 /*2*/]), 0, 0);
				}
				else if (func_19(&(Local_182.f_89[iLocal_160 /*2*/]), 20000, 0))
				{
					if (!unk_0x0E4018692D92041D(Local_182.f_3, iLocal_160))
					{
						if (unk_0x6F3D61B58C7B4025(Local_182.f_70[iLocal_160]))
						{
							func_47(&(Local_182.f_70[iLocal_160]));
							unk_0x8950ED5730F62EE8(&(Local_182.f_3), iLocal_160);
							func_39(&(Local_182.f_89[iLocal_160 /*2*/]));
						}
						else
						{
							unk_0x8950ED5730F62EE8(&(Local_182.f_3), iLocal_160);
							func_39(&(Local_182.f_89[iLocal_160 /*2*/]));
						}
					}
				}
			}
			else if (func_3(&(Local_182.f_89[iLocal_160 /*2*/])))
			{
				func_39(&(Local_182.f_89[iLocal_160 /*2*/]));
			}
		}
		else if (func_46(Local_182.f_33.f_1))
		{
			if (func_42(iLocal_160, 1))
			{
				unk_0x71CA80D41E1338B4(Local_182.f_33.f_1);
				unk_0xCE689A8E8C42ED78(&(Local_182.f_3), iLocal_160);
				func_39(&(Local_182.f_89[iLocal_160 /*2*/]));
			}
		}
		iLocal_160++;
		if (iLocal_160 == Local_182.f_33.f_3)
		{
			iLocal_160 = 0;
		}
	}
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_52())
	{
		if (!unk_0x22C3124A898FB82A(Local_182.f_70[iParam0]))
		{
			if (unk_0xA107BB59F9A92498(0, 1, 0, 0))
			{
				unk_0xB7350047030F7672(Local_182.f_33.f_18[iParam0 /*3*/], 5f, 0, 0, 0, 0, false, 0);
				if (func_43(&(Local_182.f_70[iParam0]), Local_182.f_33.f_1, Local_182.f_33.f_18[iParam0 /*3*/], Local_182.f_33.f_28[iParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x9EA78777174DE734(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1, 1);
					unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), true);
					unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1);
					unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]));
					unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), false, true, 0);
					unk_0x1B2303F9DC2D90D5(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1084227584);
					unk_0xD52C9EADB5D68C6C(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1);
					unk_0x9E86FE28A241DCAB(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1);
					unk_0xAA636074B1E78F5D(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 0);
					unk_0x4A4AC9013825EC27(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1, 0);
					if (unk_0x854E8B95CE1C5D29("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
					{
						if (unk_0xA0EDFFB6CF5B314A(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), "MPBitset"))
						{
							iVar0 = unk_0xE48FAA8A938257C9(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), "MPBitset");
						}
						unk_0x8950ED5730F62EE8(&iVar0, 10);
						unk_0x8950ED5730F62EE8(&iVar0, 11);
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), "MPBitset", iVar0);
					}
					if (iParam1 == 1)
					{
						return 1;
					}
					return 0;
				}
			}
		}
		if (iParam1 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_43(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
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
			unk_0xFE8201EFB515D77B(iVar1, bParam8);
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
			func_44(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_44(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_45(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
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

int func_45(int iParam0, vector3 vParam1, int iParam2)
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

bool func_46(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

void func_47(var uParam0)
{
	int iVar0;
	
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		if (!unk_0x6F3D61B58C7B4025(*uParam0))
		{
		}
	}
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		iVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0xFD5D4D96D91EEAAD(&iVar0);
	}
}

int func_48(int iParam0)
{
	float fVar0;
	
	if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 0))
	{
		return 1;
	}
	fVar0 = func_51(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), Local_182.f_33.f_18[iParam0 /*3*/], 0);
	if (func_49(unk_0xFC00F22E930BFD55(Local_182.f_70[iParam0]), 1, 0, 0, 0, 0, 1, 0, 1) && (fVar0 > 50f || func_3(&(Local_182.f_89[iParam0 /*2*/]))))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xC92AA0DBDDDE8BB8(iParam0) + 1;
	if (iParam4 || !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_50(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x765F6FEEFF39224F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x33CD235DF1E6A94E())
				{
				}
				else if (iParam2 && unk_0xE09156665EC2D83B(iVar2))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iVar2) || iParam8)
					{
						if (unk_0x002F527E1A3238DC(unk_0x5C7617A25D50AAE9(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xBC2FC12AD0FBF72E(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_50(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x67FFBB75D2430704(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iParam0, 0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, iParam1);
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iVar0, 451360105) == 1 || unk_0xD76D6BCC14B95CE1(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(iParam0, false), unk_0xFBB1F99A825CAB09(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

float func_51(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vParam1, bParam2);
}

int func_52()
{
	if (Local_182.f_33.f_3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_56())
	{
		if (unk_0x22C3124A898FB82A(Local_182.f_65[iLocal_159]))
		{
			if (func_55(iLocal_159))
			{
				if (!unk_0x0E4018692D92041D(Local_182.f_2, iLocal_159))
				{
					if (!func_3(&(Local_182.f_80[iLocal_159 /*2*/])))
					{
						func_2(&(Local_182.f_80[iLocal_159 /*2*/]), 0, 0);
					}
					else if (func_19(&(Local_182.f_80[iLocal_159 /*2*/]), 20000, 0))
					{
						if (unk_0x6F3D61B58C7B4025(Local_182.f_65[iLocal_159]))
						{
							func_47(&(Local_182.f_65[iLocal_159]));
							unk_0x8950ED5730F62EE8(&(Local_182.f_2), iLocal_159);
							func_39(&(Local_182.f_80[iLocal_159 /*2*/]));
						}
						else
						{
							unk_0x8950ED5730F62EE8(&(Local_182.f_2), iLocal_159);
							func_39(&(Local_182.f_80[iLocal_159 /*2*/]));
						}
					}
				}
			}
			else if (func_3(&(Local_182.f_80[iLocal_159 /*2*/])))
			{
				func_39(&(Local_182.f_80[iLocal_159 /*2*/]));
			}
		}
		else if (func_46(Local_182.f_33))
		{
			if (func_54(iLocal_159, 1))
			{
				unk_0x71CA80D41E1338B4(Local_182.f_33);
				unk_0xCE689A8E8C42ED78(&(Local_182.f_2), iLocal_159);
			}
		}
		iLocal_159++;
		if (iLocal_159 == Local_182.f_33.f_2)
		{
			iLocal_159 = 0;
		}
	}
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_56())
	{
		if (!unk_0x22C3124A898FB82A(Local_182.f_65[iParam0]))
		{
			if (unk_0xA107BB59F9A92498(0, 1, 0, 0))
			{
				unk_0xB7350047030F7672(Local_182.f_33.f_4[iParam0 /*3*/], 5f, 0, 0, 0, 0, false, 0);
				if (func_43(&(Local_182.f_65[iParam0]), Local_182.f_33, Local_182.f_33.f_4[iParam0 /*3*/], Local_182.f_33.f_17, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x9EA78777174DE734(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1, 1);
					unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), true);
					unk_0x2CE0A5587E9F908F(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), true);
					unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1);
					unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]));
					unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), true, true, 0);
					unk_0xD52C9EADB5D68C6C(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1);
					unk_0x9E86FE28A241DCAB(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1);
					unk_0xAA636074B1E78F5D(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 0);
					unk_0x4A4AC9013825EC27(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1, 0);
					if (unk_0x854E8B95CE1C5D29("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
					{
						if (unk_0xA0EDFFB6CF5B314A(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), "MPBitset"))
						{
							iVar0 = unk_0xE48FAA8A938257C9(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), "MPBitset");
						}
						unk_0x8950ED5730F62EE8(&iVar0, 10);
						unk_0x8950ED5730F62EE8(&iVar0, 11);
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), "MPBitset", iVar0);
					}
					if (iParam1 == 1)
					{
						return 1;
					}
					return 0;
				}
			}
		}
		if (iParam1 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_55(int iParam0)
{
	float fVar0;
	
	if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 0))
	{
		return 1;
	}
	fVar0 = vdist(unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), true), Local_182.f_33.f_4[iParam0 /*3*/]);
	if (func_49(unk_0xFC00F22E930BFD55(Local_182.f_65[iParam0]), 1, 0, 0, 0, 0, 1, 0, 1) && (fVar0 > 50f || func_3(&(Local_182.f_80[iParam0 /*2*/]))))
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	if (Local_182.f_33.f_2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	return Local_182.f_96;
}

void func_58()
{
	if (!unk_0x0E4018692D92041D(Local_182.f_1, 7))
	{
		if (!unk_0xC4DEA49C5B465481(func_10()))
		{
			unk_0x8950ED5730F62EE8(&(Local_182.f_1), 7);
		}
	}
}

void func_59(int iParam0)
{
	Local_182 = iParam0;
}

int func_60()
{
	struct<4> Var0;
	
	Local_182.f_4 = func_124(unk_0x95B959F18401C09A());
	unk_0xDFDE4DC8546F54CF(&(Local_182.f_97), &(Local_182.f_98));
	if (func_123(Local_182.f_4))
	{
		if (func_118(Local_182.f_4))
		{
			if (iLocal_156 == 0)
			{
				func_75(152, 1, -1, 0);
				iLocal_156 = 1;
			}
			func_73(Local_182.f_4, &(Local_182.f_28), &(Local_182.f_31), &(Local_182.f_32));
			unk_0xCE04CE961AF41AB9(Local_182.f_28, Local_182.f_32, 1, 0, 0, true);
			Local_182.f_8 = unk_0x95B959F18401C09A();
			Var0 = { func_72(func_124(unk_0x95B959F18401C09A())) };
			func_64(Var0, Var0.f_3.f_2);
			func_61(Local_182.f_4);
			return 1;
		}
	}
	return 0;
}

void func_61(var uParam0)
{
	if (func_62())
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_101 = uParam0;
	}
}

bool func_62()
{
	return func_63(unk_0x95B959F18401C09A());
}

int func_63(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_64(vector3 vParam0, float fParam1)
{
	func_71(vParam0);
	func_70(fParam1);
	func_69(unk_0xCD1EDCB38767B47C(vParam0, fParam1, vLocal_162));
	func_68(vLocal_161);
	func_67(unk_0xCD1EDCB38767B47C(vParam0, fParam1, vLocal_163));
	func_66(unk_0xCD1EDCB38767B47C(vParam0, fParam1, vLocal_164));
	func_65(fLocal_165);
}

void func_65(float fParam0)
{
	Local_182.f_25 = fParam0;
}

void func_66(vector3 vParam0)
{
	Local_182.f_22 = { vParam0 };
}

void func_67(vector3 vParam0)
{
	Local_182.f_19 = { vParam0 };
}

void func_68(vector3 vParam0)
{
	Local_182.f_16 = { vParam0 };
}

void func_69(vector3 vParam0)
{
	Local_182.f_13 = { vParam0 };
}

void func_70(var uParam0)
{
	Local_182.f_12 = uParam0;
}

void func_71(vector3 vParam0)
{
	Local_182.f_9 = { vParam0 };
}

struct<6> func_72(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
	}
	return Var0;
}

void func_73(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = 45f;
	switch (func_74(iParam0))
	{
		case 0:
			break;
		
		case 1:
			*uParam1 = { -2781.33f, 2377.82f, 1.7155f };
			*uParam2 = 60.9918f;
			break;
		
		case 2:
			*uParam1 = { -2531.384f, 3889.544f, 4.1205f };
			*uParam2 = 71.1209f;
			break;
		
		case 3:
			*uParam1 = { -2986.855f, -22.9918f, 0.6682f };
			*uParam2 = 158.4044f;
			break;
		
		case 4:
			*uParam1 = { -1409.905f, -1556.771f, 1.1444f };
			*uParam2 = 118.3419f;
			break;
		
		case 5:
			*uParam1 = { -1669.805f, -3320.343f, 4.3639f };
			*uParam2 = 153.2052f;
			break;
		
		case 6:
			*uParam1 = { 1523.257f, -2750.323f, 0.8483f };
			*uParam2 = 176.5467f;
			break;
		
		case 7:
			*uParam1 = { 2547.557f, -1234.734f, -0.011f };
			*uParam2 = 217.25f;
			break;
		
		case 8:
			*uParam1 = { 3027.596f, 1920.265f, 2.2126f };
			*uParam2 = 274.894f;
			break;
		
		case 9:
			*uParam1 = { 3758.964f, 3807.246f, -0.4568f };
			*uParam2 = 265.0912f;
			break;
		
		case 10:
			*uParam1 = { 3186.035f, 5346.327f, 13.2991f };
			*uParam2 = 226.9029f;
			break;
		
		case 11:
			*uParam1 = { 1256.581f, 6597.178f, 0.5421f };
			*uParam2 = 21.8257f;
			break;
		
		case 12:
			*uParam1 = { -633.9815f, 6322.486f, 2.419f };
			*uParam2 = 54.1462f;
			break;
	}
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		
		case 3:
		case 4:
		case 5:
			return 2;
		
		case 6:
		case 7:
		case 8:
			return 3;
		
		case 9:
		case 10:
		case 11:
			return 4;
		
		case 12:
		case 13:
		case 14:
			return 5;
		
		case 15:
		case 16:
		case 17:
			return 6;
		
		case 18:
		case 19:
		case 20:
			return 7;
		
		case 21:
		case 22:
		case 23:
			return 8;
		
		case 24:
		case 25:
		case 26:
			return 9;
		
		case 27:
		case 28:
		case 29:
			return 10;
		
		case 30:
		case 31:
		case 32:
			return 11;
		
		case 33:
		case 34:
		case 35:
			return 12;
		
		default:
	}
	return 0;
}

void func_75(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 != iParam0)
	{
		func_117(-1);
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 = iParam0;
		if (func_116() != -1)
		{
			func_115(-1);
		}
		if (func_114() != -1)
		{
			func_113(-1);
		}
		func_112(iParam2);
		func_108(iParam0);
		if (!func_107(iParam0))
		{
			fVar0 = func_106(iParam0);
			if (fVar0 != 1f)
			{
				func_102(fVar0);
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 1);
			}
		}
		if (!func_101(iParam0) || iParam3)
		{
			if (func_100(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xD875615F72CD34A6(0);
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
					unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				}
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 0);
			}
			else if (unk_0xB83C26C286A4219F() < 5)
			{
				unk_0x4B06B5746CBEC99F(1f);
				unk_0xD875615F72CD34A6(5);
			}
		}
		if (func_30())
		{
			func_99(27);
		}
		if (bParam1)
		{
			if (!func_90())
			{
				func_88(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x0E4018692D92041D(Global_2528542.f_4546, 1) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 4)) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 0))
			{
				func_87(6);
			}
			func_86();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
		}
		if (func_85(unk_0x95B959F18401C09A()) && func_84(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 8);
		}
		func_77();
		if (func_76(iParam0))
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 6);
		}
		Global_2528542.f_6270 = 0;
	}
}

int func_76(int iParam0)
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

void func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_82();
	iVar2 = func_81(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (unk_0xC4DEA49C5B465481(iVar1))
		{
			if (func_12(iVar1, iVar2, 1) || func_78(iVar1, unk_0x95B959F18401C09A()))
			{
				unk_0x29247C3358570094(unk_0x95B959F18401C09A(), iVar1, bVar3);
				unk_0x29247C3358570094(iVar1, unk_0x95B959F18401C09A(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_78(int iParam0, int iParam1)
{
	if (func_80(iParam0, 1) && func_80(iParam1, 1))
	{
		return (func_79(iParam0) == func_81(iParam1) || func_79(iParam1) == func_81(iParam0));
	}
	return 0;
}

int func_79(int iParam0)
{
	if (func_80(iParam0, 1))
	{
		return Global_1626536[func_81(iParam0) /*603*/].f_11.f_481;
	}
	return func_14();
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_63(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_14();
}

int func_81(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_14();
}

int func_82()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_83();
	if (iVar0 != func_14())
	{
		if (func_37(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x0E4018692D92041D(Global_1626536[iVar1 /*603*/].f_1, 16);
			}
		}
	}
	return 0;
}

int func_83()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_31(iParam0, 9);
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

void func_86()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 1);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 4))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 4);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 6))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 6);
	}
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 0);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 2);
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_693 = 0;
	if (Global_2528542.f_4548 > 0)
	{
		unk_0xD875615F72CD34A6(Global_2528542.f_4548);
	}
	Global_2528542.f_4547 = 0;
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

void func_88(int iParam0)
{
	if (func_89() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_89()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if ((func_31(unk_0x95B959F18401C09A(), 21) || func_31(unk_0x95B959F18401C09A(), 22)) || func_96())
	{
		return 1;
	}
	if (func_91())
	{
		func_99(22);
		return 1;
	}
	return 0;
}

int func_91()
{
	if (func_95(unk_0x95B959F18401C09A(), 0))
	{
		if (((func_30() && !func_94()) || func_93(unk_0x95B959F18401C09A(), 21)) || func_93(unk_0x95B959F18401C09A(), 25))
		{
			return 1;
		}
		else
		{
			func_92(27);
		}
	}
	return 0;
}

void func_92(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

bool func_93(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

bool func_94()
{
	return Global_1312417.f_1;
}

int func_95(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return func_97(338, -1);
}

int func_97(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_98(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_99(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0)
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

void func_102(float fParam0)
{
	float fVar0;
	
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_103())
	{
		return;
	}
	fVar0 = (Global_2528542.f_4884 - fParam0);
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && unk_0x7EECA16E87982278(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2528542.f_4884 = fParam0;
	Global_2528542.f_4885 = unk_0x8C40DC84EDF05997();
}

int func_103()
{
	switch (func_105())
	{
		case 0:
			return func_104();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_104()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_105()
{
	return Global_25765;
}

float func_106(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_107(int iParam0)
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

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_111(3791, -1, 0);
	iVar1 = func_110(iParam0);
	if (iVar1 != -1)
	{
		unk_0x8950ED5730F62EE8(&iVar0, iVar1);
		func_109(3791, iVar0, -1, 1, 0);
	}
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_98(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_98(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	if (Global_1626536[iVar0 /*603*/].f_11.f_181 != iParam0)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_181 = iParam0;
	}
}

void func_113(int iParam0)
{
	if (Global_2528542.f_4889.f_336 != iParam0)
	{
		Global_2528542.f_4889.f_336 = iParam0;
	}
}

int func_114()
{
	return Global_2528542.f_4889.f_336;
}

void func_115(int iParam0)
{
	if (Global_2528542.f_4889.f_335 != iParam0)
	{
		Global_2528542.f_4889.f_335 = iParam0;
	}
}

int func_116()
{
	return Global_2528542.f_4889.f_335;
}

void func_117(int iParam0)
{
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_32 = iParam0;
}

int func_118(int iParam0)
{
	if (iLocal_152 == 0)
	{
		Local_182.f_33 = { func_120(iParam0) };
		iLocal_152 = 1;
	}
	if (func_119())
	{
		if (unk_0x5D98D654CDC2165A(Local_182.f_33))
		{
			unk_0x71CA80D41E1338B4(Local_182.f_33);
		}
		if (unk_0x5D98D654CDC2165A(Local_182.f_33.f_1))
		{
			unk_0x71CA80D41E1338B4(Local_182.f_33.f_1);
		}
		return 1;
	}
	return 0;
}

int func_119()
{
	int iVar0;
	
	if (func_46(Local_182.f_33) && func_46(Local_182.f_33.f_1))
	{
		if (func_56())
		{
			iVar0 = 0;
			while (iVar0 < Local_182.f_33.f_2)
			{
				if (!func_54(iVar0, 0))
				{
					return 0;
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		if (func_52())
		{
			iVar0 = 0;
			while (iVar0 < Local_182.f_33.f_3)
			{
				if (!func_42(iVar0, 0))
				{
					return 0;
				}
				iVar0++;
			}
		}
		return 1;
	}
	return 0;
}

struct<32> func_120(int iParam0)
{
	struct<32> Var0;
	
	Var0 = joaat("seashark");
	Var0.f_1 = joaat("maverick");
	Var0.f_4 = 4;
	Var0.f_18 = 3;
	Var0.f_28 = 3;
	switch (func_74(iParam0))
	{
		case 0:
			break;
		
		case 1:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 66.4028f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-2823.233f, 2367.733f, -0.8566f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -2776.735f, 2348.319f, 1.41f };
			Var0.f_18[1 /*3*/] = { -2728.944f, 2385.28f, 0.083f };
			Var0.f_18[2 /*3*/] = { -2769.994f, 2419.964f, 1.6353f };
			Var0.f_28[0] = 62.2792f;
			Var0.f_28[1] = 85.5583f;
			Var0.f_28[2] = 70.7174f;
			break;
		
		case 2:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 70.4773f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-2579.034f, 3901.085f, -0.1937f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -2522.525f, 3914.645f, 2.9836f };
			Var0.f_18[1 /*3*/] = { -2542.523f, 3842.675f, 2.0916f };
			Var0.f_18[2 /*3*/] = { -2479.201f, 3856.105f, 15.2048f };
			Var0.f_28[0] = 78.8918f;
			Var0.f_28[1] = 80.8251f;
			Var0.f_28[2] = 80.8251f;
			break;
		
		case 3:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 169.7533f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-2987.953f, -36.4359f, -1.2517f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -2962.51f, 2.8172f, 5.6602f };
			Var0.f_18[1 /*3*/] = { -2998.309f, 20.0011f, 6.1754f };
			Var0.f_18[2 /*3*/] = { -3044.642f, 32.2043f, 9.1183f };
			Var0.f_28[0] = 156.7838f;
			Var0.f_28[1] = 152.8213f;
			Var0.f_28[2] = 189.9627f;
			break;
		
		case 4:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 115.6337f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-1443.398f, -1566.752f, -0.9671f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -1415.82f, -1542.551f, 1.1638f };
			Var0.f_18[1 /*3*/] = { -1380.203f, -1497.414f, 3.2869f };
			Var0.f_18[2 /*3*/] = { -1362.929f, -1561.279f, 2.4111f };
			Var0.f_28[0] = 112.1372f;
			Var0.f_28[1] = 165.4805f;
			Var0.f_28[2] = 140.3241f;
			break;
		
		case 5:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 175.8105f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-1693.068f, -3369.112f, -0.8255f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -1684.557f, -3318.925f, 4.1928f };
			Var0.f_18[1 /*3*/] = { -1629.506f, -3340.701f, 4.5049f };
			Var0.f_18[2 /*3*/] = { -1672.964f, -3249.615f, 10.4633f };
			Var0.f_28[0] = 169.2553f;
			Var0.f_28[1] = 144.2308f;
			Var0.f_28[2] = 148.2526f;
			break;
		
		case 6:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 183.6682f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(1524.818f, -2766.288f, -1.0223f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 1512.385f, -2743.413f, 1.0624f };
			Var0.f_18[1 /*3*/] = { 1589.061f, -2738.779f, 1.0615f };
			Var0.f_18[2 /*3*/] = { 1464.358f, -2756.594f, 1.0462f };
			Var0.f_28[0] = 206.8662f;
			Var0.f_28[1] = 180.3761f;
			Var0.f_28[2] = 204.6316f;
			break;
		
		case 7:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 223.3824f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(2577.067f, -1229.029f, -0.7027f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 2528.747f, -1218.579f, 1.4213f };
			Var0.f_18[1 /*3*/] = { 2508.356f, -1224.992f, 1.9813f };
			Var0.f_18[2 /*3*/] = { 2570.913f, -1208.797f, 1.4082f };
			Var0.f_28[0] = 207.3117f;
			Var0.f_28[1] = 246.0081f;
			Var0.f_28[2] = 212.1435f;
			break;
		
		case 8:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 238.7823f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(3049.08f, 1909.58f, -1.9514f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 7f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 7f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 7f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 3013.11f, 1846.43f, 1.9894f };
			Var0.f_18[1 /*3*/] = { 3014.813f, 1916.114f, 4.7614f };
			Var0.f_18[2 /*3*/] = { 2995.549f, 1902.878f, 14.2636f };
			Var0.f_28[0] = 271.0676f;
			Var0.f_28[1] = 235.8285f;
			Var0.f_28[2] = 273.6174f;
			break;
		
		case 9:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 265.8553f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(3766.3f, 3822.033f, -0.3582f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 3728.395f, 3815.41f, 3.9261f };
			Var0.f_18[1 /*3*/] = { 3721.186f, 3771.195f, 9.6335f };
			Var0.f_18[2 /*3*/] = { 3690.122f, 3802.012f, 13.2367f };
			Var0.f_28[0] = 285.2891f;
			Var0.f_28[1] = 310.7798f;
			Var0.f_28[2] = 295.216f;
			break;
		
		case 10:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 248.9274f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(3233.326f, 5330.263f, -0.2857f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 3202.51f, 5348.133f, 7.4442f };
			Var0.f_18[1 /*3*/] = { 3213.186f, 5379.174f, 20.831f };
			Var0.f_18[2 /*3*/] = { 3145.669f, 5357.98f, 26.4973f };
			Var0.f_28[0] = 232.186f;
			Var0.f_28[1] = 219.7652f;
			Var0.f_28[2] = 250.2235f;
			break;
		
		case 11:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 30.6432f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(1245.169f, 6624.8f, -1.5617f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { 1273.191f, 6600.534f, 1.2142f };
			Var0.f_18[1 /*3*/] = { 1220.017f, 6572.264f, 1.6511f };
			Var0.f_18[2 /*3*/] = { 1300.199f, 6578.169f, 1.3607f };
			Var0.f_28[0] = 39.4737f;
			Var0.f_28[1] = 358.8115f;
			Var0.f_28[2] = 0.4214f;
			break;
		
		case 12:
			Var0.f_2 = func_122();
			Var0.f_3 = func_121();
			Var0.f_17 = 71.0029f;
			Var0.f_4[0 /*3*/] = { unk_0xCD1EDCB38767B47C(-662.8556f, 6332.671f, -2.0879f, Var0.f_17, 0f, 8f, 0f) };
			Var0.f_4[1 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[0 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[2 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[1 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_4[3 /*3*/] = { unk_0xCD1EDCB38767B47C(Var0.f_4[2 /*3*/], Var0.f_17, 8f, 0f, 0f) };
			Var0.f_18[0 /*3*/] = { -631.3538f, 6334.646f, 2.3758f };
			Var0.f_18[1 /*3*/] = { -635.984f, 6278.104f, 1.8032f };
			Var0.f_18[2 /*3*/] = { -588.2267f, 6346.359f, 2.3655f };
			Var0.f_28[0] = 65.2852f;
			Var0.f_28[1] = 57.9091f;
			Var0.f_28[2] = 58.3541f;
			break;
	}
	return Var0;
}

var func_121()
{
	return Global_262145.f_12407;
}

var func_122()
{
	return Global_262145.f_12406;
}

int func_123(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	return Global_2417757.f_818[iParam0 /*3*/];
}

void func_125(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_273(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_271() || iParam2 == 27)
	{
		if (func_212(iParam1, iParam2, uParam3, Global_1574175, 0, func_269(), sParam7))
		{
			func_211(1);
			if ((!func_209() && !func_207()) || unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
			{
				if (func_206())
				{
					func_201();
				}
				else
				{
					unk_0x1382AC429D0EA2BB(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_200(1);
						Global_1574175 = 0;
						iVar19 = -1;
						if (Global_1574396 != 1)
						{
							func_199(iParam1, 0, 0);
							if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
							{
								unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_37(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
									if (!func_34(iVar3, 0))
									{
										if ((func_198(iVar3) || Global_2424047[iVar3 /*416*/].f_236 != -1) || func_197(iVar3))
										{
											iVar9 = iVar3;
											if (func_63(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_196(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_193(unk_0x95B959F18401C09A(), 0) && func_192(unk_0x95B959F18401C09A()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_191())
							{
								if (func_37(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
								}
								else
								{
									iVar3 = func_14();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_190(iVar3) && func_185(iVar3, iParam2)) && func_37(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
								Var6 = { func_180(iVar3) };
								if (iVar3 == unk_0x95B959F18401C09A())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xEEF8394DB3D3DFA1(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_179(iVar3) };
								iVar5 = func_173(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xD9A84B163D46BD9B(iVar5);
								}
								Global_1574175++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_191())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_168(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_167(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_161(iVar3, 0);
								if (bVar2)
								{
									if (func_80(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_160(iParam5))
								{
									func_159(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_159(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x8950ED5730F62EE8(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
							if (func_37(iVar3, 0, 1) && !unk_0x0E4018692D92041D(iVar14, iVar3))
							{
								iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
							}
							else
							{
								iVar3 = func_14();
							}
							if (func_190(iVar3))
							{
								if (func_37(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
									Var6 = { func_180(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_179(iVar3) };
									iVar5 = func_173(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xD9A84B163D46BD9B(iVar5);
									}
									Global_1574175++;
									iVar16 = func_161(iVar3, 1);
									if (bVar2)
									{
										if (func_80(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_138(iVar3, unk_0xEEF8394DB3D3DFA1(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							func_135(uParam3, iParam1);
						}
						func_39(&(uParam3->f_21));
						func_134();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 7))
						{
							func_133(uParam3, iParam1);
							func_132(iParam1, 0, 1);
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 7);
						}
						func_133(uParam3, iParam1);
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 11);
						}
						if (func_128(uParam3))
						{
							Global_1574396 = 1;
						}
						func_126(uParam3);
						if (Global_1574396 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574396 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x11AE7F6A404414C9(*iParam1))
					{
						unk_0x5C58D0ADA22491FA(7);
						unk_0x5A2C46836B4DF5B3(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5C58D0ADA22491FA(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_134();
			func_200(0);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
			}
			if (unk_0x0E4018692D92041D(uParam3->f_33, 10))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x94A8B1D385430451();
}

void func_126(var uParam0)
{
	if (!func_3(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_39(&(uParam0->f_21));
		func_127(0);
	}
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574396 != 2)
		{
			Global_1574396 = 2;
		}
	}
	else
	{
		switch (Global_1574396)
		{
			case 0:
				Global_1574396 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0x7C1C88877E8AAA50(uParam0->f_37);
	if (iVar3 != func_14() && func_37(iVar3, 0, 1))
	{
		Var2 = { func_179(iVar3) };
		iVar1 = func_131(uParam0, uParam0->f_37);
		if (func_130(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_129(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_129(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_129(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_129(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0x2B1E6E274DDA8154(&Var2))
						{
							iVar4 = 1;
							func_129(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_129(uParam0, iVar0, 0);
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
	return iVar4;
}

void func_129(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

var func_131(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_132(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0xBB698266C5FDF0A7(*iParam0, "COLLAPSE"))
	{
		unk_0x295B86DE57A0721D(bParam1);
		unk_0x818901B332D5541D();
	}
	if (iParam2 == 1)
	{
		if (unk_0xBB698266C5FDF0A7(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x818901B332D5541D();
		}
	}
}

void func_133(var uParam0, int iParam1)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_33, 10))
	{
		unk_0xBB698266C5FDF0A7(*iParam1, "SET_HIGHLIGHT");
		unk_0x4D9DA18AB3C2A466(uParam0->f_35);
		unk_0x818901B332D5541D();
		unk_0x8950ED5730F62EE8(&(uParam0->f_33), 10);
	}
}

void func_134()
{
	if (Global_1574396 != 0)
	{
		Global_1574396 = 0;
	}
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
		if (iVar2 != func_14())
		{
			if (func_37(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_137(uParam0->f_38[iVar0 /*2*/], 0);
					func_136(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589819[iVar0 /*818*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_136(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		if (unk_0xBB698266C5FDF0A7(*uParam0, "SET_ICON"))
		{
			unk_0x4D9DA18AB3C2A466(iParam1);
			unk_0x4D9DA18AB3C2A466(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
			}
			unk_0x818901B332D5541D();
		}
	}
}

int func_137(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
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

void func_138(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_158() && iParam4 < func_157())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xBB698266C5FDF0A7(*iParam2, sVar1))
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_156("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(iParam10);
			}
			func_156(sParam1);
			unk_0x4D9DA18AB3C2A466(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_156("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(65);
			}
			unk_0x4D9DA18AB3C2A466(-1);
			func_156("");
			if (uParam3->f_108 == 6)
			{
				func_156("");
			}
			else
			{
				func_156(&sParam5);
			}
			func_143(uParam3, iParam0);
			unk_0xE3F1DCC670198D2D(sParam9);
			unk_0xE3F1DCC670198D2D(sParam9);
			if (func_142(uParam3))
			{
				func_141("DPAD_FRIEND");
			}
			else if (func_140(uParam3))
			{
				func_141("DPAD_FRIEND");
			}
			else if (func_139(uParam3))
			{
				func_141("DPAD_CREW");
			}
			else
			{
				func_141("");
			}
			unk_0x818901B332D5541D();
		}
	}
}

bool func_139(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 6);
}

bool func_140(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 5);
}

void func_141(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

int func_142(var uParam0)
{
	if (func_140(uParam0) && func_139(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, int iParam1)
{
	if (func_155(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(121);
	}
	else if (func_148(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(122);
	}
	else if (((unk_0x0E4018692D92041D(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x0E4018692D92041D(Global_2424047[iParam1 /*416*/].f_411, 0))
	{
		unk_0x4D9DA18AB3C2A466(123);
	}
	else
	{
		if (func_144())
		{
			uParam0->f_36 = 0;
		}
		unk_0x295B86DE57A0721D(uParam0->f_36);
	}
}

int func_144()
{
	if (unk_0x289064CB38B560AA())
	{
		if (func_146() || func_145())
		{
			return 1;
		}
	}
	return 0;
}

bool func_145()
{
	return Global_2448756.f_14;
}

bool func_146()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_145();
	}
	return func_147(Global_4456448.f_138474);
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4985[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_148(int iParam0)
{
	if ((func_37(iParam0, 0, 1) && func_152()) && func_149(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0, bool bParam1)
{
	return func_150(iParam0, bParam1, 1);
}

int func_150(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_151(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_14() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152()
{
	if (func_85(unk_0x95B959F18401C09A()) || func_154())
	{
		if (!func_153(unk_0x95B959F18401C09A(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_153(int iParam0, int iParam1)
{
	if (func_26(iParam0) == iParam1)
	{
		return func_23(iParam0);
	}
	return 0;
}

int func_154()
{
	switch (func_192(unk_0x95B959F18401C09A()))
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

int func_155(int iParam0)
{
	if (func_144())
	{
		if (func_37(iParam0, 0, 1))
		{
			return func_63(iParam0);
		}
	}
	if ((func_37(iParam0, 0, 1) && func_152()) && func_151(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_156(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_157()
{
	int iVar0;
	
	if (Global_1574177)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574177)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_158() && iParam3 < func_157())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574177)
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
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x11AE7F6A404414C9(*iParam1))
		{
			if (unk_0xBB698266C5FDF0A7(*iParam1, sVar1))
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
				if (unk_0x0E4018692D92041D(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_156("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					func_141(sParam16);
				}
				else
				{
					func_156(&(uParam2->f_1));
				}
				unk_0x4D9DA18AB3C2A466(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_156("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4D9DA18AB3C2A466(iVar0);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(-1);
				}
				if (func_191())
				{
					func_156("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 5 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 7 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_TWO_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 8 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
				{
					unk_0x713FEBE56D2BD403("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x974BEF45D557B847(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xE800DC85FDF60F85(iParam10);
					}
					unk_0xFA6BEE2B1507FF1E(&(uParam2->f_104));
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x713FEBE56D2BD403("FM_AE_CASH");
					unk_0x9454B3D676754D96(iParam10, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x713FEBE56D2BD403("FM_AE_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
					else
					{
						unk_0x713FEBE56D2BD403("FM_NG_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
					{
						func_141(&(uParam2->f_104));
					}
					else
					{
						func_156("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x713FEBE56D2BD403("STRING");
					unk_0xDC97362660946DF9(iParam14, 6);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (fParam13 != -1f)
				{
					unk_0x713FEBE56D2BD403("NUMBER");
					unk_0x974BEF45D557B847(fParam13, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (iParam10 != -1)
				{
					unk_0x4D9DA18AB3C2A466(iParam10);
				}
				else
				{
					func_156("");
				}
				if (uParam2->f_108 == 6)
				{
					func_156("");
				}
				else
				{
					func_156(&sParam4);
				}
				func_143(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x786AF4A44E1B5B4B(sParam8))
				{
					func_156("");
					func_156("");
				}
				else
				{
					unk_0xE3F1DCC670198D2D(sParam8);
					unk_0xE3F1DCC670198D2D(sParam8);
				}
				if (func_142(uParam2))
				{
					func_141("DPAD_FRIEND");
				}
				else if (func_140(uParam2))
				{
					func_141("DPAD_FRIEND");
				}
				else if (func_139(uParam2))
				{
					func_141("DPAD_CREW");
				}
				else
				{
					func_141("");
				}
				unk_0x818901B332D5541D();
			}
		}
	}
}

int func_160(int iParam0)
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

int func_161(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_85(iParam0)) && !func_166(iParam0))
	{
		iVar0 = func_165();
	}
	iVar1 = func_164(iParam0);
	if (!iVar1 == -1)
	{
		return func_162(iVar1);
	}
	return iVar0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_163(iParam0);
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

var func_163(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_164(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_165()
{
	return 21;
}

bool func_166(int iParam0)
{
	return func_31(iParam0, 20);
}

char* func_167(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x65CD0D9BE7EAB2FD())
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
			if (unk_0x65CD0D9BE7EAB2FD())
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

int func_168(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_172(iParam3))
	{
		*fParam1 = (func_169(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_160(iParam3))
	{
		*fParam1 = (func_169(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_169(int iParam0, int iParam1)
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
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_171(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_170(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_170(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_171(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_172(int iParam0)
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

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = func_176(iParam0);
	if (iVar0 == -1)
	{
		func_174(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_174(int iParam0, bool bParam1)
{
	if (!func_37(iParam0, 0, 1))
	{
		return;
	}
	if (func_176(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_175(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0)
{
	int iVar0;
	
	if (!func_37(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x5E83461198335D9B(Global_1383710[iVar0 /*5*/].f_2) && unk_0x47CD6BA404AEE035(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_177(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_177(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (unk_0x5E83461198335D9B(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xD9A84B163D46BD9B(Global_1383710[iParam0 /*5*/].f_2), 64);
			unk_0x4F9021F32A32F422(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x381D44C2F0113354(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1383871)
	{
		Global_1383710[iVar2 /*5*/] = { Global_1383710[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_178(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_178(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		uParam0->f_3 = unk_0x78DCC5D0CB43DEBA();
	}
}

struct<13> func_179(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_180(int iParam0)
{
	char cVar0[32];
	
	if (func_37(iParam0, 0, 1))
	{
		Global_2505680 = { func_179(iParam0) };
		if (unk_0xDB36A8F522CBC12D())
		{
			if (func_130(Global_2505680))
			{
				if (!unk_0x8CB86A22FA87265D(&Global_2505680))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xE9FD52A86479B22B(0))
		{
			return cVar0;
		}
		if (func_184(&Global_2505680))
		{
			Global_2505610 = { func_182(iParam0) };
			func_181(&Global_2505610, &cVar0);
		}
	}
	return cVar0;
}

void func_181(var uParam0, char* sParam1)
{
	unk_0x6BD9A45C73EA0684(uParam0, 35, sParam1);
}

struct<35> func_182(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_183(iParam0))
	{
		return Global_1312899[unk_0x95B959F18401C09A() /*35*/];
	}
	Var0 = { func_179(iParam0) };
	unk_0xDD530AC51A578470(&Var1, 35, &Var0);
	return Var1;
}

int func_183(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	return 0;
}

int func_184(var uParam0)
{
	if (unk_0x28D5F9AC3E7BC48B())
	{
		if (unk_0x062B7A5C795CB453() && unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_189(iParam0) || func_188(iParam0)) || func_187(iParam0))
		{
			return 0;
		}
	}
	if (!func_186(iParam0))
	{
		return 0;
	}
	if ((!func_198(iParam0) && Global_2424047[iParam0 /*416*/].f_236 == -1) && !func_197(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_186(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_187(int iParam0)
{
	if (func_189(iParam0))
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8);
}

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10) || unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 9));
	}
	return 0;
}

bool func_189(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 2);
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0E4018692D92041D(Global_1589819[iVar0 /*818*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_191()
{
	switch (func_192(unk_0x95B959F18401C09A()))
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
	switch (func_26(unk_0x95B959F18401C09A()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_166(unk_0x95B959F18401C09A()))
	{
		switch (func_192(unk_0x95B959F18401C09A()))
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
	if (func_153(unk_0x95B959F18401C09A(), 236))
	{
		return 1;
	}
	return 0;
}

int func_192(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 && func_194(Global_1626536[iParam0 /*603*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1)
	{
		if (func_194(Global_1626536[iParam0 /*603*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
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

void func_196(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_37(unk_0x7C1C88877E8AAA50(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_198(iVar1) || Global_2424047[iVar1 /*416*/].f_236 != -1) || func_197(iVar1))
				{
					if (func_12(iVar1, iParam1, 0))
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

bool func_197(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_198(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		if (func_37(unk_0x95B959F18401C09A(), 0, 1))
		{
			if (unk_0xB4B29C6A8F481EEA(iParam0, unk_0x95B959F18401C09A()) || func_192(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x4D9DA18AB3C2A466(iParam2);
		unk_0x818901B332D5541D();
	}
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1371944.f_2 == 0)
		{
			Global_1371944.f_2 = 1;
		}
	}
	else if (Global_1371944.f_2 == 1)
	{
		Global_1371944.f_2 = 0;
	}
}

void func_201()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
	{
		if (func_205())
		{
			func_202();
		}
	}
}

void func_202()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_203(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_203(var uParam0, int iParam1)
{
	func_204(uParam0, iParam1);
}

void func_204(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_205()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

int func_206()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0) && func_205())
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1) && func_205())
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if (func_205())
	{
		if (func_208(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_209()
{
	if (func_205())
	{
		if (func_210(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
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
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_211(int iParam0)
{
	if (Global_1371944.f_1 != Global_1371944)
	{
		Global_1371944.f_1 = Global_1371944;
	}
	if (Global_1371944 != iParam0)
	{
		Global_1371944 = iParam0;
	}
}

int func_212(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_268(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_267();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_266())
		{
			if (func_265() > 0 && Global_1574177)
			{
				unk_0x03D404FD169632CA();
				unk_0x5E1FA2076D53C3F5(fVar4);
				unk_0x581AE7724ACAD410(18);
				if (unk_0xFAC8F20FBC764F4D())
				{
					unk_0x2E4F269906BF5F41();
				}
				unk_0x581AE7724ACAD410(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_247())
		{
			func_246(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
	{
		func_246(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_3(&(uParam2->f_19)))
	{
		if (func_265() == 1)
		{
			func_245(bVar3, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_246(iParam0, uParam2, 0);
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4583), 5);
		}
	}
	if (func_3(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			unk_0x2E4F269906BF5F41();
		}
		unk_0x581AE7724ACAD410(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_265() == 0 && !bParam5))
		{
			func_246(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_244();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x03D404FD169632CA();
				}
				unk_0x581AE7724ACAD410(18);
			}
			if (!unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_244();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x03D404FD169632CA();
					}
					unk_0x581AE7724ACAD410(18);
				}
				unk_0x5E1FA2076D53C3F5(fVar4);
				if (func_245(bVar3, iParam0, 0))
				{
					func_199(iParam0, 0, 0);
					sVar1 = func_242(iParam1, &(Global_4456448.f_138481), bParam4);
					Var0 = { func_240(iParam1) };
					if (bParam4)
					{
						func_237(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_230(iParam0, func_234(uParam2), func_231(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_223(uParam2);
						if (!unk_0x786AF4A44E1B5B4B(sParam6))
						{
							sVar6 = sParam6;
						}
						func_221(iParam0, sVar6, func_222(), -1);
					}
					else if (func_144())
					{
						uParam2->f_34 = Global_1574176;
						func_237(iParam0, sVar1, &Var0, 1, -1, Global_1574176, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_213(iParam1);
						uParam2->f_34 = Global_1574176;
						func_237(iParam0, sVar1, "", 0, iVar5, Global_1574176, 1);
					}
					else
					{
						iVar5 = func_213(iParam1);
						func_237(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x8950ED5730F62EE8(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				Global_1574175 = uParam3;
				Global_1574174 = 1;
				unk_0x5E1FA2076D53C3F5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574176)
					{
						unk_0xCE689A8E8C42ED78(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_220())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
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
		
		case 25:
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
			if (func_219(unk_0x95B959F18401C09A()))
			{
				iVar0 = 20;
			}
			if (func_218(unk_0x95B959F18401C09A()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_217(unk_0x95B959F18401C09A()))
	{
		iVar0 = 2;
	}
	if (func_214())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_214()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_216();
	}
	return func_215(Global_4456448.f_138474);
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_216()
{
	return Global_2448756.f_16;
}

bool func_217(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 4;
}

bool func_218(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_219(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_220()
{
	return Global_4456448.f_1 == 0;
}

void func_221(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_141(sParam1);
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_141("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_222()
{
	switch (func_192(unk_0x95B959F18401C09A()))
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

char* func_223(var uParam0)
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
	switch (func_192(unk_0x95B959F18401C09A()))
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
			if (func_226())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_225(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_225(1))
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
			if (func_224(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_224(int iParam0)
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

bool func_225(bool bParam0)
{
	return func_149(unk_0x95B959F18401C09A(), bParam0);
}

bool func_226()
{
	return (func_229() && func_227(func_228()));
}

bool func_227(int iParam0)
{
	return func_151(iParam0, 1);
}

int func_228()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35;
}

bool func_229()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148;
}

void func_230(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_141(sParam1);
		}
		else if (func_26(unk_0x95B959F18401C09A()) == 133)
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT_C");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_141("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_231(var uParam0)
{
	int iVar0;
	
	iVar0 = func_26(unk_0x95B959F18401C09A());
	if (func_233())
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
			switch (func_232())
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

int func_232()
{
	if (func_26(unk_0x95B959F18401C09A()) == 133)
	{
		return Global_2528542.f_4810;
	}
	return -1;
}

bool func_233()
{
	return Global_1589692;
}

char* func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = func_26(unk_0x95B959F18401C09A());
	if (func_233())
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
			if (func_236() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_236() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_232())
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
			if (func_235() == 1)
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

int func_235()
{
	return Global_2528542.f_4813;
}

int func_236()
{
	if (func_26(unk_0x95B959F18401C09A()) == 132)
	{
		return Global_2528542.f_4808;
	}
	return -1;
}

void func_237(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_156(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x713FEBE56D2BD403(sParam1);
			unk_0xE800DC85FDF60F85(iParam5);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_141(sParam1);
		}
		if (func_266() && iParam6)
		{
			if (func_239())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x713FEBE56D2BD403("LBD_DPD_CNT");
			unk_0xE800DC85FDF60F85(iVar0);
			unk_0xE800DC85FDF60F85(iVar1);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_141(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (func_238(unk_0x95B959F18401C09A()))
			{
				unk_0x4D9DA18AB3C2A466(166);
			}
			else if (func_216())
			{
				unk_0x4D9DA18AB3C2A466(220);
			}
		}
		unk_0x818901B332D5541D();
	}
}

int func_238(int iParam0)
{
	if (func_219(iParam0) || func_218(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	return Global_1574177;
}

struct<4> func_240(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_241(unk_0x95B959F18401C09A()) || func_217(unk_0x95B959F18401C09A()))
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
			StringIntConCat(&Var0, Global_4456448.f_39, 16);
			break;
	}
	if (func_144() && unk_0x289064CB38B560AA())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_39, 16);
	}
	return Var0;
}

bool func_241(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 5;
}

char* func_242(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_144() || unk_0x786AF4A44E1B5B4B(sParam1)))
	{
		uVar0 = func_243();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x786AF4A44E1B5B4B(sParam1))
	{
		if (Global_1574415 == 1)
		{
			Global_1574415 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
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
			case 25:
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
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_243()
{
	if (unk_0x3D766F5FD36E703E())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xC95AE863AB260A58())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x18D92F5299E07379())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xC8AE1B3BA3C8EDC9())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_244()
{
	Global_37339 = 1;
}

bool func_245(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x199B24FF79A52CCF("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x199B24FF79A52CCF("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x199B24FF79A52CCF("mp_matchmaking_card");
	}
	return unk_0x11AE7F6A404414C9(*iParam1);
}

void func_246(int iParam0, var uParam1, bool bParam2)
{
	unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 7);
	Global_1574175 = 0;
	func_134();
	Global_1574174 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_3(&(uParam1->f_19)))
		{
			func_39(&(uParam1->f_19));
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4583), 5);
		}
	}
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0x83A1D480DB0B52CC(iParam0);
	}
	if (unk_0x0E4018692D92041D(uParam1->f_33, 0))
	{
		unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 0);
	}
	unk_0x5E1FA2076D53C3F5(0f);
}

int func_247()
{
	if (func_264())
	{
		return 0;
	}
	if (func_263())
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (!func_259())
	{
		return 0;
	}
	if (func_258(8, -1))
	{
		return 0;
	}
	if (func_265() == 2)
	{
		return 0;
	}
	if (Global_2528542.f_4534)
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	else if (!func_254(unk_0x95B959F18401C09A(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_253(1) || func_251(1)) || Global_17272.f_124) || Global_17272)
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (func_250() && Global_1689319 == 2)
	{
		return 0;
	}
	if (func_32(unk_0x95B959F18401C09A()) && !func_250())
	{
		return 0;
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (Global_1657080)
	{
		return 0;
	}
	if (func_249(0))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (Global_1365133)
	{
		return 0;
	}
	if ((Global_1682620.f_705.f_5 || Global_1685431.f_705.f_5) || Global_1681663.f_705.f_5)
	{
		return 0;
	}
	if (func_248(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

bool func_248(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_4, 6);
}

bool func_249(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_41, iParam0);
}

bool func_250()
{
	return (unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 0));
}

int func_251(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_252(unk_0x33CD235DF1E6A94E()))
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

int func_252(int iParam0)
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

bool func_253(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_254(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_255(iParam0))
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

bool func_255(int iParam0)
{
	return func_256(iParam0);
}

bool func_256(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

bool func_257()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

bool func_258(int iParam0, int iParam1)
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

int func_259()
{
	if (func_260() == 0)
	{
		return 1;
	}
	return 0;
}

int func_260()
{
	return Global_1312467.f_18;
}

int func_261()
{
	if (func_262())
	{
		return 1;
	}
	if (unk_0xBB5E373390A5F824())
	{
		return 0;
	}
	if (unk_0x75A50A9E5219C397() || unk_0xD33DAC8D0D70A78C())
	{
		return 0;
	}
	if (unk_0x90346DACE0A79A81())
	{
		return 0;
	}
	return 1;
}

bool func_262()
{
	return Global_1312439;
}

bool func_263()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 5;
}

bool func_264()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_265()
{
	return Global_1371947.f_68;
}

int func_266()
{
	if (Global_1574176 > 16)
	{
		return 1;
	}
	return 0;
}

float func_267()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5972EE9BF3C1BE95()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_269()
{
	if (func_270(unk_0x95B959F18401C09A()))
	{
		return Global_1319080;
	}
	return 0;
}

int func_270(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0xCCD95118AB42E155(iParam0);
		}
	}
	return 0;
}

int func_271()
{
	if (func_269())
	{
		return 1;
	}
	if (func_187(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_233())
	{
		return 1;
	}
	if (func_85(unk_0x95B959F18401C09A()))
	{
		switch (func_26(unk_0x95B959F18401C09A()))
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
				if (!func_272(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_272(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_272(unk_0x95B959F18401C09A()))
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

bool func_272(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 4);
}

int func_273(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_85(unk_0x95B959F18401C09A()) && !func_166(unk_0x95B959F18401C09A())) && !func_153(unk_0x95B959F18401C09A(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_95(unk_0x95B959F18401C09A(), 0) && func_166(unk_0x95B959F18401C09A()))
		{
			return 1;
		}
		if (func_274(unk_0x95B959F18401C09A()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_85(iParam0) && !func_189(iParam0)) && !unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8));
	bVar2 = func_166(iParam0);
	uVar3 = func_30();
	bVar4 = func_90();
	if ((bVar1 && (func_23(iParam0) || func_24(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_84(iParam0)) && !func_275(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2528542.f_4889.f_212 != iVar0)
	{
		Global_2528542.f_4889.f_212 = iVar0;
	}
	return iVar0;
}

bool func_275(int iParam0)
{
	return func_31(iParam0, 19);
}

void func_276()
{
	func_850();
	func_849();
	func_823();
	func_786();
	func_782();
	func_771();
	func_764();
	switch (func_763(unk_0x72B85B341ADBE9DE()))
	{
		case 0:
			if (func_762() || func_760())
			{
				func_753();
				func_752(1);
				func_751(1);
				func_728(-1, 0, 0, -1, 0, 0);
				func_727();
				unk_0x8950ED5730F62EE8(&Global_1669352, 1);
				func_726(unk_0x72B85B341ADBE9DE(), 1);
			}
			else
			{
				func_753();
				func_752(1);
				func_728(-1, 0, 0, -1, 0, 0);
				func_726(unk_0x72B85B341ADBE9DE(), 2);
			}
			break;
		
		case 1:
			if (func_3(&(Local_182.f_74)))
			{
				func_706(0);
				if (func_762())
				{
					func_700(0);
				}
				else
				{
					func_700(1);
				}
				if (func_3(&(Local_182.f_78)))
				{
					func_700(3);
				}
				func_697();
				func_696();
			}
			if (func_695())
			{
				func_751(0);
				func_726(unk_0x72B85B341ADBE9DE(), 2);
			}
			break;
		
		case 2:
			if (func_3(&(Local_182.f_74)))
			{
				func_706(1);
				func_700(2);
				func_697();
				func_696();
				if (func_3(&(Local_182.f_78)))
				{
					func_700(4);
				}
				else
				{
					func_693(4);
				}
			}
			if (func_691())
			{
				func_751(1);
				func_726(unk_0x72B85B341ADBE9DE(), 1);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_688();
			if (unk_0x0E4018692D92041D(Global_1669357.f_3, 2))
			{
				func_306();
			}
			if (func_287(&uLocal_129, 0, 0))
			{
				func_852(unk_0x72B85B341ADBE9DE(), 3);
			}
			break;
		
		case 5:
			break;
	}
	func_277();
}

void func_277()
{
	func_286();
	func_278();
}

void func_278()
{
	if (func_3(&(Local_182.f_74)))
	{
		if ((!unk_0x0E4018692D92041D(Local_182.f_1, 2) && !unk_0x0E4018692D92041D(Local_182.f_1, 1)) && !unk_0x0E4018692D92041D(Local_182.f_1, 7))
		{
			if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 0, 0))
			{
				if (func_30())
				{
					if (!func_762() && !func_760())
					{
						func_700(10);
					}
				}
			}
		}
	}
}

int func_279(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_123(iParam1))
	{
		if (!bParam3)
		{
			return func_280(func_285(iParam0), iParam1, fParam2);
		}
		else if (func_280(func_285(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_280(func_285(iParam0), iParam1, 15f))
		{
			if (func_37(iParam0, 1, 1))
			{
				iVar0 = unk_0x378BD4B3881338C2(iParam0);
				if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iVar0, 0))
				{
					if (unk_0xF0D230FB550CD6EB(iVar0, 0))
					{
						iVar1 = unk_0x6EE765D5B613AB2A(iVar0);
						if (unk_0x765F6FEEFF39224F(iVar1) && !unk_0xD62C4419A41F106A(iVar1, 0))
						{
							if (unk_0xA0EDFFB6CF5B314A(iVar1, "PYV_Yacht"))
							{
								iVar2 = unk_0xE48FAA8A938257C9(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_280(vector3 vParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_123(iParam1))
	{
		func_281(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return unk_0xC2F708DE8AD68197(vParam0, vVar0, vVar1, fVar2, 0, true);
	}
	return 0;
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	
	vVar0 = { func_284(iParam0) };
	uVar1 = func_283(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_282(&vVar2, 0f, 0f, uVar1);
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

void func_282(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

var func_283(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_7;
}

Vector3 func_284(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_4;
}

Vector3 func_285(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), false);
}

void func_286()
{
	if (func_3(&(Local_182.f_74)))
	{
		if (func_3(&(Local_182.f_78)))
		{
			if (func_19(&(Local_182.f_74), func_18(), 0))
			{
				if (func_762() || func_760())
				{
					func_700(8);
				}
				else
				{
					func_700(9);
				}
			}
		}
	}
}

int func_287(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_99(29);
	if ((*uParam0 > 0 && !func_205()) && func_274(unk_0x95B959F18401C09A()) != 0)
	{
		if (!func_303())
		{
			func_302();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_3(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 2);
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_301(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_3(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_294(iParam2);
				func_301(uParam0, 2);
			}
			break;
		
		case 2:
			func_294(0);
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_288(func_289(0)))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				func_301(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
				unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 2);
				func_301(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
			unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 2);
			return 1;
	}
	return 0;
}

int func_288(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

char* func_289(int iParam0)
{
	if (((func_292(unk_0x95B959F18401C09A()) || func_291(unk_0x95B959F18401C09A())) || func_226()) || iParam0)
	{
		if (func_291(unk_0x95B959F18401C09A()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_194(func_290()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_290()
{
	return Global_1645834;
}

bool func_291(int iParam0)
{
	return func_195(func_192(iParam0), 0);
}

bool func_292(int iParam0)
{
	return func_293(func_192(iParam0));
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148 && func_151(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35, 1))
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

void func_294(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0))
	{
		if (((((((((((!unk_0xE35413546DC97620() && !unk_0x0E4018692D92041D(Global_2528542.f_786, 2)) && func_37(unk_0x95B959F18401C09A(), 1, 1)) && !Global_68807) && !Global_53675) && !unk_0xBB5E373390A5F824()) && !func_31(unk_0x95B959F18401C09A(), 22)) && func_274(unk_0x95B959F18401C09A()) != 0) && !func_299(func_300())) && !func_292(unk_0x95B959F18401C09A())) && !func_298(func_192(unk_0x95B959F18401C09A()))) && !func_297(func_192(unk_0x95B959F18401C09A())))
		{
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 1);
			func_296(func_289(iParam0), -1);
			func_295(1);
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 0);
		}
	}
}

void func_295(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_225(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_205())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_296(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, false, iParam1);
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
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

int func_298(int iParam0)
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

int func_299(int iParam0)
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

int func_300()
{
	char* sVar0;
	
	sVar0 = unk_0xD178EF744F20B712();
	if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	return 0;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_302()
{
	Global_2460155 = 1;
}

int func_303()
{
	if (((((((func_192(unk_0x95B959F18401C09A()) == 170 || func_192(unk_0x95B959F18401C09A()) == 219) || func_192(unk_0x95B959F18401C09A()) == 221) || func_192(unk_0x95B959F18401C09A()) == 220) || func_192(unk_0x95B959F18401C09A()) == 216) || func_192(unk_0x95B959F18401C09A()) == 215) || func_192(unk_0x95B959F18401C09A()) == 214) || func_192(unk_0x95B959F18401C09A()) == 218)
	{
		return 1;
	}
	if (func_304(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_305(int iParam0)
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

void func_306()
{
	if (func_686())
	{
		if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1, 4))
		{
			if (unk_0x0E4018692D92041D(Local_182.f_1, 7))
			{
				if (!func_760() && !func_762())
				{
					func_706(10);
				}
				func_494(152, 0, &Local_112, 0);
				func_492(0, func_14());
				unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1), 4);
				func_369(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
				return;
			}
			if (unk_0x0E4018692D92041D(Local_182.f_1, 1))
			{
				if (func_762() || func_760())
				{
					func_706(2);
					func_494(152, 1, &Local_112, 0);
					func_492(0, unk_0x95B959F18401C09A());
					func_369(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1), 4);
				}
				else
				{
					if ((func_368() || func_367()) || func_366(unk_0x95B959F18401C09A()))
					{
						func_706(9);
					}
					else
					{
						func_307(1);
					}
					func_494(152, 0, &Local_112, 0);
					func_492(0, unk_0x95B959F18401C09A());
					func_369(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1), 4);
				}
				return;
			}
			if (unk_0x0E4018692D92041D(Local_182.f_1, 2))
			{
				if (func_762() || func_760())
				{
					func_706(8);
					func_494(152, 0, &Local_112, 0);
					func_492(0, unk_0x95B959F18401C09A());
					func_369(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1), 4);
				}
				else
				{
					if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 7))
					{
						func_706(3);
						Local_112.f_4 = Local_182.f_6;
						func_494(152, 1, &Local_112, 0);
						func_369(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						func_492(0, unk_0x95B959F18401C09A());
					}
					else if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 7) && unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 8))
					{
						func_706(7);
						func_494(152, 0, &Local_112, 0);
						func_369(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						func_492(0, unk_0x95B959F18401C09A());
					}
					else
					{
						if ((func_368() || func_367()) || func_366(unk_0x95B959F18401C09A()))
						{
							if (Local_182.f_6 == 1)
							{
								func_706(5);
							}
							else
							{
								func_706(6);
							}
						}
						else
						{
							func_307(0);
						}
						func_494(152, 0, &Local_112, 0);
						func_369(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						func_492(0, unk_0x95B959F18401C09A());
					}
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x95B959F18401C09A() /*3*/].f_1), 4);
				}
				return;
			}
		}
	}
}

void func_307(int iParam0)
{
	if (func_320())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_319("GB_YA_TCK0", 1);
			break;
		
		case 1:
			func_308("GB_YA_TCK1", func_313(func_10()), 0, 1);
			break;
	}
}

int func_308(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	unk_0xD61E5ED1D4E687A5(sParam1);
	if (iParam2 != 0)
	{
		unk_0xE800DC85FDF60F85(iParam2);
	}
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_309(32, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_309(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_312() || !unk_0x289064CB38B560AA()) || !func_34(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_310(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_311(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_312()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

char* func_313(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		sVar0 = func_318(&(Global_1626536[iParam0 /*603*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1626536[iParam0 /*603*/].f_11.f_120 != Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_120)
	{
		sVar0 = func_316(iParam0, 0);
		return sVar0;
	}
	if (((func_31(iParam0, 28) || func_31(unk_0x95B959F18401C09A(), 28)) || func_315(iParam0)) && !func_314(iParam0))
	{
		return func_316(iParam0, 0);
	}
	iVar1 = func_81(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x95B959F18401C09A())
		{
			if (!unk_0xDB36A8F522CBC12D() && !unk_0x59D656DCC6383E85(0, -1, 1))
			{
				return func_316(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		sVar0 = func_318(&(Global_1626536[iVar1 /*603*/].f_11.f_104));
		if (unk_0x786AF4A44E1B5B4B(sVar0))
		{
			return func_316(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_314(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_179(iParam0) };
	if (unk_0xDB36A8F522CBC12D())
	{
		if (unk_0xE9FD52A86479B22B(0))
		{
			if (unk_0x8CB86A22FA87265D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_179(iParam0) };
		if (unk_0xF5DB888C353E2BED() || unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0xE9FD52A86479B22B(0))
			{
				return 0;
			}
		}
		else if (unk_0xDB36A8F522CBC12D())
		{
			if (unk_0xE9FD52A86479B22B(0))
			{
				if (unk_0x8CB86A22FA87265D(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_316(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_149(iParam0, 1))
		{
			return func_317();
		}
	}
	return unk_0x434854E9CAE13C4A("GB_REST_ACC");
}

char* func_317()
{
	return unk_0x434854E9CAE13C4A("GB_REST_ACCM");
}

var func_318(var uParam0)
{
	return uParam0;
}

int func_319(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_309(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_320()
{
	if (func_365(152))
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (!func_321(1, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_321(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_364(unk_0x95B959F18401C09A(), 29))
	{
		return 0;
	}
	if (func_93(unk_0x95B959F18401C09A(), 21))
	{
		return 0;
	}
	if (func_93(unk_0x95B959F18401C09A(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x69E8EDFEA57E361D())
		{
			return 0;
		}
	}
	if (!func_186(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF29C37CB006AE9DD())
		{
			return 0;
		}
	}
	if (func_363(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (func_263())
	{
		return 0;
	}
	if (func_361())
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (unk_0x289064CB38B560AA())
	{
		return 0;
	}
	if (func_255(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!func_259())
	{
		return 0;
	}
	if (func_93(unk_0x95B959F18401C09A(), 0) || func_93(unk_0x95B959F18401C09A(), 3))
	{
		return 0;
	}
	if ((func_93(unk_0x95B959F18401C09A(), 12) || func_93(unk_0x95B959F18401C09A(), 14)) || func_93(unk_0x95B959F18401C09A(), 13))
	{
		return 0;
	}
	if (func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_329())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_328())
		{
			return 0;
		}
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (func_327(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_326())
	{
		return 0;
	}
	if (func_325(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (func_323(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_322(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0)
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

int func_323(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_261.f_4 != 0 || Global_2424047[iParam0 /*416*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_324()
{
	return Global_1671295.f_3663 != -1;
}

int func_325(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_326()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (!func_37(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

bool func_328()
{
	return Global_93734.f_340 > 0;
}

int func_329()
{
	int iVar0;
	
	iVar0 = func_192(unk_0x95B959F18401C09A());
	if (((func_353(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_25) || func_352(unk_0x95B959F18401C09A())) || func_351(unk_0x95B959F18401C09A())) || func_346(unk_0x95B959F18401C09A()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_344(unk_0x95B959F18401C09A()))
	{
		if (func_343(iVar0) || func_342(iVar0))
		{
			return 1;
		}
	}
	if (func_304(unk_0x95B959F18401C09A()))
	{
		if (func_342(iVar0))
		{
			return 1;
		}
	}
	if (func_341(unk_0x95B959F18401C09A()))
	{
		if (func_340(iVar0))
		{
			return 1;
		}
	}
	if (func_339(unk_0x95B959F18401C09A()))
	{
		if (func_338(iVar0))
		{
			return 1;
		}
	}
	if (func_337(unk_0x95B959F18401C09A()))
	{
		if (func_336(iVar0))
		{
			return 1;
		}
	}
	if (func_335(unk_0x95B959F18401C09A()))
	{
		if (func_334(iVar0))
		{
			return 1;
		}
	}
	if (func_333(unk_0x95B959F18401C09A(), 0))
	{
		if (func_332(iVar0))
		{
			if (func_330(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	if (func_331(iParam0) != func_14())
	{
		return func_331(iParam0) == func_81(iParam0);
	}
	return 0;
}

int func_331(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_333(int iParam0, bool bParam1)
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
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_335(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_337(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_338(int iParam0)
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

int func_339(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
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

int func_341(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
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

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	if (func_345(Global_1589819[iParam0 /*818*/].f_273.f_25, -1))
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0, int iParam1)
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

int func_346(int iParam0)
{
	if (func_347(Global_1589819[iParam0 /*818*/].f_273.f_25, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_348(unk_0x95B959F18401C09A(), 0);
	}
	if (bParam1)
	{
		if (func_348(unk_0x95B959F18401C09A(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_348(int iParam0, bool bParam1)
{
	if (Global_1589660 != func_14())
	{
		if (!func_350(Global_1589660))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x95B959F18401C09A() != Global_1589660)
			{
				if (unk_0x0E4018692D92041D(Global_2424047[Global_1589660 /*416*/].f_195, 24) || func_349(Global_1589660))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 24);
}

int func_349(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 9);
	}
	return 0;
}

int func_350(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 2);
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)
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

int func_354(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (Global_1589819[iParam0 /*818*/].f_273.f_25 > 0)
	{
		if (bParam1)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_352(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_304(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_351(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_341(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_339(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_337(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_360(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_335(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_359(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_333(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_358(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_357(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_356(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_355(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_37(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_305(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_361()
{
	return Global_1312867;
}

bool func_362()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_363(int iParam0)
{
	if (func_254(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_364(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

int func_365(int iParam0)
{
	if (!func_62() && !func_80(unk_0x95B959F18401C09A(), 1))
	{
		if (!func_84(unk_0x95B959F18401C09A()))
		{
			if (func_90())
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

bool func_366(int iParam0)
{
	return func_31(iParam0, 25);
}

int func_367()
{
	if (func_762() || func_760())
	{
		if (func_51(unk_0x33CD235DF1E6A94E(), func_894(), 1) < 200f || unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 2))
		{
			return 1;
		}
	}
	return func_31(unk_0x95B959F18401C09A(), 19);
}

bool func_368()
{
	return func_31(unk_0x95B959F18401C09A(), 20);
}

void func_369(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_26(unk_0x95B959F18401C09A());
		Global_1669645.f_4 = func_491();
		Global_1669645.f_5 = func_490();
		if (func_24(unk_0x95B959F18401C09A()) || func_23(unk_0x95B959F18401C09A()))
		{
			Global_1669645.f_6 = 1;
		}
		else
		{
			Global_1669645.f_6 = 0;
		}
		Global_1669645.f_1 = func_486(bParam9);
		Global_1669645.f_8 = unk_0xEF4753434B24594D();
		Global_1669645.f_9 = func_485(bParam0);
		Global_1669645.f_10 = iParam1;
		Global_1669645.f_17 = Global_1669645.f_2;
		Global_1669645.f_18 = Global_1669645.f_2;
		Global_1669645.f_19 = func_481();
		Global_1669645.f_21 = (Global_1669645.f_8 - Global_1669645.f_7);
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_485(func_225(1));
		}
		Global_1669645.f_24 = func_480(unk_0x95B959F18401C09A());
		Global_1669645.f_28 = func_479(unk_0x95B959F18401C09A());
		if (Global_1669645.f_24 > 2)
		{
			Global_1669645.f_24 = 2;
		}
		func_477(iVar0);
	}
	else
	{
		iVar0 = func_192(unk_0x95B959F18401C09A());
	}
	if (func_293(iVar0))
	{
		Global_1669384.f_2 = func_491();
		Global_1669384.f_3 = func_490();
		Global_1669384.f_50 = iParam4;
		Global_1669384.f_51 = iParam5;
		Global_1669384.f_10 = unk_0xEF4753434B24594D();
		Global_1669384.f_20 = (Global_1669384.f_10 - Global_1669384.f_9);
		Global_1669384.f_12 = iParam1;
		Global_1669384.f_19 = func_473(iVar0, bParam0, func_476(bParam3));
		if (bParam0)
		{
			Global_1669384.f_11 = 1;
		}
		else
		{
			Global_1669384.f_11 = 0;
		}
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669384.f_8 = 1;
		}
		else
		{
			Global_1669384.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1669384.f_43 = 0;
			Global_1669384.f_45 = func_472(func_83(), iParam2);
			Global_1669384.f_47 = iParam7;
			Global_1669384.f_46 = iParam6;
			Global_1669384.f_52 = func_471(func_83(), iParam2);
		}
		func_469(iVar0);
	}
	else if (func_298(iVar0))
	{
		Global_1669438.f_2 = func_491();
		Global_1669438.f_3 = func_490();
		Global_1669438.f_10 = unk_0xEF4753434B24594D();
		Global_1669438.f_19 = (Global_1669438.f_10 - Global_1669438.f_9);
		Global_1669438.f_12 = iParam1;
		if (bParam0)
		{
			Global_1669438.f_11 = 1;
		}
		else
		{
			Global_1669438.f_11 = 0;
		}
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669438.f_8 = 1;
		}
		else
		{
			Global_1669438.f_8 = 0;
		}
		func_467(iVar0);
	}
	else if (func_340(iVar0))
	{
		Global_1669501.f_2 = func_491();
		Global_1669501.f_3 = func_490();
		Global_1669501.f_9 = unk_0xEF4753434B24594D();
		Global_1669501.f_18 = (Global_1669501.f_9 - Global_1669501.f_8);
		Global_1669501.f_11 = iParam1;
		Global_1669501.f_7 = func_481();
		Global_1669501.f_42 = func_465(func_36(), 5);
		iVar1 = unk_0x95B959F18401C09A();
		iVar2 = func_464(iVar1);
		Global_1669501.f_28 = iVar2;
		Global_1669501.f_29 = func_485((func_463(iVar1) || func_462(iVar1)));
		Global_1669501.f_30 = func_485(func_461(iVar1));
		Global_1669501.f_32 = func_485(func_460(iVar1));
		Global_1669501.f_33 = func_485(func_459(iVar1));
		Global_1669501.f_34 = func_485(func_458(iVar1));
		Global_1669501.f_35 = func_485(func_457(0, iVar1) == 1);
		Global_1669501.f_36 = func_485(func_456(iVar1));
		Global_1669501.f_37 = func_485(func_455(iVar1));
		Global_1669501.f_38 = func_485(func_454(iVar1));
		Global_1669501.f_39 = func_485(func_450(iVar1, iVar2, 0));
		Global_1669501.f_40 = func_485(func_450(iVar1, iVar2, 2));
		Global_1669501.f_41 = func_485(func_450(iVar1, iVar2, 1));
		if (func_449(iVar1))
		{
			Global_1669501.f_31 = 2;
		}
		else if (func_448(iVar1))
		{
			Global_1669501.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1669501.f_10 = 1;
		}
		else
		{
			Global_1669501.f_10 = 0;
		}
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_6 = 1;
		}
		else
		{
			Global_1669501.f_6 = 0;
		}
		Global_1669501.f_21 = -2;
		Global_1669501.f_22 = -2;
		func_446(iVar0);
	}
	else if (func_338(iVar0))
	{
		Global_1669545.f_2 = func_491();
		Global_1669545.f_3 = func_490();
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669545.f_6 = 1;
		}
		else
		{
			Global_1669545.f_6 = 0;
		}
		Global_1669545.f_9 = unk_0xEF4753434B24594D();
		Global_1669545.f_10 = func_485(bParam0);
		Global_1669545.f_11 = iParam1;
		Global_1669545.f_17 = func_445(func_228());
		Global_1669545.f_18 = (Global_1669545.f_9 - Global_1669545.f_8);
		Global_1669545.f_20 = iParam8;
		Global_1669545.f_21 = -2;
		Global_1669545.f_22 = -2;
		Global_1669545.f_27 = func_444();
		Global_1669545.f_29 = func_111(6107, -1, 0);
		Global_1669545.f_30 = func_111(6103, -1, 0);
		Global_1669545.f_31 = func_111(6104, -1, 0);
		Global_1669545.f_32 = func_111(6106, -1, 0);
		Global_1669545.f_33 = func_111(6105, -1, 0);
		Global_1669545.f_34 = func_111(6108, -1, 0);
		Global_1669545.f_36 = func_485(func_225(1));
		Global_1669545.f_37 = func_442();
		func_427();
		func_425(iVar0);
	}
	else if (func_336(iVar0))
	{
		Global_1669599.f_2 = func_491();
		Global_1669599.f_3 = func_490();
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669599.f_6 = 1;
		}
		else
		{
			Global_1669599.f_6 = 0;
		}
		Global_1669599.f_9 = unk_0xEF4753434B24594D();
		Global_1669599.f_10 = func_485(bParam0);
		Global_1669599.f_11 = iParam1;
		Global_1669599.f_18 = (Global_1669599.f_9 - Global_1669599.f_8);
		Global_1669599.f_20 = iParam8;
		Global_1669599.f_23 = Global_786547;
		Global_1669599.f_36 = Global_786547.f_1;
		Global_1669599.f_24 = func_111(6157, -1, 0);
		Global_1669599.f_25 = func_111(6162, -1, 0);
		Global_1669599.f_26 = func_111(6163, -1, 0);
		Global_1669599.f_27 = func_485((((func_424() || func_423()) || func_422()) || func_421(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_111(6164, -1, 0);
		Global_1669599.f_29 = func_485(func_420());
		Global_1669599.f_35 = -1;
		Global_1669599.f_38 = -1;
		Global_1669599.f_39 = Global_1669599.f_4;
		Global_1669599.f_40 = Global_1669599.f_5;
		Global_1669599.f_41 = func_491();
		Global_1669599.f_42 = func_485(func_225(1));
		Global_1669599.f_44 = Global_1669599.f_18;
		func_418(iVar0);
	}
	else if (func_415(iVar0))
	{
		if (Global_1669733.f_2 == -1)
		{
			Global_1669733.f_2 = func_491();
		}
		if (Global_1669733.f_3 == -1)
		{
			Global_1669733.f_3 = func_490();
		}
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669733.f_6 = 1;
		}
		else
		{
			Global_1669733.f_6 = 0;
		}
		Global_1669733.f_1 = func_486(0);
		Global_1669733.f_7 = func_481();
		Global_1669733.f_9 = unk_0xEF4753434B24594D();
		Global_1669733.f_10 = func_485(bParam0);
		Global_1669733.f_11 = iParam1;
		if (func_83() != -1)
		{
			Global_1669733.f_17 = func_414(func_83());
		}
		Global_1669733.f_18 = (Global_1669733.f_9 - Global_1669733.f_8);
		Global_1669733.f_19 = Global_2528542.f_6270;
		Global_1669733.f_28 = func_479(unk_0x95B959F18401C09A());
		Global_1669733.f_29 = func_485(func_413(unk_0x95B959F18401C09A()));
		Global_1669733.f_30 = func_485(func_412(unk_0x95B959F18401C09A()));
		Global_1669733.f_31 = func_411(unk_0x95B959F18401C09A());
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_485(func_225(1));
		}
		if (Global_1669733.f_34 > 2)
		{
			Global_1669733.f_34 = 2;
		}
		func_409(iVar0);
	}
	else if (func_408(iVar0))
	{
		Global_1669680.f_2 = func_491();
		Global_1669680.f_3 = func_490();
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669680.f_6 = 1;
		}
		else
		{
			Global_1669680.f_6 = 0;
		}
		Global_1669680.f_1 = func_486(0);
		Global_1669680.f_9 = unk_0xEF4753434B24594D();
		Global_1669680.f_10 = func_485(bParam0);
		Global_1669680.f_11 = iParam1;
		Global_1669680.f_18 = (Global_1669680.f_9 - Global_1669680.f_8);
		Global_1669680.f_28 = func_479(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_407(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_391(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_411(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_485(func_390(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_485(func_389(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_485(func_388(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_485(func_387(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_386(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_385(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_384(unk_0x95B959F18401C09A());
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_485(func_225(1));
		}
		if (Global_1669680.f_42 > 2)
		{
			Global_1669680.f_42 = 2;
		}
		func_382(iVar0);
	}
	else if (func_381(iVar0))
	{
		Global_1669817.f_2 = func_491();
		Global_1669817.f_3 = func_490();
		Global_1669817.f_4 = func_380(func_83());
		Global_1669817.f_5 = func_379(func_83());
		if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
		{
			Global_1669817.f_6 = 1;
		}
		else
		{
			Global_1669817.f_6 = 0;
		}
		Global_1669817.f_7 = func_481();
		Global_1669817.f_9 = unk_0xEF4753434B24594D();
		Global_1669817.f_10 = func_485(bParam0);
		Global_1669817.f_11 = iParam1;
		Global_1669817.f_17 = func_414(func_228());
		Global_1669817.f_18 = (Global_1669817.f_9 - Global_1669817.f_8);
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = func_377(unk_0x95B959F18401C09A());
		Global_1669817.f_27 = func_485(func_376(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_373(21, -1);
		Global_1669817.f_29 = func_485(func_372(unk_0x95B959F18401C09A()));
		func_370(iVar0);
	}
	else
	{
		Global_1669366.f_6 = unk_0xEF4753434B24594D();
		if (bParam0)
		{
			Global_1669366.f_7 = 1;
		}
		else
		{
			Global_1669366.f_7 = 0;
		}
		Global_1669366.f_8 = iParam1;
		if (Global_1669366.f_4 == 0)
		{
			if ((func_84(unk_0x95B959F18401C09A()) || func_275(unk_0x95B959F18401C09A())) || func_166(unk_0x95B959F18401C09A()))
			{
				Global_1669366.f_4 = 1;
			}
		}
	}
}

void func_370(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x1A0D4A6C336B7BC5(&Global_1669817);
	func_371();
}

void func_371()
{
	struct<31> Var0;
	
	Global_1669817 = { Var0 };
}

int func_372(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 6);
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16859)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_375(iParam0);
		if (iVar1 == 0 && func_111(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_374(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_479(unk_0x95B959F18401C09A()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1382708[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2573644[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 22)
		{
			return 0;
		}
		return Global_2573513[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_374(int iParam0)
{
	if (!Global_262145.f_23529)
	{
		return 0;
	}
	return func_111(7207, iParam0, 0) != 0;
}

int func_375(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_376(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_377(int iParam0)
{
	if (func_192(iParam0) == 243)
	{
		return func_378(iParam0);
	}
	return -1;
}

int func_378(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_379(int iParam0)
{
	if (iParam0 == func_14())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_380(int iParam0)
{
	if (iParam0 == func_14())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

void func_382(int iParam0)
{
	unk_0xFBA9F03E7B1497FB(&Global_1669680);
	func_383();
}

void func_383()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
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
	Global_1669680 = { Var0 };
}

int func_384(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 12);
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 10);
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_14())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 11);
	}
	return 0;
}

bool func_387(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 4);
}

bool func_388(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 3);
}

bool func_389(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 2);
}

bool func_390(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 1);
}

int func_391(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_14() || !func_406(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_401(iParam0, iParam2);
		
		case 1:
			return func_399(iParam0, iParam2);
		
		case 3:
			return func_398(iParam0);
		
		case 2:
			return func_393(iParam0, iParam2);
		
		case 4:
			return func_392(iParam0);
		
		default:
	}
	return 0;
}

bool func_392(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 6);
}

int func_393(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_397(iParam0);
		
		case 11:
			return func_396(iParam0);
		
		case 12:
			return func_395(iParam0);
		
		case 13:
			return func_394(iParam0);
		
		default:
	}
	return 0;
}

bool func_394(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 15);
}

bool func_395(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 14);
}

bool func_396(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 13);
}

bool func_397(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 12);
}

bool func_398(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 5);
}

int func_399(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_400(iParam0);
		
		case 6:
			return func_390(iParam0);
		
		case 7:
			return func_389(iParam0);
		
		case 8:
			return func_388(iParam0);
		
		case 9:
			return func_387(iParam0);
		
		default:
	}
	return 0;
}

bool func_400(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 0);
}

int func_401(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_405(iParam0);
		
		case 1:
			return func_404(iParam0);
		
		case 2:
			return func_403(iParam0);
		
		case 3:
			return func_402(iParam0);
		
		case 4:
			return func_411(iParam0);
		
		default:
	}
	return 0;
}

bool func_402(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 10);
}

bool func_403(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 9);
}

bool func_404(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 8);
}

bool func_405(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 7);
}

bool func_406(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_391(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_391(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_391(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_391(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_408(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_409(int iParam0)
{
	unk_0x4C7E3C4ACCB2DED7(&Global_1669733);
	func_410();
}

void func_410()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1669733 = { Var0 };
}

bool func_411(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 31);
}

bool func_412(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 0);
}

bool func_413(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 19);
}

var func_414(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_415(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_416(func_417(unk_0x95B959F18401C09A()))))
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0)
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

int func_417(int iParam0)
{
	if (func_192(iParam0) == 237 || func_192(iParam0) == 250)
	{
		return func_378(iParam0);
	}
	return -1;
}

void func_418(int iParam0)
{
	unk_0x04871872974BF74B(&Global_1669599);
	func_419();
}

void func_419()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1669599 = { Var0 };
	Global_1669599.f_16 = 0;
}

bool func_420()
{
	return func_111(6156, -1, 0) != 0;
}

int func_421(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265 != 0;
	}
	return 0;
}

bool func_422()
{
	return func_111(6164, -1, 0) == 3;
}

bool func_423()
{
	return func_111(6164, -1, 0) == 2;
}

bool func_424()
{
	return func_111(6164, -1, 0) == 1;
}

void func_425(int iParam0)
{
	unk_0xAE0DE86DBA563924(&Global_1669545);
	func_426();
}

void func_426()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1669545 = { Var0 };
	Global_1669545.f_23 = 0;
	Global_1669545.f_24 = 0;
	Global_1669545.f_16 = 0;
}

void func_427()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_439(12));
		func_438(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323594[iVar1 /*141*/].f_66 != 0 && func_429(Global_1323594[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2528542.f_887 != iVar1)
				{
					if (func_428(Global_1323594[iVar1 /*141*/].f_66))
					{
						if (Global_1323594[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323594[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1669545.f_38 = iVar3;
								break;
							
							case 1:
								Global_1669545.f_39 = iVar3;
								break;
							
							case 2:
								Global_1669545.f_40 = iVar3;
								break;
							
							case 3:
								Global_1669545.f_41 = iVar3;
								break;
							
							case 4:
								Global_1669545.f_42 = iVar3;
								break;
							
							case 5:
								Global_1669545.f_43 = iVar3;
								break;
							
							case 6:
								Global_1669545.f_44 = iVar3;
								break;
							
							case 7:
								Global_1669545.f_45 = iVar3;
								break;
							
							case 8:
								Global_1669545.f_46 = iVar3;
								break;
							
							case 9:
								Global_1669545.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xBB8F0B8D18FF4982(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0xB331FCEB94EB05C8()) || (iParam0 == joaat("buffalo3") && !unk_0xB331FCEB94EB05C8())) || (iParam0 == joaat("gauntlet2") && !unk_0xB331FCEB94EB05C8())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0xB331FCEB94EB05C8()))
	{
		if (!func_437())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x3039527F47B67213())
		{
			if (unk_0xD78C9FF329D2C218(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC4ED190294E9E658(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_436() && !func_435()) && !func_434()) && !func_433()) && !func_437())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_434())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_432(iParam0))
		{
			return 0;
		}
	}
	if (!func_430(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_430(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_431())
	{
		return 1;
	}
	unk_0x84EDD6303549E375(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x97E4D6970CDE676B(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_431()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xEF4753434B24594D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_433()
{
	return 0;
}

int func_434()
{
	return 1;
}

int func_435()
{
	return 1;
}

int func_436()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_437()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		if (unk_0xDBB8379205DEBBFE())
		{
			if (unk_0x0E7784F64A622FCE())
			{
				unk_0x75D54ED6C1AD1642(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x8950ED5730F62EE8(&iVar0, 2);
				unk_0x8950ED5730F62EE8(&iVar0, 4);
				unk_0x8950ED5730F62EE8(&iVar0, 6);
				unk_0x8950ED5730F62EE8(&Global_25, 2);
				unk_0x8950ED5730F62EE8(&Global_25, 4);
				unk_0x8950ED5730F62EE8(&Global_25, 6);
				unk_0x12B6E23F244DDB0F(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x3CEDCF35B2FFE080())
				{
					iVar0 = unk_0x37FBC14B2F5D54DB(866);
					unk_0x8950ED5730F62EE8(&iVar0, 0);
					unk_0x59DD23556BF7C12E(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (unk_0x3CEDCF35B2FFE080())
	{
		if (unk_0x0E4018692D92041D(unk_0x37FBC14B2F5D54DB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_438(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10054)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1666267[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xE77FA521699F639C() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_439(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_441(iVar0);
	}
	return (func_440(iParam0, -1) * iParam0);
}

int func_440(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_347(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_353(iParam1))
			{
				return 0;
			}
			else if (func_345(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 <= 125 && iParam1 > 0)
			{
				if (Global_1049815[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_442()
{
	var uVar0;
	
	uVar0 = func_443();
	if (!func_62())
	{
		if (func_83() != func_14())
		{
			uVar0 = func_480(func_83()) + 1;
		}
	}
	return uVar0;
}

int func_443()
{
	return func_480(unk_0x95B959F18401C09A()) + 1;
}

int func_444()
{
	return func_111(6113, -1, 0);
}

int func_445(int iParam0)
{
	if (func_80(iParam0, 1))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_448;
	}
	return -1;
}

void func_446(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE3F45F2E5162B2C7(&Global_1669501);
	func_447();
}

void func_447()
{
	struct<44> Var0;
	
	Global_1669501 = { Var0 };
	Global_1669501.f_23 = 0;
	Global_1669501.f_24 = 0;
	Global_1669501.f_16 = 0;
}

bool func_448(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 12);
}

bool func_449(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 13);
}

int func_450(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_453(iParam0, iParam1))
	{
		iVar0 = func_451(iParam0, iParam1);
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_452(iParam1) && iParam0 != func_14())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_452(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_452(iParam1) && iParam0 != func_14())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_454(int iParam0)
{
	if (iParam0 != func_14())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 12) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 13)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_455(int iParam0)
{
	if (iParam0 != func_14())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (((((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 5)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_457(int iParam0, int iParam1)
{
	if (iParam1 == func_14())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 0))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 3))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 6))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 9))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 12))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 15))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 18))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 21))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 1))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 4))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 7))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 10))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 13))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 16))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 19))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 22))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 2))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 5))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 8))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 11))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 14))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 17))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 20))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 23))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 != func_14())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 6) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 7)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_459(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 8);
}

bool func_460(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 7);
}

bool func_461(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 9);
}

bool func_462(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 11);
}

bool func_463(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 10);
}

int func_464(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

int func_465(int iParam0, int iParam1)
{
	return func_111(func_466(iParam1), iParam0, 0);
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_467(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x79449220E40CF832(&Global_1669438);
	func_468();
}

void func_468()
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
	Global_1669438 = { Var0 };
	Global_1669438.f_24 = 0;
	Global_1669438.f_25 = 0;
	Global_1669438.f_17 = 0;
}

void func_469(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0118CDB6D266E2BA(&Global_1669384);
	func_470();
}

void func_470()
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
	Global_1669384 = { Var0 };
	Global_1669384.f_29 = 0;
	Global_1669384.f_30 = 0;
	Global_1669384.f_17 = 0;
}

int func_471(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_450(iParam0, iParam1, 2);
	bVar1 = func_450(iParam0, iParam1, 1);
	bVar2 = func_450(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (func_452(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_473(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_343(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 19;
	}
	else if (func_342(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_195(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17554;
			iVar1 = 20;
		}
	}
	else if (func_293(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x27AA661817723FCB(func_380(func_83()), func_379(func_83()), func_491(), func_490(), iVar1, iVar0);
	}
	func_475(iVar0);
	func_474(iVar0);
	return iVar0;
}

void func_474(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_487 = iVar0;
	func_109(3968, iVar0, -1, 1, 0);
}

void func_475(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	Global_1626536[iVar0 /*603*/].f_11.f_486 = (Global_1626536[iVar0 /*603*/].f_11.f_486 + iParam0);
	if (Global_1626536[iVar0 /*603*/].f_11.f_486 < -9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
	else if (Global_1626536[iVar0 /*603*/].f_11.f_486 > 9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
}

int func_476(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_84(unk_0x95B959F18401C09A()) || func_166(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

void func_477(var uParam0)
{
	unk_0xEC1C7C0AA7F4D2BB(&Global_1669645);
	func_478();
}

void func_478()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1669645 = { Var0 };
}

int func_479(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

int func_480(int iParam0)
{
	if (func_81(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_19;
}

int func_481()
{
	int iVar0;
	
	if (func_484())
	{
		return 4;
	}
	else if (func_62())
	{
		if (func_483(unk_0x95B959F18401C09A()))
		{
			return 8;
		}
		return 6;
	}
	if (func_225(1))
	{
		iVar0 = func_445(unk_0x95B959F18401C09A());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_482(1))
	{
		if (func_483(func_83()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_482(bool bParam0)
{
	return func_80(unk_0x95B959F18401C09A(), bParam0);
}

bool func_483(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

bool func_484()
{
	return func_227(unk_0x95B959F18401C09A());
}

int func_485(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_486(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_26(unk_0x95B959F18401C09A());
	}
	else
	{
		iVar0 = func_192(unk_0x95B959F18401C09A());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_489(unk_0x95B959F18401C09A());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_488(unk_0x95B959F18401C09A());
			if (func_416(func_417(unk_0x95B959F18401C09A())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_488(unk_0x95B959F18401C09A());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_487(unk_0x95B959F18401C09A());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_487(unk_0x95B959F18401C09A());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_487(int iParam0)
{
	if (func_192(unk_0x95B959F18401C09A()) == 238 || func_192(unk_0x95B959F18401C09A()) == 249)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_495;
	}
	return -1;
}

int func_488(int iParam0)
{
	if (func_192(unk_0x95B959F18401C09A()) == 237 || func_192(unk_0x95B959F18401C09A()) == 250)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_494;
	}
	return -1;
}

int func_489(int iParam0)
{
	if (func_26(iParam0) == 236)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_493;
	}
	return -1;
}

int func_490()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_491()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_14())
	{
		if (unk_0xC4DEA49C5B465481(iParam1))
		{
			if (iParam1 == unk_0x95B959F18401C09A())
			{
				iVar0 = 1;
			}
			else if (func_493(iParam1, unk_0x95B959F18401C09A()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			Global_2528542.f_4889.f_379 = unk_0xEF4753434B24594D();
		}
	}
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_14() && iParam1 != func_14())
	{
		iVar0 = func_81(iParam0);
		if (iVar0 != func_14())
		{
			return iVar0 == func_81(iParam1);
		}
	}
	return 0;
}

void func_494(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_684(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_683(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_682(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_681(iParam0))
	{
		if (bParam1)
		{
			if (func_680(unk_0x95B959F18401C09A()) > 0)
			{
				func_679();
			}
			else
			{
				func_678();
			}
		}
		else
		{
			func_677();
		}
	}
	func_661(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_659(iParam0, uParam2, &iVar0, &iVar5);
	func_641(iParam0, uParam2, &iVar0, &iVar5);
	func_627(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_610(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2528542.f_4889.f_378 = iVar4;
	}
	else
	{
		Global_2528542.f_4889.f_378 = iVar5;
	}
	iVar8 = func_228();
	if (iVar8 != func_14() && iParam0 != 148)
	{
		if (func_80(unk_0x95B959F18401C09A(), 0))
		{
			if (!func_12(unk_0x95B959F18401C09A(), iVar8, 1))
			{
				func_578(&iVar0, 1);
			}
		}
	}
	func_574(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1669366.f_10 = iVar1;
		func_573();
		func_528(0, unk_0x33CD235DF1E6A94E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1669366.f_9 = iVar0;
		func_507(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_506(iParam0, iVar0);
		if (func_505(iParam0))
		{
			if (func_504(iParam0) > -1)
			{
				func_503(func_504(iParam0), iVar0);
			}
		}
		Global_2460813 = iVar0;
		func_502(&Global_2459077, 0, 0);
	}
	if (func_84(unk_0x95B959F18401C09A()) || func_166(unk_0x95B959F18401C09A()))
	{
		func_495(iParam0);
	}
	if (func_293(iParam0))
	{
		Global_1669384.f_13 = iVar0;
		Global_1669384.f_14 = iVar1;
	}
	if (func_298(iParam0))
	{
		Global_1669438.f_13 = iVar0;
		Global_1669438.f_14 = iVar1;
	}
	if (func_340(iParam0))
	{
		Global_1669501.f_12 = iVar0;
		Global_1669501.f_13 = iVar1;
	}
	if (func_338(iParam0))
	{
		Global_1669545.f_12 = iVar0;
		Global_1669545.f_13 = iVar1;
	}
	if (func_336(iParam0))
	{
		Global_1669599.f_12 = iVar0;
		Global_1669599.f_13 = iVar1;
	}
	if (func_297(iParam0))
	{
		if (func_408(iParam0))
		{
			Global_1669680.f_12 = iVar0;
			Global_1669680.f_13 = iVar1;
		}
		else if (func_415(iParam0))
		{
			Global_1669733.f_12 = iVar0;
			Global_1669733.f_13 = iVar1;
		}
	}
	if (func_381(iParam0))
	{
		Global_1669817.f_12 = iVar0;
		Global_1669817.f_13 = iVar1;
	}
}

void func_495(int iParam0)
{
	if (func_501(unk_0x95B959F18401C09A()) && func_484())
	{
		if (func_343(iParam0))
		{
			func_498(9086, -1);
		}
		else if (func_497(iParam0))
		{
			func_498(9088, -1);
		}
		else if (func_195(iParam0, 1))
		{
			func_498(9089, -1);
		}
		else if (func_496(iParam0))
		{
			func_498(9090, -1);
		}
	}
}

int func_496(int iParam0)
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

int func_497(int iParam0)
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

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_111(iParam0, func_98(iParam1), 0);
	iVar0++;
	if (!func_500(iParam0))
	{
		func_109(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_499(iParam0, iVar0, iParam1, 1);
	}
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_98(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_98(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_98(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_98(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_98(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_98(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_98(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_98(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_98(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_98(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_98(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_98(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_98(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_98(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_98(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_98(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_98(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_98(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_98(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_98(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_98(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_98(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_98(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_98(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_98(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_98(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_98(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_98(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_98(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_98(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_98(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_98(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_98(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_98(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_98(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_98(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_98(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_98(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_98(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_98(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_98(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_98(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_98(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_98(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_98(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_98(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_98(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_500(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
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
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_501(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_117, 14);
}

void func_502(var uParam0, bool bParam1, bool bParam2)
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

void func_503(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!unk_0x4CE1DD5CFC1F941E() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

int func_504(int iParam0)
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

int func_505(int iParam0)
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

void func_506(int iParam0, int iParam1)
{
	if (func_501(unk_0x95B959F18401C09A()) && func_484())
	{
		if (func_343(iParam0) && iParam1 > 0)
		{
			func_109(9087, (func_111(9087, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
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
	
	iVar4 = func_83();
	if (iVar4 != func_14())
	{
		func_527(iVar4, &uVar0, &uVar1);
	}
	bVar5 = !func_482(1);
	Var6.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_431())
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_484())
			{
				if (!func_431())
				{
					Var6 = { func_526() };
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_525(Var6)), func_524(Var6), iParam4);
				}
			}
			else if (func_431())
			{
				func_512(-856006867, iParam1, &iVar7, 0, 1, 0);
				Global_4263509[iVar7 /*84*/].f_6 = uVar0;
				Global_4263509[iVar7 /*84*/].f_7 = uVar1;
				Global_4263509[iVar7 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_62())
			{
				if (!func_431())
				{
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_525(func_464(unk_0x95B959F18401C09A()))), 5, iParam4);
				}
			}
			else if (func_431())
			{
				func_512(-856006867, iParam1, &iVar8, 0, 1, 0);
				Global_4263509[iVar8 /*84*/].f_6 = uVar0;
				Global_4263509[iVar8 /*84*/].f_7 = uVar1;
				Global_4263509[iVar8 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_62())
			{
				if (!func_431())
				{
					iVar2 = func_508(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x8A79103C750D1A15(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_431())
			{
				func_512(463142405, iParam1, &iVar9, 0, 1, 0);
				Global_4263509[iVar9 /*84*/].f_6 = uVar0;
				Global_4263509[iVar9 /*84*/].f_7 = uVar1;
				Global_4263509[iVar9 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x37FCBC83E6BD91A9(uVar0, uVar1, iParam1, bVar5);
			}
			break;
		
		case 233:
			if (func_431())
			{
				func_512(1407278493, iParam1, &iVar10, 0, 1, 0);
				Global_4263509[iVar10 /*84*/].f_6 = uVar0;
				Global_4263509[iVar10 /*84*/].f_7 = uVar1;
				Global_4263509[iVar10 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x858499DE32273450(iParam1);
			}
			break;
		
		case 237:
			if (func_62())
			{
				if (!func_431())
				{
					unk_0x895A8E4E832DC110(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_431())
			{
				func_512(-856006867, iParam1, &iVar11, 0, 1, 0);
				Global_4263509[iVar11 /*84*/].f_6 = uVar0;
				Global_4263509[iVar11 /*84*/].f_7 = uVar1;
				Global_4263509[iVar11 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_431())
			{
				func_512(-961034881, iParam1, &iVar12, 0, 1, 0);
				Global_4263509[iVar12 /*84*/].f_6 = uVar0;
				Global_4263509[iVar12 /*84*/].f_7 = uVar1;
				Global_4263509[iVar12 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x37FAB2C396FC9AFA(iParam1);
			}
			break;
		
		case 249:
			if (func_431())
			{
				func_512(1135468152, iParam1, &iVar13, 0, 1, 0);
				Global_4263509[iVar13 /*84*/].f_6 = uVar0;
				Global_4263509[iVar13 /*84*/].f_7 = uVar1;
				Global_4263509[iVar13 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x874D7013B1B5609D(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_431())
			{
				func_512(-634726636, iParam1, &iVar14, 0, 1, 0);
				Global_4263509[iVar14 /*84*/].f_6 = uVar0;
				Global_4263509[iVar14 /*84*/].f_7 = uVar1;
				Global_4263509[iVar14 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xFF5647924B4375B1(iParam1);
			}
			break;
		
		case 243:
			if (func_431())
			{
				func_512(1698417709, iParam1, &iVar15, 0, 1, 0);
				Global_4263509[iVar15 /*84*/].f_6 = uVar0;
				Global_4263509[iVar15 /*84*/].f_7 = uVar1;
				Global_4263509[iVar15 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x566FD402B25787DE(iParam1);
			}
			break;
		
		default:
			if (func_431())
			{
				func_512(-856006867, iParam1, &iVar16, 0, 1, 0);
				Global_4263509[iVar16 /*84*/].f_6 = uVar0;
				Global_4263509[iVar16 /*84*/].f_7 = uVar1;
				Global_4263509[iVar16 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x9B2453C4B3C419EC(uVar0, uVar1, iParam1, bVar5);
			}
			break;
	}
}

int func_508(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_511(iParam0, iParam1);
	fVar1 = (to_float(func_509(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_509(int iParam0, int iParam1)
{
	return (func_510(iParam0) * iParam1);
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22180;
		
		case 0:
			return Global_262145.f_22181;
		
		case 1:
			return Global_262145.f_22182;
		
		case 2:
			return Global_262145.f_22183;
		
		case 3:
			return Global_262145.f_22184;
		
		case 4:
			return Global_262145.f_22185;
		
		case 5:
			return Global_262145.f_22186;
		
		case 6:
			return Global_262145.f_22187;
		
		case 7:
			return Global_262145.f_22188;
		
		default:
	}
	return 0;
}

float func_511(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22190);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22192;
			fVar1 = to_float(Global_262145.f_22189);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22192;
			fVar1 = to_float(Global_262145.f_22189);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

void func_512(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_431())
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
		case 1850983186:
		case 763367758:
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
			if (iParam1 > 0)
			{
				func_513(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_513(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_513(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_513(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1727256317:
		case -2017925037:
			func_513(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_513(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_36()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x5787B31B4578002B(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar4))
		{
			*uParam0 = func_520(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_519(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_514(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_515(iParam0);
	}
}

void func_515(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_518(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9CB3557CC6EF3B3E();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ADF905D8AC780D1(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_516(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_516(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_517(&(uParam0->f_13));
	func_517(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_517(var uParam0)
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

int func_518(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_519(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_431())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_521(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_521(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = unk_0x95B959F18401C09A();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_523(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_522();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_522()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_523(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_524(int iParam0)
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

char* func_525(int iParam0)
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

struct<2> func_526()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_193;
}

void func_527(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1626536[iParam0 /*603*/].f_11.f_8[0];
	*uParam2 = Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_528(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_529(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_529(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_539(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x068481DAF84B9654(iParam1))
			{
				iVar1 = unk_0x22B02EC53152632C(iParam1);
				func_535(unk_0x61B226C460A8FCC2(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_530(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_530(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_533(iParam0, 1) };
	if (iParam0 == func_532(unk_0x33CD235DF1E6A94E()))
	{
		func_531(1);
	}
	func_535(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_531(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_532(int iParam0)
{
	return iParam0;
}

Vector3 func_533(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x51EBF893ED085755())
	{
		vVar1 = { unk_0x4AE56AB92160A4AB(2) };
	}
	if (iParam0 == func_534(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		vVar0 = { unk_0x2CA911E7569D12EA(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		fVar2 = unk_0xC472E34C8FBEC678(iParam0);
		if (unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0xCD1EDCB38767B47C(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_534(int iParam0)
{
	return iParam0;
}

void func_535(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437364.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437364.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437364.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_538(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_537();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_536();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam4);
		}
	}
}

int func_536()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_537()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_538(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x16E00F066AFFEA0D(unk_0x69E12C716D4FB8BB(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_539(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_540(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_540(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_572(unk_0x95B959F18401C09A()) || func_571(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_214() || func_570(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_569(sParam2))
	{
	}
	if (func_568())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_566(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_565(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_563(0, &iVar1);
					break;
				
				case 3:
					func_563(1, &iVar1);
					break;
				
				case 1:
					func_559(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
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
			func_558(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_550((func_557(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_558(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_545(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_541((func_543(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_541((func_543(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_541(int iParam0)
{
	if (func_568())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_542(joaat("mpply_globalxp"), iParam0);
	}
}

void func_542(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_543(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_37(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_544(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_544(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_545(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_179(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_548(func_549(&Var0));
			if (iVar1 == 0)
			{
				func_547(&Global_1382581, iParam0);
				func_546(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_547(&Global_1382582, iParam0);
				func_546(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_547(&Global_1382583, iParam0);
				func_546(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_547(&Global_1382584, iParam0);
				func_546(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_547(&Global_1382585, iParam0);
				func_546(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_546(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1382576 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_547(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_548(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_549(var uParam0)
{
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

void func_550(int iParam0, int iParam1, int iParam2)
{
	if (func_568())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_98(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_98(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_556(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_554(iParam0, 1);
		}
		func_499(639, iParam0, -1, 1);
		func_109(640, func_554(iParam0, 1), -1, 1, 0);
		Global_1382702[func_98(-1)] = iParam0;
		func_551(7, 0);
	}
}

void func_551(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_553(iParam0, iParam1))
	{
		iVar0 = func_552();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_552()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_553(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_554(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_555(iParam0, 0);
}

int func_555(int iParam0, int iParam1)
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
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
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
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_556(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_557(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_98(-1)];
			}
			else if (func_556(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_98(-1)];
	}
	return 0;
}

void func_558(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_111(iParam0, func_98(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_500(iParam0))
	{
		func_109(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_499(iParam0, iVar0, iParam2, 1);
	}
}

void func_559(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		iVar4 = unk_0xDD4FFAA17341D382(iVar0);
		if (unk_0x1B094AC15936B3DB(iVar4))
		{
			iVar5 = unk_0xEB9DC13235C0B345(iVar4);
			if (unk_0x12D3B4C76D4AAB00(iVar5) != -1)
			{
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_562(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_561(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = round((func_560(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_560(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_560(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_561(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_179(iParam0) };
		Global_2505693 = { func_179(iParam1) };
		if (unk_0x4A5CDD2BE8070A7F(&Global_2505680))
		{
			if (unk_0x4A5CDD2BE8070A7F(&Global_2505693))
			{
				unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680);
				unk_0xDD530AC51A578470(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_562(int iParam0, int iParam1, int iParam2)
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
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 0);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 1);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 2);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 4);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 5);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 6);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 8);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 9);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 10);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 12);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 13);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 14);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_563(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			iVar3 = iVar0;
			if (unk_0x1B094AC15936B3DB(iVar3))
			{
				iVar4 = unk_0xEB9DC13235C0B345(iVar3);
				if (func_37(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_561(unk_0x95B959F18401C09A(), iVar4))
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
			iVar4 = iVar0;
			if (func_37(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_564(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_561(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = round((func_560(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_560(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_564(int iParam0, int iParam1)
{
	return vdist(func_285(iParam0), func_285(iParam1));
	return 0f;
}

int func_565(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_560(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_566(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_557(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_557(unk_0x95B959F18401C09A());
		}
	}
	if (func_567(8000, 0, 0) > 0)
	{
		if (func_567(8000, 0, 0) < (iParam0 + func_557(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_567(8000, 0, 0) - func_557(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_567(int iParam0, bool bParam1, int iParam2)
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
	return Global_289559[iParam0];
}

int func_568()
{
	return 1;
}

int func_569(char* sParam0)
{
	if (unk_0x6D2E2622CA149402(sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04(sParam0, "") || unk_0xCE3CFF625BEBAA04(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_570(int iParam0)
{
	return func_336(func_192(iParam0));
}

bool func_571(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_572(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_573()
{
	Global_2460154 = 1;
}

void func_574(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_249(7))
	{
		return;
	}
	iVar0 = func_577(iParam0);
	iVar1 = func_576(iParam0);
	iVar2 = unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(Global_2528542.f_4889.f_261, unk_0x78DCC5D0CB43DEBA()));
	if (func_575(iParam0) != -1)
	{
		if (iVar2 > func_575(iParam0))
		{
			iVar2 = func_575(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12286)
	{
		iVar2 = Global_262145.f_12286;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_575(int iParam0)
{
	if (func_195(iParam0, 0) || func_497(iParam0))
	{
		return Global_262145.f_18361;
	}
	if (func_343(iParam0))
	{
		return Global_262145.f_18360;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18357;
		
		case 191:
			return Global_262145.f_18359;
		
		case 190:
			return Global_262145.f_18358;
		
		case 227:
			return Global_262145.f_20917;
		
		case 226:
			return Global_262145.f_20905;
		
		case 225:
			return Global_262145.f_20925;
		
		case 230:
			return Global_262145.f_22177;
		
		case 229:
			return Global_262145.f_22081;
		
		case 233:
			return Global_262145.f_22652;
		
		case 237:
			return Global_262145.f_23808;
		
		case 238:
			return Global_262145.f_23919;
		
		case 249:
			return Global_262145.f_23935;
		
		case 243:
			return Global_262145.f_26063;
		
		default:
	}
	return -1;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12377;
		
		case 152:
			return Global_262145.f_12412;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12400;
		
		case 157:
			return Global_262145.f_12367;
		
		case 159:
			return Global_262145.f_12350;
		
		case 164:
			return Global_262145.f_12390;
		
		case 160:
			return Global_262145.f_12440;
		
		case 162:
			return Global_262145.f_12460;
		
		case 163:
			return Global_262145.f_12425;
		
		case 154:
			return Global_262145.f_12495;
		
		case 155:
			return Global_262145.f_12485;
		
		case 153:
			return Global_262145.f_12449;
		
		case 170:
			return Global_262145.f_14872;
		
		case 171:
			return Global_262145.f_14931;
		
		case 172:
			return Global_262145.f_14949;
		
		case 173:
			return Global_262145.f_14890;
		
		case 166:
			return Global_262145.f_14905;
		
		case 167:
			return Global_262145.f_14996;
		
		case 169:
			return Global_262145.f_14968;
		
		case 168:
			return Global_262145.f_14961;
		
		case 179:
			return Global_262145.f_18240;
		
		case 180:
			return Global_262145.f_18019;
		
		case 182:
			return Global_262145.f_18019;
		
		case 183:
			return Global_262145.f_18019;
		
		case 185:
			return Global_262145.f_18019;
		
		case 186:
			return Global_262145.f_18019;
		
		case 189:
			return Global_262145.f_18240;
		
		case 190:
			return Global_262145.f_17895;
		
		case 191:
			return Global_262145.f_17986;
		
		case 192:
			return Global_262145.f_17780;
		
		case 193:
			return Global_262145.f_18240;
		
		case 194:
			return Global_262145.f_18240;
		
		case 195:
			return Global_262145.f_18019;
		
		case 197:
			return Global_262145.f_18019;
		
		case 198:
			return Global_262145.f_18019;
		
		case 199:
			return Global_262145.f_18240;
		
		case 200:
			return Global_262145.f_18240;
		
		case 201:
			return Global_262145.f_18240;
		
		case 205:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18019;
		
		case 208:
			return Global_262145.f_18019;
		
		case 209:
			return Global_262145.f_18019;
		
		case 210:
			return Global_262145.f_18240;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_19090;
		
		case 215:
			return Global_262145.f_19092;
		
		case 216:
			return Global_262145.f_19094;
		
		case 217:
			return Global_262145.f_19096;
		
		case 218:
			return Global_262145.f_19098;
		
		case 219:
			return Global_262145.f_19100;
		
		case 220:
			return Global_262145.f_19102;
		
		case 221:
			return Global_262145.f_19104;
		
		case 225:
			if (!func_62())
			{
				return Global_262145.f_20927;
			}
			break;
		
		case 226:
			if (!func_62())
			{
				return Global_262145.f_20907;
			}
			break;
		
		case 227:
			if (!func_62())
			{
				return Global_262145.f_20919;
			}
			break;
		
		case 229:
			if (!func_62())
			{
				return Global_262145.f_22083;
			}
			break;
		
		case 230:
			if (!func_62())
			{
				return Global_262145.f_22179;
			}
			break;
		
		case 233:
			if (!func_62())
			{
				return Global_262145.f_22651;
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
			if (!func_62())
			{
				return Global_262145.f_23810;
			}
			break;
		
		case 238:
			if (!func_62())
			{
				return Global_262145.f_23921;
			}
			break;
		
		case 249:
			if (!func_62())
			{
				return Global_262145.f_23937;
			}
			break;
		
		case 243:
			if (!func_62())
			{
				return Global_262145.f_26066;
			}
			break;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12376;
		
		case 152:
			return Global_262145.f_12411;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12399;
		
		case 157:
			return Global_262145.f_12366;
		
		case 159:
			return Global_262145.f_12349;
		
		case 164:
			return Global_262145.f_12389;
		
		case 160:
			return Global_262145.f_12439;
		
		case 162:
			return Global_262145.f_12459;
		
		case 163:
			return Global_262145.f_12424;
		
		case 154:
			return Global_262145.f_12494;
		
		case 155:
			return Global_262145.f_12484;
		
		case 153:
			return Global_262145.f_12448;
		
		case 170:
			return Global_262145.f_14871;
		
		case 171:
			return Global_262145.f_14930;
		
		case 172:
			return Global_262145.f_14948;
		
		case 173:
			return Global_262145.f_14889;
		
		case 166:
			return Global_262145.f_14904;
		
		case 179:
			return Global_262145.f_18239;
		
		case 180:
			return Global_262145.f_18018;
		
		case 182:
			return Global_262145.f_18018;
		
		case 183:
			return Global_262145.f_18018;
		
		case 185:
			return Global_262145.f_18018;
		
		case 186:
			return Global_262145.f_18018;
		
		case 189:
			return Global_262145.f_18239;
		
		case 193:
			return Global_262145.f_18239;
		
		case 194:
			return Global_262145.f_18239;
		
		case 195:
			return Global_262145.f_18018;
		
		case 197:
			return Global_262145.f_18018;
		
		case 198:
			return Global_262145.f_18018;
		
		case 199:
			return Global_262145.f_18239;
		
		case 200:
			return Global_262145.f_18239;
		
		case 201:
			return Global_262145.f_18239;
		
		case 205:
			return Global_262145.f_18239;
		
		case 207:
			return Global_262145.f_18018;
		
		case 208:
			return Global_262145.f_18018;
		
		case 209:
			return Global_262145.f_18018;
		
		case 210:
			return Global_262145.f_18239;
		
		case 211:
			return Global_262145.f_18239;
		
		case 190:
			if (!func_62())
			{
				return Global_262145.f_17894;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_62())
			{
				return Global_262145.f_17985;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_62())
			{
				return Global_262145.f_17779;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19089;
		
		case 215:
			return Global_262145.f_19091;
		
		case 216:
			return Global_262145.f_19093;
		
		case 217:
			return Global_262145.f_19095;
		
		case 218:
			return Global_262145.f_19097;
		
		case 219:
			return Global_262145.f_19099;
		
		case 220:
			return Global_262145.f_19101;
		
		case 221:
			return Global_262145.f_19103;
		
		case 225:
			if (!func_62())
			{
				return Global_262145.f_20926;
			}
			break;
		
		case 226:
			if (!func_62())
			{
				return Global_262145.f_20906;
			}
			break;
		
		case 227:
			if (!func_62())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 229:
			if (!func_62())
			{
				return Global_262145.f_22082;
			}
			break;
		
		case 230:
			if (!func_62())
			{
				return Global_262145.f_22178;
			}
			break;
		
		case 233:
			if (!func_62())
			{
				return Global_262145.f_22653;
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
			if (!func_62())
			{
				return Global_262145.f_23809;
			}
			break;
		
		case 238:
			if (!func_62())
			{
				return Global_262145.f_23920;
			}
			break;
		
		case 249:
			if (!func_62())
			{
				return Global_262145.f_23936;
			}
			break;
		
		case 243:
			return Global_262145.f_26062;
	}
	return 0;
}

void func_578(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_62())
		{
			if (func_482(0))
			{
				if (!func_225(0))
				{
					if (unk_0xC4DEA49C5B465481(func_83()))
					{
						if (func_609() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_609());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_607(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_582("GB_BCUT_TICK1", func_83(), iVar0, 0, 0, 1, 1);
						}
						func_87(20);
						func_579(func_83(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_579(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_37(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_581(iParam0);
		func_580(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_523(iParam0));
	}
}

void func_580(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_581(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

int func_582(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var1))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		unk_0x75D3F9044123D4F9(func_585(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_583(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_309(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_583(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_584(&cVar0);
}

var func_584(char[4] cParam0)
{
	return cParam0;
}

int func_585(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_32(iParam0) && !bParam4)
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
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_32(unk_0x95B959F18401C09A()) || (func_606() && func_605())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_604();
		if (unk_0x765F6FEEFF39224F(iVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_37(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_602(iParam1, iParam0, 0);
							}
							else
							{
								return func_597(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_597(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_602(iParam1, iParam0, 0);
				}
				else
				{
					return func_586(0, -1, 0);
				}
			}
			else
			{
				return func_586(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_602(iParam1, iParam0, 0);
		}
		else
		{
			return func_597(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_597(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_586(bool bParam0, int iParam1, bool bParam2)
{
	return func_587(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_587(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_596() || (func_595() && func_593())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_592(iParam2, iVar0);
		}
		else
		{
			return func_592(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_562(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_591(1);
				}
				else
				{
					return func_591(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_588(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_588(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_591(1);
	}
	return func_591(0);
}

int func_588(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_590(iParam0, iParam1, iParam3);
	if (func_589(Global_4456448.f_138474, 1))
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

int func_589(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
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
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_590(int iParam0, int iParam1, int iParam2)
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
			if (!func_562(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_591(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_592(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_590(iParam1, iParam0, 4);
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

bool func_593()
{
	if (func_594())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_594()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_595()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_596()
{
	if (func_594() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_597(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_600(1))
			{
				iVar3 = func_164(iParam0);
				if (!iVar3 == -1)
				{
					return func_162(iVar3);
				}
			}
			if ((func_599(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_562(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_591(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_598(1);
			}
			else
			{
				return func_587(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_591(1);
			}
			else
			{
				return func_587(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_164(iParam0);
	if (!iVar4 == -1)
	{
		return func_162(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_598(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_599(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && unk_0x12D3B4C76D4AAB00(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == unk_0x12D3B4C76D4AAB00(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
	}
	return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
}

int func_600(int iParam0)
{
	if ((func_145() || func_601()) || (func_216() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_601()
{
	return Global_2448756.f_15;
}

int func_602(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_600(1))
	{
		iVar2 = func_164(iParam1);
		if (!iVar2 == -1)
		{
			return func_162(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_14())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (unk_0x0E4018692D92041D(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_587(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_603(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_562(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_598(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_603(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
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

var func_604()
{
	return Global_2359302.f_2;
}

bool func_605()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_606()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

void func_607(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_608(1);
	}
	else
	{
		iVar1 = func_608(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_608(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_609()
{
	return Global_262145.f_12280;
}

void func_610(int iParam0, var uParam1, int iParam2, var uParam3)
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
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_225(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_62())
		{
			iVar17 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar17 = func_83();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589819[iVar11 /*818*/].f_796.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589819[iVar11 /*818*/].f_796.f_2;
			}
			else
			{
				iVar2 = func_626(Global_1589819[iVar11 /*818*/].f_796, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_625(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x95B959F18401C09A())
				{
					func_624("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1669680.f_49 = *uParam3;
			if (iVar17 == unk_0x95B959F18401C09A())
			{
				if (iVar2 > 0)
				{
					func_623(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_621(*uParam3);
				}
				iVar6 = func_620(&uVar5);
				iVar7 = Global_262145.f_23839;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23838));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_87(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xF839A4FC3E76D324())
						{
							iVar22 = iVar21;
							if (unk_0x1B094AC15936B3DB(iVar22))
							{
								iVar23 = unk_0xEB9DC13235C0B345(iVar22);
								if (func_619(iVar23))
								{
									func_611(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23811;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23812;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_87(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_613(iParam0);
	func_612(iParam0, uVar0, iParam1, iParam2);
}

void func_612(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2087882476;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_581(iParam0);
	func_580(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_14())
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			unk_0x09269A9CFC145847(1, &Var0, 8, func_523(iParam0));
		}
	}
}

int func_613(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_618();
	iVar0 = func_616(iParam0, iVar0);
	iVar1 = Global_1626536[func_83() /*603*/].f_11.f_446;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14832));
	if (iVar0 < func_615())
	{
		iVar0 = func_615();
	}
	if (iVar0 > func_614())
	{
		iVar0 = func_614();
	}
	return iVar0;
}

int func_614()
{
	return Global_262145.f_14833;
}

int func_615()
{
	return Global_262145.f_16008;
}

int func_616(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_680(iParam0) * func_617());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_617()
{
	return Global_262145.f_16007;
}

var func_618()
{
	return Global_262145.f_12272;
}

int func_619(int iParam0)
{
	if (unk_0xC4DEA49C5B465481(iParam0))
	{
		if (iParam0 != unk_0x95B959F18401C09A())
		{
			if (func_12(iParam0, unk_0x95B959F18401C09A(), 0))
			{
				if (!func_31(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_620(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC4DEA49C5B465481(unk_0x7C1C88877E8AAA50(iVar0)))
		{
			iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_34(iVar2, 0) && !func_12(iVar2, unk_0x95B959F18401C09A(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_621(int iParam0)
{
	func_622(iParam0, 7236);
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_111(iParam1, -1, 0);
	func_109(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_623(int iParam0)
{
	func_622(iParam0, 7231);
}

int func_624(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_309(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_625(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23840);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_626(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_627(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_225(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_62())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_83();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_639(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_630(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_509(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_508(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_629(*iParam2) > 0)
			{
				if (iVar15 == unk_0x95B959F18401C09A())
				{
					func_624("SMTICK_RONCUT", func_629(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_629(*iParam2));
			}
			if (iVar15 == unk_0x95B959F18401C09A())
			{
				func_628(iVar2, iVar9);
				iVar6 = func_620(&uVar5);
				iVar7 = Global_262145.f_22196;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22195));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_87(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF839A4FC3E76D324())
						{
							iVar19 = iVar18;
							if (unk_0x1B094AC15936B3DB(iVar19))
							{
								iVar20 = unk_0xEB9DC13235C0B345(iVar19);
								if (func_619(iVar20))
								{
									func_611(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22129;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22130;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_87(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_628(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_622(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_622(iParam1, 6117);
	}
}

int func_629(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22163);
	if (fVar1 > to_float(Global_262145.f_22164))
	{
		fVar1 = to_float(Global_262145.f_22164);
	}
	return round(fVar1);
}

int func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_637())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_639(unk_0x95B959F18401C09A());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_632(func_633(func_636(iVar0), -1, -1));
		if (func_631(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_631(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_633(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_635(iParam0, iParam1);
	iVar2 = func_634(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_634(int iParam0)
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

int func_635(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_637()
{
	return func_638() != 0;
}

int func_638()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_258;
}

int func_639(int iParam0)
{
	if (iParam0 != func_14() && func_640(iParam0))
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258.f_3;
	}
	return 0;
}

int func_640(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

void func_641(int iParam0, var uParam1, int iParam2, var uParam3)
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
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_225(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_62())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_83();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_464(iVar15);
			iVar0 = (func_658(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_657(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20909));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20908));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x95B959F18401C09A())
			{
				func_654(iVar16, iVar2);
				if (func_651(iVar16) >= Global_262145.f_20457 || iVar2 >= Global_262145.f_20457)
				{
					func_642(5);
				}
				iVar6 = func_620(&uVar5);
				iVar7 = round(Global_262145.f_20911);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_20910));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_87(108);
					}
					else
					{
						func_87(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF839A4FC3E76D324())
						{
							iVar19 = iVar18;
							if (unk_0x1B094AC15936B3DB(iVar19))
							{
								iVar20 = unk_0xEB9DC13235C0B345(iVar19);
								if (func_619(iVar20))
								{
									func_611(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20912;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20913;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_87(112);
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

void func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20445)
			{
				if (func_644(Global_262145.f_20446))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20447)
			{
				if (func_644(Global_262145.f_20448))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20449)
			{
				if (func_644(Global_262145.f_20450))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20451)
			{
				if (func_644(Global_262145.f_20452))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20453)
			{
				if (func_644(Global_262145.f_20454))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20455)
			{
				if (func_644(Global_262145.f_20456))
				{
					func_624("CLOTHAWDSTRAP3", Global_262145.f_20457, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20458)
			{
				if (func_644(Global_262145.f_20459))
				{
					func_624("CLOTHAWDSTRAP5", Global_262145.f_20591, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20461)
			{
				if (func_644(Global_262145.f_20462))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20463)
			{
				if (func_644(Global_262145.f_20464))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20465)
			{
				if (func_644(Global_262145.f_20466))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20467)
			{
				if (func_644(Global_262145.f_20468))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20469)
			{
				if (func_644(Global_262145.f_20470))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20471)
			{
				if (func_644(Global_262145.f_20472))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20473)
			{
				if (func_644(Global_262145.f_20474))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20475)
			{
				if (func_644(Global_262145.f_20476))
				{
					func_643("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_643(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam3);
	}
	unk_0xFA6BEE2B1507FF1E(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	}
	else
	{
		Global_2505680 = { func_179(unk_0x95B959F18401C09A()) };
		if (unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680))
		{
			iVar1 = 0;
			if (unk_0xCE3CFF625BEBAA04(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2505610.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xFB9D4E6534D32F54(iVar2, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar1, 0, Global_2505610, unk_0xEEF8394DB3D3DFA1(unk_0x95B959F18401C09A()), Global_1314024, Global_1314025, Global_1314026);
		}
		else
		{
			iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		}
	}
	func_309(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_648(15417, -1, -1))
			{
				func_647(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_648(15418, -1, -1))
			{
				func_647(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_648(15425, -1, -1))
			{
				func_647(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_648(15405, -1, -1))
			{
				func_647(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_648(15393, -1, -1))
			{
				func_647(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_648(15409, -1, -1))
			{
				func_647(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_648(15396, -1, -1))
			{
				func_647(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_648(15412, -1, -1))
			{
				func_647(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_648(15403, -1, -1))
			{
				func_647(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_648(15389, -1, -1))
			{
				func_647(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_648(15398, -1, -1))
			{
				func_647(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_648(15400, -1, -1))
			{
				func_647(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_648(15408, -1, -1))
			{
				func_647(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_648(15411, -1, -1))
			{
				func_647(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_648(15397, -1, -1))
			{
				func_647(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_648(15413, -1, -1))
			{
				func_647(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_648(15391, -1, -1))
			{
				func_647(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_648(15388, -1, -1))
			{
				func_647(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_648(15401, -1, -1))
			{
				func_647(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_648(15394, -1, -1))
			{
				func_647(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_648(15406, -1, -1))
			{
				func_647(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_648(15395, -1, -1))
			{
				func_647(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_648(15410, -1, -1))
			{
				func_647(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_648(15407, -1, -1))
			{
				func_647(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_648(15414, -1, -1))
			{
				func_647(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_648(15415, -1, -1))
			{
				func_647(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_648(15399, -1, -1))
			{
				func_647(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_648(15404, -1, -1))
			{
				func_647(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_648(15392, -1, -1))
			{
				func_647(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_648(15390, -1, -1))
			{
				func_647(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_648(15402, -1, -1))
			{
				func_647(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_648(15416, -1, -1))
			{
				func_647(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_97(209, -1))
			{
				func_645(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_648(15426, -1, -1))
			{
				func_647(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_648(15422, -1, -1))
			{
				func_647(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_648(15423, -1, -1))
			{
				func_647(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_648(15421, -1, -1))
			{
				func_647(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_648(15427, -1, -1))
			{
				func_647(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_648(15419, -1, -1))
			{
				func_647(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_648(15420, -1, -1))
			{
				func_647(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_645(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_646())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_98(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x353711570A4FAE35(iVar0, iParam1, iParam3);
		}
	}
}

int func_646()
{
	return 1;
	return 0;
}

int func_647(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_650(iParam0, iParam1);
	uVar2 = func_649(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_649(int iParam0)
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

int func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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

int func_651(int iParam0)
{
	int iVar0;
	
	iVar0 = func_653(iParam0);
	return func_111(func_652(iVar0), -1, 0);
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_653(int iParam0)
{
	int iVar0;
	
	if (func_452(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_653(iParam0);
	iVar1 = func_652(iVar0);
	iVar2 = (func_111(iVar1, -1, 0) + iParam1);
	func_109(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_633(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
			{
				iVar1 = func_652(iVar0);
				iVar3 = (iVar3 + func_111(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_656(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_655(9357, iVar5, -1, 1);
	}
}

var func_655(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
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

int func_656(int iParam0)
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

int func_657(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_524(iParam1);
	if (func_452(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16837;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16836;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16835;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16833;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16834;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20934;
				if (func_450(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20936);
				}
				if (func_450(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20935);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_658(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (func_452(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_659(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_484())
			{
				Var0 = { func_526() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_657(unk_0x95B959F18401C09A(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18469);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18468);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_620(&uVar9);
				iVar11 = round(Global_262145.f_18459);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18458));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
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
				if (iVar10 > 0)
				{
					func_87(86);
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (func_225(0))
			{
				Var14 = { func_660(func_83()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_657(func_83(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18469));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18468));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18508;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18509;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
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

struct<2> func_660(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_193;
}

void func_661(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_63(unk_0x95B959F18401C09A()))
		{
			if (bParam1)
			{
				func_676();
			}
			func_675();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_63(unk_0x95B959F18401C09A()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_667(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_666(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_620(&uVar2);
					iVar4 = Global_262145.f_16018;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15227));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_87(44);
					}
				}
				func_664(*iParam3);
				func_663();
				Global_2528542.f_4889.f_377 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF839A4FC3E76D324())
				{
					iVar8 = iVar7;
					if (unk_0x1B094AC15936B3DB(iVar8))
					{
						iVar9 = unk_0xEB9DC13235C0B345(iVar8);
						if (func_619(iVar9))
						{
							func_611(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_63(unk_0x95B959F18401C09A()))
		{
			func_662();
		}
	}
}

void func_662()
{
	int iVar0;
	
	iVar0 = Global_2573685[func_36()];
	iVar0++;
	func_499(3667, iVar0, -1, 1);
}

void func_663()
{
	int iVar0;
	
	iVar0 = Global_2573691[func_36()];
	iVar0++;
	func_499(3666, iVar0, -1, 1);
}

void func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2573694[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_499(3668, iVar0, -1, 1);
	if (func_633(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_665(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_655(7666, iVar2, -1, 1);
	}
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16151;
			break;
		
		case 2:
			return Global_262145.f_16152;
			break;
		
		case 3:
			return Global_262145.f_16153;
			break;
		
		case 4:
			return Global_262145.f_16154;
			break;
		
		case 5:
			return Global_262145.f_16155;
			break;
		
		case 6:
			return Global_262145.f_16156;
			break;
		
		case 7:
			return Global_262145.f_16157;
			break;
		
		case 8:
			return Global_262145.f_16158;
			break;
		
		case 9:
			return Global_262145.f_16159;
			break;
		
		case 10:
			return Global_262145.f_16160;
			break;
		
		case 11:
			return Global_262145.f_16161;
			break;
		
		case 12:
			return Global_262145.f_16162;
			break;
		
		case 13:
			return Global_262145.f_16163;
			break;
		
		case 14:
			return Global_262145.f_16164;
			break;
		
		case 15:
			return Global_262145.f_16165;
			break;
		
		case 16:
			return Global_262145.f_16166;
			break;
		
		case 17:
			return Global_262145.f_16167;
			break;
		
		case 18:
			return Global_262145.f_16168;
			break;
		
		case 19:
			return Global_262145.f_16169;
			break;
		
		case 20:
			return Global_262145.f_16170;
			break;
		
		case 21:
			return Global_262145.f_16171;
			break;
		
		case 22:
			return Global_262145.f_16172;
			break;
		
		case 23:
			return Global_262145.f_16173;
			break;
		
		case 24:
			return Global_262145.f_16174;
			break;
	}
	return 0;
}

var func_666(int iParam0)
{
	if (iParam0 >= Global_262145.f_15205)
	{
		return Global_262145.f_15226;
	}
	else if (iParam0 >= Global_262145.f_15204)
	{
		return Global_262145.f_15225;
	}
	else if (iParam0 >= Global_262145.f_15203)
	{
		return Global_262145.f_15224;
	}
	else if (iParam0 >= Global_262145.f_15202)
	{
		return Global_262145.f_15223;
	}
	else if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	return Global_262145.f_15206;
}

int func_667(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_674(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_673(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_672(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_668(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_668(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_672(unk_0x9EC3B269A34A2BEE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_668(int iParam0)
{
	int iVar0;
	
	if (func_671(iParam0))
	{
		iVar0 = func_669(func_670(iParam0));
		return func_111(iVar0, -1, 0);
	}
	return 0;
}

int func_669(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_670(int iParam0)
{
	int iVar0;
	
	if (func_671(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_671(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_672(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15405;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15407;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15409;
	}
	return 0;
}

int func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_671(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1671007[iVar0] == iParam1 && Global_1671014[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_674(int iParam0)
{
	int iVar0;
	
	if (func_671(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_675()
{
	int iVar0;
	
	iVar0 = Global_2573682[func_36()];
	iVar0++;
	Global_2573682[func_36()] = iVar0;
	func_499(3665, iVar0, -1, 1);
}

void func_676()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2573679[func_36()];
	iVar1 = Global_2573688[func_36()];
	iVar0++;
	iVar1++;
	Global_2573679[func_36()] = iVar0;
	Global_2573688[func_36()] = iVar1;
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_122 = iVar1;
	func_499(3663, iVar0, -1, 1);
	func_499(3664, iVar1, -1, 1);
}

void func_677()
{
	if (func_62())
	{
		Global_2449538.f_3072.f_134 = 0;
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
	}
}

void func_678()
{
	if (func_62())
	{
		if (Global_2449538.f_3072.f_134 < 10)
		{
			Global_2449538.f_3072.f_134++;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

void func_679()
{
	if (func_62())
	{
		if (Global_2449538.f_3072.f_134 > 0)
		{
			Global_2449538.f_3072.f_134 = (Global_2449538.f_3072.f_134 - 1);
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

int func_680(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_28;
}

int func_681(int iParam0)
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
			if (func_482(1) && !func_225(1))
			{
				if (func_483(func_83()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_682(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18155;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12397) * Global_262145.f_12402));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12347) * Global_262145.f_12352));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12374) * Global_262145.f_12378));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12387) * Global_262145.f_12391));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12409) * Global_262145.f_12414));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12577) * Global_262145.f_12578));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12575) * Global_262145.f_12576));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14928;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14887;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18163;
		
		case 180:
			return Global_262145.f_18039;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18047;
		
		case 185:
			return Global_262145.f_18056;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18251;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18268;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18116;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18299;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18177;
		
		case 205:
			return Global_262145.f_18286;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18281;
		
		case 211:
			return Global_262145.f_18245;
		
		case 214:
			return Global_262145.f_18839;
		
		case 215:
			return Global_262145.f_18849;
		
		case 216:
			return Global_262145.f_18859;
		
		case 217:
			return Global_262145.f_18868;
		
		case 218:
			return Global_262145.f_18877;
		
		case 219:
			return Global_262145.f_18893;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 248:
			return Global_262145.f_23955;
		
		case 244:
			return Global_262145.f_23953;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 243:
			return Global_262145.f_26061;
		
		default:
	}
	return 0;
}

int func_683(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18156;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12398) * Global_262145.f_12403));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12348) * Global_262145.f_12353));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12375) * Global_262145.f_12379));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12388) * Global_262145.f_12392));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12410) * Global_262145.f_12415));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12447) * Global_262145.f_12450));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12493) * Global_262145.f_12496));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12486));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12438) * Global_262145.f_12441));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12458) * Global_262145.f_12463));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12423) * Global_262145.f_12426));
		
		case 170:
			return Global_262145.f_14870;
		
		case 171:
			return Global_262145.f_14929;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14888;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16965;
		
		case 168:
			return Global_262145.f_16964;
		
		case 179:
			return Global_262145.f_18164;
		
		case 180:
			return Global_262145.f_18040;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18048;
		
		case 185:
			return Global_262145.f_18057;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18252;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18269;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18117;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18300;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18178;
		
		case 205:
			return Global_262145.f_18287;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18145;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18282;
		
		case 211:
			return Global_262145.f_18246;
		
		case 214:
			return Global_262145.f_18840;
		
		case 215:
			return Global_262145.f_18850;
		
		case 216:
			return Global_262145.f_18860;
		
		case 217:
			return Global_262145.f_18869;
		
		case 218:
			return Global_262145.f_18878;
		
		case 219:
			return Global_262145.f_18894;
		
		case 178:
			if (func_62())
			{
				return Global_262145.f_18717;
			}
			else if (bParam1)
			{
				return Global_262145.f_18718;
			}
			break;
		
		case 188:
			if (func_62())
			{
				return Global_262145.f_18801;
			}
			else if (bParam1)
			{
				return Global_262145.f_18802;
			}
			break;
		
		case 225:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20922;
				}
				else
				{
					return Global_262145.f_20923;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_20924;
			}
			break;
		
		case 226:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20902;
				}
				else
				{
					return Global_262145.f_20903;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_20904;
			}
			break;
		
		case 227:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20914;
				}
				else
				{
					return Global_262145.f_20915;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_20916;
			}
			break;
		
		case 229:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22078;
				}
				else
				{
					return Global_262145.f_22079;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_22080;
			}
			break;
		
		case 230:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22174;
				}
				else
				{
					return Global_262145.f_22175;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_22176;
			}
			break;
		
		case 233:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22649;
				}
				else
				{
					return Global_262145.f_22650;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_22648;
			}
			break;
		
		case 241:
			return Global_262145.f_23963;
		
		case 242:
			return Global_262145.f_23959;
		
		case 244:
			return Global_262145.f_23960;
		
		case 248:
			return Global_262145.f_23962;
		
		case 239:
			return Global_262145.f_23964;
		
		case 240:
			return Global_262145.f_23965;
		
		case 237:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23805;
				}
				else
				{
					return Global_262145.f_23806;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_23807;
			}
			break;
		
		case 238:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23916;
				}
				else
				{
					return Global_262145.f_23917;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_23918;
			}
			break;
		
		case 249:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23932;
				}
				else
				{
					return Global_262145.f_23933;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_23934;
			}
			break;
		
		case 243:
			if (func_62() && !func_484())
			{
				if (func_483(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_26064;
				}
				else
				{
					return Global_262145.f_26065;
				}
			}
			else if (func_484())
			{
				return Global_262145.f_26064;
			}
			break;
	}
	return 0;
}

void func_684(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_685(iParam0))
	{
		if (!func_62())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12291;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_80(unk_0x95B959F18401C09A(), 1))
	{
		if (func_293(iParam0))
		{
			*uParam1 = (Global_262145.f_18016 / 100f);
			*uParam2 = (Global_262145.f_18016 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23966;
			*uParam2 = Global_262145.f_23966;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23967;
			*uParam2 = Global_262145.f_23967;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23969;
			*uParam2 = Global_262145.f_23969;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23970;
			*uParam2 = Global_262145.f_23970;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23971;
			*uParam2 = Global_262145.f_23971;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23972;
			*uParam2 = Global_262145.f_23972;
		}
		else
		{
			*uParam1 = Global_262145.f_12288;
			*uParam2 = Global_262145.f_12287;
		}
	}
	else if (func_293(iParam0))
	{
		*uParam1 = (Global_262145.f_18017 / 100f);
		*uParam2 = (Global_262145.f_18017 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23973;
		*uParam2 = Global_262145.f_23973;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23974;
		*uParam2 = Global_262145.f_23974;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23976;
		*uParam2 = Global_262145.f_23976;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23977;
		*uParam2 = Global_262145.f_23977;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23978;
		*uParam2 = Global_262145.f_23978;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23979;
		*uParam2 = Global_262145.f_23979;
	}
	else
	{
		*uParam1 = Global_262145.f_12290;
		*uParam2 = Global_262145.f_12289;
	}
	iVar0 = func_228();
	if (iVar0 != func_14())
	{
		if (func_12(unk_0x95B959F18401C09A(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_685(int iParam0)
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

int func_686()
{
	if ((func_37(unk_0x95B959F18401C09A(), 1, 1) && !unk_0xE35413546DC97620()) && func_687())
	{
		return 1;
	}
	return 0;
}

int func_687()
{
	if (unk_0x73DA1542B2F0C458() && Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_222 == 99)
	{
		return 1;
	}
	return 0;
}

void func_688()
{
	func_690();
	func_689();
}

void func_689()
{
	if (unk_0xE38E3CF1625A4145(iLocal_169))
	{
		unk_0x1ABDB383C83A336A(&iLocal_169);
	}
}

void func_690()
{
	if (unk_0xE38E3CF1625A4145(iLocal_168))
	{
		unk_0x1ABDB383C83A336A(&iLocal_168);
	}
}

int func_691()
{
	if (func_763(unk_0x72B85B341ADBE9DE()) == 2)
	{
		if (unk_0x1B094AC15936B3DB(func_692()))
		{
			if (func_760() || func_762())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_692()
{
	return unk_0xF8E1DE22DEB7E100(Local_182.f_8);
}

void func_693(int iParam0)
{
	struct<8> Var0;
	
	StringCopy(&Var0, "GB_YA_HP", 64);
	StringIntConCat(&Var0, iParam0, 64);
	if (iParam0 == 4)
	{
		if (func_694(&Var0, func_313(func_10())))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	else if (func_288(&Var0))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
}

int func_694(char* sParam0, char* sParam1)
{
	unk_0x6D39881CA5436178(sParam0);
	unk_0xD61E5ED1D4E687A5(sParam1);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_695()
{
	if (func_763(unk_0x72B85B341ADBE9DE()) == 1)
	{
		if (unk_0x1B094AC15936B3DB(func_692()))
		{
			if (!func_760() && !func_762())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_696()
{
	int iVar0;
	
	if (func_56())
	{
		iVar0 = 0;
		while (iVar0 < Local_182.f_33.f_2)
		{
			if (unk_0x0E4018692D92041D(Local_182.f_2, iVar0))
			{
				if (unk_0x4F94F07DAD382CDA(Local_182.f_65[iVar0]))
				{
					if (unk_0x6F3D61B58C7B4025(Local_182.f_65[iVar0]))
					{
						func_47(&(Local_182.f_65[iVar0]));
					}
				}
			}
			iVar0++;
		}
	}
	if (func_52())
	{
		iVar0 = 0;
		while (iVar0 < Local_182.f_33.f_3)
		{
			if (unk_0x0E4018692D92041D(Local_182.f_3, iVar0))
			{
				if (unk_0x4F94F07DAD382CDA(Local_182.f_70[iVar0]))
				{
					if (unk_0x6F3D61B58C7B4025(Local_182.f_70[iVar0]))
					{
						func_47(&(Local_182.f_70[iVar0]));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_697()
{
	if (!func_320())
	{
		if (func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			unk_0xBE9D0FB56A2D798F(1, func_699(), 0f, 0f, 0f, 0f, 0f, 0f, func_698(), iLocal_139, iLocal_140, iLocal_141, 100, 0, 0, 2, 0, 0, 0, false);
		}
		else
		{
			unk_0xBE9D0FB56A2D798F(1, func_699(), 0f, 0f, 0f, 0f, 0f, 0f, func_698(), iLocal_143, iLocal_144, iLocal_145, 100, 0, 0, 2, 0, 0, 0, false);
		}
	}
}

Vector3 func_698()
{
	return 1f, 1f, 1.5f;
}

Vector3 func_699()
{
	return Local_182.f_13;
}

void func_700(int iParam0)
{
	if (func_320())
	{
		if (!func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_705();
		}
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_296("GB_YA_HP0", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 0, 0))
						{
							func_296("GB_YA_HP1", -1);
						}
						else
						{
							func_296("GB_YA_HP1b", -1);
						}
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703() || func_702())
					{
						func_701("GB_YA_HP2", func_313(func_10()), func_585(func_10(), -2, 0, 0, 0), -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_296("GB_YA_HP3", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_701("GB_YA_HP4", func_313(func_10()), func_585(func_10(), -2, 0, 0, 0), -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_702())
					{
						func_296("GB_YA_HP5", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_296("GB_YA_HP6", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_296("GB_YA_HP7", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 8:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_296("GB_YA_HP8", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_703())
					{
						func_701("GB_YA_HP9", func_313(func_10()), func_585(func_10(), -2, 0, 0, 0), -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
		
		case 10:
			if (!unk_0x0E4018692D92041D(iLocal_136, iParam0))
			{
				if (func_704())
				{
					if (func_702())
					{
						func_296("GB_YA_HP10", -1);
						func_295(1);
						unk_0x8950ED5730F62EE8(&iLocal_136, iParam0);
					}
				}
			}
			break;
	}
}

void func_701(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x37621D6689F9E3C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	unk_0xD61E5ED1D4E687A5(sParam1);
	unk_0x092150016C06C431(0, 0, false, iParam3);
}

int func_702()
{
	return iLocal_155;
}

int func_703()
{
	return iLocal_153;
}

int func_704()
{
	if ((((!func_264() && !unk_0xD9C92B0885A075F8()) && !unk_0xE35413546DC97620()) && func_37(unk_0x95B959F18401C09A(), 1, 1)) && !func_205())
	{
		return 1;
	}
	return 0;
}

void func_705()
{
	unk_0xEDF90B96BED57BCE(1);
}

void func_706(int iParam0)
{
	if (func_320())
	{
		if (!func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_202();
			func_705();
		}
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(86, "GB_YA_BMT0", "GB_YA_BMS0", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(86, "GB_YA_BMT0", "GB_YA_BMS1", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(87, "GB_WINNER", "GB_YA_BMS2", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(87, "GB_WINNER", "GB_YA_BMS3", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 4:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(87, "GB_WINNER", "GB_YA_BMS4", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 5:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					if (Local_182.f_7 != func_14())
					{
						unk_0xEDF90B96BED57BCE(1);
						func_722(88, Local_182.f_7, -1, "GB_YA_BMS5", "GB_WORK_OVER", 1, -1, 2, 0);
						unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(88, "GB_WORK_OVER", "GB_YA_BMS6", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_707(88, "GB_WORK_OVER", "GB_YA_BMS7", func_313(unk_0x95B959F18401C09A()), func_585(unk_0x95B959F18401C09A(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(89, "GB_WORK_OVER", "GB_YA_BMS8", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 9:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_707(88, "GB_WORK_OVER", "GB_YA_BMS9", func_313(func_10()), func_585(func_10(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
		
		case 10:
			if (!unk_0x0E4018692D92041D(iLocal_137, iParam0))
			{
				if (func_724())
				{
					unk_0xEDF90B96BED57BCE(1);
					func_723(88, "GB_WORK_OVER", "GB_YA_BMS10", 1, -1, 2, 1);
					unk_0x8950ED5730F62EE8(&iLocal_137, iParam0);
				}
			}
			break;
	}
}

int func_707(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_14();
	iVar1 = func_14();
	iVar2 = func_14();
	return func_708(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_708(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_721(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_203(&(Var0.f_69), 4);
	return func_709(&Var0);
}

int func_709(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437364.f_3030)
		{
			return 0;
		}
	}
	func_720(uParam0, uParam0->f_17);
	func_719(uParam0);
	if (func_216())
	{
		func_719(uParam0);
	}
	if (func_718(uParam0->f_1))
	{
		func_711();
		if (Global_2437364.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437364.f_2708[0 /*80*/].f_1 == 13 || Global_2437364.f_2708[0 /*80*/].f_1 == 53) || Global_2437364.f_2708[0 /*80*/].f_1 == 54) || Global_2437364.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437364.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437364.f_2708[iVar0 + 1 /*80*/] = { Global_2437364.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437364.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_711();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_203(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_710(uParam0->f_69, 128))
			{
				if (func_208(Global_2437364.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
					func_203(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_710(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_711()
{
	bool bVar0;
	
	if (Global_2437364.f_3031)
	{
		return;
	}
	if (!Global_71858)
	{
		Global_71858 = 1;
		bVar0 = true;
	}
	func_712();
	if (bVar0)
	{
		Global_71858 = 0;
	}
}

void func_712()
{
	Global_2437364.f_3032 = 0;
	Global_2437364.f_3032.f_578 = 0;
	func_716(&(Global_2437364.f_3032.f_1));
	Global_2437364.f_3032.f_1.f_1 = 0;
	func_713(&(Global_2437364.f_3032.f_1));
}

void func_713(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(false);
			unk_0x818901B332D5541D();
		}
		unk_0x83A1D480DB0B52CC(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x05CFB4D665C2A88D(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!unk_0xB59A1CE271CEA093(unk_0x3EE1295CEFBEFED4()))
		{
			if (!Global_71859)
			{
				if (unk_0xBB5E373390A5F824() && !func_715(0))
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
		}
	}
	func_714(0);
}

void func_714(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_715(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_716(var uParam0)
{
	func_717(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_717(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_718(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_719(var uParam0)
{
	if (func_210(uParam0->f_1))
	{
		uParam0->f_72 = func_165();
	}
}

void func_720(var uParam0, int iParam1)
{
	if (func_210(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_14() || !func_37(iParam1, 0, 1))
	{
		return;
	}
	if (func_208(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_585(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_721(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_14();
	uParam1->f_18 = func_14();
	uParam1->f_19 = func_14();
	uParam1->f_20 = func_14();
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

int func_722(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_721(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = uParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_203(&(Var0.f_69), iParam8);
	}
	return func_709(&Var0);
}

int func_723(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_721(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_709(&Var0);
}

int func_724()
{
	if (((func_37(unk_0x95B959F18401C09A(), 1, 1) && !unk_0xD9C92B0885A075F8()) && !func_264()) && func_725())
	{
		return 1;
	}
	return 0;
}

int func_725()
{
	return iLocal_153;
}

void func_726(int iParam0, int iParam1)
{
	if (iParam0 > -1 && iParam0 < 32)
	{
		vLocal_183[iParam0 /*3*/].f_2 = iParam1;
	}
}

void func_727()
{
	if (!func_366(unk_0x95B959F18401C09A()))
	{
		func_99(25);
	}
}

void func_728(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_26(unk_0x95B959F18401C09A());
		Global_1669645 = iVar0;
		Global_1669645.f_1 = iParam0;
		if (func_83() != func_14())
		{
			Global_1669645.f_2 = func_380(func_83());
			Global_1669645.f_3 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669645.f_2), &(Global_1669645.f_3));
		}
		Global_1669645.f_7 = unk_0xEF4753434B24594D();
		Global_1669645.f_28 = func_479(unk_0x95B959F18401C09A());
		Global_1669645.f_13 = 0;
		Global_1669645.f_14 = 0;
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_485(func_225(1));
		}
	}
	else
	{
		iVar0 = func_192(unk_0x95B959F18401C09A());
	}
	if (iParam2 || func_293(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1669384 = iVar0;
		if (func_343(iVar0))
		{
			Global_1669384.f_1 = 4;
		}
		else if (func_342(iVar0))
		{
			Global_1669384.f_1 = 5;
		}
		else if (func_195(iVar0, 0))
		{
			Global_1669384.f_1 = 2;
			if (func_496(iVar0))
			{
				Global_1669384.f_1 = 3;
			}
		}
		else
		{
			Global_1669384.f_1 = 1;
		}
		if (func_83() != func_14())
		{
			Global_1669384.f_4 = func_380(func_83());
			Global_1669384.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669384.f_6), &(Global_1669384.f_7));
		}
		Global_1669384.f_9 = unk_0xEF4753434B24594D();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1669384.f_27 = 1;
			Global_1669384.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1669384.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1669384.f_40 = func_524(iParam1);
			Global_1669384.f_41 = func_750();
			Global_1669384.f_42 = func_658(unk_0x95B959F18401C09A(), iParam1);
			Global_1669384.f_44 = func_472(unk_0x95B959F18401C09A(), iParam1);
		}
		if (!func_62() || iVar0 != 192)
		{
			Global_1669384.f_53 = 0;
		}
	}
	else if (func_340(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1669501 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1669501 = iParam0 + 1;
		}
		else
		{
			Global_1669501 = func_749(unk_0x95B959F18401C09A());
		}
		switch (iVar0)
		{
			case 225:
				if (func_378(unk_0x95B959F18401C09A()) == 0)
				{
					Global_1669501.f_1 = 0;
				}
				else
				{
					Global_1669501.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1669501.f_1 = 2;
				break;
			
			case 227:
				Global_1669501.f_1 = 3;
				break;
		}
		Global_1669501.f_21 = 1;
		Global_1669501.f_22 = 1;
		if (func_83() != func_14())
		{
			Global_1669501.f_4 = func_380(func_83());
			Global_1669501.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669501.f_4), &(Global_1669501.f_5));
		}
		Global_1669501.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669501.f_20 = iParam0;
		}
	}
	else if (func_298(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1669438 = iVar0;
		Global_1669384.f_1 = 1;
		if (func_83() != func_14())
		{
			Global_1669438.f_4 = func_380(func_83());
			Global_1669438.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669438.f_6), &(Global_1669438.f_7));
		}
		Global_1669438.f_9 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669438.f_21 = iParam0;
		}
	}
	else if (func_338(iVar0))
	{
		Global_1669545 = iVar0;
		Global_1669545.f_1 = iParam0;
		Global_1669545.f_21 = 1;
		Global_1669545.f_22 = 1;
		if (func_83() != func_14())
		{
			Global_1669545.f_4 = func_380(func_83());
			Global_1669545.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669545.f_4), &(Global_1669545.f_5));
		}
		Global_1669545.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669545.f_20 = iParam0;
		}
		Global_1669545.f_27 = func_465(func_36(), 5);
		Global_1669545.f_28 = func_485(func_640(unk_0x95B959F18401C09A()));
		Global_1669545.f_29 = func_111(6107, -1, 0);
		Global_1669545.f_30 = func_111(6103, -1, 0);
		Global_1669545.f_31 = func_111(6104, -1, 0);
		Global_1669545.f_32 = func_111(6106, -1, 0);
		Global_1669545.f_33 = func_111(6105, -1, 0);
		Global_1669545.f_34 = func_111(6108, -1, 0);
		Global_1669545.f_7 = func_481();
		Global_1669545.f_51 = func_485(bParam4);
	}
	else if (func_336(iVar0))
	{
		Global_1669599 = iVar0;
		Global_1669599.f_1 = iParam0;
		Global_1669599.f_21 = 1;
		Global_1669599.f_22 = 1;
		if (func_83() != func_14())
		{
			Global_1669599.f_4 = func_380(func_83());
			Global_1669599.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669599.f_4), &(Global_1669599.f_5));
		}
		Global_1669599.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669599.f_20 = iParam0;
		}
		Global_1669599.f_24 = func_111(6157, -1, 0);
		Global_1669599.f_25 = func_111(6162, -1, 0);
		Global_1669599.f_26 = func_111(6163, -1, 0);
		Global_1669599.f_27 = func_485((((func_424() || func_423()) || func_422()) || func_421(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_111(6164, -1, 0);
		Global_1669599.f_29 = func_485(func_420());
		Global_1669599.f_31 = 0;
		Global_1669599.f_30 = 0;
		Global_1669599.f_32 = 0;
		Global_1669599.f_33 = 0;
		Global_1669599.f_34 = 0;
		Global_1669599.f_16 = 0;
		Global_1669599.f_7 = func_481();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_416(func_417(unk_0x95B959F18401C09A()))))
	{
		Global_1669733 = iVar0;
		Global_1669733.f_1 = iParam0;
		Global_1669733.f_21 = 1;
		Global_1669733.f_22 = 1;
		Global_1669733.f_7 = func_481();
		if (func_83() != func_14())
		{
			Global_1669733.f_4 = func_380(func_83());
			Global_1669733.f_5 = func_379(func_83());
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669733.f_4), &(Global_1669733.f_5));
		}
		if (func_83() != -1)
		{
			Global_1669733.f_17 = func_414(func_83());
		}
		Global_1669733.f_8 = unk_0xEF4753434B24594D();
		Global_1669733.f_28 = func_479(unk_0x95B959F18401C09A());
		Global_1669733.f_16 = 0;
		Global_1669733.f_24 = 0;
		Global_1669733.f_23 = 0;
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_485(func_225(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1669680 = iVar0;
		Global_1669680.f_1 = iParam0;
		Global_1669680.f_21 = 1;
		Global_1669680.f_22 = 1;
		Global_1669680.f_7 = func_481();
		Global_1669680.f_24 = 0;
		Global_1669680.f_23 = 0;
		Global_1669680.f_16 = 0;
		if (func_83() != func_14())
		{
			Global_1669680.f_4 = func_380(func_83());
			Global_1669680.f_5 = func_379(func_83());
		}
		Global_1669680.f_28 = func_479(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_407(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_391(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_411(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_485(func_390(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_485(func_389(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_485(func_388(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_485(func_387(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_386(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_385(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_384(unk_0x95B959F18401C09A());
		if (func_80(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_485(func_225(1));
		}
		if (func_228() != func_14())
		{
			func_527(func_228(), &(Global_1669680.f_4), &(Global_1669680.f_5));
		}
		Global_1669680.f_8 = unk_0xEF4753434B24594D();
		Global_1669680.f_28 = func_479(unk_0x95B959F18401C09A());
	}
	else if (func_381(iVar0))
	{
		Global_1669817 = iVar0;
		Global_1669817.f_1 = func_378(unk_0x95B959F18401C09A());
		Global_1669817.f_2 = func_491();
		Global_1669817.f_3 = func_490();
		Global_1669817.f_4 = func_380(func_83());
		Global_1669817.f_5 = func_379(func_83());
		Global_1669817.f_7 = func_481();
		Global_1669817.f_8 = unk_0xEF4753434B24594D();
		Global_1669817.f_17 = func_414(func_83());
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = iParam0;
		Global_1669817.f_27 = func_485(func_376(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_373(21, -1);
	}
	else
	{
		if (func_83() != func_14())
		{
			Global_1669366 = func_380(func_83());
			Global_1669366.f_1 = func_379(func_83());
		}
		Global_1669366.f_5 = unk_0xEF4753434B24594D();
		Global_1669366.f_13 = func_748();
		Global_1669366.f_15 = 0;
		if (func_482(1))
		{
			if (func_228() == func_83())
			{
				Global_1669366.f_15 = 1;
			}
		}
		if (func_747())
		{
			Global_1669501.f_28 = 1;
		}
		if (((((func_746() || func_745()) || func_744()) || func_743()) || func_741()) || func_740(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_30 = 1;
		}
		if (func_738(func_739(-1881846085)))
		{
			Global_1669501.f_32 = 1;
		}
		if (func_732(func_737(joaat("caddy"))))
		{
			Global_1669501.f_31 = 1;
		}
		if (func_463(unk_0x95B959F18401C09A()) || func_462(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_29 = 1;
		}
		if (func_459(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_33 = 1;
			Global_1669501.f_34 = 1;
		}
		if (func_460(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_36 = 1;
		}
		if (func_457(0, unk_0x95B959F18401C09A()) == 1)
		{
			Global_1669501.f_35 = 1;
		}
		if (func_731(unk_0x95B959F18401C09A(), 3, &uVar1))
		{
			Global_1669501.f_37 = 1;
		}
		if (func_731(unk_0x95B959F18401C09A(), 7, &uVar1))
		{
			Global_1669501.f_38 = 1;
		}
		if (func_730(unk_0x95B959F18401C09A()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_729(unk_0x95B959F18401C09A(), iVar2);
				if (func_450(unk_0x95B959F18401C09A(), iVar3, 0))
				{
					Global_1669501.f_39 = 1;
				}
				if (func_450(unk_0x95B959F18401C09A(), iVar3, 2))
				{
					Global_1669501.f_40 = 1;
				}
				if (func_450(unk_0x95B959F18401C09A(), iVar3, 1))
				{
					Global_1669501.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_729(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_452(Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/]))
	{
		uVar0 = Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/];
	}
	return uVar0;
}

int func_730(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_731(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_14())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_457(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_732(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_373(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_439(11));
		func_438(iVar1, &iVar0, 1);
		iVar2 = func_373(func_734(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_111(func_733(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_733(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_734(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 271)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (iParam0 >= func_439(iVar0) && iParam0 < func_735(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_735(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_736(iVar0);
	}
	return (func_440(iParam0, -1) * iParam0 + 1);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_737(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_438(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_111(func_733(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_740(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_333 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_741()
{
	return func_111(func_742(3), -1, 0) != 0;
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 10383;
}

bool func_743()
{
	return func_111(6163, -1, 0) != 0;
}

bool func_744()
{
	return func_111(5380, -1, 0) != 0;
}

bool func_745()
{
	return func_111(3828, -1, 0) != 0;
}

bool func_746()
{
	return func_111(3223, -1, 0) != 0;
}

bool func_747()
{
	return func_111(5379, -1, 0) != 0;
}

int func_748()
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 != func_14())
	{
		return Global_1626536[iVar0 /*603*/].f_11.f_98;
	}
	return 0;
}

int func_749(int iParam0)
{
	if (func_192(iParam0) == 225 || func_192(iParam0) == 226)
	{
		return func_378(iParam0);
	}
	return -1;
}

var func_750()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_453(unk_0x95B959F18401C09A(), iVar0))
		{
			unk_0x8950ED5730F62EE8(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_751(bool bParam0)
{
	if (bParam0)
	{
		if (!func_31(unk_0x95B959F18401C09A(), 9))
		{
			if (func_274(unk_0x95B959F18401C09A()) != 0)
			{
				func_99(9);
			}
		}
	}
	else if (func_31(unk_0x95B959F18401C09A(), 9))
	{
		func_92(9);
	}
}

void func_752(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_2528542.f_1725, 9))
		{
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_1725), 9);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2528542.f_1725, 9))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1725), 9);
	}
}

void func_753()
{
	if (!func_759())
	{
		return;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return;
	}
	func_754();
}

void func_754()
{
	func_756();
	func_755(0);
}

void func_755(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB331FCEB94EB05C8();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x78DCC5D0CB43DEBA();
		Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_756()
{
	if (!func_758())
	{
	}
	if (func_759())
	{
		unk_0xA6DAC1F822246DE2(&(Global_1312585.f_12));
		func_757();
		unk_0xFFC12DB0DD7F299E();
	}
}

void func_757()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			unk_0xE800DC85FDF60F85(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_758()
{
	if (!func_759())
	{
		return 0;
	}
	unk_0x1B3E16C485B8DD94(&(Global_1312585.f_12));
	func_757();
	return unk_0xC8F93D36F11F7BE8();
}

int func_759()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_760()
{
	return func_761(func_10(), 0);
}

bool func_761(int iParam0, bool bParam1)
{
	return func_12(unk_0x95B959F18401C09A(), iParam0, bParam1);
}

int func_762()
{
	if (unk_0x95B959F18401C09A() == func_10())
	{
		return 1;
	}
	return 0;
}

int func_763(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return 0;
	}
	return vLocal_183[iParam0 /*3*/].f_2;
}

void func_764()
{
	func_770();
	if (iLocal_138 > 35000)
	{
		if (func_762() || func_760())
		{
			switch (iLocal_174)
			{
				case 0:
					if (func_763(unk_0x72B85B341ADBE9DE()) == 1)
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_START_DEFEND"))
						{
							iLocal_174 = 1;
						}
					}
					break;
				
				case 1:
					if (!unk_0x0E4018692D92041D(iLocal_177, 0))
					{
						unk_0x65BA35D6D61F1574("APT_YA_START_DEFEND");
						unk_0x8950ED5730F62EE8(&iLocal_177, 0);
					}
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							iLocal_174 = 5;
						}
					}
					if (unk_0x7E2EAC500C9B54E3("APT_YA_DEFENDING"))
					{
						unk_0xCE689A8E8C42ED78(&iLocal_177, 1);
						iLocal_174 = 2;
					}
					break;
				
				case 2:
					if (!unk_0x0E4018692D92041D(iLocal_177, 1))
					{
						unk_0x65BA35D6D61F1574("APT_YA_DEFENDING");
						unk_0x8950ED5730F62EE8(&iLocal_177, 1);
					}
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							iLocal_174 = 5;
						}
					}
					if (func_768(0))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_ACTION"))
						{
							unk_0xCE689A8E8C42ED78(&iLocal_177, 2);
							iLocal_174 = 3;
						}
					}
					break;
				
				case 3:
					if (!unk_0x0E4018692D92041D(iLocal_177, 2))
					{
						unk_0x65BA35D6D61F1574("APT_YA_ACTION");
						unk_0x8950ED5730F62EE8(&iLocal_177, 2);
					}
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							iLocal_174 = 5;
						}
					}
					if (func_765(0))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP_LEAVE"))
						{
							iLocal_174 = 4;
						}
					}
					break;
				
				case 4:
					if (!func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_DEFENDING"))
						{
							unk_0x65BA35D6D61F1574("APT_YA_STOP_LEAVE");
							unk_0xCE689A8E8C42ED78(&iLocal_177, 1);
							iLocal_174 = 2;
						}
					}
					else if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
					{
						iLocal_174 = 5;
					}
					break;
				
				case 5:
					if (!unk_0x0E4018692D92041D(iLocal_177, 4))
					{
						unk_0x65BA35D6D61F1574("APT_YA_STOP");
						unk_0x8950ED5730F62EE8(&iLocal_177, 4);
					}
					break;
			}
		}
		else
		{
			if (!unk_0x0E4018692D92041D(iLocal_177, 4))
			{
				if ((unk_0x0E4018692D92041D(iLocal_177, 0) || unk_0x0E4018692D92041D(iLocal_177, 1)) || unk_0x0E4018692D92041D(iLocal_177, 2))
				{
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							unk_0x65BA35D6D61F1574("APT_YA_STOP");
							unk_0x8950ED5730F62EE8(&iLocal_177, 4);
						}
					}
				}
			}
			switch (iLocal_178)
			{
				case 0:
					if (func_763(unk_0x72B85B341ADBE9DE()) == 2)
					{
						if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 5))
						{
							if (unk_0x7E2EAC500C9B54E3("APT_YA_START_ATTACK"))
							{
								unk_0xCE689A8E8C42ED78(&iLocal_179, 0);
								iLocal_178 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (!unk_0x0E4018692D92041D(iLocal_179, 0))
					{
						unk_0x65BA35D6D61F1574("APT_YA_START_ATTACK");
						unk_0x8950ED5730F62EE8(&iLocal_179, 0);
					}
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							iLocal_178 = 5;
						}
					}
					if (func_768(1))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_ACTION"))
						{
							unk_0xCE689A8E8C42ED78(&iLocal_179, 2);
							iLocal_178 = 2;
						}
					}
					if (func_765(1))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP_LEAVE"))
						{
							iLocal_178 = 4;
						}
					}
					if (!func_37(unk_0x95B959F18401C09A(), 1, 1))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_ATTACK"))
						{
							iLocal_178 = 3;
						}
					}
					break;
				
				case 3:
					if (func_37(unk_0x95B959F18401C09A(), 1, 1))
					{
						if (func_687())
						{
							unk_0x65BA35D6D61F1574("APT_YA_ATTACK");
							iLocal_178 = 1;
						}
					}
					break;
				
				case 2:
					if (!unk_0x0E4018692D92041D(iLocal_179, 2))
					{
						unk_0x65BA35D6D61F1574("APT_YA_ACTION");
						unk_0x8950ED5730F62EE8(&iLocal_179, 2);
					}
					if (func_769())
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
						{
							iLocal_178 = 5;
						}
					}
					if (func_765(1))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP_LEAVE"))
						{
							iLocal_178 = 4;
						}
					}
					if (!func_37(unk_0x95B959F18401C09A(), 1, 1))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_YA_ATTACK"))
						{
							iLocal_178 = 3;
						}
					}
					break;
				
				case 4:
					if (!func_769())
					{
						unk_0x65BA35D6D61F1574("APT_YA_STOP_LEAVE");
						iLocal_178 = 0;
					}
					else if (unk_0x7E2EAC500C9B54E3("APT_YA_STOP"))
					{
						iLocal_178 = 5;
					}
					break;
				
				case 5:
					if (!unk_0x0E4018692D92041D(iLocal_179, 4))
					{
						unk_0x65BA35D6D61F1574("APT_YA_STOP");
						unk_0x8950ED5730F62EE8(&iLocal_179, 4);
					}
					break;
				}
		}
	}
	else
	{
		switch (iLocal_180)
		{
			case 0:
				if (func_763(unk_0x72B85B341ADBE9DE()) == 2 || func_763(unk_0x72B85B341ADBE9DE()) == 1)
				{
					if (iLocal_138 <= 35000 && iLocal_138 >= 29000)
					{
						if (unk_0x7E2EAC500C9B54E3("APT_PRE_COUNTDOWN_STOP"))
						{
							unk_0x65BA35D6D61F1574("APT_PRE_COUNTDOWN_STOP");
							iLocal_180 = 1;
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x0E4018692D92041D(iLocal_181, 1))
				{
					if (iLocal_138 <= 30000)
					{
						if (unk_0x7E2EAC500C9B54E3("APT_COUNTDOWN_30S"))
						{
							unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 1);
							unk_0x1FEA416E00837AFC(0);
							unk_0x65BA35D6D61F1574("APT_COUNTDOWN_30S");
							unk_0x7E2EAC500C9B54E3("APT_COUNTDOWN_30S_KILL");
							unk_0x8950ED5730F62EE8(&iLocal_181, 1);
						}
					}
				}
				else if (!unk_0x0E4018692D92041D(iLocal_181, 2))
				{
					if (iLocal_138 <= 27000)
					{
						unk_0x1FEA416E00837AFC(1);
						unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
						unk_0x8950ED5730F62EE8(&iLocal_181, 2);
						iLocal_180 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x0E4018692D92041D(iLocal_181, 3))
				{
					if (iLocal_138 <= 0)
					{
						unk_0x33854B8151B6D8EC("APT_COUNTDOWN_30S");
						if (unk_0x7E2EAC500C9B54E3("APT_FADE_IN_RADIO"))
						{
							unk_0x65BA35D6D61F1574("APT_FADE_IN_RADIO");
							unk_0x33854B8151B6D8EC("APT_COUNTDOWN_30S_KILL");
							unk_0x7E2EAC500C9B54E3("APT_COUNTDOWN_30S_KILL");
							unk_0x8950ED5730F62EE8(&iLocal_181, 3);
						}
					}
					else if (unk_0x0E4018692D92041D(Local_182.f_1, 2) || unk_0x0E4018692D92041D(Local_182.f_1, 7))
					{
						if (unk_0x7E2EAC500C9B54E3("APT_FADE_IN_RADIO"))
						{
							unk_0x33854B8151B6D8EC("APT_COUNTDOWN_30S");
							unk_0x65BA35D6D61F1574("APT_COUNTDOWN_30S_KILL");
							unk_0x65BA35D6D61F1574("APT_FADE_IN_RADIO");
							unk_0x7E2EAC500C9B54E3("APT_COUNTDOWN_30S_KILL");
							unk_0x8950ED5730F62EE8(&iLocal_181, 3);
						}
					}
				}
				break;
			}
	}
}

int func_765(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 5) && !func_766())
		{
			return 1;
		}
	}
	else
	{
		iLocal_176 = 0;
		while (iLocal_176 < 32)
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iLocal_176)))
			{
				iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iLocal_176));
				iVar1 = unk_0x378BD4B3881338C2(iVar0);
				if (iVar0 != func_14())
				{
					if (!func_11(iVar0) && !func_9(iVar0))
					{
						if (func_51(iVar1, func_894(), 0) < 700f)
						{
							return 0;
						}
					}
				}
			}
			iLocal_176++;
		}
		return 1;
	}
	return 0;
}

int func_766()
{
	int iVar0;
	int iVar1;
	
	if (func_56())
	{
		iVar0 = 0;
		while (iVar0 < Local_182.f_33.f_2)
		{
			if (unk_0x22C3124A898FB82A(Local_182.f_65[iVar0]))
			{
				if (func_767(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_182.f_65[iVar0]), 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (func_52())
	{
		iVar1 = 0;
		while (iVar1 < Local_182.f_33.f_3)
		{
			if (unk_0x4F94F07DAD382CDA(Local_182.f_70[iVar1]) && !unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_182.f_70[iVar1]), 0))
			{
				if (func_767(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_182.f_70[iVar1]), 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_767(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x765F6FEEFF39224F(iParam1) && !unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0x10930B9CAD4111C2(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		if (func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (func_51(unk_0x33CD235DF1E6A94E(), func_894(), 0) <= 200f)
			{
				return 1;
			}
		}
		if (func_766())
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iLocal_175)))
		{
			iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iLocal_175));
			iVar1 = unk_0x378BD4B3881338C2(iVar0);
			if (iVar0 != func_14())
			{
				if (!func_11(iVar0) && !func_9(iVar0))
				{
					if (func_51(iVar1, func_894(), 0) <= 500f)
					{
						iLocal_175 = 0;
						return 1;
					}
				}
			}
		}
		iLocal_175++;
		if (iLocal_175 >= 32)
		{
			iLocal_175 = 0;
		}
	}
	return 0;
}

int func_769()
{
	if (func_763(unk_0x72B85B341ADBE9DE()) == 4 || func_763(unk_0x72B85B341ADBE9DE()) == 5)
	{
		return 1;
	}
	return 0;
}

void func_770()
{
	if (func_762() || func_760())
	{
		if (!iLocal_173)
		{
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
			unk_0xDEFB5E2E5CBD460A("MP_POSITIONED_RADIO_MUTE_SCENE");
			iLocal_173 = 1;
		}
	}
	else if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 5))
	{
		if (!iLocal_173)
		{
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
			unk_0xDEFB5E2E5CBD460A("MP_POSITIONED_RADIO_MUTE_SCENE");
			iLocal_173 = 1;
		}
	}
	else if (iLocal_173)
	{
		unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
		unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
		unk_0x7CED302277C0F3D3("MP_POSITIONED_RADIO_MUTE_SCENE");
		iLocal_173 = 0;
	}
}

void func_771()
{
	if (!func_781() && !func_90())
	{
		if (!func_760() && !func_762())
		{
			if (!func_30())
			{
				if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 10))
				{
					unk_0xCE689A8E8C42ED78(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 10);
				}
			}
			if (!func_366(unk_0x95B959F18401C09A()))
			{
				if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 100f, 1))
				{
					func_727();
				}
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), func_8(), func_7(), func_6(), 0, true, 0))
				{
					func_727();
				}
			}
			if (!func_23(unk_0x95B959F18401C09A()))
			{
				if ((func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_780(unk_0x95B959F18401C09A())) || func_778())
				{
					if (func_31(unk_0x95B959F18401C09A(), 19))
					{
						func_92(19);
					}
					if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 5))
					{
						unk_0xCE689A8E8C42ED78(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 5);
					}
				}
				else if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 5))
				{
					if (func_51(unk_0x33CD235DF1E6A94E(), func_894(), 0) <= 500f)
					{
						func_99(19);
						unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 5);
					}
				}
				else if (func_51(unk_0x33CD235DF1E6A94E(), func_894(), 0) > 700f)
				{
					func_92(19);
					unk_0xCE689A8E8C42ED78(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 5);
				}
				if (!func_31(unk_0x95B959F18401C09A(), 20))
				{
					if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 0, 0))
					{
						func_774(0);
					}
					if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), func_8(), func_7(), func_6(), 0, true, 0))
					{
						func_774(0);
					}
				}
			}
		}
		else if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 2))
		{
			if (func_772())
			{
				unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 2);
			}
		}
	}
	else if (func_30())
	{
		if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 10))
		{
			unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 10);
		}
	}
}

int func_772()
{
	if (vdist2(func_773(), func_894()) < 200f)
	{
		return 1;
	}
	if (func_279(unk_0x95B959F18401C09A(), func_124(func_10()), 0, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_773()
{
	return unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false);
}

void func_774(int iParam0)
{
	if (!func_166(unk_0x95B959F18401C09A()))
	{
		if (iParam0 || func_274(unk_0x95B959F18401C09A()) != 0)
		{
			func_99(20);
			func_775(func_776());
			if (func_85(unk_0x95B959F18401C09A()))
			{
				if (!unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 8))
				{
					unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 8);
				}
			}
		}
	}
}

void func_775(var uParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = uParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

int func_776()
{
	int iVar0;
	
	iVar0 = func_192(unk_0x95B959F18401C09A());
	if (func_777(iVar0) == 0)
	{
		return -1;
	}
	if (func_497(iVar0))
	{
		return 65;
	}
	if (func_343(iVar0))
	{
		return 66;
	}
	if (func_332(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_777(int iParam0)
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
			return 0;
		
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

int func_778()
{
	if ((func_779(unk_0x95B959F18401C09A(), 0) > -1 && unk_0x1BCDA92AD0A7835B(joaat("am_mp_property_int")) <= 0) && unk_0x1BCDA92AD0A7835B(joaat("am_mp_yacht")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_779(int iParam0, bool bParam1)
{
	if (func_37(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2424047[iParam0 /*416*/].f_261.f_14;
		}
		else
		{
			return Global_2424047[iParam0 /*416*/].f_261.f_16;
		}
	}
	return -1;
}

bool func_780(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11);
}

int func_781()
{
	return 0;
}

void func_782()
{
	if (func_763(unk_0x72B85B341ADBE9DE()) != 5)
	{
		if (func_57() == 4 && func_763(unk_0x72B85B341ADBE9DE()) != 4)
		{
			if (func_11(unk_0x95B959F18401C09A()) || func_9(unk_0x95B959F18401C09A()))
			{
				func_751(0);
			}
			if (func_785())
			{
				if (func_784())
				{
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 7);
				}
				else if (func_783())
				{
					unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 8);
				}
			}
			func_726(unk_0x72B85B341ADBE9DE(), 4);
		}
		else if (func_57() == 5)
		{
			if (func_11(unk_0x95B959F18401C09A()) || func_9(unk_0x95B959F18401C09A()))
			{
				func_751(0);
			}
			func_726(unk_0x72B85B341ADBE9DE(), 5);
		}
	}
}

int func_783()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_482(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				iVar2 = unk_0x378BD4B3881338C2(iVar1);
				if (iVar1 != func_14())
				{
					if (func_37(iVar1, 1, 1))
					{
						if (func_12(iVar1, func_83(), 1))
						{
							if (unk_0xD4B4F68F3449CBEC(iVar2, func_8(), func_7(), func_6(), 0, true, 0))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_784()
{
	if (func_37(unk_0x95B959F18401C09A(), 1, 1))
	{
		return unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), func_8(), func_7(), func_6(), 0, true, 0);
	}
	return 0;
}

bool func_785()
{
	return unk_0x0E4018692D92041D(Local_182.f_1, 2);
}

void func_786()
{
	if (func_320())
	{
		if (!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 9))
		{
			unk_0x8950ED5730F62EE8(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 9);
		}
	}
	else if (unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 9))
	{
		unk_0xCE689A8E8C42ED78(&(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 9);
	}
	if (func_762() || func_760())
	{
		func_822(1);
		func_821(1);
		func_820(0);
		func_804();
		func_795();
		func_787();
	}
	else
	{
		switch (func_274(unk_0x95B959F18401C09A()))
		{
			case 0:
				func_822(0);
				func_820(0);
				func_821(0);
				func_688();
				func_753();
				break;
			
			case 1:
			case 2:
				func_822(0);
				func_820(1);
				func_821(1);
				func_804();
				break;
			
			case 3:
				func_822(1);
				func_820(0);
				func_821(1);
				func_804();
				func_787();
				func_795();
				break;
			}
	}
}

void func_787()
{
	if (func_320())
	{
		if (func_794())
		{
			func_753();
		}
		return;
	}
	switch (func_763(unk_0x72B85B341ADBE9DE()))
	{
		case 1:
			if (!func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				if (!func_792("GB_YA_OT0"))
				{
					func_788("GB_YA_OT0", 0);
				}
			}
			break;
		
		case 2:
			if (!func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				if (!func_792("GB_YA_OT1"))
				{
					func_788("GB_YA_OT1", 0);
				}
			}
			break;
		
		case 3:
			func_753();
			break;
		
		case 4:
			func_753();
			break;
		
		case 5:
			func_753();
			break;
	}
}

void func_788(char* sParam0, bool bParam1)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return;
	}
	if (func_792(sParam0))
	{
		return;
	}
	func_754();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_791();
	func_790(bParam1);
	func_789();
}

void func_789()
{
	unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 1);
}

void func_790(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_1312585.f_59), 0);
}

void func_791()
{
	Global_1312585.f_10 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 86400000);
	Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
}

bool func_792(char* sParam0)
{
	if (!func_759())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_793(sParam0);
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12));
}

bool func_793(char* sParam0)
{
	if (!func_759())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

int func_794()
{
	if (!func_759())
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return 0;
	}
	return 1;
}

void func_795()
{
	int iVar0;
	
	if (func_803())
	{
		switch (func_763(unk_0x72B85B341ADBE9DE()))
		{
			case 2:
			case 1:
				if (func_3(&(Local_182.f_74)))
				{
					iLocal_138 = (func_18() - func_802(&(Local_182.f_74), 0, 0));
					func_801();
					if (iLocal_138 > 30000)
					{
						iVar0 = 1;
					}
					else
					{
						iVar0 = 6;
					}
					if (iLocal_138 > 0)
					{
						func_800(iLocal_138, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						if (iLocal_172 == 0)
						{
							if (((func_84(unk_0x95B959F18401C09A()) || func_368()) || func_367()) || func_366(unk_0x95B959F18401C09A()))
							{
								if (unk_0x3C05A6D663EA1B6A("DLC_APARTMENT/APT_Yacht_01", false, -1))
								{
									unk_0xEC95D37A139F1D5C(-1, "Horn", func_894(), "DLC_Apt_Yacht_Ambient_Soundset", 0, 500, 0);
									unk_0xB4F447A5639E2006("DLC_APARTMENT/APT_Yacht_01");
									iLocal_172 = 1;
								}
							}
						}
						func_800(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					if (func_3(&(Local_182.f_78)))
					{
						if (func_799())
						{
							if (func_762() || func_760())
							{
								if (iLocal_158 == 0)
								{
									unk_0x0F8EAEEC97DDBCB3(-1, "Enemy_Capture_Start", "GTAO_Magnate_Yacht_Attack_Soundset", false);
									iLocal_158 = 1;
								}
								func_796(func_802(&(Local_182.f_78), 0, 0), func_20(), "GB_YA_HUD2", 6, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
							}
							else
							{
								if (iLocal_158 == 0)
								{
									unk_0x0F8EAEEC97DDBCB3(-1, "Team_Capture_Start", "GTAO_Magnate_Yacht_Attack_Soundset", false);
									iLocal_158 = 1;
								}
								func_796(func_802(&(Local_182.f_78), 0, 0), func_20(), "GB_YA_HUD0", 1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
							}
						}
						else if (iLocal_158 == 1)
						{
							iLocal_158 = 0;
						}
					}
					else if (iLocal_158 == 1)
					{
						iLocal_158 = 0;
					}
				}
				break;
			
			case 4:
				if (iLocal_172 == 0)
				{
					if (((func_84(unk_0x95B959F18401C09A()) || func_368()) || func_367()) || func_366(unk_0x95B959F18401C09A()))
					{
						if (unk_0x3C05A6D663EA1B6A("DLC_APARTMENT/APT_Yacht_01", false, -1))
						{
							unk_0xEC95D37A139F1D5C(-1, "Horn", func_894(), "DLC_Apt_Yacht_Ambient_Soundset", 0, 500, 0);
							unk_0xB4F447A5639E2006("DLC_APARTMENT/APT_Yacht_01");
							iLocal_172 = 1;
						}
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_796(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_798(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_797(0, iVar0);
		Global_1373453.f_1114[iVar0] = iParam0;
		Global_1373453.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1373453.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_1114.f_194[iVar0] = iParam3;
		Global_1373453.f_1114.f_183[iVar0] = iParam4;
		Global_1373453.f_1114.f_216[iVar0] = iParam5;
		Global_1373453.f_1114.f_227[iVar0 /*3*/] = iParam6;
		Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1373453.f_1114.f_258[iVar0] = iParam8;
		Global_1373453.f_1114.f_269[iVar0] = iParam9;
		Global_1373453.f_1114.f_312[iVar0] = iParam10;
		Global_1373453.f_1114.f_323[iVar0] = iParam11;
		Global_1373453.f_1114.f_334[iVar0] = iParam12;
		Global_1373453.f_1114.f_345[iVar0] = iParam13;
		Global_1373453.f_1109 = 1;
		Global_1373453.f_1114.f_356[iVar0] = iParam14;
		Global_1373453.f_1114.f_367[iVar0] = iParam15;
		Global_1373453.f_1114.f_378[iVar0] = iParam16;
		Global_1373453.f_1114.f_389[iVar0] = iParam17;
		Global_1373453.f_1114.f_400[iVar0] = iParam18;
		Global_1373453.f_1114.f_411[iVar0] = iParam19;
		Global_1373453.f_1114.f_422[iVar0] = iParam20;
		Global_1373453.f_1114.f_433[iVar0] = iParam21;
		Global_1373453.f_1114.f_444[iVar0] = iParam22;
		Global_1373453.f_1114.f_455[iVar0] = iParam23;
		Global_1373453.f_1114.f_466[iVar0] = iParam24;
		Global_1373453.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_797(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_798(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

int func_799()
{
	if ((func_368() || func_367()) || func_84(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

void func_800(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_798(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_797(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_801()
{
	Global_1373453.f_1109 = 1;
}

int func_802(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0);
		}
		else
		{
			return unk_0x5009A219B22D2352(unk_0x765FF3592EC81689(), *uParam0);
		}
	}
	return unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0);
}

int func_803()
{
	if (func_320())
	{
		return 0;
	}
	return 1;
}

void func_804()
{
	int iVar0;
	int iVar1;
	
	if (func_320())
	{
		func_688();
		if (func_819(Local_182.f_4))
		{
			func_817(Local_182.f_4, 0);
		}
		return;
	}
	if (func_3(&(Local_182.f_74)))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				if (func_762() || func_760())
				{
					if (!func_11(iVar1) && !func_9(iVar1))
					{
						if (!func_815(iVar1))
						{
							func_811(iVar1, func_814(6), 1, 0);
						}
					}
				}
				else if (func_11(iVar1) || func_9(iVar1))
				{
					if (!func_815(iVar1))
					{
						func_811(iVar1, func_814(6), 1, 0);
					}
				}
			}
			iVar0++;
		}
		if (!func_819(Local_182.f_4))
		{
			func_817(Local_182.f_4, 1);
		}
		if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 0, 0))
		{
			func_689();
			func_809();
		}
		else
		{
			func_690();
			func_806();
		}
		func_805();
	}
}

void func_805()
{
	int iVar0;
	
	if (!func_761(Local_182.f_8, 1))
	{
		if (func_56())
		{
			iVar0 = 0;
			while (iVar0 < Local_182.f_33.f_2)
			{
				if (unk_0x4F94F07DAD382CDA(Local_182.f_65[iVar0]))
				{
					if ((!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_182.f_65[iVar0]), 0) && !func_767(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_182.f_65[iVar0]), 0)) && !func_320())
					{
						if (!unk_0xE38E3CF1625A4145(iLocal_170[iVar0]))
						{
							iLocal_170[iVar0] = unk_0x8848A15CBDADDC60(unk_0xFC00F22E930BFD55(Local_182.f_65[iVar0]));
							unk_0xA20C1DE21F2F071C(iLocal_170[iVar0], 427);
							unk_0x1C95CD840303FC37(iLocal_170[iVar0], "GB_YA_BN2");
							unk_0x9D148E7C7C25619B(iLocal_170[iVar0], round(unk_0xC472E34C8FBEC678(unk_0xFC00F22E930BFD55(Local_182.f_65[iVar0]))));
							unk_0xC51C58C963968740(iLocal_170[iVar0], 10);
							unk_0xD99530E6E53B24BF(iLocal_170[iVar0], true);
						}
					}
					else if (unk_0xE38E3CF1625A4145(iLocal_170[iVar0]))
					{
						unk_0x1ABDB383C83A336A(&(iLocal_170[iVar0]));
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		if (func_52())
		{
			iVar0 = 0;
			while (iVar0 < Local_182.f_33.f_3)
			{
				if (unk_0x4F94F07DAD382CDA(Local_182.f_70[iVar0]))
				{
					if ((!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_182.f_70[iVar0]), 0) && !func_767(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_182.f_70[iVar0]), 0)) && !func_320())
					{
						if (!unk_0xE38E3CF1625A4145(iLocal_171[iVar0]))
						{
							iLocal_171[iVar0] = unk_0x8848A15CBDADDC60(unk_0xFC00F22E930BFD55(Local_182.f_70[iVar0]));
							unk_0xA20C1DE21F2F071C(iLocal_171[iVar0], 64);
							unk_0x1C95CD840303FC37(iLocal_171[iVar0], "GB_YA_BN3");
							unk_0xC51C58C963968740(iLocal_171[iVar0], 10);
							unk_0xD99530E6E53B24BF(iLocal_171[iVar0], true);
						}
					}
					else if (unk_0xE38E3CF1625A4145(iLocal_171[iVar0]))
					{
						unk_0x1ABDB383C83A336A(&(iLocal_171[iVar0]));
					}
				}
				iVar0++;
			}
		}
	}
}

void func_806()
{
	if (!unk_0xE38E3CF1625A4145(iLocal_169))
	{
		iLocal_169 = func_807(Local_182.f_13, 0);
		unk_0xA20C1DE21F2F071C(iLocal_169, 455);
		unk_0xC51C58C963968740(iLocal_169, 12);
		unk_0x1C95CD840303FC37(iLocal_169, "GB_YA_BN0");
		unk_0xCE5C49921A521962(iLocal_169, 1.25f);
	}
	else if (unk_0x2694E4096D4C697C(iLocal_169) != 5)
	{
		unk_0xB9E84A421C105943(iLocal_169, 5);
	}
}

int func_807(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_808(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_808(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_809()
{
	vector3 vVar0;
	
	if (!unk_0xE38E3CF1625A4145(iLocal_168))
	{
		vVar0 = { unk_0xCD1EDCB38767B47C(Local_182.f_13, func_810(), 1.5f, 0f, 0f) };
		iLocal_168 = unk_0xEFFBEB7486CDFD2F(vVar0, 10.5f, 10.5f);
		unk_0x9D148E7C7C25619B(iLocal_168, round(func_810()));
		unk_0xE447A1B9434714F3(iLocal_168, 180);
		unk_0xC51C58C963968740(iLocal_168, 12);
		unk_0x1C95CD840303FC37(iLocal_168, "GB_YA_BN1");
	}
	else if (unk_0x2694E4096D4C697C(iLocal_168) != 5)
	{
		unk_0xB9E84A421C105943(iLocal_168, 5);
	}
}

var func_810()
{
	return Local_182.f_12;
}

void func_811(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_813(iParam0))
	{
		return;
	}
	if (func_812(&(Global_2416063.f_614[iParam0]), &(Global_2416063.f_977[iParam0]), &(Global_2416063.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_449[iParam0] = uParam1;
		}
	}
}

int func_812(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x8ED4328770BEE4A1(*uParam1) || *uParam1 == unk_0x8C40DC84EDF05997())
		{
			*uParam1 = unk_0x8C40DC84EDF05997();
			*uParam0 = unk_0x8C40DC84EDF05997();
		}
	}
	if (!unk_0x8ED4328770BEE4A1(*uParam0) || *uParam0 == unk_0x8C40DC84EDF05997())
	{
		if (bParam3)
		{
			if (!unk_0x0E4018692D92041D(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x8950ED5730F62EE8(iParam2, iParam4);
			}
			*uParam0 = unk_0x8C40DC84EDF05997();
		}
		else
		{
			if (unk_0x0E4018692D92041D(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xCE689A8E8C42ED78(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x8C40DC84EDF05997())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x8ED4328770BEE4A1(*uParam1) && !*uParam1 == unk_0x8C40DC84EDF05997())
	{
	}
	return 0;
}

int func_813(int iParam0)
{
	if (iParam0 == func_14())
	{
		return 1;
	}
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_103())
	{
		return 1;
	}
	return 0;
}

int func_814(int iParam0)
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

bool func_815(int iParam0)
{
	return func_816(Global_2416063.f_614[iParam0], &(Global_2416063.f_386), iParam0);
}

int func_816(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam1, iParam2))
	{
		if (unk_0x8ED4328770BEE4A1(iParam0))
		{
			return 1;
		}
		else
		{
			unk_0xCE689A8E8C42ED78(iParam1, iParam2);
		}
	}
	return 0;
}

void func_817(int iParam0, bool bParam1)
{
	if (func_123(iParam0))
	{
		if (bParam1)
		{
			if (!Global_2537295.f_39[iParam0])
			{
				Global_2537295.f_39[iParam0] = 1;
				if (!Global_2537295.f_76 == unk_0x8C40DC84EDF05997())
				{
					Global_2537295.f_76 = unk_0x8C40DC84EDF05997();
				}
			}
		}
		else if (Global_2537295.f_39[iParam0])
		{
			Global_2537295.f_39[iParam0] = 0;
			if (!func_818())
			{
				Global_2537295.f_76 = -1;
			}
		}
	}
}

int func_818()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (func_819(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_819(int iParam0)
{
	if (func_123(iParam0))
	{
		if (unk_0x8ED4328770BEE4A1(Global_2537295.f_76))
		{
			return Global_2537295.f_39[iParam0];
		}
	}
	return 0;
}

void func_820(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iLocal_155 == 0)
		{
			iLocal_155 = 1;
		}
	}
	else if (iLocal_155 == 1)
	{
		iLocal_155 = 0;
	}
}

void func_821(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iLocal_154 == 0)
		{
			iLocal_154 = 1;
		}
	}
	else if (iLocal_154 == 1)
	{
		iLocal_154 = 0;
	}
}

void func_822(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iLocal_153 == 0)
		{
			iLocal_153 = 1;
		}
	}
	else if (iLocal_153 == 1)
	{
		iLocal_153 = 0;
	}
}

void func_823()
{
	if (func_320())
	{
		return;
	}
	if ((((!func_93(unk_0x95B959F18401C09A(), 21) && !func_93(unk_0x95B959F18401C09A(), 25)) && !func_257()) && !func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_325(unk_0x95B959F18401C09A()))
	{
		if (func_367())
		{
			if (func_762() || func_760())
			{
				if (iLocal_149 == 0)
				{
					func_846(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
					func_842();
					func_838(8, 0, 0, 0, 0);
					iLocal_149 = 1;
				}
			}
			else if (iLocal_149 == 0 || func_837())
			{
				func_838(10, 0, 0, 0, 0);
				func_833(Local_182.f_28, Local_182.f_31, Local_182.f_32, 1, 40f, 1, 0, 30f, 1, 1, 0, 1, -1082130432);
				func_832(func_894(), 1, 0);
				iLocal_149 = 1;
			}
		}
		else if (func_687())
		{
			if (iLocal_149)
			{
				if (func_762() || func_760())
				{
					func_827();
					func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
					iLocal_149 = 0;
				}
				else
				{
					func_826();
					func_824();
					iLocal_149 = 0;
				}
			}
		}
	}
	else
	{
		if (func_93(unk_0x95B959F18401C09A(), 21))
		{
		}
		if (func_93(unk_0x95B959F18401C09A(), 25))
		{
		}
		if (func_257())
		{
		}
		if (func_354(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
		}
		if (func_325(unk_0x95B959F18401C09A()))
		{
		}
		if (func_687())
		{
			if (iLocal_149)
			{
				if (func_762() || func_760())
				{
					func_827();
					func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
					iLocal_149 = 0;
				}
				else
				{
					func_826();
					func_824();
					iLocal_149 = 0;
				}
			}
		}
	}
}

void func_824()
{
	if (Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
	{
		func_825();
	}
}

void func_825()
{
	struct<28> Var0;
	
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413883 = { Var0 };
	Global_2413883.f_6 = -1;
}

void func_826()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x8C40DC84EDF05997())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_827()
{
	if (func_831() && !func_830())
	{
		func_829();
	}
	func_828();
	Global_2405071.f_704 = 0;
}

void func_828()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_829()
{
	if (func_830())
	{
		if (Global_2405071.f_704.f_517 == Global_2405071.f_1222.f_517)
		{
			return;
		}
	}
	if (!unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_1222), &(Global_2405071.f_704), 518);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1740 = 1;
	}
}

int func_830()
{
	if ((Global_2405071.f_1740 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_1222.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

int func_831()
{
	if ((Global_2405071.f_1741 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_832(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

void func_833(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	if (vmag(vParam0) == 0f)
	{
		return;
	}
	if (!unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		Global_2413883.f_6 = unk_0x8C40DC84EDF05997();
	}
	Var0.f_6 = Global_2413883.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_834(unk_0x95B959F18401C09A()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413883 = { Var0 };
}

int func_834(int iParam0)
{
	if (((func_835(iParam0, 1) || func_85(iParam0)) || func_95(iParam0, 0)) || func_327(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_835(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_836(iParam0) != 0;
	}
	return func_254(iParam0, bParam1);
}

int func_836(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_837()
{
	if (!func_37(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (iLocal_150 == 0)
		{
			iLocal_150 = 1;
		}
	}
	else if (func_687())
	{
		if (iLocal_150 == 1)
		{
			iLocal_150 = 0;
			return 1;
		}
	}
	return 0;
}

void func_838(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437364.f_1893.f_690.f_16 != func_14())
	{
		if (unk_0x0E4018692D92041D(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_839())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412626 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x8C40DC84EDF05997();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_839()
{
	if (((((func_192(unk_0x95B959F18401C09A()) == 229 || func_192(unk_0x95B959F18401C09A()) == 191) || func_841()) || func_840()) || func_322(unk_0x95B959F18401C09A())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

var func_840()
{
	return Global_1574395;
}

int func_841()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_842()
{
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[0 /*3*/]), func_845(Local_182.f_4, fLocal_167[0]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[1 /*3*/]), func_845(Local_182.f_4, fLocal_167[1]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[2 /*3*/]), func_845(Local_182.f_4, fLocal_167[2]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[3 /*3*/]), func_845(Local_182.f_4, fLocal_167[3]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[4 /*3*/]), func_845(Local_182.f_4, fLocal_167[4]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[5 /*3*/]), func_845(Local_182.f_4, fLocal_167[5]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[6 /*3*/]), func_845(Local_182.f_4, fLocal_167[6]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[7 /*3*/]), func_845(Local_182.f_4, fLocal_167[7]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[8 /*3*/]), func_845(Local_182.f_4, fLocal_167[8]), 1065353216);
	func_843(unk_0xCD1EDCB38767B47C(func_894(), func_810(), vLocal_166[9 /*3*/]), func_845(Local_182.f_4, fLocal_167[9]), 1065353216);
}

void func_843(vector3 vParam0, float fParam1, int iParam2)
{
	func_844(vParam0, fParam1, iParam2);
}

void func_844(vector3 vParam0, float fParam1, int iParam2)
{
	if (!Global_2405071.f_1741)
	{
	}
	if (Global_2405071.f_704 < 100)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/] = { vParam0 };
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_3 = fParam1;
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_4 = iParam2;
		Global_2405071.f_704++;
	}
}

float func_845(int iParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = func_283(iParam0);
	fParam1 = (fParam1 + fVar0);
	while (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	while (fParam1 >= 360f)
	{
		fParam1 = (fParam1 - 360f);
	}
	return fParam1;
}

void func_846(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (bParam0)
	{
		if (func_831())
		{
			func_829();
		}
		Global_2405071.f_704.f_517 = unk_0x8C40DC84EDF05997();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_827();
		func_838(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1741 = 1;
	}
	else
	{
		func_847();
	}
}

void func_847()
{
	if (func_831() && !func_830())
	{
		func_829();
	}
	if (func_830())
	{
		func_848();
	}
	else
	{
		func_827();
		func_838(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_848()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

void func_849()
{
	if (Global_2528542.f_5655 != Local_182.f_4)
	{
		Global_2528542.f_5655 = Local_182.f_4;
	}
}

void func_850()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 182)
		{
			func_851(iVar0);
		}
		iVar0++;
	}
}

void func_851(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var4, 11))
	{
		if (unk_0x765F6FEEFF39224F(Var4))
		{
			if (unk_0x068481DAF84B9654(Var4))
			{
				iVar0 = unk_0x22B02EC53152632C(Var4);
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					iVar2 = unk_0x5C7617A25D50AAE9(iVar0);
					if (unk_0x982A72D771CF4FE1(iVar2))
					{
						if (Var4.f_3)
						{
							if (unk_0x06C1EBC003C18F1F())
							{
								if (func_11(iVar2))
								{
									Local_182.f_27++;
								}
								if (func_9(iVar2))
								{
									Local_182.f_26++;
								}
							}
						}
						if (!func_31(unk_0x95B959F18401C09A(), 20))
						{
							if (unk_0x765F6FEEFF39224F(Var4.f_1))
							{
								if (unk_0x068481DAF84B9654(Var4.f_1))
								{
									iVar1 = unk_0x22B02EC53152632C(Var4.f_1);
									if (unk_0xE09156665EC2D83B(iVar1))
									{
										iVar3 = unk_0x5C7617A25D50AAE9(iVar1);
										if (unk_0x982A72D771CF4FE1(iVar3))
										{
											if (iVar3 == unk_0x95B959F18401C09A())
											{
												if (!func_761(func_10(), 1))
												{
													if (func_11(iVar2) || func_9(iVar2))
													{
														func_774(0);
														func_727();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_852(int iParam0, int iParam1)
{
	if (iParam0 > -1 && iParam0 < 32)
	{
		vLocal_183[iParam0 /*3*/] = iParam1;
	}
}

int func_853()
{
	if (func_855())
	{
		unk_0x1256E5EA03020804(12, &iLocal_139, &iLocal_140, &iLocal_141, &uLocal_142);
		unk_0x1256E5EA03020804(1, &iLocal_143, &iLocal_144, &iLocal_145, &uLocal_146);
		func_854(1);
		if (iLocal_156 == 0)
		{
			func_75(152, 1, -1, 0);
			iLocal_156 = 1;
		}
		return 1;
	}
	return 0;
}

void func_854(int iParam0)
{
	Global_1315679 = iParam0;
}

int func_855()
{
	int iVar0;
	
	vLocal_166[0 /*3*/] = { 12.48f, 5.7f, 2.07f };
	vLocal_166[1 /*3*/] = { 12.48f, -5.7f, 2.07f };
	vLocal_166[2 /*3*/] = { 41.17f, 6.45f, -1.73f };
	vLocal_166[3 /*3*/] = { 41.17f, -6.45f, -1.73f };
	vLocal_166[4 /*3*/] = { 50.1f, 6.45f, -4.82f };
	vLocal_166[5 /*3*/] = { 50.1f, -6.45f, -4.82f };
	vLocal_166[6 /*3*/] = { 68.66f, 6.4f, -4.82f };
	vLocal_166[7 /*3*/] = { 68.66f, -6.4f, -4.82f };
	vLocal_166[8 /*3*/] = { 37.07f, 5f, 1.2f };
	vLocal_166[9 /*3*/] = { 37.07f, -5f, 1.2f };
	fLocal_167[0] = 178.2098f;
	fLocal_167[1] = 178.1843f;
	fLocal_167[2] = 175.9355f;
	fLocal_167[3] = 186.977f;
	fLocal_167[4] = 171.142f;
	fLocal_167[5] = 187.1668f;
	fLocal_167[6] = 10.99823f;
	fLocal_167[7] = 342.0884f;
	fLocal_167[8] = 114.0532f;
	fLocal_167[9] = 247.5573f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_893(vLocal_166[iVar0 /*3*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_856()
{
	return Local_182;
}

int func_857(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return -1;
	}
	return vLocal_183[iParam0 /*3*/];
}

void func_858(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	if (Global_1669352 != 0)
	{
		if (unk_0x0E4018692D92041D(Global_1669352, 1))
		{
			if (func_62())
			{
				if (func_859(82, "GB_INTTXT_YA", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0xCE689A8E8C42ED78(&Global_1669352, 1);
				}
			}
			else if (func_859(82, "GB_INTTXT_YA_2", 2, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0xCE689A8E8C42ED78(&Global_1669352, 1);
			}
		}
	}
}

int func_859(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xCE689A8E8C42ED78(&Global_2423, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_860(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			unk_0x8950ED5730F62EE8(&Global_2423, 1);
			unk_0x8950ED5730F62EE8(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_860(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCE3CFF625BEBAA04(sParam14, sParam15))
	{
	}
	func_870();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
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
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_869() == 0)
	{
		func_867();
		return 0;
	}
	func_866(Global_16933);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/]), sParam1, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_24 = iParam2;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_25 = iParam7;
	Global_106565.f_14135[Global_16933 /*104*/].f_26 = uParam8;
	Global_106565.f_14135[Global_16933 /*104*/].f_29 = uParam9;
	Global_106565.f_14135[Global_16933 /*104*/].f_30 = uParam12;
	Global_106565.f_14135[Global_16933 /*104*/].f_31 = uParam11;
	Global_106565.f_14135[Global_16933 /*104*/].f_28 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_33), sParam4, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_50), sParam5, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), sParam15, 64);
	if (unk_0x0E4018692D92041D(Global_2423, 10))
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
		Global_3129 = 4;
		func_865(0);
		func_865(2);
		func_865(1);
	}
	else
	{
		func_870();
		switch (iParam16)
		{
			case 3:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[Global_14553] = 1;
				break;
			
			case 0:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14553)
			{
				case 0:
					func_865(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_865(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_865(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_865(3);
					Global_3129 = 3;
					break;
				
				default:
					Global_3129 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 10))
		{
			Global_106565.f_14045[0 /*20*/].f_17 = 1;
			Global_106565.f_14045[1 /*20*/].f_17 = 1;
			Global_106565.f_14045[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106565.f_14045[Global_14553 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106565.f_14045[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106565.f_14045[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106565.f_14045[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16935[Global_16933] = 0;
	if (bParam10)
	{
		func_870();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_361())
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_864(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_861(1);
			func_864(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_861(int iParam0)
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
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_863(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_141(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_862(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_862(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_141(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_141(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_141(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_141(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_141(sParam11);
	}
	unk_0x818901B332D5541D();
}

bool func_863(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_864(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	unk_0x818901B332D5541D();
}

void func_865(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_866(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_106565.f_14135[iParam0 /*104*/].f_18 = iVar0;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_867()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
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
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_868(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_868(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_869()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
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
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0)
		{
			Global_16933 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0 || Global_106565.f_14135[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_868(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
			{
				Global_16933 = iVar2;
			}
		}
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16933 == 34)
	{
		return 0;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 0;
	return 1;
}

void func_870()
{
	if (func_863(14))
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
		Global_14553 = func_871();
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

var func_871()
{
	func_872();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_872()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_875(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_874(unk_0x33CD235DF1E6A94E());
			if (func_873(iVar0) && (!func_863(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_873(Global_106565.f_2357.f_539.f_4321))
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

bool func_873(int iParam0)
{
	return iParam0 < 3;
}

int func_874(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_875(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_875(int iParam0)
{
	if (func_873(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_876(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_85(unk_0x95B959F18401C09A()) && !func_189(unk_0x95B959F18401C09A())) && !unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 8)) && (func_23(unk_0x95B959F18401C09A()) || func_24(unk_0x95B959F18401C09A()))) || func_893(vParam1))
	{
		return;
	}
	Global_1669357 = { vParam1 };
	fVar0 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam1);
	func_891(iParam0, fVar0);
	if (unk_0xD9C92B0885A075F8() && unk_0x1B9A01A53920FD50() == 15)
	{
		if (func_84(unk_0x95B959F18401C09A()) || func_890(unk_0x95B959F18401C09A()))
		{
			if (!unk_0x43AF959D59AC7162(1344549371))
			{
				unk_0xC3E18E4C4B2A7CEF(1344549371);
			}
		}
		else if (unk_0x43AF959D59AC7162(1344549371))
		{
			unk_0xDFCF2335B2854E41(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_93(unk_0x95B959F18401C09A(), 21) || func_93(unk_0x95B959F18401C09A(), 25)))
		{
			func_832(vParam1, 1, 0);
		}
		if (!*uParam2 && func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			*uParam2 = 1;
			if (func_101(iParam0))
			{
				unk_0x4B06B5746CBEC99F(func_889(iParam0));
				if (func_100(iParam0, -1))
				{
					unk_0xD875615F72CD34A6(0);
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
					{
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 1);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 1);
					}
					unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 0);
				}
			}
			if (func_107(iParam0))
			{
				fVar1 = func_106(iParam0);
				if (fVar1 != 1f)
				{
					func_102(fVar1);
					unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_888(iParam0) && func_84(unk_0x95B959F18401C09A()))
				{
					func_88(1);
					func_887(2);
				}
			}
			func_99(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_31(unk_0x95B959F18401C09A(), 19))
			{
				func_92(19);
			}
		}
		if (*uParam2 && func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			*uParam2 = 0;
			if (func_101(iParam0))
			{
				if (unk_0x0E4018692D92041D(Global_1669357.f_3, 0))
				{
					unk_0x4B06B5746CBEC99F(1f);
					unk_0xD875615F72CD34A6(5);
					unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 0);
				}
			}
			if (func_107(iParam0))
			{
				func_886();
				unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 1);
			}
			if (iParam5 && !func_85(unk_0x95B959F18401C09A()))
			{
				if (func_192(unk_0x95B959F18401C09A()) != 152)
				{
					func_878();
				}
			}
			if (func_249(2))
			{
				func_88(0);
				func_877(2);
			}
		}
	}
}

void func_877(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_41), iParam0);
}

void func_878()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_24), &Global_2409313, 2);
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_26), &Global_2409315, 19);
	func_884();
	func_881(1, 1, 0);
	func_879();
}

void func_879()
{
	func_880(0, 0);
}

void func_880(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_881(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_45), &Global_2409334, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409334 };
		Global_2405071.f_45.f_49 = { Global_2409334.f_49 };
		Global_2405071.f_45.f_52 = Global_2409334.f_52;
		Global_2405071.f_45.f_53 = Global_2409334.f_53;
	}
	if (bParam0)
	{
		func_883();
	}
	if (!bParam2)
	{
		func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_882(0);
	func_826();
}

void func_882(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_883()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_884()
{
	func_885();
	Global_2405071.f_2250 = 0;
}

void func_885()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2251[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_886()
{
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && Global_2528542.f_4884 < 1f)
		{
			return;
		}
	}
	Global_2528542.f_4885 = -1;
	Global_2528542.f_4884 = 1f;
}

void func_887(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_41), iParam0);
}

int func_888(int iParam0)
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

float func_889(int iParam0)
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

int func_890(int iParam0)
{
	if (func_63(iParam0))
	{
		if (func_84(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_891(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_892(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_727();
	}
}

int func_892(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12413;
		
		case 142:
			return Global_262145.f_12401;
		
		case 157:
			return Global_262145.f_12368;
		
		case 159:
			return Global_262145.f_12351;
		
		case 162:
			return Global_262145.f_12462;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_893(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_894()
{
	return Local_182.f_9;
}

void func_895()
{
	if (func_901())
	{
		func_910(1);
	}
	if (func_896(1))
	{
		func_910(1);
	}
}

int func_896(bool bParam0)
{
	if (func_900(1))
	{
		return 1;
	}
	if (Global_2528542.f_4889.f_37)
	{
		Global_2528542.f_4889.f_37 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_228() == func_14() || !func_37(func_228(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_330(unk_0x95B959F18401C09A()))
	{
		if (func_899(unk_0x95B959F18401C09A()) && func_897())
		{
			return 1;
		}
	}
	return 0;
}

int func_897()
{
	switch (func_305(func_898(unk_0x95B959F18401C09A())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_898(int iParam0)
{
	if (iParam0 != func_14() && func_37(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_899(int iParam0)
{
	if (iParam0 != func_14() && func_37(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_900(bool bParam0)
{
	bool bVar0;
	
	if (!func_482(1))
	{
		bVar0 = false;
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_14())
		{
			if (func_37(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, 0, 1))
			{
				if ((Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 4 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 8) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_777(func_192(unk_0x95B959F18401C09A())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_87(31);
				if (func_293(func_192(unk_0x95B959F18401C09A())))
				{
					func_87(81);
				}
				if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_14() && unk_0xC4DEA49C5B465481(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
				{
					Global_1625024 = func_585(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_227(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
					{
						func_87(88);
					}
				}
				else
				{
					Global_1625024 = 1;
				}
				Global_1625008 = { Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

int func_901()
{
	var uVar0;
	
	func_906(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_905())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_904())
	{
		return 1;
	}
	if (func_903(157))
	{
		if (!func_902())
		{
			return 1;
		}
	}
	if (func_903(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_103() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_103()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_902()
{
	return Global_2448756.f_586;
}

int func_903(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_904()
{
	return Global_2458613;
}

bool func_905()
{
	return Global_2448756.f_581;
}

void func_906(var uParam0)
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
					func_907(iVar0);
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

void func_907(int iParam0)
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
						if (func_908(iVar2, &bVar3))
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

int func_908(int iParam0, var uParam1)
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

void func_909()
{
	wait(0);
}

void func_910(int iParam0)
{
	if (iParam0 || func_960())
	{
		func_957();
		if (iLocal_149)
		{
			if (func_762() || func_760())
			{
				func_827();
				func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
				iLocal_149 = 0;
			}
			else
			{
				func_826();
				func_824();
				iLocal_149 = 0;
			}
		}
		if (unk_0x95B959F18401C09A() != -1)
		{
			func_913(1, 0);
		}
		func_854(0);
		func_752(0);
		if (unk_0x95B959F18401C09A() != -1)
		{
			func_92(19);
			func_92(20);
		}
		if (func_819(Local_182.f_4))
		{
			func_817(Local_182.f_4, 0);
		}
		if (iLocal_151 == 1)
		{
			func_886();
			iLocal_151 = 0;
		}
		if (unk_0xB83C26C286A4219F() < 5)
		{
			unk_0xD875615F72CD34A6(5);
		}
		if (func_10() == unk_0x95B959F18401C09A())
		{
			unk_0xEDF90B96BED57BCE(1);
			func_296("GB_YA_HP6", -1);
			func_295(1);
		}
		if (func_10() == unk_0x95B959F18401C09A())
		{
			func_912();
			func_700(6);
		}
		if (iLocal_173)
		{
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
			unk_0x7CED302277C0F3D3("MP_POSITIONED_RADIO_MUTE_SCENE");
			iLocal_173 = 0;
		}
		Global_2528542.f_5655 = -1;
		func_911();
	}
}

void func_911()
{
	unk_0x5894DC159447E10A();
}

void func_912()
{
	if (func_62())
	{
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_101 > -1)
		{
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_101 = -1;
		}
	}
}

void func_913(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1361808.f_1.f_108 != 0)
	{
		Global_1361808.f_1.f_108 = 0;
	}
	Global_1361808.f_1.f_109 = -1;
	Global_1361808.f_1.f_110 = -1;
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 167 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 168)
	{
		func_955();
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 4);
	}
	if ((func_484() && iParam1 != 0) && Global_262145.f_16856)
	{
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 190 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 192)
		{
			func_937(unk_0x95B959F18401C09A(), iParam1, 1, 0);
		}
	}
	if (((Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 164 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 208) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 250) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 237)
	{
		unk_0xA53C1C92EE35EC0E(3, true);
		unk_0xA53C1C92EE35EC0E(5, true);
	}
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 != -1)
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 = -1;
		if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 14) && !func_85(unk_0x95B959F18401C09A()))
		{
			func_88(0);
		}
	}
	else if (func_935(unk_0x95B959F18401C09A()) != -1)
	{
		func_117(-1);
	}
	func_934(func_14());
	if (func_249(16))
	{
		func_877(16);
	}
	func_931(0);
	func_112(-1);
	func_930();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_929(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_926(iVar1);
		iVar1++;
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 0))
	{
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xD875615F72CD34A6(5);
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 0);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 5))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 5);
	}
	iVar2 = func_300();
	if ((func_194(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_925(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_343(iVar2))
	{
		func_922(-1, 1);
	}
	else if (((((func_299(iVar2) || func_921(iVar2)) || func_920(iVar2)) || func_340(iVar2)) || func_338(iVar2)) || func_336(iVar2))
	{
	}
	else
	{
		func_922(-1, 1);
	}
	func_92(19);
	func_92(20);
	func_92(21);
	func_92(22);
	func_92(27);
	func_877(3);
	func_877(4);
	func_877(7);
	func_919();
	if (func_84(unk_0x95B959F18401C09A()))
	{
		func_751(0);
	}
	func_92(29);
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 = func_14();
	if (Global_2528542.f_4889.f_37 != 0)
	{
		Global_2528542.f_4889.f_37 = 0;
	}
	if (bParam0)
	{
		func_878();
	}
	if (!func_85(unk_0x95B959F18401C09A()))
	{
		func_886();
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 1);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 6))
	{
		unk_0xA53C1C92EE35EC0E(3, true);
		unk_0xA53C1C92EE35EC0E(5, true);
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 6);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 7))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 7);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 8))
	{
		func_918("IMPEXP_SELFDES", 0);
		func_916("IMPEXP_SELFDES");
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 8);
	}
	func_914(iVar2, 0);
}

void func_914(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
		{
			unk_0xDEFB5E2E5CBD460A(func_915(iParam0));
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 9);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
	{
		unk_0x7CED302277C0F3D3(func_915(iParam0));
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 9);
	}
}

char* func_915(int iParam0)
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

void func_916(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x6D2E2622CA149402(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_870();
					Global_106565.f_14135[iVar0 /*104*/].f_99[Global_14553] = 0;
					if (func_917(iVar0))
					{
					}
					else
					{
						Global_106565.f_14135[iVar0 /*104*/].f_24 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_28 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x98E765CB9E761233(Global_106565.f_14135[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_917(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_918(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x6D2E2622CA149402(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106565.f_14135[iVar0 /*104*/].f_24 = 1;
				if (Global_106565.f_14135[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106565.f_14045[0 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106565.f_14045[1 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106565.f_14045[2 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106565.f_14045[3 /*20*/].f_17 = 0;
					}
					Global_106565.f_14135[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106565.f_14135[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_919()
{
	if (func_366(unk_0x95B959F18401C09A()))
	{
		func_92(25);
	}
}

int func_920(int iParam0)
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

int func_921(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_922(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_300();
	}
	if (iParam0 > 0)
	{
		if (func_83() != func_14())
		{
			if (func_331(unk_0x95B959F18401C09A()) == unk_0x95B959F18401C09A())
			{
				Global_2506960.f_93[func_924(iParam0)] = 1;
			}
		}
		iVar0 = func_924(159);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(157);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(148);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(164);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(142);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(152);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(166);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(170);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(173);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(179);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(200);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(201);
		if (func_923(iVar0, Global_262145.f_12497, bParam1))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(182);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(183);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(185);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(186);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(180);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(195);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(197);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(198);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(207);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(208);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(209);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(214);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(215);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(216);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(217);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(218);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(219);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(220);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(221);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_923(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_31(unk_0x95B959F18401C09A(), 19) && !func_31(unk_0x95B959F18401C09A(), 20)) && !func_31(unk_0x95B959F18401C09A(), 9))
		{
			return 0;
		}
	}
	if (Global_2506960.f_93[iParam0] == 1 && func_3(&(Global_2506960[iParam0 /*2*/])))
	{
		if (func_802(&(Global_2506960[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2506960.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_924(int iParam0)
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

void func_925(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_300();
	}
	if (iParam0 > 0)
	{
		if (func_83() != func_14())
		{
			Global_2506960.f_93[func_924(iParam0)] = 1;
		}
		iVar0 = func_924(155);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(163);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(160);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(153);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(162);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(154);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(171);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(172);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(199);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(194);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(193);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(210);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(205);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(189);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_924(211);
		if (func_923(iVar0, Global_262145.f_12498, 0))
		{
			func_39(&(Global_2506960[iVar0 /*2*/]));
			func_2(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_926(int iParam0)
{
	if (!func_927(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/], func_928(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/] = { func_928() };
	}
	if (!func_927(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/], func_928(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/] = { func_928() };
	}
}

bool func_927(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_928()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_929(int iParam0)
{
	if (!func_927(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/], func_928(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/] = { func_928() };
	}
	if (!func_927(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/], func_928(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/] = { func_928() };
	}
}

void func_930()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573892 = { Var0 };
	Global_1573892.f_13 = func_14();
	if (unk_0x0E4018692D92041D(Global_1573343, 3))
	{
		unk_0xCE689A8E8C42ED78(&Global_1573343, 3);
	}
}

void func_931(bool bParam0)
{
	if (bParam0)
	{
		if (!func_364(unk_0x95B959F18401C09A(), 14))
		{
			func_933(14);
		}
	}
	else if (func_364(unk_0x95B959F18401C09A(), 14))
	{
		func_932(14);
	}
}

void func_932(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_933(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_934(int iParam0)
{
	if (func_63(unk_0x95B959F18401C09A()))
	{
		if (unk_0x95B959F18401C09A() != iParam0)
		{
			if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 != iParam0)
			{
				Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 = iParam0;
				if (iParam0 != func_14())
				{
				}
			}
		}
	}
}

int func_935(int iParam0)
{
	if (func_936(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_32;
	}
	return -1;
}

int func_936(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_32 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_937(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_453(iParam0, iParam1) && func_954(iParam0, iParam1))
	{
		iVar0 = func_451(iParam0, iParam1);
		func_941(iVar0, bParam2, bParam3);
		func_938(iVar0, 1);
	}
}

void func_938(int iParam0, bool bParam1)
{
	if (!func_940(iParam0))
	{
		return;
	}
	func_647(func_939(iParam0), bParam1, -1, 1);
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_6 = bParam1;
}

int func_939(int iParam0)
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

bool func_940(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_941(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_729(unk_0x95B959F18401C09A(), iParam0);
	if (!bParam1)
	{
		func_953(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2505932[iParam0];
		iVar0 = func_952(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1671153 = -1;
		}
		func_951(iParam0, 0, bParam2);
	}
	else if (func_949(iParam0, bParam2))
	{
		iVar0 = func_948(iVar2, 0);
		iVar3 = func_472(unk_0x95B959F18401C09A(), iVar2);
		iVar4 = func_947(iVar2, bParam2);
		iVar5 = func_948(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_946(iVar2) && func_945(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_953(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_944(unk_0x95B959F18401C09A(), iVar2) > 0)
		{
			func_943(iParam0, (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 - (func_947(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_948(iVar2, bParam2) / func_944(unk_0x95B959F18401C09A(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_946(iVar2) && func_945(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_942(unk_0x95B959F18401C09A(), iVar2, iVar0, bParam2);
}

void func_942(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return;
	}
	if (func_452(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589819[iParam0 /*818*/].f_273.f_251 = iParam2;
				}
				else
				{
					Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_943(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2)
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_944(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (func_452(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_945(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (func_452(iParam1) && func_946(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_946(int iParam0)
{
	return func_524(iParam0) == 5;
}

int func_947(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_524(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16827;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16832;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16826;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16831;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16825;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16830;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16823;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16824;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20948;
				if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20949;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20932;
				if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20933;
				}
			}
			break;
	}
	return uVar0;
}

int func_948(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_524(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16808;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16822);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16809;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16821);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16810;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16820);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16811;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16812;
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20945;
			}
			else
			{
				iVar0 = Global_262145.f_20929;
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20946);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20930);
				}
			}
			if (func_450(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20947);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20931);
				}
			}
			if (func_945(unk_0x95B959F18401C09A(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_949(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_648(15384, -1, -1);
	}
	return func_648(func_950(iParam0), -1, -1);
}

int func_950(int iParam0)
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

void func_951(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_647(15384, bParam1, -1, 1);
		return;
	}
	func_647(func_950(iParam0), bParam1, -1, 1);
}

int func_952(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2505932[iParam0];
	iVar1 = func_729(unk_0x95B959F18401C09A(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2505939;
	}
	if (func_946(iVar1))
	{
		if (func_945(unk_0x95B959F18401C09A(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_953(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2505939 = iParam1;
		return;
	}
	Global_2505932[iParam0] = iParam1;
}

int func_954(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_453(iParam0, iParam1))
	{
		iVar0 = func_451(iParam0, iParam1);
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4 > 0 && Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_955()
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 28);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 29);
	func_956(24);
}

void func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

void func_957()
{
	if (unk_0x72B85B341ADBE9DE() != -1)
	{
		if ((!unk_0x0E4018692D92041D(vLocal_183[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 4) && iLocal_157 == 0) && Local_182.f_5 == -1)
		{
			func_369(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		Global_1669366.f_2 = Local_182.f_97;
		Global_1669366.f_3 = Local_182.f_98;
		func_958(-1, -1, -1, -1082130432);
	}
}

void func_958(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0xD178EF744F20B712();
	Var1 = Global_1669366;
	Var1.f_1 = Global_1669366.f_1;
	Var1.f_2 = Global_1669366.f_2;
	Var1.f_3 = Global_1669366.f_3;
	Var1.f_4 = Global_1669366.f_4;
	Var1.f_5 = Global_1669366.f_5;
	Var1.f_6 = Global_1669366.f_6;
	Var1.f_7 = Global_1669366.f_7;
	Var1.f_8 = Global_1669366.f_8;
	Var1.f_9 = Global_1669366.f_9;
	Var1.f_10 = Global_1669366.f_10;
	Var1.f_11 = Global_1669366.f_11;
	Var1.f_12 = Global_1669366.f_12;
	Var1.f_13 = Global_1669366.f_14;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1669366.f_15;
			Var2.f_15 = Global_1669366.f_16;
			Var2.f_16 = Global_1669366.f_17;
			unk_0x4474FCE0D07B711F(&Var2);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1669366.f_15;
			Var3.f_15 = iParam0;
			Var3.f_16 = iParam1;
			unk_0xFF4746A8B3C29BE0(&Var3);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1669366.f_15;
			Var4.f_15 = iParam0;
			unk_0x8D3D3453B862AB6C(&Var4);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1669366.f_15;
			Var5.f_15 = iParam0;
			Var5.f_16 = iParam1;
			unk_0xA0558C3D8406230F(&Var5);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1669366.f_15;
			Var6.f_15 = iParam0;
			unk_0x46466C34BBB8452A(&Var6);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1669366.f_15;
			Var7.f_15 = iParam0;
			Var7.f_16 = iParam1;
			Var7.f_17 = iParam2;
			unk_0xBDDFA98CDDF18526(&Var7);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = iParam0;
			Var8.f_15 = iParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1669366.f_15;
			unk_0xDA81DBEA680FB9D8(&Var8);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = iParam0;
			Var9.f_16 = iParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1669366.f_15;
			unk_0xE23CB8869EF84E2F(&Var9);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = iParam0;
			Var10.f_15 = iParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1669366.f_15;
			unk_0x905CCFFBC1B50B32(&Var10);
		}
	}
	func_959();
}

void func_959()
{
	struct<18> Var0;
	
	Global_1669366 = { Var0 };
}

int func_960()
{
	if (func_760() || func_762())
	{
		return 1;
	}
	else if (func_279(unk_0x95B959F18401C09A(), Local_182.f_4, 0, 0) || (iLocal_147 > 0 && iLocal_147 < 5))
	{
		switch (iLocal_147)
		{
			case 0:
				if (!unk_0xBB5E373390A5F824())
				{
					func_833(Local_182.f_28, 0f, 150f, 1, 0f, 0, 0, 65f, 1, 1, 0, 1, -1082130432);
					unk_0x7EDEAEAED85BEE4F(500);
					iLocal_147++;
				}
				break;
			
			case 1:
				if (unk_0xBB5E373390A5F824())
				{
					iLocal_147++;
				}
				break;
			
			case 2:
				if (func_961(10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
				{
					iLocal_147++;
				}
				break;
			
			case 3:
				if (!unk_0x73DA1542B2F0C458())
				{
					unk_0xACCDA78123DB57B0(500);
					iLocal_147++;
				}
				else
				{
					iLocal_147++;
				}
				break;
			
			case 4:
				if (unk_0x73DA1542B2F0C458())
				{
					func_700(7);
					func_825();
					return 1;
				}
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_961(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1720();
	if (func_1719(unk_0x95B959F18401C09A(), 1, 0))
	{
		if (((bParam4 && func_37(unk_0x95B959F18401C09A(), 1, 0)) && unk_0x71EC91BA8C88BCE0()) && Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_222 == 1)
		{
		}
		else if (func_1718() == 67)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 150, true);
		if (!Global_2405071.f_692 == iParam0)
		{
			if (bParam15 && Global_2405071.f_692 == 37)
			{
			}
			else if (!Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 0)
			{
				if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_693) < func_1717(0))
				{
					return 0;
				}
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 0)
		{
			Global_2405071.f_692 = iParam0;
			Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 2;
			if (bParam2)
			{
				if (!func_1716())
				{
					bParam2 = false;
				}
			}
			Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 2;
			Global_2405071.f_2466 = 0;
			Global_2405071.f_2467 = 0;
			Global_2405071.f_2465 = 0;
			Global_2405071.f_2865 = 0;
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2405071.f_692 == 11)
			{
				Global_2405071.f_696 = { Global_2413883 };
				Global_2405071.f_699 = Global_2413883.f_5;
				Global_2405071.f_2885 = Global_2413883.f_26;
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 3;
			}
			else if (func_1493(&(Global_2405071.f_696), &(Global_2405071.f_699), Global_2405071.f_692, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 3;
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
						func_1488(&iVar2);
					}
					else
					{
						iVar2 = func_1487();
						func_1486(&iVar2);
					}
					if (func_1716())
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (!unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) == Global_2405071.f_45.f_67)
							{
								iVar4 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
								if (iVar4 == Global_2405071.f_45.f_172)
								{
									func_1484();
								}
								unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
							}
						}
					}
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 4;
					}
					else
					{
						iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						if (unk_0x0A81FE3D92AE2AC9(iVar2))
						{
							func_1468(iVar2);
							func_1467(1);
							Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 6;
						}
						else
						{
							unk_0xA5F44EC021F96C6B(iVar2);
						}
					}
				}
				else
				{
					func_1467(1);
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 6;
				}
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 4)
		{
			if (func_1464())
			{
				if (Global_2405071.f_45.f_65)
				{
					if (func_1207(Global_2405071.f_696, Global_2405071.f_696.f_1, func_1460(Global_2405071.f_45.f_67), Global_2405071.f_699, 0))
					{
						Global_2405071.f_694 = unk_0x78DCC5D0CB43DEBA();
						Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 5;
					}
				}
				else if (func_1206(Global_2405071.f_45.f_67) || Global_2405071.f_45.f_67 == 0)
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 6;
				}
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 5)
		{
			unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 150, true);
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 6;
				if (Global_2405071.f_45.f_174)
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_227 = 1;
				}
				else
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_227 = 0;
				}
			}
			else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_694) > 5000)
			{
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 4;
			}
			else if (unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -1794415470) == 7)
			{
				if (unk_0x765F6FEEFF39224F(Global_2405071.f_45.f_172) && unk_0x91D5C8283D19AF49(Global_2405071.f_45.f_172, 0))
				{
					func_1021(unk_0x33CD235DF1E6A94E(), Global_2405071.f_45.f_172, -1, 0);
				}
				else
				{
					unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 4;
				}
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 6)
		{
			Global_2405071.f_693 = unk_0x78DCC5D0CB43DEBA();
			if (Global_2405071.f_702)
			{
				Global_2405071.f_695 = unk_0x78DCC5D0CB43DEBA();
				Global_2405071.f_702 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_695)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1574400)
			{
				func_1015(Global_2405071.f_696);
			}
			if (bParam7 && !Global_2437364.f_1232)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar2))
					{
						if ((unk_0xD62C4419A41F106A(iVar2, 0) || !unk_0x91D5C8283D19AF49(iVar2, 0)) || func_1014(iVar2))
						{
							unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_1006(Global_2405071.f_696, Global_2405071.f_699, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2405071.f_2885))
				{
					if (bParam15)
					{
						Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 7;
						return 0;
					}
					else
					{
						func_1000();
					}
				}
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 7)
		{
			if ((Global_2405071.f_692 == 8 && Global_2405071.f_704.f_507) && Global_2405071.f_2865)
			{
				func_1000();
			}
			else if (func_990(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false)) || func_989())
			{
				if (Global_2405071.f_692 == 8 && !Global_2405071.f_2865)
				{
					Global_2405071.f_2865 = 1;
				}
				else
				{
					Global_2405071.f_692 = 37;
				}
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 2;
				Global_2405071.f_2466 = 0;
				Global_2405071.f_2467 = 0;
				Global_2405071.f_2465 = 0;
			}
			else
			{
				func_1000();
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 10)
		{
			if (vdist(Global_2413883, Global_2405071.f_696) > 0.1f)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iVar2)) || unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(iVar2)))
					{
						unk_0x8C1596BAD35D957A(Global_2405071.f_696, Global_2405071.f_696.f_1, Global_2405071.f_696.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2405071.f_696.f_2 - fVar0) > 1.5f)
						{
							if (vdist(Global_2413883, Global_2405071.f_696) > 15f)
							{
								Global_2405071.f_696 = { Global_2413883 };
								if (unk_0x0A81FE3D92AE2AC9(iVar2))
								{
									unk_0xBEADAF07D2339505(iVar2, Global_2405071.f_696, Global_2405071.f_696.f_1, (fVar0 + func_988(unk_0x541D5C57194E73C4(iVar2))), 1, false, 0, 1);
									unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
								}
								Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
							}
							else
							{
								Global_2405071.f_696.f_2 = (Global_2405071.f_696.f_2 + 1f);
							}
						}
						else
						{
							if (unk_0x0A81FE3D92AE2AC9(iVar2))
							{
								unk_0xBEADAF07D2339505(iVar2, Global_2405071.f_696, Global_2405071.f_696.f_1, (fVar0 + func_988(unk_0x541D5C57194E73C4(iVar2))), 1, false, 0, 1);
								unk_0x1B2303F9DC2D90D5(iVar2, 1084227584);
							}
							Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
						}
					}
					else
					{
						Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
					}
				}
				else
				{
					Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
				}
			}
			else
			{
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
			}
		}
		if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 11)
		{
			if (!bParam14)
			{
				if (unk_0x765F6FEEFF39224F(Global_2405071.f_45.f_172) && unk_0x0A81FE3D92AE2AC9(Global_2405071.f_45.f_172))
				{
					unk_0x0CDD28A9DFCE2FCE(Global_2405071.f_45.f_172, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_981(iParam9, 0, 0);
				}
			}
			func_974(func_285(unk_0x95B959F18401C09A()), 0);
			if (unk_0x765F6FEEFF39224F(Global_2405071.f_45.f_172))
			{
				func_1484();
			}
			if (!(func_1206(Global_2405071.f_45.f_67) || Global_2405071.f_45.f_67 == 0) && !Global_2405071.f_485.f_5)
			{
				func_973(0);
			}
			func_972(0, 0);
			if (bParam10)
			{
				func_971();
			}
			func_970();
			func_964();
			if (bParam13)
			{
				func_963();
			}
			func_962();
			return 1;
		}
	}
	else if (!Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 == 0)
	{
		unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
		func_1486(&(Global_2405071.f_45.f_172));
		func_962();
	}
	Global_2405071.f_693 = unk_0x78DCC5D0CB43DEBA();
	return 0;
}

void func_962()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

void func_963()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8ED4328770BEE4A1(Global_2405071.f_682[iVar0]))
		{
			if (unk_0x8C40DC84EDF05997() == Global_2405071.f_682[iVar0])
			{
				if (!Global_2405071.f_678[iVar0] == -1)
				{
					if (unk_0xDBB7D36074C0B9BB(Global_2405071.f_678[iVar0]))
					{
						unk_0x0341DAD0128E99C8(Global_2405071.f_678[iVar0]);
						Global_2405071.f_678[iVar0] = -1;
					}
					else
					{
						Global_2405071.f_678[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405071.f_678[iVar0] == -1)
		{
			Global_2405071.f_678[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_964()
{
	int iVar0;
	
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_261.f_20 = -1;
	Global_2405071.f_2862 = -1f;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		func_966(iVar0);
		iVar0++;
	}
	if (func_965(unk_0x95B959F18401C09A(), 0))
	{
		Global_2537295.f_77 = 1;
		Global_2537295.f_78 = unk_0x78DCC5D0CB43DEBA();
	}
}

int func_965(int iParam0, bool bParam1)
{
	if (func_37(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2424047[iParam0 /*416*/].f_261.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2424047[iParam0 /*416*/].f_261.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_966(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x95B959F18401C09A();
	if (Global_2424047[iVar0 /*416*/].f_261.f_14 != -1)
	{
		if (func_969(Global_2424047[iVar0 /*416*/].f_261.f_14))
		{
			if (!func_279(unk_0x95B959F18401C09A(), Global_2424047[iVar0 /*416*/].f_261.f_14, 0, 0))
			{
				Global_2424047[iVar0 /*416*/].f_261.f_14 = -1;
			}
		}
		else
		{
			Global_2424047[iVar0 /*416*/].f_261.f_14 = -1;
		}
	}
	if (Global_2424047[iVar0 /*416*/].f_261.f_16 != -1)
	{
		if (func_969(Global_2424047[iVar0 /*416*/].f_261.f_16))
		{
			if (!func_279(unk_0x95B959F18401C09A(), Global_2424047[iVar0 /*416*/].f_261.f_16, 0, 1))
			{
				Global_2424047[iVar0 /*416*/].f_261.f_16 = -1;
			}
		}
		else
		{
			Global_2424047[iVar0 /*416*/].f_261.f_16 = -1;
		}
	}
	if (Global_2424047[iVar0 /*416*/].f_261.f_15 != -1)
	{
		if (!func_279(unk_0x95B959F18401C09A(), Global_2424047[iVar0 /*416*/].f_261.f_15, 0, 0))
		{
			Global_2424047[iVar0 /*416*/].f_261.f_15 = -1;
		}
	}
	if (func_969(iParam0))
	{
		if (func_279(unk_0x95B959F18401C09A(), iParam0, 0, 0))
		{
			if (!Global_2424047[iVar0 /*416*/].f_261.f_14 == iParam0)
			{
				Global_2424047[iVar0 /*416*/].f_261.f_14 = iParam0;
			}
		}
		if (func_279(unk_0x95B959F18401C09A(), iParam0, 0, 1))
		{
			if (!Global_2424047[iVar0 /*416*/].f_261.f_16 == iParam0)
			{
				Global_2424047[iVar0 /*416*/].f_261.f_16 = iParam0;
			}
		}
		iVar2 = floor((to_float(iParam0) / 32f));
		if (func_967(unk_0x95B959F18401C09A(), iParam0, 1120403456))
		{
			unk_0x8950ED5730F62EE8(&(Global_2424047[iVar0 /*416*/].f_261.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_2424047[iVar0 /*416*/].f_261.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = vdist(func_284(iParam0), func_285(unk_0x95B959F18401C09A()));
		if (iParam0 == Global_2424047[iVar0 /*416*/].f_261.f_20)
		{
			Global_2405071.f_2862 = fVar1;
		}
		else if (fVar1 < Global_2405071.f_2862 || Global_2405071.f_2862 <= 0f)
		{
			Global_2405071.f_2862 = fVar1;
			Global_2424047[iVar0 /*416*/].f_261.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2424047[iVar0 /*416*/].f_261.f_20)
	{
		Global_2424047[iVar0 /*416*/].f_261.f_20 = -1;
		Global_2405071.f_2862 = -1f;
	}
	if (func_279(unk_0x95B959F18401C09A(), iParam0, 0, 0))
	{
		if (!Global_2424047[iVar0 /*416*/].f_261.f_15 == iParam0)
		{
			Global_2424047[iVar0 /*416*/].f_261.f_15 = iParam0;
		}
	}
}

int func_967(int iParam0, int iParam1, float fParam2)
{
	if (func_123(iParam1))
	{
		return func_968(func_285(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_968(vector3 vParam0, int iParam1, float fParam2)
{
	if (func_123(iParam1))
	{
		if (vdist2(vParam0, func_284(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_969(int iParam0)
{
	if (func_123(iParam0))
	{
		return Global_2537295.f_2[iParam0];
	}
	return 0;
}

void func_970()
{
	Global_1624890 = -1;
	Global_1624896 = 0;
	Global_1624891 = -1;
}

void func_971()
{
	Global_2405071.f_5 = 1;
}

void func_972(float fParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!func_361() || iParam1)
	{
		if (unk_0xBB5E373390A5F824() || unk_0x71EC91BA8C88BCE0())
		{
			if (!unk_0x051B931529C63ADC())
			{
				vVar0 = { func_285(unk_0x95B959F18401C09A()) };
				if (vVar0.z > -80f)
				{
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					unk_0xC7E6A5D90DED6E0B(fParam0);
				}
			}
		}
	}
}

void func_973(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0x9F4718FD61B07058(unk_0x33CD235DF1E6A94E()))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
		vVar0.z = (vVar0.z + (0.3f * IntToFloat(Global_2405071.f_700)));
		if (unk_0x8C1596BAD35D957A(vVar0, &fVar1, 0, 0))
		{
			fVar2 = (vVar0.z - (fVar1 + 1f));
			if ((unk_0x7EECA16E87982278(fVar2) > 0f && unk_0x7EECA16E87982278(fVar2) < 1f) || iParam0 == 1)
			{
				if (unk_0xE980BAFD70E8A4B3())
				{
					unk_0x4ABB9EF39DA515D7();
				}
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0.x, vVar0.y, fVar1, 0, true, 0, 1);
				Global_2405071.f_700 = 0;
			}
		}
		else if (Global_2405071.f_700 < 3)
		{
			Global_2405071.f_700++;
			func_973(0);
		}
		else
		{
			Global_2405071.f_700 = 0;
		}
	}
}

void func_974(vector3 vParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		fVar1 = func_975(unk_0x541D5C57194E73C4(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		unk_0xCE04CE961AF41AB9(vParam0, fVar1, 1, 0, 0, bParam1);
		unk_0xB7350047030F7672(vParam0, fVar1, 1, 0, 1, 1, bParam1, 0);
		unk_0x87A1F7523B14E2C9(vParam0, 6f);
	}
	else
	{
		iVar6 = unk_0xB48050F6C65C8232(vParam0.x, vParam0.y, (vParam0.z - 2f), vParam0.x, vParam0.y, (vParam0.z + 1f), 19, 0, 7);
		unk_0x819B6E76423AE494(iVar6, &iVar2, &uVar3, &uVar4, &uVar5);
		unk_0xCE04CE961AF41AB9(vParam0, 0.7f, 1, 0, 0, bParam1);
		if (!iVar2 == 0)
		{
			unk_0xB7350047030F7672(vParam0, 6f, 1, 0, 1, 1, bParam1, 0);
			if (bParam1)
			{
				unk_0xBAE549A63F38DAE8(vParam0, 6f, 17);
			}
			else
			{
				unk_0xBAE549A63F38DAE8(vParam0, 6f, 16);
			}
		}
		unk_0x87A1F7523B14E2C9(vParam0, 2.5f);
	}
}

float func_975(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_976(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x7EECA16E87982278((Var0.f_1 - Var1.f_1));
}

void func_976(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0xE96A50F1DE6657CB(iParam0))
	{
		unk_0xFEF5F9BB57EA2E8D(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_979(iParam0);
		if (iVar0 != 0)
		{
			func_977(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_977(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_978(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE96A50F1DE6657CB(Global_1315802[iVar0]))
		{
			unk_0xFEF5F9BB57EA2E8D(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (vmag(Global_1315806[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_978(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_979(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_980(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_980(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_981(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && func_987())
	{
		iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_986(iVar1, &iVar0))
		{
			func_982(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x65F544B458249682(&iVar1);
			}
		}
	}
}

void func_982(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8370E68A3DEEB1D3(iParam0);
	if (unk_0x22C3124A898FB82A(iVar0))
	{
		if (Global_1574394 && unk_0xD470A4E16E9AAE0E(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x10B8B8286BBB62A4(iVar0, 1, 1, func_985());
			return;
		}
		else if (func_984())
		{
			func_983(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x10B8B8286BBB62A4(iVar0, iParam2, 1, func_985());
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam0, 0))
			{
				unk_0xDF0342CFF223E26B(iParam2);
			}
		}
		else
		{
			unk_0x10B8B8286BBB62A4(iVar0, iParam1, 1, func_985());
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam0, 0))
			{
				unk_0xDF0342CFF223E26B(iParam1);
			}
		}
	}
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
			unk_0x8641D293A077F12C(iVar1, 1);
			if (iParam1 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
			{
				unk_0xC592614C63F2DC5C(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x0A81FE3D92AE2AC9(iParam0))
	{
		unk_0x9945B1E9139681FE(iParam0, 1);
		return 1;
	}
	else
	{
		unk_0xA5F44EC021F96C6B(iParam0);
	}
	return 0;
}

bool func_984()
{
	return Global_1574412;
}

int func_985()
{
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_556(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_986(int iParam0, int iParam1)
{
	if (func_908(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_987()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_988(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_976(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return unk_0x7EECA16E87982278((vVar0.z - vVar1.z));
}

int func_989()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar3 = { func_285(unk_0x95B959F18401C09A()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_37(iVar1, 1, 1))
		{
			if (unk_0xA1248DEAD0B27B8E(unk_0x378BD4B3881338C2(iVar1)))
			{
				if (!iVar1 == unk_0x95B959F18401C09A())
				{
					if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
					{
						fVar2 = vmag(func_285(iVar1) - vVar3);
						if (fVar2 < 0.2f)
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

int func_990(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar0 = unk_0x51DB799C16AEFBC7(&Global_1315837);
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar5 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (!unk_0xD62C4419A41F106A(iVar5, 0))
		{
			iVar6 = unk_0x541D5C57194E73C4(iVar5);
			vVar7 = { unk_0xFBB1F99A825CAB09(iVar5, true) };
			fVar8 = unk_0xC472E34C8FBEC678(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (unk_0x765F6FEEFF39224F(Global_1315837[iVar4]))
		{
			if (!unk_0xD62C4419A41F106A(Global_1315837[iVar4], 0) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_1315837[iVar4], 0))
			{
			}
			else if (func_999(Global_1315837[iVar4]))
			{
			}
			else if (!func_995(Global_1315837[iVar4]))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(Global_1315837[iVar4], false) };
				fVar2 = unk_0xC472E34C8FBEC678(Global_1315837[iVar4]);
				iVar3 = unk_0x541D5C57194E73C4(Global_1315837[iVar4]);
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (func_994(vVar1, fVar2, iVar3, vVar7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_991(vParam0, vVar1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_991(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_993(iParam3, 1008981770))
	{
		func_992(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_992(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_282(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_976(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x7EECA16E87982278((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x7EECA16E87982278((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x7EECA16E87982278((vVar2.x - vVar1.x));
}

float func_993(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_976(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_994(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_991(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_976(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_282(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_282(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x7EECA16E87982278((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_282(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_991(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_994(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_995(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x67FFBB75D2430704(iParam0, -1, 0))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
		if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0xE09156665EC2D83B(iVar0))
			{
				iVar1 = unk_0x5C7617A25D50AAE9(iVar0);
				if (func_37(iVar1, 0, 0))
				{
					if (func_996(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_996(int iParam0)
{
	if (func_998())
	{
		if (func_997(unk_0x771810413D71C060(iParam0), &(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_338.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_997(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_998()
{
	if (Global_2405071.f_2866 > -1)
	{
		return 1;
	}
	return 0;
}

int func_999(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x13D6E1E301794440(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1000()
{
	if (!Global_2405071.f_702)
	{
		Global_2405071.f_702 = 1;
	}
	func_1467(0);
	if (Global_2405071.f_2660)
	{
		func_1001();
		Global_2405071.f_2660 = 0;
	}
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 11;
}

void func_1001()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	vector3 vVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar43;
	
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
		if ((!Global_2405071.f_45.f_52 && !Global_2405071.f_45.f_53) && !Global_2405071.f_2661)
		{
			if (unk_0x8E241517F0F541CC(vVar1, &vVar2, 1, 1077936128, 0))
			{
				vVar2.z = (vVar2.z + 1f);
				bVar3 = true;
				if (!vdist(vVar1, vVar2) < 50f || Global_2405071.f_45.f_52)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_2405071.f_2661)
		{
			Global_2405071.f_2661 = 0;
		}
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			fVar4 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
		}
		fVar5 = 3f;
		vVar6 = { unk_0xB969B7304D29679F(unk_0x33CD235DF1E6A94E()) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * Vector(fVar5, fVar5, fVar5) };
		vVar7 = { vVar6 };
		func_282(&vVar7, 0f, 0f, -45f);
		vVar8 = { vVar6 };
		func_282(&vVar8, 0f, 0f, -90f);
		vVar9 = { vVar6 };
		func_282(&vVar9, 0f, 0f, 45f);
		vVar10 = { vVar6 };
		func_282(&vVar10, 0f, 0f, 90f);
		if (bVar3)
		{
			vVar11 = { vVar2 - vVar1 };
			vVar12 = { func_1005(vVar11, 0f, 0f, 1f) };
			vVar12 = { vVar12 / FtoV(vmag(vVar12)) };
			vVar12 = { vVar12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		vVar13 = { vVar1 + vVar6 };
		vVar14 = { vVar1 + vVar7 };
		vVar15 = { vVar1 + vVar8 };
		vVar16 = { vVar1 + vVar9 };
		vVar17 = { vVar1 + vVar10 };
		iVar18 = unk_0x0F79DCFDE3D6F778(vVar1, vVar13, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		iVar19 = unk_0x0F79DCFDE3D6F778(vVar1, vVar14, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		iVar20 = unk_0x0F79DCFDE3D6F778(vVar1, vVar15, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		iVar21 = unk_0x0F79DCFDE3D6F778(vVar1, vVar16, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		iVar22 = unk_0x0F79DCFDE3D6F778(vVar1, vVar17, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		if (bVar3)
		{
			iVar23 = unk_0x0F79DCFDE3D6F778(vVar1, vVar2, 0.2f, 257, unk_0x33CD235DF1E6A94E(), 7);
		}
		iVar33 = unk_0x819B6E76423AE494(iVar18, &iVar24, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x819B6E76423AE494(iVar19, &iVar25, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x819B6E76423AE494(iVar20, &iVar26, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x819B6E76423AE494(iVar21, &iVar27, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x819B6E76423AE494(iVar22, &iVar28, &uVar30, &uVar31, &uVar32);
		if (bVar3)
		{
			iVar33 = unk_0x819B6E76423AE494(iVar23, &iVar29, &uVar30, &uVar31, &uVar32);
		}
		if (iVar33 == 0)
		{
		}
		iVar34 = (iVar34 + iVar24);
		iVar35 = (iVar35 + iVar25);
		iVar36 = (iVar36 + iVar26);
		iVar37 = (iVar37 + iVar27);
		iVar38 = (iVar38 + iVar28);
		if (bVar3)
		{
			iVar39 = (iVar39 + iVar29);
		}
		iVar40 = 99;
		iVar41 = -1;
		if (iVar34 < iVar40)
		{
			iVar40 = iVar34;
			iVar41 = 0;
		}
		if (iVar35 < iVar40)
		{
			iVar40 = iVar35;
			iVar41 = 1;
		}
		if (iVar37 < iVar40)
		{
			iVar40 = iVar37;
			iVar41 = 2;
		}
		if (iVar36 < iVar40)
		{
			iVar40 = iVar36;
			iVar41 = 3;
		}
		if (iVar38 < iVar40)
		{
			iVar40 = iVar38;
			iVar41 = 4;
		}
		if (bVar3)
		{
			if (iVar39 < iVar40)
			{
				iVar40 = iVar39;
				iVar41 = 5;
			}
		}
		if (bVar3 && iVar39 == 0)
		{
			fVar4 = unk_0x174C48E9E544E9A8(vVar11.x, vVar11.y);
			func_1004(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2405071.f_45.f_52)
		{
			vVar42 = { Global_2405071.f_45.f_49 - vVar1 };
			fVar43 = func_1003(vVar42, vVar15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_1004(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_1004(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_1004(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1004(fVar4);
					return;
				}
				else
				{
					func_1002(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_1004(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1004(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_1004(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1004(fVar4);
				return;
			}
			else
			{
				func_1002(iVar41, fVar4, vVar11);
			}
		}
		else
		{
			iVar0 = unk_0x9EC3B269A34A2BEE(0, 2);
			if (iVar0 == 0)
			{
				if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_1004(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1004(fVar4);
					return;
				}
				else
				{
					func_1002(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1004(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1004(fVar4);
				return;
			}
			else
			{
				func_1002(iVar41, fVar4, vVar11);
			}
		}
	}
}

void func_1002(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_1004(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_1004(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_1004(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_1004(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0x174C48E9E544E9A8(Param2, Param2.f_1);
			func_1004(fParam1);
			return;
			break;
	}
}

float func_1003(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_1004(float fParam0)
{
	if (!unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fParam0);
	}
	func_972(0f, 1);
}

Vector3 func_1005(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

int func_1006(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_17272.f_6 = 1;
	if (Global_2437364.f_1232 && Global_2437364.f_1240)
	{
		func_1011(0, bParam7);
		return 1;
	}
	if (unk_0x71EC91BA8C88BCE0() && !bParam7)
	{
		if (Global_2437364.f_1232)
		{
			func_1011(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xE980BAFD70E8A4B3() && !bParam7) && !unk_0x5D1B43675B257F3A())
	{
		return 0;
	}
	if (!func_1010())
	{
		if (func_1719(unk_0x95B959F18401C09A(), 1, 0) && !(func_250() || func_1009()))
		{
			if (((bParam7 && func_37(unk_0x95B959F18401C09A(), 1, 0)) && unk_0x71EC91BA8C88BCE0()) && Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_222 == 1)
			{
			}
			else if (func_1718() == 67)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2437364.f_1232 && !bParam9)
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
		if ((unk_0x7EECA16E87982278((vVar1.x - vParam0.x)) < 0.2f && unk_0x7EECA16E87982278((vVar1.y - vParam0.y)) < 0.2f) && unk_0x7EECA16E87982278((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x7EECA16E87982278(fVar2) < 1f)
			{
				Global_2437364.f_1232 = 0;
				Global_2437364.f_1233 = 0;
				if (unk_0x5D1B43675B257F3A())
				{
					unk_0xE58E54F90363A71D();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2437364.f_1234 || !vParam0.y == Global_2437364.f_1234.f_1) || !vParam0.z == Global_2437364.f_1234.f_2) || !fParam1 == Global_2437364.f_1237)
	{
		if (Global_2437364.f_1232 == 1)
		{
			if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2437364.f_1238) < func_1717(0))
			{
				return 0;
			}
			unk_0xE58E54F90363A71D();
			Global_2437364.f_1233 = 1;
		}
		else
		{
			Global_2437364.f_1233 = 0;
		}
		Global_2437364.f_1234 = { vParam0 };
		Global_2437364.f_1237 = fParam1;
		Global_2437364.f_1232 = 0;
	}
	if (!Global_2437364.f_1232 && !unk_0x5D1B43675B257F3A())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0x0E4018692D92041D(Global_93734.f_1350[44], 16))
			{
				func_1008(0);
			}
			if (!unk_0xA1327C0B561CAC70(unk_0x33CD235DF1E6A94E(), &(Global_2405071.f_497)))
			{
				Global_2405071.f_497 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
				if (unk_0xC16D1B065E3EEA79(iVar0))
				{
					Global_2437364.f_1239 = 0;
				}
			}
		}
		if (Global_2437364.f_1239 > -1)
		{
			Global_2437364.f_1238 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1232 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
						if (unk_0x0A81FE3D92AE2AC9(iVar0))
						{
							unk_0xBEADAF07D2339505(iVar0, vParam0, 0, true, 1, 1);
							unk_0x3C990C409B3845DE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0x1C8705F667F673EA(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xA5F44EC021F96C6B(iVar0);
						}
					}
					else
					{
						unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vParam0, 0, false, 0, 1);
						unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fParam1);
					}
				}
				else
				{
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vParam0, 0, false, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fParam1);
				}
				func_1011(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x21675F65D589CACE();
				unk_0xB5327081B2948314(unk_0x95B959F18401C09A(), vParam0, fParam1, bParam2, bParam8, 0);
			}
			Global_2437364.f_1238 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1232 = 1;
		}
	}
	if (Global_2437364.f_1232)
	{
		Global_17272.f_6 = 1;
		Global_2437364.f_1238 = unk_0x78DCC5D0CB43DEBA();
		if (Global_2437364.f_1239 > -1)
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
			}
			if (func_1007(&(Global_2437364.f_1239), vParam0, fParam1, iVar0))
			{
				func_1011(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Global_2437364.f_1234) < 2f)
				{
					if (unk_0x5D1B43675B257F3A())
					{
						unk_0xE58E54F90363A71D();
					}
					func_1011(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x5D1B43675B257F3A())
			{
				if (fParam10 != 0f)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
						unk_0x1C8705F667F673EA(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2437364.f_1240 = 1;
						return 0;
					}
				}
				func_1011(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_1007(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(Global_2437364.f_1241) && !unk_0xD62C4419A41F106A(Global_2437364.f_1241, 0))
	{
		unk_0xA5F44EC021F96C6B(Global_2437364.f_1241);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2437364.f_1241 = iParam3;
			unk_0xA5F44EC021F96C6B(Global_2437364.f_1241);
			if (unk_0x0A81FE3D92AE2AC9(Global_2437364.f_1241))
			{
				if (!unk_0xD62C4419A41F106A(Global_2437364.f_1241, 0))
				{
					unk_0x3C990C409B3845DE(Global_2437364.f_1241, fParam2);
					unk_0xBEADAF07D2339505(Global_2437364.f_1241, vParam1, 0, true, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1008(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405071.f_2678;
	if ((unk_0x25A82BC061F5B71D() && Global_2405071.f_2676 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405071.f_2675)
	{
		if (!unk_0x749954286B0F4936())
		{
			Global_2405071.f_2675 = iVar0;
		}
	}
}

bool func_1009()
{
	return ((unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 12)) && Global_1689319 == 8);
}

bool func_1010()
{
	return Global_1312844;
}

void func_1011(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xD6EDA274D82E8678(0f, 1065353216);
		unk_0xC7E6A5D90DED6E0B(0f);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x104FA8DC0E2278E8(unk_0x33CD235DF1E6A94E());
	}
	if (!bParam1)
	{
		unk_0x21675F65D589CACE();
	}
	if (unk_0x5D1B43675B257F3A())
	{
		unk_0xE58E54F90363A71D();
	}
	func_1013();
	if (!unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 14))
	{
		func_1012();
	}
}

void func_1012()
{
	Global_2537295.f_80 = 1;
}

void func_1013()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

int func_1014(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1015(vector3 vParam0)
{
	Global_2405071.f_45.f_299 = 1;
	Global_2405071.f_45.f_296 = { vParam0 };
	Global_2405071.f_45.f_315 = unk_0x6985FC3098CCA0EB(unk_0x765FF3592EC81689(), -9999);
	func_1016(1);
}

void func_1016(bool bParam0)
{
	float fVar0;
	
	if (Global_1574400 || Global_2405071.f_45.f_300)
	{
		if (Global_2405071.f_45.f_299)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (Global_1574404)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0x2E9A4AE2A5B4D8E8(unk_0x33CD235DF1E6A94E())) && ((vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), Global_2405071.f_45.f_296) < fVar0 || func_1020(unk_0x95B959F18401C09A())) || func_1719(unk_0x95B959F18401C09A(), 0, 0)))
				{
					if ((func_1019() || func_1018()) || func_1017())
					{
						if (unk_0xF1CDE9FD207C4CD8(0, 351))
						{
							Global_2405071.f_45.f_315 = unk_0x765FF3592EC81689();
							func_981(1000, 0, 1);
						}
						else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(Global_2405071.f_45.f_315, unk_0x765FF3592EC81689())) > 2000)
						{
							func_981(2500, 0, bParam0);
							Global_2405071.f_45.f_315 = unk_0x765FF3592EC81689();
						}
					}
					else
					{
						Global_2405071.f_45.f_315 = unk_0x765FF3592EC81689();
						func_981(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2405071.f_45.f_296 = { 0f, 0f, 0f };
					Global_2405071.f_45.f_299 = 0;
				}
			}
		}
	}
}

int func_1017()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == 1489874736)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1018()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1019()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1020(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_207 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1021(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	bVar0 = false;
	if (unk_0x0A81FE3D92AE2AC9(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1205(iParam0, iParam1, bVar0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
		vVar2 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
		if (!vdist(vVar1, vVar2) < 5f || !iParam2 == -1)
		{
			vVar2.z = (vVar2.z + -4f);
			vVar2.x = (vVar2.x + -4f);
			vVar2.y = (vVar2.y + -4f);
			unk_0xBEADAF07D2339505(iParam0, vVar2, 0, false, 0, 1);
		}
		unk_0x31826EF4A8BC8E9F(iParam0);
		unk_0x23298AB8A7D0F403(iParam0, true, 0);
		unk_0xF70578F5CD9822CB(iParam0, false);
		unk_0xC2A270E9C5578803(unk_0x33CD235DF1E6A94E(), 0);
		unk_0x41E36A540F8F323F(iParam0, 150, true);
		unk_0x41E36A540F8F323F(iParam0, 151, true);
		if (bParam3)
		{
			unk_0x094626C0798AE1F8(iParam0, iParam1, iParam2);
		}
		else
		{
			unk_0xC838CE9837D0ABAF(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		unk_0x880B00F3FAE4C022(iParam0, 0, 0);
		unk_0x41E36A540F8F323F(iParam0, 150, true);
		if (Global_1574400)
		{
			if (func_1204(unk_0x541D5C57194E73C4(iParam1)))
			{
				func_1022(0);
			}
		}
	}
}

void func_1022(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!unk_0xFB6FED41DB480F1C(unk_0x33CD235DF1E6A94E()))
	{
		if (Global_4456448.f_161245 == 0)
		{
			if ((Global_2405071.f_2686 == -99 || Global_2405071.f_2686 == 0) || !func_1203(unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()), 14, Global_2405071.f_2686, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_111(588, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2405071.f_2686;
			}
			Var0 = { func_1161(func_1202(), 14, iVar1, -1) };
			func_1160(unk_0x33CD235DF1E6A94E(), 14, iVar1);
			func_1023(unk_0x33CD235DF1E6A94E(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1023(unk_0x33CD235DF1E6A94E(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 380, true);
		}
	}
}

int func_1023(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	float fVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	var uVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	var uVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		if ((Global_1312801 != 4 && Global_1312801 != 5) && Global_1312801 != 7)
		{
			return 0;
		}
	}
	if (unk_0xBC2FC12AD0FBF72E(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x33CD235DF1E6A94E() && Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_71399;
	}
	Global_71400++;
	iVar5 = unk_0x541D5C57194E73C4(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
		if (!func_1159(iParam3))
		{
			Global_71400 = (Global_71400 - 1);
			return 0;
		}
		func_1154(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xF52BF9A82ABDA815(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_71445 };
		}
		else
		{
			uVar15 = { func_1150(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_71402[1 /*14*/] = { func_1161(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x93AA93DA1B137032(iParam0, func_1149(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_1149(iVar0)));
					}
					else
					{
						unk_0x93AA93DA1B137032(iParam0, func_1149(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
					{
						func_1154(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_71402[1 /*14*/] = { func_1161(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_71462 };
							}
							else
							{
								uVar16 = { func_1146(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_71402[1 /*14*/] = { func_1161(iVar5, 14, uVar16[iVar1], -1) };
								func_1145(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
								if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
								{
									func_1154(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x93AA93DA1B137032(iParam0, func_1149(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_1149(iVar0)));
								}
								else
								{
									unk_0x93AA93DA1B137032(iParam0, func_1149(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1023(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
							{
								func_1154(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_71402[1 /*14*/] = { func_1161(iVar5, iVar0, func_1141(iParam0, iVar0, -1), -1) };
				if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_1150(iVar5, 0) };
					func_1023(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_1140();
			if (iVar18 != -1)
			{
				func_1138(iVar18, 0, iParam10);
			}
			func_1134(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_1146(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_71402[1 /*14*/] = { func_1161(iVar5, 14, uVar19[iVar1], -1) };
			func_1145(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
			if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
			{
				func_1154(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_71400 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1132(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1023(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_1145(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
		if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
		{
			func_1154(iVar5, iParam1, iParam2, 1);
		}
		if (Global_71402[1 /*14*/].f_12 == 0)
		{
			if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 6) && unk_0xEA26831785699C09(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar20 = unk_0x25AE733B26BE25A7(iParam0, 1, unk_0xA603FBA9F3C17D3A(iParam0, 1), unk_0xCEB55689C694866C(iParam0, 1));
				if (unk_0xEA26831785699C09(iVar20, 66092876, 0))
				{
					func_1023(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_71402[1 /*14*/].f_12 == 0)
		{
			func_1128(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_71400 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1023(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1023(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar21 = -1;
				if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 6) && unk_0xEA26831785699C09(Global_2621444, -1996375172, 11))
				{
					unk_0x1171E3EFA13CFBFA(iParam0, Global_1314024, Global_1314025, Global_1314026, 0);
					unk_0x1171E3EFA13CFBFA(iParam0, Global_1314024, Global_1314025, Global_1314026, 1);
					unk_0x1171E3EFA13CFBFA(iParam0, Global_1314024, Global_1314025, Global_1314026, 2);
					unk_0x1171E3EFA13CFBFA(iParam0, Global_1314024, Global_1314025, Global_1314026, 3);
				}
				iVar22 = func_1126(iParam0, 11);
				iVar23 = func_1126(iParam0, 8);
				iVar24 = func_1126(iParam0, 4);
				iVar8 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
				if (unk_0xEA26831785699C09(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_1125(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_1125(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0xEA26831785699C09(iVar21, 320460654, 0) || unk_0xEA26831785699C09(iVar21, -2017999390, 0)) || unk_0xEA26831785699C09(iVar21, -1410897066, 0)) || unk_0xEA26831785699C09(iVar21, -826135203, 0)) || unk_0xEA26831785699C09(iVar21, -1855618474, 0)) || unk_0xEA26831785699C09(iVar21, -1420825402, 0)) || unk_0xEA26831785699C09(iVar21, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_1126(iParam0, 8);
					}
				}
				iVar25 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
				if (unk_0xEA26831785699C09(iVar25, -356646862, 0))
				{
					iVar26 = func_1124(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == -99)
					{
						iVar26 = func_1132(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					switch (iVar25)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar26 = 11;
							iVar21 = func_1125(iVar5, iParam2, 11, 4);
							if (!unk_0xEA26831785699C09(iVar21, -530089825, 0))
							{
								iVar26 = -99;
							}
							break;
					}
					if (iVar26 != -99)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_1123(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = unk_0xCEB55689C694866C(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar22 = func_1126(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_1125(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && unk_0xEA26831785699C09(iVar21, 1965569012, 0))
					{
						iVar28 = func_1121(iVar5, iVar22, iParam2, unk_0xCEB55689C694866C(iParam0, 11));
						if (iVar28 != -99)
						{
							func_1023(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1120(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_1125(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_1125(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1120(iVar5, iVar22, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (unk_0xEA26831785699C09(iVar21, -1200513218, 0) || unk_0xEA26831785699C09(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((unk_0xEA26831785699C09(iVar21, 684992453, 0) || unk_0xEA26831785699C09(iVar21, 916636514, 0)) || unk_0xEA26831785699C09(iVar21, -1939378450, 0)) || unk_0xEA26831785699C09(iVar21, -820724897, 0)) || unk_0xEA26831785699C09(iVar21, 153792394, 0)) || unk_0xEA26831785699C09(iVar21, -872449705, 0)) || unk_0xEA26831785699C09(iVar21, 700658917, 0)) || unk_0xEA26831785699C09(iVar21, -549843760, 0)) || unk_0xEA26831785699C09(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_1119(iParam0, iParam2);
							iVar30 = func_1121(iVar5, iVar22, iParam2, unk_0xCEB55689C694866C(iParam0, 11));
							if (iVar30 != -99)
							{
								func_1023(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar29 != -99 && (iParam0 == unk_0x33CD235DF1E6A94E() || iParam0 == Global_4266954))
							{
								func_1023(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_1117(iVar5, 11, -1);
									Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar31, -1) };
									iVar30 = func_1121(iVar5, iVar31, iParam2, Global_71402[1 /*14*/].f_4);
									if (iVar30 == -99 || unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_1023(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar22, -1) };
						iVar32 = Global_71402[1 /*14*/].f_3;
						Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iParam2, -1) };
						iVar33 = Global_71402[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_1119(iParam0, iParam2);
							Global_71402[1 /*14*/] = { func_1161(iVar5, 8, iVar23, -1) };
							iVar34 = Global_71402[1 /*14*/].f_4;
							iVar36 = func_1116(iVar5, iVar23, iVar34);
							if (iVar35 != -99 && (iParam0 == unk_0x33CD235DF1E6A94E() || iParam0 == Global_4266954))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == -99)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_1125(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1115(iVar38) == 6) || unk_0xEA26831785699C09(iVar38, -1237899132, 0))
									{
										iVar36 = func_1117(iVar5, 11, -1);
										Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar36, -1) };
										iVar37 = func_1121(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar36 = func_1117(iVar5, 11, -1);
										Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar36, -1) };
										iVar37 = func_1121(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
									}
								}
								iVar39 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_1125(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_1125(iVar5, iVar23, 8, 4);
								}
								if (unk_0xEA26831785699C09(iVar39, -316495692, 0))
								{
									iVar36 = func_1117(iVar5, 11, -1);
									Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar36, -1) };
									iVar37 = func_1121(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_1121(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_1114(iVar5, func_1126(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_1125(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_1114(iVar5, func_1126(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != -99)
							{
								func_1023(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_1117(iVar5, 11, -1);
								Global_71402[1 /*14*/] = { func_1161(iVar5, 11, iVar36, -1) };
								iVar37 = func_1121(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
								if (iVar37 == -99)
								{
									iVar37 = 240;
								}
								func_1023(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1023(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1111(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, unk_0x8069BBC84D092E17(iParam0, 10));
				}
			}
			func_1134(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1124(iVar5, func_1141(iParam0, 8, -1), iParam2, func_1141(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_111(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_111(2158, iParam10, 0);
				}
				unk_0x0BA3B59E967441C4(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar40 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar40 = func_1109(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar40 = func_1107(iParam2);
					}
					if (iVar40 != -99 && iParam2 != iVar40)
					{
						iParam2 = iVar40;
					}
				}
				func_1074(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar41 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
			if (unk_0xEA26831785699C09(iVar41, -356646862, 0))
			{
				iVar42 = func_1126(iParam0, 11);
				iVar43 = func_1126(iParam0, 4);
				iVar44 = func_1124(iVar5, iParam2, iVar42, iVar43);
				if (iVar44 == -99)
				{
					iVar44 = func_1132(iParam0, iVar5, 11, iVar42, 3, 0);
				}
				switch (iVar41)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar44 = 11;
						iVar45 = func_1125(iVar5, iParam2, 11, 4);
						if (!unk_0xEA26831785699C09(iVar45, -530089825, 0))
						{
							iVar44 = -99;
						}
						break;
				}
				if (iVar44 != -99)
				{
					iVar46 = 0;
					while (iVar46 < 17)
					{
						if (func_1123(iVar5, iVar44, iVar46) == iVar41)
						{
							iVar11 = iVar46;
							iVar12 = unk_0xCEB55689C694866C(iParam0, 3);
						}
						iVar46++;
					}
				}
			}
			func_1134(iParam0, iParam1, iParam2, iParam6, 0);
			iVar47 = func_1126(iParam0, 11);
			if (func_1120(iVar5, iVar47, -1))
			{
				iVar48 = func_1116(iVar5, iParam2, Global_71402[1 /*14*/].f_4);
				func_1111(iVar5, iVar48);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1124(iVar5, iParam2, func_1126(iParam0, 11), func_1126(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar49 = func_1126(iParam0, 7);
				if (!func_1071(iVar5, iVar49, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x93AA93DA1B137032(iParam0, func_1149(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0xEA26831785699C09(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0xEA26831785699C09(Global_2621444, -921710083, 0)))
			{
				iVar50 = func_111(2098, iParam10, 0);
				iVar51 = func_111(2099, iParam10, 0);
				iVar52 = func_111(2100, iParam10, 0);
				fVar53 = func_1070(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x11CF5F3B4061B0C8(iParam0, 0, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x11CF5F3B4061B0C8(iParam0, 21, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				iVar54 = 0;
				while (iVar54 < 20)
				{
					unk_0xC4C169622F69B7B0(iParam0, iVar54, 0f);
					iVar54++;
				}
			}
			else
			{
				func_1057(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar55 = func_1126(iParam0, 11);
			iVar56 = func_1126(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xEA26831785699C09(func_1125(iVar5, iVar55, 11, 3), -1719338724, 0))
				{
					if (!func_1114(iVar5, iParam2, func_1116(iVar5, iVar56, 0)))
					{
						func_1023(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0xEA26831785699C09(func_1125(iVar5, iVar55, 11, 4), -1719338724, 0))
				{
					if (!func_1114(iVar5, iParam2, func_1116(iVar5, iVar56, 0)))
					{
						func_1023(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_71402[1 /*14*/] = { func_1161(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1124(iVar5, func_1126(iParam0, 8), func_1126(iParam0, 11), iParam2);
			}
			iVar57 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
			if (unk_0xEA26831785699C09(iVar57, -356646862, 0))
			{
				iVar58 = func_1124(iVar5, iVar56, iVar55, iParam2);
				if (iVar58 == -99)
				{
					iVar58 = func_1132(iParam0, iVar5, 11, iVar55, 3, 0);
				}
				switch (iVar57)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar58 = 11;
						iVar59 = func_1125(iVar5, iParam2, 11, 4);
						if (!unk_0xEA26831785699C09(iVar59, -530089825, 0))
						{
							iVar58 = -99;
						}
						break;
				}
				if (iVar58 != -99)
				{
					iVar60 = 0;
					while (iVar60 < 17)
					{
						if (func_1123(iVar5, iVar58, iVar60) == iVar57)
						{
							iVar11 = iVar60;
							iVar12 = unk_0xCEB55689C694866C(iParam0, 3);
						}
						iVar60++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x93AA93DA1B137032(iParam0, func_1149(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_1149(iParam1)));
		}
		else
		{
			unk_0x93AA93DA1B137032(iParam0, func_1149(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_71400 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1023(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_1124(iVar5, iVar3, func_1126(iParam0, 11), func_1126(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1023(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1056(iParam0))
				{
					iVar61 = func_1054(iParam0, iVar5, iParam1, iParam2);
					if (iVar61 > 0)
					{
						iVar61 = (iVar61 + unk_0xCEB55689C694866C(iParam0, 9));
						if (!func_1048(iParam0, 9, iVar61))
						{
							func_1023(iParam0, 9, iVar61, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1023(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
					if (unk_0xEA26831785699C09(iVar8, 240476421, 8))
					{
						func_1023(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar62 = func_111(2040, -1, 0);
				if (unk_0xA603FBA9F3C17D3A(iParam0, 5) != 0)
				{
					unk_0x93AA93DA1B137032(iParam0, 5, func_1042(iParam0, iVar62), func_1041(iParam0, iVar62), func_1040(iParam0, iVar62));
				}
				if (iParam0 == unk_0x33CD235DF1E6A94E())
				{
					unk_0xF17C5B01DECA3F49(unk_0x95B959F18401C09A(), 5, func_1042(unk_0x33CD235DF1E6A94E(), iVar62), func_1041(unk_0x33CD235DF1E6A94E(), iVar62), 0);
					unk_0xB3739B780DF92EED(unk_0x95B959F18401C09A(), func_1040(unk_0x33CD235DF1E6A94E(), iVar62));
					func_1039(unk_0x95B959F18401C09A(), iVar62);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0xEA26831785699C09(Global_2621444, -319568873, 0))
					{
						func_1023(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar63 = func_1141(iParam0, 4, -1);
					iVar64 = iParam2;
				}
				else
				{
					iVar63 = iParam2;
					iVar64 = func_1141(iParam0, 11, -1);
				}
				if (func_1038(iVar5, 11, iVar64, -1))
				{
					if (!func_1037(iVar5, 4, iVar63, -1))
					{
						if (func_1036(iVar5, 4, iVar63, &uVar65))
						{
							func_1023(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1037(iVar5, 4, iVar63, -1))
				{
					if (func_1035(iVar5, 4, iVar63, &uVar65))
					{
						func_1023(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar66 = unk_0xA603FBA9F3C17D3A(iParam0, 6);
				iVar67 = unk_0xCEB55689C694866C(iParam0, 6);
				iVar68 = unk_0x25AE733B26BE25A7(iParam0, 6, iVar66, iVar67);
				iVar69 = unk_0xA603FBA9F3C17D3A(iParam0, 4);
				iVar70 = unk_0xCEB55689C694866C(iParam0, 4);
				iVar71 = unk_0x25AE733B26BE25A7(iParam0, 4, iVar69, iVar70);
				iVar72 = func_1126(iParam0, 4);
				iVar73 = func_1126(iParam0, 6);
				if (func_1034(iVar5, iVar68))
				{
					if (unk_0xEA26831785699C09(iVar68, 1812005517, 0) != func_1033(iVar5, iVar72, iVar68))
					{
						iVar74 = unk_0x9065B39957655C54(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							unk_0x42760555333084D1(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_1030(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_1023(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_1030(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_1023(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (unk_0xEA26831785699C09(iVar71, -2042643157, 0) != func_1029(iVar5, iVar73, iVar71))
					{
						iVar74 = unk_0x9065B39957655C54(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							unk_0x42760555333084D1(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_1030(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_1023(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_1030(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_1023(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
				if (func_1034(iVar5, iVar71))
				{
					if (unk_0xEA26831785699C09(iVar71, -2042643157, 0) != func_1029(iVar5, iVar73, iVar71))
					{
						iVar74 = unk_0x9065B39957655C54(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							unk_0x42760555333084D1(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_1030(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_1023(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_1030(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_1023(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (unk_0xEA26831785699C09(iVar68, 1812005517, 0) != func_1033(iVar5, iVar72, iVar68))
					{
						iVar74 = unk_0x9065B39957655C54(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							unk_0x42760555333084D1(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_1030(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_1023(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_1030(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_1023(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_1128(iParam0);
				iVar79 = unk_0xA603FBA9F3C17D3A(iParam0, 1);
				iVar80 = unk_0xCEB55689C694866C(iParam0, 1);
				iVar81 = unk_0x25AE733B26BE25A7(iParam0, 1, iVar79, iVar80);
				if (unk_0xEA26831785699C09(iVar81, 838607662, 0))
				{
					iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1023(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1132(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1023(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1024(iParam0, &uVar4))
		{
			func_1023(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1023(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_1023(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1023(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar82 = func_1123(iVar5, func_1141(iParam0, 3, -1), iVar11);
		if (iVar82 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_1030(iVar5, iVar82, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_1030(iVar5, iVar82, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_1023(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_71400 = (Global_71400 - 1);
	return 1;
}

int func_1024(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1141(unk_0x33CD235DF1E6A94E(), 2, -1);
	if (func_111(753, Global_71399, 0) != -99 && func_1026())
	{
		if (func_1025() == 4)
		{
			return 1;
		}
		if (func_111(753, Global_71399, 0) == 0 && func_111(754, Global_71399, 0) == 0)
		{
			if (func_97(161, Global_71399))
			{
				if (func_111(2051, Global_71399, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_111(752, Global_71399, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_111(753, Global_71399, 0);
		iVar1 = func_111(754, Global_71399, 0);
		if (!func_1048(iParam0, iVar1, iVar0))
		{
			if (func_97(161, Global_71399))
			{
				*uParam1 = func_111(2051, Global_71399, 0);
			}
			else
			{
				*uParam1 = func_111(752, Global_71399, 0);
			}
			func_109(753, -99, Global_71399, 1, 0);
			func_109(754, 2, Global_71399, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1025()
{
	return Global_1312801;
}

int func_1026()
{
	if (func_1028() && func_1027(0))
	{
		return 1;
	}
	return 0;
}

var func_1027(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_1028()
{
	return func_1027(func_36() + 1);
}

int func_1029(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1125(iParam0, iParam1, 6, 3);
			}
			if (unk_0xEA26831785699C09(iVar0, -364248070, 0))
			{
				if ((unk_0xEA26831785699C09(iParam2, -1080576805, 0) || unk_0xEA26831785699C09(iParam2, -1387458490, 0)) || unk_0xEA26831785699C09(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0xEA26831785699C09(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0xEA26831785699C09(iVar0, -713698407, 0) || unk_0xEA26831785699C09(iVar0, 140732128, 0)) || unk_0xEA26831785699C09(iVar0, 2106216756, 0)) || unk_0xEA26831785699C09(iVar0, -849839091, 0)) || unk_0xEA26831785699C09(iVar0, -1446333198, 0)) || unk_0xEA26831785699C09(iVar0, -269266203, 0)) || unk_0xEA26831785699C09(iVar0, 201427653, 0)) || unk_0xEA26831785699C09(iVar0, 967829025, 0)) || unk_0xEA26831785699C09(iVar0, -685039259, 0)) || unk_0xEA26831785699C09(iVar0, -1266557933, 0)) || unk_0xEA26831785699C09(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1125(iParam0, iParam1, 6, 4);
			}
			if (unk_0xEA26831785699C09(iParam2, -56268180, 0))
			{
				if (((((((((unk_0xEA26831785699C09(iVar0, -713698407, 0) || unk_0xEA26831785699C09(iVar0, 140732128, 0)) || unk_0xEA26831785699C09(iVar0, 1863955539, 0)) || unk_0xEA26831785699C09(iVar0, -849839091, 0)) || unk_0xEA26831785699C09(iVar0, -269266203, 0)) || unk_0xEA26831785699C09(iVar0, 201427653, 0)) || unk_0xEA26831785699C09(iVar0, 967829025, 0)) || unk_0xEA26831785699C09(iVar0, -685039259, 0)) || unk_0xEA26831785699C09(iVar0, -1266557933, 0)) || unk_0xEA26831785699C09(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_1030(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xC4707630C8DE50CF(&Var0);
		iVar2 = 0;
		iVar3 = unk_0x51C67A1CC9BD53D6(iParam3, 7, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0xCAD2858165B4553C(iVar1, &Var0);
			if (!unk_0xC4ED190294E9E658(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_1032(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x9975DA2BF7F980A7(&Var4);
		iVar6 = 0;
		iVar7 = unk_0x51C67A1CC9BD53D6(iParam3, 7, -1, 0, -1, func_1149(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0xC7FE3DDCFBE343DE(iVar5, &Var4);
			if (!unk_0xC4ED190294E9E658(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_1031(iParam0, func_1149(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_1031(int iParam0, int iParam1)
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

int func_1032(int iParam0)
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

int func_1033(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1125(iParam0, iParam1, 4, 3);
				iVar1 = func_1115(iVar0);
			}
			if (unk_0xEA26831785699C09(iParam2, -364248070, 0) || unk_0xEA26831785699C09(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0xEA26831785699C09(iVar0, 320460654, 0)) || unk_0xEA26831785699C09(iVar0, -269266203, 0)) || unk_0xEA26831785699C09(iVar0, 201427653, 0)) || unk_0xEA26831785699C09(iVar0, 967829025, 0)) || unk_0xEA26831785699C09(iVar0, -685039259, 0)) || (unk_0xEA26831785699C09(iVar0, -1080576805, 0) && !unk_0xEA26831785699C09(iParam2, -364248070, 0))) || (unk_0xEA26831785699C09(iVar0, -1387458490, 0) && !unk_0xEA26831785699C09(iParam2, -364248070, 0))) || (unk_0xEA26831785699C09(iVar0, -1420825402, 0) && !unk_0xEA26831785699C09(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((unk_0xEA26831785699C09(iParam2, 1248753945, 0) || unk_0xEA26831785699C09(iParam2, 481861038, 0)) || unk_0xEA26831785699C09(iParam2, 713391749, 0)) || unk_0xEA26831785699C09(iParam2, 434101562, 0))
				{
					if ((((((unk_0xEA26831785699C09(iVar0, -1080576805, 0) || unk_0xEA26831785699C09(iVar0, -1387458490, 0)) || unk_0xEA26831785699C09(iVar0, -269266203, 0)) || unk_0xEA26831785699C09(iVar0, 201427653, 0)) || unk_0xEA26831785699C09(iVar0, 967829025, 0)) || unk_0xEA26831785699C09(iVar0, -685039259, 0)) || unk_0xEA26831785699C09(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1125(iParam0, iParam1, 4, 4);
				iVar1 = func_1115(iVar0);
			}
			if (unk_0xEA26831785699C09(iParam2, -364248070, 0) || unk_0xEA26831785699C09(iParam2, -56268180, 0))
			{
				if ((unk_0xEA26831785699C09(iVar0, -1080576805, 0) || unk_0xEA26831785699C09(iVar0, -1387458490, 0)) || unk_0xEA26831785699C09(iVar0, -1420825402, 0))
				{
					if ((((unk_0xEA26831785699C09(iParam2, -364248070, 0) || unk_0xEA26831785699C09(iParam2, -979468724, 0)) || unk_0xEA26831785699C09(iParam2, -1813210391, 0)) || unk_0xEA26831785699C09(iParam2, 1248753945, 0)) || unk_0xEA26831785699C09(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0xEA26831785699C09(iVar0, 1863955539, 0)) || unk_0xEA26831785699C09(iVar0, 2106216756, 0)) || unk_0xEA26831785699C09(iVar0, -761463976, 0)) || unk_0xEA26831785699C09(iVar0, 684992453, 0)) || unk_0xEA26831785699C09(iVar0, 916636514, 0)) || unk_0xEA26831785699C09(iVar0, -1939378450, 0)) || unk_0xEA26831785699C09(iVar0, 264959411, 0)) || unk_0xEA26831785699C09(iVar0, -1127835965, 0)) || unk_0xEA26831785699C09(iVar0, -1119232689, 0)) || unk_0xEA26831785699C09(iVar0, -1207283343, 0)) || unk_0xEA26831785699C09(iVar0, -849839091, 0)) || unk_0xEA26831785699C09(iVar0, -2088146832, 0)) || unk_0xEA26831785699C09(iVar0, -1446333198, 0)) || unk_0xEA26831785699C09(iVar0, -430330349, 0)) || unk_0xEA26831785699C09(iVar0, -1103045158, 0)) || unk_0xEA26831785699C09(iVar0, 1055526375, 0)) || unk_0xEA26831785699C09(iVar0, -2020757158, 0)) || unk_0xEA26831785699C09(iVar0, -1325813684, 0)) || unk_0xEA26831785699C09(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_1034(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0xEA26831785699C09(iParam1, -364248070, 0) || unk_0xEA26831785699C09(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0xEA26831785699C09(iParam1, -364248070, 0) || unk_0xEA26831785699C09(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1035(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1125(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x9065B39957655C54(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x42760555333084D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0xEA26831785699C09(iVar3, -1100807313, 0))
										{
											*uParam3 = func_1030(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1036(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1125(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x9065B39957655C54(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x42760555333084D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0xEA26831785699C09(iVar3, -1100807313, 0))
										{
											*uParam3 = func_1030(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1037(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 4, 4);
						}
						if (unk_0xEA26831785699C09(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1038(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 11, 4);
						}
						return unk_0xEA26831785699C09(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1039(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x86BA755E9519EC72(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		unk_0x86BA755E9519EC72(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		unk_0x86BA755E9519EC72(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		unk_0x86BA755E9519EC72(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		unk_0x86BA755E9519EC72(iParam0, 1269440357);
	}
	else
	{
		unk_0x0F686074D2145120(iParam0);
	}
}

int func_1040(int iParam0, int iParam1)
{
	return 0;
}

int func_1041(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_1042(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0xA603FBA9F3C17D3A(iParam0, 9) != false;
	iVar1 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
	iVar2 = unk_0x25AE733B26BE25A7(iParam0, 11, unk_0xA603FBA9F3C17D3A(iParam0, 11), unk_0xCEB55689C694866C(iParam0, 11));
	iVar3 = unk_0x25AE733B26BE25A7(iParam0, 4, unk_0xA603FBA9F3C17D3A(iParam0, 4), unk_0xCEB55689C694866C(iParam0, 4));
	if ((((!bVar0 == Global_71563 || !iParam1 == Global_71564) || !iVar1 == Global_71565) || !iVar2 == Global_71566) || !iVar3 == Global_71567)
	{
		Global_71563 = bVar0;
		Global_71564 = iParam1;
		Global_71565 = iVar1;
		Global_71566 = iVar2;
		Global_71567 = iVar3;
		Global_71568 = func_1043(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A())) == joaat("mp_f_freemode_01"))
			{
				if (Global_71568 == 61)
				{
					Global_71568 = 79;
				}
				else if (Global_71568 == 39)
				{
					Global_71568 = 79;
				}
				else if (Global_71568 == 76)
				{
					Global_71568 = 80;
				}
			}
			else if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A())) == joaat("mp_m_freemode_01"))
			{
				if (Global_71568 == 61)
				{
					Global_71568 = 78;
				}
				else if (Global_71568 == 39)
				{
					Global_71568 = 78;
				}
			}
		}
	}
	return Global_71568;
}

int func_1043(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0xA603FBA9F3C17D3A(iParam0, 11);
	if (unk_0xA603FBA9F3C17D3A(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x541D5C57194E73C4(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
	if (unk_0xEA26831785699C09(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xEA26831785699C09(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, 350281921, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -887141061, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -1185371730, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -2124629577, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0xEA26831785699C09(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, -887141061, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -1185371730, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -2124629577, 8))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		return func_1047(iParam0, iParam1);
	}
	if (func_1046(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x25AE733B26BE25A7(iParam0, 11, iVar0, unk_0xCEB55689C694866C(iParam0, 11));
		if (unk_0xEA26831785699C09(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0xEA26831785699C09(iVar5, -979468724, 0))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, -306768813, 0))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, -58412562, 0))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1536649085, 0) && !unk_0xEA26831785699C09(iVar5, 350281921, 0))
		{
			iVar6 = func_1045(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_1115(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_1115(iVar5);
						break;
					}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 248194463, 0))
		{
			if (unk_0xEA26831785699C09(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 396458410, 0))
		{
			iVar7 = func_1044(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_1115(iVar5);
					break;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1719167561, 0) || unk_0xEA26831785699C09(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1274099003, 0) || unk_0xEA26831785699C09(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xEA26831785699C09(iVar5, -1407614029, 0))
				{
					return func_1047(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0xEA26831785699C09(iVar5, -1086258388, 0) || unk_0xEA26831785699C09(iVar5, 103539798, 0)) || unk_0xEA26831785699C09(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_1047(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1506370874, 0) || unk_0xEA26831785699C09(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1347486026, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (unk_0xEA26831785699C09(iVar5, 2006289597, 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_1047(iParam0, iParam1) + 15;
				}
				else
				{
					return func_1047(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -540436505, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1663871176, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1);
			}
			else
			{
				return func_1047(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1047(iParam0, iParam1) + 15;
			}
			else
			{
				return func_1047(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0xEA26831785699C09(iVar5, -2017999390, 0) || unk_0xEA26831785699C09(iVar5, 320460654, 0)) || unk_0xEA26831785699C09(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_1115(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_1044(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xEA26831785699C09(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xEA26831785699C09(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xEA26831785699C09(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xEA26831785699C09(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xEA26831785699C09(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xEA26831785699C09(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xEA26831785699C09(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xEA26831785699C09(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xEA26831785699C09(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xEA26831785699C09(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xEA26831785699C09(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xEA26831785699C09(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xEA26831785699C09(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_1045(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xEA26831785699C09(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xEA26831785699C09(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xEA26831785699C09(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xEA26831785699C09(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xEA26831785699C09(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xEA26831785699C09(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xEA26831785699C09(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xEA26831785699C09(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_1046(int iParam0)
{
	if (unk_0xEA26831785699C09(unk_0x25AE733B26BE25A7(iParam0, 4, unk_0xA603FBA9F3C17D3A(iParam0, 4), unk_0xCEB55689C694866C(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_1047(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_1048(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	Global_71402[1 /*14*/] = { func_1161(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_1150(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_1048(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_1146(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_1048(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_71402[2 /*14*/] = { func_1161(iVar0, 14, iVar6, -1) };
									if (Global_71402[2 /*14*/].f_12 == iVar5)
									{
										if (func_1048(iParam0, 14, iVar6))
										{
											if (!func_1049(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_71402[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_1126(iParam0, iVar4);
						Global_71402[2 /*14*/] = { func_1161(iVar0, iVar4, iVar1, -1) };
						if (!func_1049(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_71402[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_111(1757, Global_71399, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_1146(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_1048(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x063A77907C209DC4(iParam0, Global_71402[1 /*14*/].f_12) == Global_71402[1 /*14*/].f_3 && (unk_0x5856CD5A7124DF2D(iParam0, Global_71402[1 /*14*/].f_12) == Global_71402[1 /*14*/].f_4 || Global_71402[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_71402[1 /*14*/].f_12 == 0 && unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 6)) && unk_0xEA26831785699C09(Global_2621444, -1033433901, 1)) && unk_0x371A0858E55017FF(Global_2621444) > 0)
		{
			iVar16 = unk_0x371A0858E55017FF(Global_2621444);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0x4D0125131661B655(Global_2621444, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					unk_0xC4707630C8DE50CF(&Var17);
					unk_0x47F9B535E50AE911(iVar13, &Var17);
					if (Var17.f_3 == unk_0x063A77907C209DC4(iParam0, Global_71402[1 /*14*/].f_12) && Var17.f_4 == unk_0x5856CD5A7124DF2D(iParam0, Global_71402[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_71402[1 /*14*/].f_3 == unk_0xA603FBA9F3C17D3A(iParam0, func_1149(iParam1)) && Global_71402[1 /*14*/].f_4 == unk_0xCEB55689C694866C(iParam0, func_1149(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_71401++;
			if (Global_71401 == 1)
			{
				if (func_1038(iVar0, 11, func_1126(iParam0, 11), -1))
				{
					if (func_1036(iVar0, 4, iParam2, &uVar18))
					{
						return func_1048(iParam0, 4, uVar18);
					}
				}
				else if (func_1035(iVar0, 4, iParam2, &uVar18))
				{
					return func_1048(iParam0, 4, uVar18);
				}
			}
			Global_71401 = (Global_71401 - 1);
		}
	}
	return 0;
}

int func_1049(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_1146(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_1053(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_1052(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_1051(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_1050(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_1052(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_1051(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_1050(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_1052(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_1051(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_1050(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_1050(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 14, 3);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 1) || unk_0xEA26831785699C09(func_1125(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 1, 3);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(func_1125(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 14, 4);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 1) || unk_0xEA26831785699C09(func_1125(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1125(iParam0, iParam2, 1, 4);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(func_1125(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1051(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1125(iParam0, iParam2, 1, 3);
					}
					if (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1125(iParam0, iParam2, 1, 4);
					}
					if (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_1052(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1125(iParam0, iParam2, 14, 3);
					}
					return unk_0xEA26831785699C09(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_1125(iParam0, iParam2, 14, 4);
					}
					return unk_0xEA26831785699C09(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_1053(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1054(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_1046(iParam0))
	{
		return -99;
	}
	if (func_1055(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_1125(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x9065B39957655C54(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0x42760555333084D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_1030(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_1125(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x9065B39957655C54(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0x42760555333084D1(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_1030(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_1055(int iParam0)
{
	if (unk_0xEA26831785699C09(unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_1056(int iParam0)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = unk_0x541D5C57194E73C4(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xA603FBA9F3C17D3A(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0xA603FBA9F3C17D3A(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1057(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!unk_0x055C6611FF8B993C(iParam0))
	{
	}
	unk_0xB9B00290DC78A70B(iParam0, &Var0);
	iVar1 = func_111(2095, iParam1, 0);
	iVar2 = func_111(2096, iParam1, 0);
	iVar3 = func_111(2097, iParam1, 0);
	iVar4 = func_111(2098, iParam1, 0);
	iVar5 = func_111(2099, iParam1, 0);
	iVar6 = func_111(2100, iParam1, 0);
	fVar7 = func_1070(134, iParam1);
	fVar8 = func_1070(135, iParam1);
	fVar9 = func_1070(136, iParam1);
	bVar10 = func_97(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x11CF5F3B4061B0C8(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_111(2101, iParam1, 0);
		if (iVar11 > 0)
		{
			func_1058(iParam0, iParam1, 0);
		}
	}
}

void func_1058(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_1069(iVar1);
		if (!bParam2)
		{
			fVar3 = func_1070(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_1068(iVar2, iParam1);
		}
		unk_0xC4C169622F69B7B0(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_1067(iVar4);
		iVar6 = func_1066(iVar5);
		iVar7 = func_1065(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_633(iVar6, iParam1, -1);
				fVar11 = func_1070(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_1064(iVar6, iParam1);
				fVar11 = func_1068(iVar7, iParam1);
			}
			unk_0x008A25D77379E0ED(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_1063(iVar5);
			iVar9 = func_1062(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_111(iVar8, iParam1, 0);
					iVar14 = func_111(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_1061(iVar8, iParam1);
					iVar14 = func_1061(iVar9, iParam1);
				}
				func_1060(iVar13, &iVar12, &iVar15);
				unk_0xB113EEFFAF4DB51F(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_1059(&iParam0, iParam1, bParam2);
}

void func_1059(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_1070(157, iParam1);
	}
	else
	{
		fVar0 = func_1068(157, iParam1);
	}
	if (*iParam0 == unk_0x33CD235DF1E6A94E())
	{
	}
	unk_0x5238CEEB40C9050B(*iParam0, round(fVar0));
}

void func_1060(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_1061(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2539502[iParam0 /*3*/][func_98(iParam1)];
	if (unk_0x42E7821CD721AD97(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_1062(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return -1;
}

int func_1064(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	if (!unk_0xA83BB3FC3B2C25F3(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_1065(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_1067(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_1068(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2570652[iParam0 /*3*/][func_98(iParam1)];
	if (unk_0xAD7F551CF4409350(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_1069(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_1070(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2570652[iParam0 /*3*/][func_98(iParam1)];
	if (unk_0x1C6F24ECA1A88E67(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_1071(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4266666 == iParam1)
		{
			iVar2 = Global_4266665;
			iVar1 = Global_4266664;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_1125(iParam0, iParam1, 7, 3);
			iVar1 = func_1115(iVar2);
			Global_4266666 = iParam1;
			Global_4266665 = iVar2;
			Global_4266664 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4266669 == iParam3)
		{
			iVar4 = Global_4266668;
			iVar3 = Global_4266667;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_1125(iParam0, iParam3, 11, 3);
			iVar3 = func_1115(iVar4);
			Global_4266669 = iParam3;
			Global_4266668 = iVar4;
			Global_4266667 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4266672 == iParam4)
		{
			iVar6 = Global_4266671;
			iVar5 = Global_4266670;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_1125(iParam0, iParam4, 8, 3);
			iVar5 = func_1115(iVar6);
			Global_4266672 = iParam4;
			Global_4266671 = iVar6;
			Global_4266670 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4266675 == iParam10)
		{
			iVar8 = Global_4266674;
			iVar7 = Global_4266673;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_1125(iParam0, iParam10, 1, 3);
			iVar7 = func_1115(iVar8);
			Global_4266675 = iParam10;
			Global_4266674 = iVar8;
			Global_4266673 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0xEA26831785699C09(iVar4, -1855618474, 0) || unk_0xEA26831785699C09(iVar4, 351511157, 0)) || unk_0xEA26831785699C09(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0xEA26831785699C09(iVar8, 1438931885, 0) && !unk_0xEA26831785699C09(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0xEA26831785699C09(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0xEA26831785699C09(iVar2, -372885432, 0))
			{
				if (unk_0xEA26831785699C09(iVar4, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0xEA26831785699C09(iVar2, 531704825, 0))
			{
				if (unk_0xEA26831785699C09(iVar4, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0xEA26831785699C09(iVar2, -372885432, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0xEA26831785699C09(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_1125(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0xEA26831785699C09(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -1473812293, 0))
			{
				if (unk_0xEA26831785699C09(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0xEA26831785699C09(iVar4, -63750166, 0) || unk_0xEA26831785699C09(iVar4, -870074461, 0)) || unk_0xEA26831785699C09(iVar4, -868698159, 0)) || unk_0xEA26831785699C09(iVar4, 1769225721, 0)) || unk_0xEA26831785699C09(iVar4, -1834446747, 0)) || unk_0xEA26831785699C09(iVar4, -1119232689, 0)) || unk_0xEA26831785699C09(iVar4, -2102859770, 0)) || unk_0xEA26831785699C09(iVar4, 1784133476, 0)) || unk_0xEA26831785699C09(iVar4, 2099109084, 0)) || unk_0xEA26831785699C09(iVar4, -1488441032, 0)) || unk_0xEA26831785699C09(iVar4, -1719167561, 0)) || unk_0xEA26831785699C09(iVar4, -1274099003, 0)) || unk_0xEA26831785699C09(iVar4, -1410897066, 0)) || unk_0xEA26831785699C09(iVar4, 320460654, 0)) || unk_0xEA26831785699C09(iVar4, -826135203, 0)) || unk_0xEA26831785699C09(iVar4, 1431529976, 0)) || unk_0xEA26831785699C09(iVar4, 1723403459, 0)) || unk_0xEA26831785699C09(iVar4, 2044466679, 0)) || unk_0xEA26831785699C09(iVar4, -2020757158, 0)) || unk_0xEA26831785699C09(iVar4, -1064262817, 0)) || unk_0xEA26831785699C09(iVar4, -1419806467, 0)) || unk_0xEA26831785699C09(iVar4, -1053842259, 0)) || unk_0xEA26831785699C09(iVar4, -1358888880, 0)) || unk_0xEA26831785699C09(iVar4, -441291342, 0)) || unk_0xEA26831785699C09(iVar4, -785939537, 0)) || unk_0xEA26831785699C09(iVar4, -1507532917, 0)) || unk_0xEA26831785699C09(iVar4, -1446333198, 0)) || unk_0xEA26831785699C09(iVar4, 492620493, 0)) || unk_0xEA26831785699C09(iVar4, -416620954, 0)) || unk_0xEA26831785699C09(iVar4, -102825006, 0)) || unk_0xEA26831785699C09(iVar4, 137011325, 0)) || unk_0xEA26831785699C09(iVar4, -641612092, 0)) || unk_0xEA26831785699C09(iVar4, -1506370874, 0)) || unk_0xEA26831785699C09(iVar4, -1786447517, 0)) || unk_0xEA26831785699C09(iVar4, -1010805287, 0)) || unk_0xEA26831785699C09(iVar4, -1325813684, 0)) || unk_0xEA26831785699C09(iVar4, -549843760, 0)) || unk_0xEA26831785699C09(iVar4, 1690933245, 0)) || unk_0xEA26831785699C09(iVar4, 1360588936, 0)) || unk_0xEA26831785699C09(iVar4, 2136821028, 0)) || unk_0xEA26831785699C09(iVar4, 1830529185, 0)) || unk_0xEA26831785699C09(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_1073(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0xEA26831785699C09(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_1073(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0xEA26831785699C09(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0xEA26831785699C09(iVar4, -1127835965, 0)) || unk_0xEA26831785699C09(iVar4, -1506370874, 0)) || unk_0xEA26831785699C09(iVar4, -1786447517, 0)) || unk_0xEA26831785699C09(iVar4, -1010805287, 0)) || unk_0xEA26831785699C09(iVar4, -1325813684, 0)) || unk_0xEA26831785699C09(iVar4, 1690933245, 0)) || unk_0xEA26831785699C09(iVar4, 1360588936, 0)) || unk_0xEA26831785699C09(iVar4, 2136821028, 0)) || unk_0xEA26831785699C09(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0xEA26831785699C09(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -353070590, 0))
			{
				if (((unk_0xEA26831785699C09(iVar4, -870074461, 0) || unk_0xEA26831785699C09(iVar4, -868698159, 0)) || unk_0xEA26831785699C09(iVar4, 1769225721, 0)) || unk_0xEA26831785699C09(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -1473812293, 0)) || (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_1125(iParam0, iParam11, 4, 3);
				}
				if (unk_0xEA26831785699C09(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, 654065530, 0))
			{
				if (unk_0xEA26831785699C09(iVar4, -7109286, 0) || unk_0xEA26831785699C09(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0xEA26831785699C09(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0xEA26831785699C09(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0xEA26831785699C09(iVar4, 974680318, 0)) || unk_0xEA26831785699C09(iVar4, 1625463492, 0)) || unk_0xEA26831785699C09(iVar4, -713698407, 0)) || unk_0xEA26831785699C09(iVar4, 1843965488, 0)) || unk_0xEA26831785699C09(iVar4, -779835469, 0)) || unk_0xEA26831785699C09(iVar4, -1086258388, 0)) || unk_0xEA26831785699C09(iVar4, 1627756587, 0)) || unk_0xEA26831785699C09(iVar4, 1021189127, 0)) || unk_0xEA26831785699C09(iVar4, -1939378450, 0)) || unk_0xEA26831785699C09(iVar4, 441715397, 0)) || unk_0xEA26831785699C09(iVar4, 264959411, 0)) || unk_0xEA26831785699C09(iVar4, -1127835965, 0)) || unk_0xEA26831785699C09(iVar4, 153792394, 0)) || unk_0xEA26831785699C09(iVar4, -672871169, 0)) || unk_0xEA26831785699C09(iVar4, 572416369, 0)) || unk_0xEA26831785699C09(iVar4, -196114988, 0)) || unk_0xEA26831785699C09(iVar4, 1322269404, 0)) || unk_0xEA26831785699C09(iVar4, 1769225721, 0)) || unk_0xEA26831785699C09(iVar4, -1655154167, 0)) || unk_0xEA26831785699C09(iVar4, -1607949555, 0)) || unk_0xEA26831785699C09(iVar4, 2099109084, 0)) || unk_0xEA26831785699C09(iVar4, -1488441032, 0)) || unk_0xEA26831785699C09(iVar4, -1719167561, 0)) || unk_0xEA26831785699C09(iVar4, 320460654, 0)) || unk_0xEA26831785699C09(iVar4, -2017999390, 0)) || unk_0xEA26831785699C09(iVar4, -1410897066, 0)) || unk_0xEA26831785699C09(iVar4, -826135203, 0)) || unk_0xEA26831785699C09(iVar4, 1431529976, 0)) || unk_0xEA26831785699C09(iVar4, 1723403459, 0)) || unk_0xEA26831785699C09(iVar4, 2044466679, 0)) || unk_0xEA26831785699C09(iVar4, -1419806467, 0)) || unk_0xEA26831785699C09(iVar4, -1053842259, 0)) || unk_0xEA26831785699C09(iVar4, -1358888880, 0)) || unk_0xEA26831785699C09(iVar4, -785939537, 0)) || unk_0xEA26831785699C09(iVar4, -416620954, 0)) || unk_0xEA26831785699C09(iVar4, -102825006, 0)) || unk_0xEA26831785699C09(iVar4, 137011325, 0)) || unk_0xEA26831785699C09(iVar4, -641612092, 0)) || unk_0xEA26831785699C09(iVar4, -1351486939, 0)) || unk_0xEA26831785699C09(iVar4, -491588875, 0)) || unk_0xEA26831785699C09(iVar4, -1506370874, 0)) || unk_0xEA26831785699C09(iVar4, -1786447517, 0)) || unk_0xEA26831785699C09(iVar4, -1010805287, 0)) || unk_0xEA26831785699C09(iVar4, -1325813684, 0)) || unk_0xEA26831785699C09(iVar4, -828478571, 0)) || unk_0xEA26831785699C09(iVar4, 1690933245, 0)) || unk_0xEA26831785699C09(iVar4, 2136821028, 0)) || unk_0xEA26831785699C09(iVar4, 2136821028, 0)) || unk_0xEA26831785699C09(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!unk_0xEA26831785699C09(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0xEA26831785699C09(iVar6, 651155766, 0)) || unk_0xEA26831785699C09(iVar6, 974680318, 0)) || unk_0xEA26831785699C09(iVar6, -1786447517, 0)) || unk_0xEA26831785699C09(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0xEA26831785699C09(func_1125(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xEA26831785699C09(func_1125(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0xEA26831785699C09(iVar4, 248194463, 0)) || unk_0xEA26831785699C09(iVar4, 572350888, 0)) || unk_0xEA26831785699C09(iVar4, -1817355735, 0)) || unk_0xEA26831785699C09(iVar4, -713698407, 0)) || unk_0xEA26831785699C09(iVar4, 1843965488, 0)) || unk_0xEA26831785699C09(iVar4, 140732128, 0)) || unk_0xEA26831785699C09(iVar4, 1863955539, 0)) || unk_0xEA26831785699C09(iVar4, 1627756587, 0)) || unk_0xEA26831785699C09(iVar4, 441715397, 0)) || unk_0xEA26831785699C09(iVar4, 153792394, 0)) || unk_0xEA26831785699C09(iVar4, 572416369, 0)) || unk_0xEA26831785699C09(iVar4, 2099109084, 0)) || unk_0xEA26831785699C09(iVar4, -1488441032, 0)) || unk_0xEA26831785699C09(iVar4, 1538937264, 0)) || unk_0xEA26831785699C09(iVar4, 2044466679, 0)) || unk_0xEA26831785699C09(iVar4, -1064262817, 0)) || unk_0xEA26831785699C09(iVar4, -1053842259, 0)) || unk_0xEA26831785699C09(iVar4, -1358888880, 0)) || unk_0xEA26831785699C09(iVar4, -441291342, 0)) || unk_0xEA26831785699C09(iVar4, -785939537, 0)) || unk_0xEA26831785699C09(iVar4, -641612092, 0)) || unk_0xEA26831785699C09(iVar4, -1506370874, 0)) || unk_0xEA26831785699C09(iVar4, -1786447517, 0)) || unk_0xEA26831785699C09(iVar4, -1010805287, 0)) || unk_0xEA26831785699C09(iVar4, -1325813684, 0)) || unk_0xEA26831785699C09(iVar4, -828478571, 0)) || unk_0xEA26831785699C09(iVar4, 1690933245, 0)) || unk_0xEA26831785699C09(iVar4, 1360588936, 0)) || unk_0xEA26831785699C09(iVar4, 2136821028, 0)) || unk_0xEA26831785699C09(iVar4, 602650322, 0)) || unk_0xEA26831785699C09(iVar4, -99064836, 0)) || unk_0xEA26831785699C09(iVar4, -148928294, 0)) || unk_0xEA26831785699C09(iVar4, 1927516484, 0)) || unk_0xEA26831785699C09(iVar4, -435539886, 0)) || unk_0xEA26831785699C09(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0xEA26831785699C09(iVar6, -1778265882, 0)) || unk_0xEA26831785699C09(iVar6, 1965569012, 0)) || unk_0xEA26831785699C09(iVar6, 651155766, 0)) || unk_0xEA26831785699C09(iVar6, -1914383230, 0)) || unk_0xEA26831785699C09(iVar6, 1553766533, 0)) || unk_0xEA26831785699C09(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0xEA26831785699C09(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0xEA26831785699C09(iVar6, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0xEA26831785699C09(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_1120(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0xEA26831785699C09(iVar4, -1446333198, 0) || unk_0xEA26831785699C09(iVar4, 492620493, 0)) || unk_0xEA26831785699C09(iVar4, -1351486939, 0)) || unk_0xEA26831785699C09(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 505220913, 0)))
				{
					if (unk_0xEA26831785699C09(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_1126(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_1115(func_1125(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_1120(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0xEA26831785699C09(iVar4, -1446333198, 0) || unk_0xEA26831785699C09(iVar4, 492620493, 0)) || unk_0xEA26831785699C09(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 1965569012, 0))) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 651155766, 0))) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 505220913, 0))) || unk_0xEA26831785699C09(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0xEA26831785699C09(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_1126(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_1115(func_1125(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0xEA26831785699C09(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!unk_0xEA26831785699C09(iVar4, -7109286, 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 1965569012, 0))) || unk_0xEA26831785699C09(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0xEA26831785699C09(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0xEA26831785699C09(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 651155766, 0)) && unk_0xEA26831785699C09(iVar2, -277681306, 0)) || (((iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 505220913, 0)) && !unk_0xEA26831785699C09(iVar2, -277681306, 0)) && !unk_0xEA26831785699C09(iVar6, 558082254, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0xEA26831785699C09(iVar6, 684992453, 0)) || unk_0xEA26831785699C09(iVar6, 1458930564, 0)) || unk_0xEA26831785699C09(iVar6, 2048281121, 0)) || unk_0xEA26831785699C09(iVar6, 19149565, 0))
				{
					if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0xEA26831785699C09(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0xEA26831785699C09(iVar6, 684992453, 0))
				{
					if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0xEA26831785699C09(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0xEA26831785699C09(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_1072(iVar6)) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xEA26831785699C09(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0xEA26831785699C09(iVar4, 1627756587, 0)) || (iVar4 != -1 && unk_0xEA26831785699C09(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0xEA26831785699C09(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0xEA26831785699C09(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4266666 == iParam1)
		{
			iVar12 = Global_4266665;
			iVar11 = Global_4266664;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_1125(iParam0, iParam1, 7, 4);
			iVar11 = func_1115(iVar12);
			Global_4266666 = iParam1;
			Global_4266665 = iVar12;
			Global_4266664 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4266669 == iParam3)
		{
			iVar14 = Global_4266668;
			iVar13 = Global_4266667;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_1125(iParam0, iParam3, 11, 4);
			iVar13 = func_1115(iVar14);
			Global_4266669 = iParam3;
			Global_4266668 = iVar14;
			Global_4266667 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4266672 == iParam4)
		{
			iVar16 = Global_4266671;
			iVar15 = Global_4266670;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_1125(iParam0, iParam4, 8, 4);
			iVar15 = func_1115(iVar16);
			Global_4266672 = iParam4;
			Global_4266671 = iVar16;
			Global_4266670 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4266675 == iParam10)
		{
			iVar18 = Global_4266674;
			iVar17 = Global_4266673;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_1125(iParam0, iParam10, 1, 4);
			iVar17 = func_1115(iVar18);
			Global_4266675 = iParam10;
			Global_4266674 = iVar18;
			Global_4266673 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_1125(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0xEA26831785699C09(iVar14, -1855618474, 0) || unk_0xEA26831785699C09(iVar14, 351511157, 0)) || unk_0xEA26831785699C09(iVar14, -299089347, 0)) || unk_0xEA26831785699C09(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0xEA26831785699C09(iVar18, 1438931885, 0) && !unk_0xEA26831785699C09(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xEA26831785699C09(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0xEA26831785699C09(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0xEA26831785699C09(iVar12, -372885432, 0))
			{
				if (unk_0xEA26831785699C09(iVar14, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0xEA26831785699C09(iVar12, 531704825, 0))
			{
				if (unk_0xEA26831785699C09(iVar14, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0xEA26831785699C09(iVar12, -372885432, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0xEA26831785699C09(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (unk_0xEA26831785699C09(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -1473812293, 0))
			{
				if (unk_0xEA26831785699C09(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((unk_0xEA26831785699C09(iVar14, -63750166, 0) || unk_0xEA26831785699C09(iVar14, -1410897066, 0)) || unk_0xEA26831785699C09(iVar14, 320460654, 0)) || unk_0xEA26831785699C09(iVar14, -826135203, 0)) || unk_0xEA26831785699C09(iVar14, -747583185, 0)) || unk_0xEA26831785699C09(iVar14, -416620954, 0)) || unk_0xEA26831785699C09(iVar14, -733792105, 0)) || unk_0xEA26831785699C09(iVar14, -641612092, 0)) || unk_0xEA26831785699C09(iVar14, -1507532917, 0)) || unk_0xEA26831785699C09(iVar14, 1360588936, 0)) || unk_0xEA26831785699C09(iVar14, -549843760, 0)) || unk_0xEA26831785699C09(iVar14, 1830529185, 0)) || unk_0xEA26831785699C09(iVar14, -1506370874, 0)) || unk_0xEA26831785699C09(iVar14, -1786447517, 0)) || unk_0xEA26831785699C09(iVar14, -1010805287, 0)) || unk_0xEA26831785699C09(iVar14, 2136821028, 0)) || unk_0xEA26831785699C09(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_1073(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_1073(iParam0, iParam3) || unk_0xEA26831785699C09(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0xEA26831785699C09(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -353070590, 0))
			{
				if ((((unk_0xEA26831785699C09(iVar14, -870074461, 0) || unk_0xEA26831785699C09(iVar14, -1174924468, 0)) || unk_0xEA26831785699C09(iVar14, -868698159, 0)) || unk_0xEA26831785699C09(iVar14, 1769225721, 0)) || unk_0xEA26831785699C09(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -1473812293, 0))
		{
			if (unk_0xEA26831785699C09(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, 596326873, 0))
		{
			if (unk_0xEA26831785699C09(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0xEA26831785699C09(func_1125(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xEA26831785699C09(func_1125(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -1473812293, 0)) || (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_1125(iParam0, iParam11, 4, 4);
				}
				if (unk_0xEA26831785699C09(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0xEA26831785699C09(iVar12, -920534092, 0) || unk_0xEA26831785699C09(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0xEA26831785699C09(iVar14, 684992453, 0) || unk_0xEA26831785699C09(iVar14, 916636514, 0)) || unk_0xEA26831785699C09(iVar14, -1939378450, 0)) || unk_0xEA26831785699C09(iVar14, -820724897, 0)) || unk_0xEA26831785699C09(iVar14, 153792394, 0)) || unk_0xEA26831785699C09(iVar14, -872449705, 0)) || unk_0xEA26831785699C09(iVar14, 1714969731, 0)) || unk_0xEA26831785699C09(iVar14, 1055526375, 0)) || unk_0xEA26831785699C09(iVar14, 947651647, 0)) || unk_0xEA26831785699C09(iVar14, -549843760, 0)) || unk_0xEA26831785699C09(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0xEA26831785699C09(iVar14, 700658917, 0) || unk_0xEA26831785699C09(iVar14, 745826556, 0)) || unk_0xEA26831785699C09(iVar14, 144417099, 0))
				{
					if (unk_0xEA26831785699C09(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0xEA26831785699C09(iVar16, 1553766533, 0) || unk_0xEA26831785699C09(iVar16, -1914383230, 0))
				{
					if (unk_0xEA26831785699C09(iVar12, -920534092, 0))
					{
						if (unk_0xEA26831785699C09(iVar16, 441715397, 0) || unk_0xEA26831785699C09(iVar16, 264959411, 0))
						{
							if (unk_0xEA26831785699C09(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xEA26831785699C09(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0xEA26831785699C09(iVar19, 1406402954, 1)) || (iVar19 != -1 && unk_0xEA26831785699C09(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0xEA26831785699C09(iVar14, -1358888880, 0) || unk_0xEA26831785699C09(iVar14, -102825006, 0)) || unk_0xEA26831785699C09(iVar14, -733792105, 0)) || unk_0xEA26831785699C09(iVar14, -641612092, 0)) || unk_0xEA26831785699C09(iVar14, -1507532917, 0)) || unk_0xEA26831785699C09(iVar14, -828478571, 0)) || unk_0xEA26831785699C09(iVar14, 1360588936, 0)) || unk_0xEA26831785699C09(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_1120(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0xEA26831785699C09(iVar14, 2026620439, 0)) || unk_0xEA26831785699C09(iVar14, -761463976, 0)) || unk_0xEA26831785699C09(iVar14, -1347486026, 0)) || unk_0xEA26831785699C09(iVar14, -939525357, 0)) || unk_0xEA26831785699C09(iVar14, -1119232689, 0)) || unk_0xEA26831785699C09(iVar14, -2102859770, 0)) || unk_0xEA26831785699C09(iVar14, 1784133476, 0)) || unk_0xEA26831785699C09(iVar14, -1488441032, 0)) || unk_0xEA26831785699C09(iVar14, 2044466679, 0)) || unk_0xEA26831785699C09(iVar14, -2020757158, 0)) || unk_0xEA26831785699C09(iVar14, -430330349, 0)) || unk_0xEA26831785699C09(iVar14, -1351486939, 0)) || unk_0xEA26831785699C09(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || unk_0xEA26831785699C09(iVar14, -55550566, 0))
				{
					if (!unk_0xEA26831785699C09(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0xEA26831785699C09(iVar14, -530089825, 0)) || unk_0xEA26831785699C09(iVar14, 1965569012, 0)) || unk_0xEA26831785699C09(iVar14, -1200513218, 0)) || unk_0xEA26831785699C09(iVar14, -713698407, 0)) || unk_0xEA26831785699C09(iVar14, 1843965488, 0)) || unk_0xEA26831785699C09(iVar14, -55104292, 0)) || unk_0xEA26831785699C09(iVar14, -779835469, 0)) || unk_0xEA26831785699C09(iVar14, -1086258388, 0)) || unk_0xEA26831785699C09(iVar14, 140732128, 0)) || unk_0xEA26831785699C09(iVar14, 2106216756, 0)) || unk_0xEA26831785699C09(iVar14, 1627756587, 0)) || unk_0xEA26831785699C09(iVar14, 441715397, 0)) || unk_0xEA26831785699C09(iVar14, 264959411, 0)) || unk_0xEA26831785699C09(iVar14, -1127835965, 0)) || unk_0xEA26831785699C09(iVar14, -672871169, 0)) || unk_0xEA26831785699C09(iVar14, 572416369, 0)) || unk_0xEA26831785699C09(iVar14, -196114988, 0)) || unk_0xEA26831785699C09(iVar14, -1607949555, 0)) || unk_0xEA26831785699C09(iVar14, 1976716889, 0)) || unk_0xEA26831785699C09(iVar14, 2099109084, 0)) || unk_0xEA26831785699C09(iVar14, -1488441032, 0)) || unk_0xEA26831785699C09(iVar14, 320460654, 0)) || unk_0xEA26831785699C09(iVar14, -2017999390, 0)) || unk_0xEA26831785699C09(iVar14, -1410897066, 0)) || unk_0xEA26831785699C09(iVar14, -826135203, 0)) || unk_0xEA26831785699C09(iVar14, -1053842259, 0)) || unk_0xEA26831785699C09(iVar14, -1358888880, 0)) || unk_0xEA26831785699C09(iVar14, -441291342, 0)) || unk_0xEA26831785699C09(iVar14, -747583185, 0)) || unk_0xEA26831785699C09(iVar14, 1407863332, 0)) || unk_0xEA26831785699C09(iVar14, -1986415230, 0)) || unk_0xEA26831785699C09(iVar14, -785939537, 0)) || unk_0xEA26831785699C09(iVar14, -1103045158, 0)) || unk_0xEA26831785699C09(iVar14, -102825006, 0)) || unk_0xEA26831785699C09(iVar14, -641612092, 0)) || unk_0xEA26831785699C09(iVar14, -1507532917, 0)) || unk_0xEA26831785699C09(iVar14, -1506370874, 0)) || unk_0xEA26831785699C09(iVar14, -1786447517, 0)) || unk_0xEA26831785699C09(iVar14, -1010805287, 0)) || unk_0xEA26831785699C09(iVar14, 2136821028, 0)) || unk_0xEA26831785699C09(iVar14, 1360588936, 0)) || unk_0xEA26831785699C09(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (unk_0xEA26831785699C09(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0xEA26831785699C09(iVar16, 1455992833, 0)) || unk_0xEA26831785699C09(iVar16, 153792394, 0)) || unk_0xEA26831785699C09(iVar16, -870074461, 0)) || unk_0xEA26831785699C09(iVar16, -1174924468, 0)) || unk_0xEA26831785699C09(iVar16, -868698159, 0)) || unk_0xEA26831785699C09(iVar16, -1177480446, 0)) || unk_0xEA26831785699C09(iVar16, -1347486026, 0)) || unk_0xEA26831785699C09(iVar16, -1655154167, 0)) || unk_0xEA26831785699C09(iVar16, -2105858993, 0)) || unk_0xEA26831785699C09(iVar16, 1893564692, 0)) || unk_0xEA26831785699C09(iVar16, 1710451520, 0)) || unk_0xEA26831785699C09(iVar16, 1416808511, 0)) || unk_0xEA26831785699C09(iVar16, 1641506460, 0)) || unk_0xEA26831785699C09(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || unk_0xEA26831785699C09(iVar16, -1119232689, 0)) || unk_0xEA26831785699C09(iVar16, -2102859770, 0)) || unk_0xEA26831785699C09(iVar16, 1784133476, 0)) || unk_0xEA26831785699C09(iVar16, -1607949555, 0)) || unk_0xEA26831785699C09(iVar16, 1976716889, 0)) || unk_0xEA26831785699C09(iVar16, 2099109084, 0)) || unk_0xEA26831785699C09(iVar16, -1488441032, 0)) || unk_0xEA26831785699C09(iVar16, 2044466679, 0)) || unk_0xEA26831785699C09(iVar16, -2020757158, 0)) || unk_0xEA26831785699C09(iVar16, -1064262817, 0)) || unk_0xEA26831785699C09(iVar16, -1419806467, 0)) || unk_0xEA26831785699C09(iVar16, -1053842259, 0)) || unk_0xEA26831785699C09(iVar16, -1358888880, 0)) || unk_0xEA26831785699C09(iVar16, -849839091, 0)) || unk_0xEA26831785699C09(iVar16, -2088146832, 0)) || unk_0xEA26831785699C09(iVar16, -352447393, 0)) || unk_0xEA26831785699C09(iVar16, -642551350, 0)) || unk_0xEA26831785699C09(iVar16, -819569488, 0)) || unk_0xEA26831785699C09(iVar16, -2020068325, 0)) || unk_0xEA26831785699C09(iVar16, -1786447517, 0)) || unk_0xEA26831785699C09(iVar16, -1010805287, 0)) || unk_0xEA26831785699C09(iVar16, -1325813684, 0)) || unk_0xEA26831785699C09(iVar16, -549843760, 0)) || unk_0xEA26831785699C09(iVar16, -269266203, 0)) || unk_0xEA26831785699C09(iVar16, 201427653, 0)) || unk_0xEA26831785699C09(iVar16, 967829025, 0)) || unk_0xEA26831785699C09(iVar16, -685039259, 0)) || unk_0xEA26831785699C09(iVar16, -1266557933, 0)) || unk_0xEA26831785699C09(iVar16, -979468724, 0)) || unk_0xEA26831785699C09(iVar16, -58412562, 0)) || unk_0xEA26831785699C09(iVar16, -435539886, 0)) || unk_0xEA26831785699C09(iVar16, 974680318, 0))
				{
					if (!unk_0xEA26831785699C09(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0xEA26831785699C09(iVar16, 1965569012, 0) || unk_0xEA26831785699C09(iVar16, 684992453, 0)) || unk_0xEA26831785699C09(iVar16, 916636514, 0)) || unk_0xEA26831785699C09(iVar16, -1939378450, 0)) || unk_0xEA26831785699C09(iVar16, 441715397, 0)) || unk_0xEA26831785699C09(iVar16, 264959411, 0)) || unk_0xEA26831785699C09(iVar16, 1353777856, 0)) || unk_0xEA26831785699C09(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_1116(iParam0, iParam4, 0) != -99)
				{
					if (unk_0xEA26831785699C09(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, 654065530, 0))
			{
				if (unk_0xEA26831785699C09(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0xEA26831785699C09(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_1125(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0xEA26831785699C09(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_1125(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0xEA26831785699C09(iVar19, -1320139576, 1))
				{
					unk_0x47F9B535E50AE911(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_1125(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0xEA26831785699C09(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 1965569012, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1119232689, 0))) || unk_0xEA26831785699C09(iVar14, 320460654, 0)) || unk_0xEA26831785699C09(iVar14, -2017999390, 0)) || unk_0xEA26831785699C09(iVar14, -1410897066, 0)) || unk_0xEA26831785699C09(iVar14, -826135203, 0)) || unk_0xEA26831785699C09(iVar14, 2044466679, 0)) || unk_0xEA26831785699C09(iVar14, -2020757158, 0)) || unk_0xEA26831785699C09(iVar14, -1064262817, 0)) || unk_0xEA26831785699C09(iVar14, -1053842259, 0)) || unk_0xEA26831785699C09(iVar14, -1358888880, 0)) || unk_0xEA26831785699C09(iVar14, -441291342, 0)) || unk_0xEA26831785699C09(iVar14, -747583185, 0)) || unk_0xEA26831785699C09(iVar14, -1986415230, 0)) || unk_0xEA26831785699C09(iVar14, -430330349, 0)) || unk_0xEA26831785699C09(iVar14, -102825006, 0)) || unk_0xEA26831785699C09(iVar14, -733792105, 0)) || unk_0xEA26831785699C09(iVar14, -641612092, 0)) || unk_0xEA26831785699C09(iVar14, -1351486939, 0)) || unk_0xEA26831785699C09(iVar14, -1507532917, 0)) || unk_0xEA26831785699C09(iVar14, 2030343924, 0)) || unk_0xEA26831785699C09(iVar14, -828478571, 0)) || unk_0xEA26831785699C09(iVar14, 1360588936, 0)) || unk_0xEA26831785699C09(iVar14, -1506370874, 0)) || unk_0xEA26831785699C09(iVar14, -1786447517, 0)) || unk_0xEA26831785699C09(iVar14, -1010805287, 0)) || unk_0xEA26831785699C09(iVar14, 2136821028, 0)) || unk_0xEA26831785699C09(iVar14, 602650322, 0)) || unk_0xEA26831785699C09(iVar14, 905042630, 0)) || unk_0xEA26831785699C09(iVar14, 1204125293, 0)) || unk_0xEA26831785699C09(iVar14, -1855618474, 0)) || unk_0xEA26831785699C09(iVar14, 1927516484, 0)) || unk_0xEA26831785699C09(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0xEA26831785699C09(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 821147517, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1119232689, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1607949555, 0))) || unk_0xEA26831785699C09(iVar14, 320460654, 0)) || unk_0xEA26831785699C09(iVar14, -2017999390, 0)) || unk_0xEA26831785699C09(iVar14, -1410897066, 0)) || unk_0xEA26831785699C09(iVar14, -826135203, 0)) || unk_0xEA26831785699C09(iVar14, 1965569012, 0)) || unk_0xEA26831785699C09(iVar14, -1064262817, 0)) || unk_0xEA26831785699C09(iVar14, -1053842259, 0)) || unk_0xEA26831785699C09(iVar14, -1358888880, 0)) || unk_0xEA26831785699C09(iVar14, -441291342, 0)) || unk_0xEA26831785699C09(iVar14, -747583185, 0)) || unk_0xEA26831785699C09(iVar14, -1986415230, 0)) || unk_0xEA26831785699C09(iVar14, -430330349, 0)) || unk_0xEA26831785699C09(iVar14, -102825006, 0)) || unk_0xEA26831785699C09(iVar14, -733792105, 0)) || unk_0xEA26831785699C09(iVar14, -641612092, 0)) || unk_0xEA26831785699C09(iVar14, -1351486939, 0)) || unk_0xEA26831785699C09(iVar14, -1507532917, 0)) || unk_0xEA26831785699C09(iVar14, 2030343924, 0)) || unk_0xEA26831785699C09(iVar14, -828478571, 0)) || unk_0xEA26831785699C09(iVar14, 1360588936, 0)) || unk_0xEA26831785699C09(iVar14, -1506370874, 0)) || unk_0xEA26831785699C09(iVar14, -1786447517, 0)) || unk_0xEA26831785699C09(iVar14, -1010805287, 0)) || unk_0xEA26831785699C09(iVar14, 2136821028, 0)) || unk_0xEA26831785699C09(iVar14, 1831422288, 0)) || unk_0xEA26831785699C09(iVar14, 1927516484, 0)) || unk_0xEA26831785699C09(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 1147939952, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1882920022, 0))) || unk_0xEA26831785699C09(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && unk_0xEA26831785699C09(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0xEA26831785699C09(iVar16, 1965569012, 0))
				{
					if (unk_0xEA26831785699C09(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((unk_0xEA26831785699C09(iVar16, -1786447517, 0) || unk_0xEA26831785699C09(iVar16, -1010805287, 0)) || unk_0xEA26831785699C09(iVar16, -1325813684, 0)) || unk_0xEA26831785699C09(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((unk_0xEA26831785699C09(iVar16, -1703203608, 0) || unk_0xEA26831785699C09(iVar16, -1415000253, 0)) || unk_0xEA26831785699C09(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0xEA26831785699C09(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -530089825, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -994703884, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0xEA26831785699C09(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0xEA26831785699C09(iVar16, -7109286, 0))
				{
					return 0;
				}
				else if (((unk_0xEA26831785699C09(iVar16, -1786447517, 0) || unk_0xEA26831785699C09(iVar16, -1010805287, 0)) || unk_0xEA26831785699C09(iVar16, -1325813684, 0)) || unk_0xEA26831785699C09(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0xEA26831785699C09(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0xEA26831785699C09(iVar12, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0xEA26831785699C09(iVar16, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0xEA26831785699C09(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0xEA26831785699C09(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_1125(iParam0, iParam11, 4, 4);
				}
				if (unk_0xEA26831785699C09(iVar22, -33031567, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_1072(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_1073(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_1125(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0xEA26831785699C09(iVar0, -1119232689, 0) || unk_0xEA26831785699C09(iVar0, -2102859770, 0)) || unk_0xEA26831785699C09(iVar0, 1784133476, 0)) || unk_0xEA26831785699C09(iVar0, 1976716889, 0)) || unk_0xEA26831785699C09(iVar0, 2099109084, 0)) || unk_0xEA26831785699C09(iVar0, -1488441032, 0)) || unk_0xEA26831785699C09(iVar0, -1719167561, 0)) || unk_0xEA26831785699C09(iVar0, -1274099003, 0)) || unk_0xEA26831785699C09(iVar0, -1410897066, 0)) || unk_0xEA26831785699C09(iVar0, 320460654, 0)) || unk_0xEA26831785699C09(iVar0, -826135203, 0)) || unk_0xEA26831785699C09(iVar0, 1431529976, 0)) || unk_0xEA26831785699C09(iVar0, 1723403459, 0)) || unk_0xEA26831785699C09(iVar0, 2044466679, 0)) || unk_0xEA26831785699C09(iVar0, -2020757158, 0)) || unk_0xEA26831785699C09(iVar0, -1064262817, 0)) || unk_0xEA26831785699C09(iVar0, -1419806467, 0)) || unk_0xEA26831785699C09(iVar0, -1053842259, 0)) || unk_0xEA26831785699C09(iVar0, -1358888880, 0)) || unk_0xEA26831785699C09(iVar0, -441291342, 0)) || unk_0xEA26831785699C09(iVar0, -785939537, 0)) || unk_0xEA26831785699C09(iVar0, -1446333198, 0)) || unk_0xEA26831785699C09(iVar0, 492620493, 0)) || unk_0xEA26831785699C09(iVar0, -1506370874, 0)) || unk_0xEA26831785699C09(iVar0, -1786447517, 0)) || unk_0xEA26831785699C09(iVar0, -1010805287, 0)) || unk_0xEA26831785699C09(iVar0, -1325813684, 0)) || unk_0xEA26831785699C09(iVar0, 1690933245, 0)) || unk_0xEA26831785699C09(iVar0, 1360588936, 0)) || unk_0xEA26831785699C09(iVar0, 2136821028, 0)) || unk_0xEA26831785699C09(iVar0, 1927516484, 0)) || unk_0xEA26831785699C09(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0xEA26831785699C09(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_1120(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_1125(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_1115(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0xEA26831785699C09(iVar1, -1393156190, 0)) || unk_0xEA26831785699C09(iVar1, 1843965488, 0)) || unk_0xEA26831785699C09(iVar1, 441715397, 0)) || unk_0xEA26831785699C09(iVar1, 264959411, 0)) || unk_0xEA26831785699C09(iVar1, -1410897066, 0)) || unk_0xEA26831785699C09(iVar1, 320460654, 0)) || unk_0xEA26831785699C09(iVar1, -2017999390, 0)) || unk_0xEA26831785699C09(iVar1, -826135203, 0)) || unk_0xEA26831785699C09(iVar1, -747583185, 0)) || unk_0xEA26831785699C09(iVar1, -102825006, 0)) || unk_0xEA26831785699C09(iVar1, -733792105, 0)) || unk_0xEA26831785699C09(iVar1, -641612092, 0)) || unk_0xEA26831785699C09(iVar1, -1507532917, 0)) || unk_0xEA26831785699C09(iVar1, -1506370874, 0)) || unk_0xEA26831785699C09(iVar1, -1786447517, 0)) || unk_0xEA26831785699C09(iVar1, -1010805287, 0)) || unk_0xEA26831785699C09(iVar1, -1325813684, 0)) || unk_0xEA26831785699C09(iVar1, 1690933245, 0)) || unk_0xEA26831785699C09(iVar1, 1360588936, 0)) || unk_0xEA26831785699C09(iVar1, 2136821028, 0)) || unk_0xEA26831785699C09(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1074(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	func_1106(unk_0x36163153849DFDA1("hairOverlay"), iParam0);
	iVar1 = func_1105(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_71399;
		}
		func_1138(iVar1, 1, iParam2);
	}
	func_1075(iParam0, bParam3, 0);
}

void func_1075(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = Global_71399;
		unk_0x0E8C49CE004F363A(iParam0);
		iVar2 = func_1104(iParam0);
		bVar3 = func_1101(iParam0, 0);
		bVar4 = func_1097(iParam0);
		bVar5 = func_1096(iParam0);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_1093(iVar6, iVar0))
			{
				if (func_1088(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_1085(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0x65575B2A90F35E4E(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_1093(123, iVar0))
		{
			if (unk_0xE809DD2813DADD34(-1719270477, -1824026490) != 7)
			{
				unk_0x65575B2A90F35E4E(iParam0, -1719270477, -1824026490);
			}
		}
		iVar8 = unk_0xC75EFC344B2FCEB8(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (unk_0xF09D93BA157FE826(iVar2, iVar7, &Var9))
			{
				if (!unk_0xC4ED190294E9E658(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_1093(iVar10, iVar0))
					{
						if (func_1085(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_1077(Var9.f_2, Var9.f_3))
							{
								unk_0x65575B2A90F35E4E(iParam0, Var9.f_2, Var9.f_3);
								func_1076(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_1076(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -2083543812);
					break;
				
				case -485989621:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1873408074);
					break;
				
				case 711356870:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1873408074);
					break;
				
				case 111487556:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 510898066);
					break;
				
				case 588276502:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 510898066);
					break;
				
				case -3335024:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 557464221);
					break;
				
				case 1184770609:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 557464221);
					break;
				
				case 359647189:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2089193796);
					break;
				
				case 1545327916:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1305509445);
					break;
				
				case 954502846:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -638853135);
					break;
				
				case -893208491:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -638853135);
					break;
				
				case -1661674318:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1601527241);
					break;
				
				case -1624645348:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1960396175);
					break;
				
				case 620358850:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 54045697);
					break;
				
				case 122204512:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1310058833);
					break;
				
				case -645147161:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 251854291);
					break;
				
				case -375556598:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2062329004);
					break;
				
				case 1841102407:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1538230799);
					break;
				
				case 831620593:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -59766962);
					break;
				
				case 1129884031:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1480518916);
					break;
				
				case 2092301321:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -482380281);
					break;
				
				case 580667351:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -76867803);
					break;
				
				case 1538832911:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -76867803);
					break;
				
				case -1355259635:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -533311445);
					break;
				
				case -1583168030:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2137255691);
					break;
				
				case -1831032746:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2137255691);
					break;
				
				case -2060448515:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -2042378246);
					break;
				
				case -50365286:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 756993084);
					break;
				
				case -364095692:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 756993084);
					break;
				
				case -606979520:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1161584545);
					break;
				
				case -1057062007:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1161584545);
					break;
				
				case -1253872621:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1528861297);
					break;
				
				case -1525625938:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1528861297);
					break;
				
				case 603801989:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 806416816);
					break;
				
				case 432289043:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 806416816);
					break;
				
				case 176592536:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1433191244);
					break;
				
				case -126291331:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1433191244);
					break;
				
				case 2093415191:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1917136673);
					break;
				
				case 1383966341:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1917136673);
					break;
				
				case 1061027846:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1634927571);
					break;
				
				case 610754913:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1634927571);
					break;
				
				case 1856271834:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1965545249);
					break;
				
				case 151235226:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1965545249);
					break;
				
				case 1292317344:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1855774824);
					break;
				
				case 1592055387:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1855774824);
					break;
			}
			switch (iParam2)
			{
				case 1389004292:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -408720218);
					break;
				
				case 459577145:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -789630253);
					break;
				
				case 697971620:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -789630253);
					break;
				
				case -157037136:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1104646403);
					break;
				
				case 70412493:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1104646403);
					break;
				
				case -861963864:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1535753965);
					break;
				
				case -496458438:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1535753965);
					break;
				
				case -1356579150:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -99283873);
					break;
				
				case -1125721545:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -485563451);
					break;
				
				case -2065044930:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1432409825);
					break;
				
				case -346765569:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1432409825);
					break;
				
				case -734816067:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -302122276);
					break;
				
				case -961282630:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -717650362);
					break;
				
				case 1134491538:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -233338433);
					break;
				
				case 842421441:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 314602147);
					break;
				
				case 523316919:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1900511936);
					break;
				
				case 158466873:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 821039296);
					break;
				
				case 1789019544:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -545035086);
					break;
				
				case 1426332252:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1960507422);
					break;
				
				case 1178893529:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -694062896);
					break;
				
				case -1101107129:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1829603753);
					break;
				
				case -1790763503:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2045678662);
					break;
				
				case -1550271812:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 2045678662);
					break;
				
				case -384612940:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1648833799);
					break;
				
				case -45257176:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -75503803);
					break;
				
				case -866087857:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -75503803);
					break;
				
				case -623761102:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1501392494);
					break;
				
				case 1075770310:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1390523363);
					break;
				
				case 342137938:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1390523363);
					break;
				
				case 599407357:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1233403366);
					break;
				
				case 335056082:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1233403366);
					break;
				
				case 1164668855:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1084269847);
					break;
				
				case -424365493:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1084269847);
					break;
				
				case -1995737350:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1344114351);
					break;
				
				case 2052610452:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1344114351);
					break;
				
				case 745160145:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1154163217);
					break;
				
				case 238944633:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1154163217);
					break;
				
				case -1894874368:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1174984361);
					break;
				
				case -1050515545:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, -1174984361);
					break;
				
				case -1296283045:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 495811116);
					break;
				
				case -254061820:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 495811116);
					break;
				
				case -482822209:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1152130184);
					break;
				
				case -1148622755:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1152130184);
					break;
				
				case 499821790:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1987407913);
					break;
				
				case 132940066:
					unk_0x65575B2A90F35E4E(iParam0, 1347816957, 1987407913);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					unk_0x65575B2A90F35E4E(iParam0, 202420620, -501147160);
					break;
			}
			switch (iParam2)
			{
				case -1214222467:
					unk_0x65575B2A90F35E4E(iParam0, 202420620, -1739422168);
					break;
			}
			break;
		
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					unk_0x65575B2A90F35E4E(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					unk_0x65575B2A90F35E4E(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					unk_0x65575B2A90F35E4E(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					unk_0x65575B2A90F35E4E(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					unk_0x65575B2A90F35E4E(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					unk_0x65575B2A90F35E4E(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					unk_0x65575B2A90F35E4E(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					unk_0x65575B2A90F35E4E(iParam0, 484754152, -588549683);
					unk_0x65575B2A90F35E4E(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					unk_0x65575B2A90F35E4E(iParam0, 484754152, -965491494);
					unk_0x65575B2A90F35E4E(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_1077(int iParam0, int iParam1)
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
	
	switch (iParam0)
	{
		case 1347816957:
			switch (iParam1)
			{
				case 1352224647:
				case 1896190035:
					if (iParam1 == 1352224647)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1857392409:
				case -524815620:
					if (iParam1 == 1857392409)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 580667351:
				case -1790763503:
					if (func_648(27109, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 580667351)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1355259635:
				case -384612940:
					if (func_648(27110, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1355259635)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 711356870:
				case 697971620:
					if (func_648(27111, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 711356870)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 588276502:
				case 70412493:
					if (func_648(27112, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 588276502)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1184770609:
				case -496458438:
					if (func_648(27113, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1184770609)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -893208491:
				case -346765569:
					if (func_648(27114, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -893208491)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_648(27115, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1538832911)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_648(25032, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1015392647)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_648(25033, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1742471685)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 408116861:
				case 1306937694:
					if (func_648(25034, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 408116861)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1855327598:
				case -95533995:
					if (func_648(25035, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1855327598)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_648(25036, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1578402908)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_648(25037, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1423366674)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_648(25038, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1611107047)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 742927305:
				case -1339214923:
					if (func_648(25039, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 742927305)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1578833665:
				case 9807447:
					if (func_648(25040, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1578833665)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 773738667:
				case -236005319:
					if (func_648(25041, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 773738667)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 213007702:
				case -1470794594:
					if (func_648(25042, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 213007702)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 432208089:
				case -2100868384:
					if (func_648(25043, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 432208089)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 35817542:
				case 805626890:
					if (func_648(25044, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 35817542)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1786080093:
				case -438487729:
					if (func_648(25045, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1786080093)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -215923306:
				case 1258452311:
					if (func_648(25046, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -215923306)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_648(25047, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1275581512)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1214009019:
				case 390131826:
					if (func_648(25048, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1214009019)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1639713863:
				case -933865090:
					if (func_648(25049, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1639713863)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 529311368:
				case 42888304:
					if (func_648(25050, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 529311368)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_648(25051, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1033895864)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 924043677:
				case 1805955770:
					if (func_648(25052, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 924043677)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -574749266:
				case 2040741242:
					if (func_648(25053, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -574749266)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 519463901:
				case -1572115827:
					if (func_648(25054, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 519463901)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -643353187:
				case -2101278774:
					if (func_648(25055, -1, -1))
					{
						return 0;
					}
					if (func_648(27077, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -643353187)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_648(25056, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1571011017)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -94540936:
				case 1445470992:
					if (func_648(25057, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -94540936)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1884218662:
				case 31459402:
					if (func_648(25058, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1884218662)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -345261869:
				case 850282323:
					if (func_648(25059, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -345261869)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_648(25060, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1022859058)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1786322924:
				case 576453072:
					if (func_648(25061, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1786322924)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_648(25062, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2085269022)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_648(25063, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1511882653)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -506986385:
				case 1650491806:
					if (func_648(25064, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -506986385)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -874081588:
				case 507754313:
					if (func_648(25065, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -874081588)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_648(25066, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2043405937)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 59038842:
				case 539301314:
					if (func_648(25067, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 59038842)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1101237057:
				case 485114319:
					if (func_648(25068, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1101237057)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -657535677:
				case 1397146165:
					if (func_648(25069, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -657535677)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2093585025:
				case -922912500:
					if (func_648(25070, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2093585025)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 908383468:
				case 898093918:
					if (func_648(25071, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 908383468)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1608760399:
				case -513817029:
					if (func_648(25072, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1608760399)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1373660540:
				case 134762953:
					if (func_648(25073, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1373660540)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1854316713:
				case 252404144:
					if (func_648(25074, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1854316713)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -119951196:
				case 168579849:
					if (func_648(25075, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -119951196)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_648(25076, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1649842228)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_648(25077, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1640764925)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1787927716:
				case 33901453:
					if (func_648(25078, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1787927716)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 104283481:
				case -2043232938:
					if (func_648(25079, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 104283481)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 378263500:
				case 1113927554:
					if (func_648(25080, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 378263500)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_648(25081, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1061215309)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_648(25082, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1034166199)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_648(25083, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1828057305)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1486297381:
				case 647456058:
					if (func_648(25084, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1486297381)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -540767159:
				case -717523161:
					if (func_648(25085, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -540767159)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_648(25086, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1235960692)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -329316995:
				case 1857030685:
					if (func_648(25087, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -329316995)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -581880272:
				case -1074922646:
					if (func_648(25088, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -581880272)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_648(25089, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1807345434)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1018409435:
				case -480375220:
					if (func_648(25090, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1018409435)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -136011898:
				case -1158306419:
					if (func_648(25091, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -136011898)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2069494727:
				case 808115088:
					if (func_648(25092, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2069494727)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -642887005:
				case 1544542048:
					if (func_648(25093, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -642887005)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1810837638:
				case 212713658:
					if (func_648(25094, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1810837638)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1034484576:
				case -537477127:
					if (func_648(25095, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1034484576)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_648(25096, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1979445594)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_648(25097, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1533877336)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -892254987:
				case 2038375002:
					if (func_648(25098, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -892254987)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -654222260:
				case -256374303:
					if (func_648(25099, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -654222260)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 450544862:
				case -964420554:
					if (iParam1 == 450544862)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_648(22108, -1, -1) || func_648(25006, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1495413374)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 370906922:
				case -1079776812:
					if (func_648(9481, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 370906922)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 531742637:
				case -948990166:
					if (func_648(9470, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 531742637)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -225805790:
				case 1382201813:
					if (func_648(9475, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -225805790)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -624586952:
				case 1576375706:
					if (func_648(9472, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -624586952)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 915144902:
				case -1356500517:
					if (func_648(9465, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 915144902)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -242746043:
				case 1838019927:
					if (func_648(9463, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -242746043)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1620048835:
				case 618955885:
					if (func_648(9464, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1620048835)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1097603268:
				case 909858453:
					if (func_648(9468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1097603268)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -660672539:
				case 1809389163:
					if (func_648(9469, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -660672539)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -4642188:
				case -382370447:
					if (func_648(9479, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -4642188)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1855977539:
				case -290949038:
					if (func_648(9473, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1855977539)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1537270222:
				case 381474823:
					if (func_648(9480, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1537270222)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1226569770:
				case 570088958:
					if (func_648(9476, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1226569770)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_648(9477, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1641457991)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_648(9471, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1366312361)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1557113221:
				case 655777349:
					if (func_648(9474, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1557113221)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_648(9467, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1690570414)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -507204255:
				case -1043010182:
					if (func_648(9478, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -507204255)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_648(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_648(27085, -1, -1))
						{
							return 0;
						}
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else if (func_648(27084, -1, -1))
					{
						return 0;
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_648(9466, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1375233423)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 490066935:
				case -1583620927:
					if (func_648(22126, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 490066935)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_648(22127, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1193725595)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 628493116:
				case -244079832:
					if (func_648(22128, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 628493116)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_648(22124, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2112155518)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_648(22130, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1511337702)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -627666528:
				case -1874854660:
					if (func_648(22125, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -627666528)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 768324163:
				case -1379192256:
					if (func_648(22129, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 768324163)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_648(22131, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1448761813)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 868551738:
				case -1252683947:
					if (func_648(22132, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 868551738)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_648(22147, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1021262861)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -264447931:
				case 1010167914:
					if (func_648(22148, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -264447931)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -652127435:
				case 1059266367:
					if (func_648(22149, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -652127435)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -610014599:
				case 1869746711:
					if (func_648(22150, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -610014599)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 848073973:
				case 167494616:
					if (func_648(22151, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 848073973)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1561087717:
				case 231256171:
					if (func_648(22152, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1561087717)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_648(22153, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2067249852)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1963924398:
				case -231795220:
					if (func_648(22154, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1963924398)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -898550276:
				case -1207463639:
					if (func_648(22155, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -898550276)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_648(22156, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1074178691)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -368616744:
				case -1293194083:
					if (func_648(22157, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -368616744)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -78566501:
				case 767365246:
					if (func_648(22158, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -78566501)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1623651387:
				case -318042939:
					if (func_648(22159, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1623651387)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1229980240:
				case -740608006:
					if (func_648(22160, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1229980240)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1558321426:
				case 126660566:
					if (func_648(22161, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1558321426)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 518190097:
				case -252733393:
					if (func_648(22162, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 518190097)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_648(22163, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1996043294)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1720844546:
				case -891762294:
					if (func_648(22164, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1720844546)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -20709979:
				case 1410738248:
					if (func_648(22165, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -20709979)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_648(22166, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1617383579)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -525135065:
				case 1684642458:
					if (func_648(22167, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -525135065)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1796039054:
				case -147490340:
					if (func_648(22168, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1796039054)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_648(22169, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1250030109)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1195876295:
				case -313931425:
					if (func_648(22170, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1195876295)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 672890092:
				case 211076563:
					if (func_648(22171, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 672890092)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 413298313:
				case 355035035:
					if (func_648(22172, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 413298313)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_648(22173, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1157302328)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_648(22174, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1564457471)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_648(22175, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1152621988)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_648(22176, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1961291349)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1912591074:
				case 73898487:
					if (func_648(22177, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1912591074)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_648(22178, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1049766626)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_648(15426, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2123485438)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -815706791:
				case -1066127505:
					if (func_648(15422, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -815706791)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_648(15423, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1318802347)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 306110040:
				case 1944822196:
					if (func_648(15421, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 306110040)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_648(15427, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1828101251)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -919314748:
				case 1282565442:
					if (func_648(15419, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -919314748)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1971111649:
				case -884280700:
					if (func_648(15420, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1971111649)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_648(15394, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1029334921)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -534855486:
				case -1168575065:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == -534855486)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -516333262:
				case 756873456:
					if (func_648(15406, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -516333262)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 485135095:
				case -730037708:
					if (func_648(15395, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 485135095)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1713551997:
				case -970458486:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1713551997)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1490658501:
				case 975601953:
					if (func_648(15410, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1490658501)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_648(15407, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1735635238)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1931303956:
				case -726032561:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1931303956)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1931617488)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1726332301:
				case 417579524:
					if (func_648(15414, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1726332301)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1382922530:
				case 734151492:
					if (func_648(15415, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1382922530)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 452778672:
				case -1766862320:
					if (func_648(15399, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 452778672)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1776790350:
				case 579562906:
					if (func_648(15404, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1776790350)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1988057295:
				case -619754931:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1988057295)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 816707921:
				case 1424441799:
					if (func_648(15392, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 816707921)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 744446190:
				case -1405036369:
					if (func_648(15390, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 744446190)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 917772807:
				case 1929056908:
					if (func_648(15402, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 917772807)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -292922355:
				case -34538790:
					if (func_648(15416, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -292922355)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_97(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1495432685)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_648(9366, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 769964545)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1424500982:
				case -701486200:
					if (func_648(9367, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1424500982)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_648(9369, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1810785185)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 837990279:
				case -1981978861:
					if (func_648(9368, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 837990279)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1752551314:
				case 468661890:
					if (func_648(9365, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1752551314)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 735155845:
				case 1907925586:
					if (func_648(9364, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 735155845)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1863251462:
				case 646243571:
					if (func_648(27078, -1, -1))
					{
						return 0;
					}
					if (func_648(9363, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1863251462)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_648(9362, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2142058763)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -207591105:
				case 874867224:
					if (func_648(9370, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -207591105)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -932813887:
				case 1344008898:
					if (func_648(9371, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -932813887)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -313503199:
				case 1297781304:
					if (func_648(9372, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -313503199)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 718936417:
				case 1977233252:
					if (func_648(9373, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 718936417)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1107649605:
				case -194410344:
					if (func_648(9374, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1107649605)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 39090475:
				case 392012609:
					if (func_648(9384, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 39090475)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1628251208:
				case 705148450:
					if (func_648(9385, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1628251208)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_648(7551, -1, -1) || func_111(3789, -1, 0) >= Global_262145.f_16185)
					{
						return 0;
					}
					if (iParam1 == -621355603)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_648(7467, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1006202521)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_648(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_648(27083, -1, -1))
						{
							return 0;
						}
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						if (func_648(27086, -1, -1))
						{
							return 0;
						}
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -2060372580:
				case -254669596:
					if (func_648(7469, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2060372580)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_648(7470, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1057304170)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1421572640:
				case -941072260:
					if (func_648(7471, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1421572640)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 481259621:
				case -1844749517:
					if (func_648(7472, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 481259621)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1227497670:
				case 82745424:
					if (func_648(7473, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1227497670)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 319276780:
				case -673460083:
					if (func_648(7474, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 319276780)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 2070827921:
				case -99954496:
					if (func_648(7475, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2070827921)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_648(7476, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1433629991)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_648(7477, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1712994650)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_648(7478, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2125094286)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 712298404:
				case -1504557219:
					if (func_648(7479, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 712298404)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1998072324:
				case 367912881:
					if (func_648(7480, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1998072324)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1249206960:
				case -836343280:
					if (func_648(7481, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1249206960)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_648(4260, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 283190173)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -60867780:
				case 1528527015:
					if (func_648(4257, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1528527015)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 926967912:
				case -1690029966:
					if (func_648(4269, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1690029966)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_648(4261, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1685994466)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1314959708:
				case 255166927:
					if (func_648(4259, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 255166927)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1696774529:
				case -271257487:
					if (func_648(4268, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -271257487)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -356446484:
				case 1885215284:
					if (func_648(4265, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1885215284)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 857810380:
				case -1935156988:
					if (func_648(4258, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1935156988)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -629676646:
				case 1061465906:
					if (func_648(4264, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1061465906)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1879530481:
				case -871031729:
					if (func_648(4267, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -871031729)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case -1265847311:
				case -101171485:
					if (func_648(4262, -1, -1))
					{
						return 0;
					}
					if (func_648(27079, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -101171485)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 32094424:
				case -1590298770:
					if (func_648(4263, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1590298770)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
				
				case 1969286744:
				case 303441856:
					if (func_648(4266, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 303441856)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_111(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_648(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_1078(func_1082(iParam1, 3), -1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_111(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_648(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_1078(func_1082(iParam1, 4), -1);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_648(113, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2049689650)
					{
						return !func_1078(func_1082(iParam1, 3), -1);
					}
					else
					{
						return !func_1078(func_1082(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_648(27082, -1, -1))
						{
							return 0;
						}
						if (func_648(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_648(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_648(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_648(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_648(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_648(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_648(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_648(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_648(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_648(3779, -1, -1) || func_648(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_1078(func_1082(iParam1, 3), -1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_648(3770, -1, -1))
						{
							return 0;
						}
						if (func_648(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_648(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_648(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_648(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_648(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_648(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_648(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_648(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_648(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_648(3779, -1, -1) || func_648(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_1078(func_1082(iParam1, 4), -1);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_648(3765, -1, -1) && func_648(3766, -1, -1)) && func_648(3767, -1, -1)) && func_648(3768, -1, -1)) && func_648(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_648(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_97(152, -1) && !func_648(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_97(151, -1) && !func_648(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_1078(func_1082(iParam1, 3), -1) && !func_648(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_1078(func_1082(iParam1, 4), -1) && !func_648(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_312();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_648(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_648(3615, -1, -1) && !func_648(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_648(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_648(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_648(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_648(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_648(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_648(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					if (func_648(27081, -1, -1))
					{
						return 0;
					}
					return !func_648(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_648(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_648(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_648(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_648(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_648(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_648(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_648(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_648(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_648(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_648(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_648(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_648(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_111(2442, -1, 0);
						if (unk_0x0E4018692D92041D(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_111(2422, -1, 0);
						if (unk_0x0E4018692D92041D(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_648(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_437();
					break;
			}
			break;
	}
	return 0;
}

bool func_1078(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1080(iParam0) == 10383)
	{
		return 0;
	}
	iVar0 = func_1079(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x0E4018692D92041D(iVar0, func_28(iVar1));
}

int func_1079(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_111(func_1080(uParam0), iParam1, 0);
	return iVar0;
}

int func_1080(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_29(iVar0);
	if ((func_105() == 0 || func_1081() == 0) || (func_105() == 999 && func_1081() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8398;
				break;
			
			case 40:
				return 8401;
				break;
			
			case 41:
				return 8404;
				break;
			
			case 42:
				return 8407;
				break;
			}
	}
	return 10383;
}

int func_1081()
{
	return Global_25766;
}

int func_1082(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_1084(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_1083(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0xC75EFC344B2FCEB8(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0xF09D93BA157FE826(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_1083(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_1084(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906: