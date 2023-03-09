#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
	var uLocal_62 = 16;
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
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<2> Local_227 = { 0, 0 } ;
	var uLocal_228 = 745926877;
	var uLocal_229 = 0;
	var uLocal_230 = 3;
	var uLocal_231 = 0;
	var uLocal_232 = -839953400;
	var uLocal_233 = 0;
	var uLocal_234 = -839953400;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	int iLocal_248[2] = { 0, 0 };
	struct<21> Local_249 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_107(ScriptParam_249);
	}
	while (true)
	{
		func_106();
		if (func_95())
		{
			func_91();
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			func_90();
			func_88();
			switch (func_87(unk_0x72B85B341ADBE9DE()))
			{
				case 0:
					if (func_86() > 0)
					{
						iLocal_248[unk_0x72B85B341ADBE9DE()] = 2;
					}
					break;
				
				case 2:
					func_59();
					if (func_86() == 3)
					{
						iLocal_248[unk_0x72B85B341ADBE9DE()] = 3;
					}
					break;
				
				case 3:
					func_91();
					break;
			}
			if (unk_0x06C1EBC003C18F1F())
			{
				switch (func_86())
				{
					case 0:
						Local_227 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_227.f_1.f_2 == 5)
	{
		Local_227 = 3;
	}
	if (func_6(&(Local_227.f_1.f_19)))
	{
		if (func_4(&(Local_227.f_1.f_19), 20000, 0))
		{
			Local_227 = 3;
		}
	}
	if (func_3())
	{
		Local_227 = 3;
	}
	if (bLocal_48)
	{
		if (!unk_0x69E8EDFEA57E361D())
		{
			Local_227 = 3;
		}
	}
	else if (unk_0x69E8EDFEA57E361D())
	{
		Local_227 = 3;
	}
	if (func_2())
	{
		Local_227 = 3;
	}
}

bool func_2()
{
	return Global_1648607.f_3;
}

bool func_3()
{
	return Global_1312417;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_58(1);
			break;
		
		case 1:
			if (func_38())
			{
				if (func_25())
				{
					func_5(&(Local_227.f_1.f_17), 0, 0);
					func_58(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
			{
				func_58(3);
			}
			else
			{
				if (func_6(&(Local_227.f_1.f_17)))
				{
					if (func_4(&(Local_227.f_1.f_17), 120000, 0))
					{
						func_58(3);
					}
				}
				if (func_10(unk_0x95B959F18401C09A(), 0))
				{
					func_58(3);
				}
				if (bLocal_52)
				{
					func_58(3);
				}
				if (func_8(unk_0x95B959F18401C09A(), 136))
				{
					func_58(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return !func_13(unk_0xFC00F22E930BFD55(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
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

void func_14()
{
	if (Global_2437364.f_3993)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2437364.f_3992 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2437364.f_3876[iParam0] < iParam1)
	{
		Global_2437364.f_3876[iParam0] = iParam1;
	}
	unk_0x8950ED5730F62EE8(&(Global_2437364.f_3875), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_227.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x765F6FEEFF39224F(unk_0xFC00F22E930BFD55(Local_227.f_1)))
	{
		func_24(&(Local_227.f_1));
		iLocal_56++;
	}
	if (func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x4F94F07DAD382CDA(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x4F94F07DAD382CDA(Local_227.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (unk_0x4F94F07DAD382CDA(Local_227.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x04C948F9025CE510(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x9D34F024713B3952(iLocal_56);
		}
	}
	if (unk_0x276149CFFB30EADE(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x4F8CF72358604361(iLocal_57);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)
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

int func_20(int iParam0)
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

int func_21(int iParam0, bool bParam1)
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

int func_22(int iParam0)
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

bool func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		uVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0x4955686EF8308B47(&uVar0);
	}
}

int func_25()
{
	if (func_37(Local_227.f_1.f_1))
	{
		if (func_37(Local_227.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_227.f_1))
			{
				if (func_34(&(Local_227.f_1), Local_227.f_1.f_1, Local_227.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					unk_0x44D61A9D5B660538(unk_0xFC00F22E930BFD55(Local_227.f_1));
					unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_227.f_1), 1, 1, 0);
					unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_227.f_1));
					unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_227.f_1), 1);
					func_33(unk_0xFC00F22E930BFD55(Local_227.f_1), 4);
					Global_2437364.f_3987 = unk_0xFC00F22E930BFD55(Local_227.f_1);
					if (func_32(&(Local_227.f_1.f_3[0 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_227.f_1.f_3[0 /*2*/]);
						func_26(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x767F544E943FB776(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]), unk_0x95B959F18401C09A());
						func_33(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]), 4);
						Global_2437364.f_3988[0] = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_227.f_1.f_3[1 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_227.f_1.f_3[1 /*2*/]);
							func_26(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x767F544E943FB776(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]), unk_0x95B959F18401C09A());
							func_33(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]), 4);
							Global_2437364.f_3988[1] = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_227.f_1.f_3[2 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_227.f_1.f_3[2 /*2*/]);
								func_26(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x767F544E943FB776(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]), unk_0x95B959F18401C09A());
								func_33(unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]), 4);
								Global_2437364.f_3988[2] = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]);
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

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0xE18BDD1E31C07544(iParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x28F648743D7DE312(iParam0, 5, 1);
	unk_0x28F648743D7DE312(iParam0, 3, 0);
	unk_0x34A51926277F67BC(iParam0, 2);
	unk_0x52F5AAAD4824B17E(iParam0, 1);
	unk_0x1E0350F1D7702D6A(iParam0, 2);
	unk_0x9E280E42C0773A3A(iParam0, 1);
	unk_0xBCA389843909EB28(iParam0, 1);
	unk_0xF0BE7CB40DE62A2F(iParam0, true);
	unk_0x18E5E2B41CD6CE17(iParam0, (fLocal_61[iParam1] + 100f));
	unk_0x7E92DEE57ADB65E9(iParam0, 400f);
	unk_0x4099B0626C455EC7(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x77172C3632BD7CE5(iParam0, 250);
			unk_0x7FC2040EB34E0E31(iParam0, 250, 0);
			unk_0xF1B97B949F89E84D(iParam0, 250);
		}
	}
	else
	{
		unk_0x9611832841071B69(iParam0, 1);
	}
}

void func_27(var uParam0)
{
	int iVar0;
	
	if (!func_29(unk_0x95B959F18401C09A(), 0) && !func_28())
	{
		iVar0 = Global_1575002[5];
	}
	else
	{
		iVar0 = unk_0xC408CC95C7202D67(unk_0x33CD235DF1E6A94E());
	}
	unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(uParam0), iVar0);
}

bool func_28()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_30(iParam0))
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

bool func_30(int iParam0)
{
	return func_31(iParam0);
}

bool func_31(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA0EDFFB6CF5B314A(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xE48FAA8A938257C9(iParam0, "AttributeDamage");
	}
	unk_0x8950ED5730F62EE8(&iVar0, iParam1);
	unk_0x2EBF31F210B945F6(iParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_35(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_36(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
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

int func_36(int iParam0, vector3 vParam1, int iParam2)
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

bool func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_38()
{
	vector3 vVar0;
	
	if (func_57(Local_227.f_1.f_10))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				vVar0 = { func_55(func_56(unk_0x95B959F18401C09A()), 0f, (-200f * sin((to_float(Local_227.f_1.f_15) * 30f))), (200f * cos((to_float(Local_227.f_1.f_15) * 30f))), 0f) };
				vVar0.z = unk_0xFC92FE0912BA37C8(vVar0.x, vVar0.y);
				vVar0.z = (vVar0.z + 30f);
				if (func_39(vVar0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_227.f_1.f_10 = { vVar0 };
					return 1;
				}
				else
				{
					Local_227.f_1.f_15++;
					if (Local_227.f_1.f_15 >= 12)
					{
						Local_227.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_39(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x7E0147E36EF8D6AC(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xBEEA641EE4F42DBD(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xBEEA641EE4F42DBD(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xC106293D8BB9B710(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (unk_0x1D05F456626EB273(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_48(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_40(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_40(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_47(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_45(unk_0x95B959F18401C09A()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_47(iVar1, 1, 1))
		{
			if (!func_42(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_41(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x16E00F066AFFEA0D(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam6 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x16E00F066AFFEA0D(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
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

int func_44()
{
	return Global_1312745;
}

Vector3 func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_46() && Global_1589819[iVar0 /*818*/].f_789) && !func_57(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_56(iParam0);
}

var func_46()
{
	return Global_2448756.f_16;
}

int func_47(int iParam0, bool bParam1, bool bParam2)
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

int func_48(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam6 == 0)
		{
			if (func_47(iVar1, bParam2, bParam3))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam5 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_41(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && uParam7) && bParam4) && func_49(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_56(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (func_54(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_53(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_50(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (!iVar0 == func_51())
	{
		if (iVar0 == func_52(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_51()
{
	return -1;
}

int func_52(int iParam0)
{
	if (iParam0 != func_51())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_51();
}

struct<13> func_53(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_54(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_53(iParam0) };
		Global_2505693 = { func_53(iParam1) };
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

Vector3 func_55(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

Vector3 func_56(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

int func_57(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	Local_227.f_1.f_2 = iParam0;
}

void func_59()
{
	func_84();
	func_60();
}

void func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_83();
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xFC00F22E930BFD55(Local_227.f_1);
				if (!unk_0xE38E3CF1625A4145(iLocal_47))
				{
					iLocal_47 = unk_0x8848A15CBDADDC60(iVar1);
					unk_0xA20C1DE21F2F071C(iLocal_47, 422);
					unk_0x983D75D9630FD905(iLocal_47, 0);
					unk_0x1C95CD840303FC37(iLocal_47, "MPCT_MERRY3");
					func_81(&iLocal_47, 1);
				}
				if (func_80(Local_227.f_1))
				{
					if (unk_0x6F3D61B58C7B4025(Local_227.f_1))
					{
						if (func_79())
						{
							if (!unk_0x576F51C1B491C31F(iVar1))
							{
								unk_0x077F5A8B03703391(iVar1, 1, 0);
							}
						}
						else if (unk_0x576F51C1B491C31F(iVar1))
						{
							unk_0x077F5A8B03703391(iVar1, 0, 0);
						}
					}
				}
				if (unk_0x22C3124A898FB82A(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]);
					if (!unk_0xBC2FC12AD0FBF72E(iVar0))
					{
						iVar2 = unk_0x82C50DFCB0299F4C(iVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_80(Local_227.f_1))
							{
								if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x4A852F02088ECC9D(iVar0, 1);
									func_26(iVar0, 0, 0, 0);
									unk_0x44D61A9D5B660538(iVar1);
									unk_0x9FABD0AB045A5D6E(iVar1, 1, 1, 0);
									if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
									{
										if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
										{
											unk_0x9DB29D916EF1BFB2(iVar0, iVar1, 0, unk_0x33CD235DF1E6A94E(), 0f, 0f, 0f, 23, 20f, 40f, -1f, ceil(fLocal_61[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (vdist(func_56(unk_0x95B959F18401C09A()), unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_227.f_1), 1)) <= 50f)
							{
								func_62(&uLocal_62, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x22C3124A898FB82A(Local_227.f_1.f_3[1 /*2*/]))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]);
					if (!unk_0xBC2FC12AD0FBF72E(iVar0))
					{
						if (!unk_0x71E0DAA57FE7D5C7(iVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_80(Local_227.f_1))
							{
								if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x4A852F02088ECC9D(iVar0, 0);
									func_26(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x22C3124A898FB82A(Local_227.f_1.f_3[2 /*2*/]))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]);
					if (!unk_0xBC2FC12AD0FBF72E(iVar0))
					{
						if (!unk_0x71E0DAA57FE7D5C7(iVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_80(Local_227.f_1))
							{
								if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x4A852F02088ECC9D(iVar0, 0);
									func_26(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		
		case 3:
			func_83();
			if (!func_6(&(Local_227.f_1.f_19)))
			{
				func_5(&(Local_227.f_1.f_19), 0, 0);
			}
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xFC00F22E930BFD55(Local_227.f_1);
				if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_80(Local_227.f_1))
						{
							if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[0 /*2*/]))
							{
								unk_0x4A852F02088ECC9D(iVar0, 0);
								unk_0xED68CDDDE25A144E(iVar0);
								unk_0x0648A75D3F60E864(iVar0, Global_1574987);
								if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
								{
									if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
									{
										unk_0x9DB29D916EF1BFB2(iVar0, iVar1, 0, unk_0x33CD235DF1E6A94E(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										unk_0x897EF720254BBEA3(iVar0, 1);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]);
						if (func_80(Local_227.f_1))
						{
							if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[1 /*2*/]))
							{
								unk_0xED68CDDDE25A144E(iVar0);
								unk_0x4A852F02088ECC9D(iVar0, 1);
								unk_0x897EF720254BBEA3(iVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (vdist(func_56(unk_0x95B959F18401C09A()), unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_227.f_1), 1)) <= 50f)
						{
							func_62(&uLocal_62, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]);
						if (func_80(Local_227.f_1))
						{
							if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[2 /*2*/]))
							{
								unk_0xED68CDDDE25A144E(iVar0);
								unk_0x4A852F02088ECC9D(iVar0, 1);
								unk_0x897EF720254BBEA3(iVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		
		case 5:
			func_83();
			break;
	}
}

void func_61()
{
	int iVar0;
	
	if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_227.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[0 /*2*/]))
			{
				iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]);
				unk_0x7FC2040EB34E0E31(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_227.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[1 /*2*/]))
			{
				iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[1 /*2*/]);
				unk_0x7FC2040EB34E0E31(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (func_80(Local_227.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x6F3D61B58C7B4025(Local_227.f_1.f_3[2 /*2*/]))
			{
				iVar0 = unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[2 /*2*/]);
				unk_0x7FC2040EB34E0E31(iVar0, 0, 0);
			}
		}
	}
}

int func_62(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_78(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_63(sParam2, iParam3, 0);
}

int func_63(char* sParam0, int iParam1, bool bParam2)
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
					func_77();
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
		if (func_76(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_75();
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
				func_68();
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
				if (func_67())
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
			if (func_66())
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
			func_65();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_64();
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
		func_77();
	}
	return 0;
}

void func_64()
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

void func_65()
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

int func_66()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()
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

void func_68()
{
	if (func_74(14))
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
		Global_14553 = func_69();
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

var func_69()
{
	func_70();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_70()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_73(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_72(unk_0x33CD235DF1E6A94E());
			if (func_71(iVar0) && (!func_74(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_71(Global_106565.f_2357.f_539.f_4321))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_74(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_75()
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

bool func_76(int iParam0, int iParam1)
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

void func_77()
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

void func_78(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_79()
{
	if (unk_0x13348E86D5B8A052() >= 22)
	{
		return 1;
	}
	if (unk_0x13348E86D5B8A052() <= 6 && unk_0x13348E86D5B8A052() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0)
{
	if (unk_0x5E2784BB00B20E8E(uParam0))
	{
		return 1;
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		unk_0x254D3936DA813A55(uParam0);
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		iVar0 = func_82(iParam1);
		unk_0xB9E84A421C105943(*iParam0, iVar0);
	}
}

int func_82(int iParam0)
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

void func_83()
{
	if (unk_0xE38E3CF1625A4145(iLocal_47))
	{
		unk_0x1ABDB383C83A336A(&iLocal_47);
	}
}

void func_84()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_85(&uLocal_62, 3, unk_0xBB28786B7F552D0B(Local_227.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_85(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_86()
{
	return Local_227;
}

int func_87(int iParam0)
{
	return iLocal_248[iParam0];
}

void func_88()
{
	bool bVar0;
	vector3 vVar1;
	
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_59))
	{
		func_5(&uLocal_59, 0, 0);
	}
	else if (func_4(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		vVar1 = { func_56(unk_0x95B959F18401C09A()) };
		fLocal_58 = unk_0xFC92FE0912BA37C8(vVar1.x, vVar1.y);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_89(&uLocal_59);
	}
}

void func_89(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_90()
{
}

void func_91()
{
	var uVar0;
	var uVar1;
	
	Global_2437364.f_3987 = uVar0;
	Global_2437364.f_3988[0] = uVar1;
	Global_2437364.f_3988[1] = uVar1;
	Global_2437364.f_3988[2] = uVar1;
	Global_2437364.f_3992 = 0f;
	Global_2437364.f_3993 = 0;
	func_93(func_94(1, 1), 10, func_51());
	func_92();
}

void func_92()
{
	unk_0x5894DC159447E10A();
}

void func_93(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -418126478;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 6, iParam0);
	}
}

int func_94(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_47(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_42(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_95()
{
	var uVar0;
	
	func_103(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_102())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_101())
	{
		return 1;
	}
	if (func_100(157))
	{
		if (!func_99())
		{
			return 1;
		}
	}
	if (func_100(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_96() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_96()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_96()
{
	switch (func_98())
	{
		case 0:
			return func_97();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_97()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_98()
{
	return Global_25765;
}

bool func_99()
{
	return Global_2448756.f_586;
}

int func_100(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return Global_2458613;
}

bool func_102()
{
	return Global_2448756.f_581;
}

void func_103(var uParam0)
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
					func_104(iVar0);
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

void func_104(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_47(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_105(iVar2, &bVar3))
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

int func_105(int iParam0, var uParam1)
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

void func_106()
{
	wait(0);
}

void func_107(struct<21> Param0)
{
	func_113(func_114(Param0), Param0);
	unk_0x4F8CF72358604361(3);
	unk_0x9D34F024713B3952(1);
	func_111(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_227, 22);
	unk_0x568D314D73140729(&iLocal_248, 3);
	unk_0x9980AE643A60F372(0);
	if (!func_110())
	{
		func_91();
	}
	if (unk_0x69E8EDFEA57E361D())
	{
		bLocal_48 = true;
	}
	func_108(62, 1);
	iLocal_248[unk_0x72B85B341ADBE9DE()] = 0;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_109() /*10778*/].f_6165.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_109() /*10778*/].f_6165.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_109() /*10778*/].f_6165.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_109() /*10778*/].f_6165.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_109() /*10778*/].f_6165.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_109() /*10778*/].f_6165.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_109() /*10778*/].f_6165.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_109() /*10778*/].f_6165.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_109() /*10778*/].f_6165.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_109() /*10778*/].f_6165.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_109() /*10778*/].f_6165.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_109() /*10778*/].f_6165.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_109() /*10778*/].f_6165.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_109() /*10778*/].f_6165.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_109() /*10778*/].f_6165.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_109() /*10778*/].f_6165.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_109() /*10778*/].f_6165.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_109() /*10778*/].f_6165.f_30 = iVar0;
			break;
	}
}

int func_109()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110()
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
		if (func_102())
		{
			return 0;
		}
		if (func_100(155))
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

int func_111(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_92();
			}
			else
			{
				return 0;
			}
		}
		if (!func_112())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_92();
					}
					else
					{
						return 0;
					}
				}
				if (func_102())
				{
					if (!bParam2)
					{
						func_92();
					}
					else
					{
						return 0;
					}
				}
				if (func_100(155))
				{
					if (!bParam2)
					{
						func_92();
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
					func_92();
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
				func_92();
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
			func_92();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_112()
{
	return Global_1312844;
}

void func_113(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_92();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_114(int iParam0)
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

