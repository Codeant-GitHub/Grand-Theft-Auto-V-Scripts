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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55[5] = { 0, 0, 0, 0, 0 };
	var uLocal_56[1] = { 0 };
	int iLocal_57[5] = { 0, 0, 0, 0, 0 };
	var uLocal_58[5] = { 0, 0, 0, 0, 0 };
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_62[5];
	struct<3> Local_63[5];
	var uLocal_64[5] = { 0, 0, 0, 0, 0 };
	int iLocal_65[5] = { 0, 0, 0, 0, 0 };
	int iLocal_66[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_67[5];
	struct<3> Local_68[5];
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	var uLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	struct<3> Local_77[5];
	var uLocal_78[5] = { 0, 0, 0, 0, 0 };
	var uLocal_79[5] = { 0, 0, 0, 0, 0 };
	var uLocal_80[5] = { 0, 0, 0, 0, 0 };
	var uLocal_81 = 0;
	var uLocal_82[5] = { 0, 0, 0, 0, 0 };
	int iLocal_83[5] = { 0, 0, 0, 0, 0 };
	struct<16> Local_84[5];
	struct<16> Local_85[5];
	struct<16> Local_86[5];
	struct<4> Local_87[5];
	char cLocal_88[16] = "";
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97[5] = { 0, 0, 0, 0, 0 };
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104[5] = { 0, 0, 0, 0, 0 };
	var uLocal_105 = 16;
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
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
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
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272[5] = { 0, 0, 0, 0, 0 };
	struct<4> Local_273 = { 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	StringCopy(&cLocal_88, "", 16);
	if (unk_0x4B34601C5C56F3EE(66))
	{
		func_648();
	}
	wait(0);
	func_646(ScriptParam_273);
	func_645();
	while (func_642(0, Local_75, 1.5f) || func_642(2, Local_75, 1.5f))
	{
		wait(0);
		func_35();
		func_1(4, &uLocal_48, Local_75, 12.5f, 12.5f, 10f, &uLocal_56);
	}
	func_648();
}

int func_1(int iParam0, var uParam1, struct<3> Param2, struct<3> Param3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (Global_94998 != -1)
	{
		return 0;
	}
	if (func_33(iParam0, func_34()))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_32(iVar0);
		if (!func_31(iVar1))
		{
			if (unk_0xE5965CDF24F93A9F(Global_97452[iVar0]))
			{
				if (func_33(iParam0, func_30(iVar1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar3 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_33(iParam0, func_30(iVar2)))
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (!func_29(iVar3))
	{
		return 0;
	}
	if (!func_28(iVar3))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			if (Global_4535624)
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_16(iVar3, func_22()))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			iVar4 = 0;
			break;
		
		case 1:
			iVar4 = 1;
			break;
		
		case 2:
			iVar4 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (func_15(iVar3, iVar4) == 1)
	{
		return 0;
	}
	if (func_14(Param3, 0f, 0f, 0f, 0))
	{
		Param3 = { 50f, 50f, 50f };
	}
	Var5 = { Param2 - Param3 };
	Var6 = { Param2 + Param3 };
	func_13(Var5, Var6);
	func_12(Var5, Var6, &(uParam1->f_1));
	func_10(iParam0, uParam4);
	func_9(Var5, Var6);
	func_8(Var5, Var6, &(uParam1->f_4));
	if (Global_94997 != 8)
	{
		if (Global_94998 == -1)
		{
			iVar7 = -1;
			if (func_33(iParam0, func_34()))
			{
			}
			iVar8 = 5000;
			if (func_7())
			{
				switch (iVar3)
				{
					case 0:
						iVar7 = -181320640;
						break;
					
					case 1:
						iVar7 = 1418815087;
						break;
					
					case 2:
						iVar7 = 2087297077;
						break;
					
					default:
						return 0;
						break;
				}
				iVar9 = -1;
				switch (Global_94997)
				{
					case 0:
						iVar10 = 11;
						iVar9 = 3;
						break;
					
					case 1:
						iVar10 = 12;
						iVar9 = 3;
						break;
					
					case 4:
						iVar10 = 13;
						iVar8 = 10000;
						iVar9 = 3;
						break;
					
					case 6:
						iVar10 = 14;
						iVar8 = 10000;
						iVar9 = 3;
						break;
					
					case 7:
						iVar10 = 15;
						iVar8 = 10000;
						iVar9 = 3;
						break;
					
					case 2:
						iVar10 = 16;
						iVar9 = 3;
						break;
					
					case 3:
						iVar10 = 17;
						iVar9 = 3;
						break;
					
					case 5:
						iVar10 = 18;
						iVar9 = 3;
						break;
					
					default:
						return 0;
						break;
				}
				if ((iVar10 == 14 || iVar10 == 15) && !iVar7 == -181320640)
				{
					iVar10 = 13;
				}
				iVar12 = unk_0x5853B15F78E1A265(0, iVar9);
				switch (iVar12)
				{
					case 0:
						iVar11 = 19;
						break;
					
					case 1:
						iVar11 = 20;
						break;
					
					case 2:
						iVar11 = 21;
						break;
					
					case 3:
						iVar11 = 22;
						break;
					
					case 4:
						iVar11 = 23;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_6(iVar7, iVar10, iVar11, 6, func_34(), iVar3, iVar8, 10000, -1, 0, -1, 0, 1))
				{
					Global_94998 = unk_0x320D1840B6DAA1CC();
					return 1;
				}
			}
			else
			{
				switch (Global_94997)
				{
					case 0:
						switch (iVar3)
						{
							case 0:
								iVar7 = 2038672434;
								break;
							
							case 1:
								iVar7 = 975196153;
								break;
							
							case 2:
								iVar7 = 1127548000;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 4:
						switch (iVar3)
						{
							case 0:
								iVar7 = 1666308520;
								break;
							
							case 1:
								iVar7 = -710274964;
								break;
							
							case 2:
								iVar7 = -1291788156;
								break;
							
							default:
								return 0;
								break;
						}
						iVar8 = 10000;
						break;
					
					case 6:
						switch (iVar3)
						{
							case 1:
								iVar7 = 1289879258;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 3:
						switch (iVar3)
						{
							case 0:
								iVar7 = 1894462438;
								break;
							
							case 1:
								iVar7 = 1621076324;
								break;
							
							case 2:
								iVar7 = 1993031175;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 1:
					case 2:
					case 5:
					case 7:
						return 0;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_2(iVar7, 6, func_34(), iVar3, iVar3, iVar8, 10000, -1, -1, 0, -1, 0))
				{
					Global_94998 = unk_0x320D1840B6DAA1CC();
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_5(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xE2D0C323A1AE5D85(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_112915.f_7688.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_112915.f_7688.f_911 == Var0)
		{
			Global_112915.f_7688.f_911 = -1;
		}
		Var0.f_3 = func_4(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xB0550BC91B0159D6(&(Var0.f_1), 1);
		unk_0xB0550BC91B0159D6(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xCED9E32812D6C7C7(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xCED9E32812D6C7C7(&(Var0.f_1), 10);
		}
		Global_112915.f_7688[Global_112915.f_7688.f_136 /*15*/] = { Var0 };
		Global_112915.f_7688.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xE2D0C323A1AE5D85(iParam2, iVar1))
			{
				func_3(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_29(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_7688.f_136)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7688[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_112915.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_112915.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_112915.f_7688.f_764)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7688.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_112915.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_112915.f_7688.f_919[iParam0] = iVar1;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_5(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0xE2D0C323A1AE5D85(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_112915.f_7688.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_4(iParam3);
		Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xB0550BC91B0159D6(&(Var0.f_1), 0);
		Global_112915.f_7688.f_651[Global_112915.f_7688.f_764 /*14*/] = { Var0 };
		Global_112915.f_7688.f_764++;
		func_3(0);
		func_3(1);
		func_3(2);
		return 1;
	}
	return 0;
}

int func_7()
{
	if (unk_0xE2D0C323A1AE5D85(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_8(struct<3> Param0, struct<3> Param1, var uParam2)
{
	if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xC73D3966FEED8C9C(Param0, Param1, 1, 1))
		{
			*uParam2++;
			if (*uParam2 > 6)
			{
				Global_94997 = 3;
			}
		}
		else if ((unk_0x8FE34BF4165F5104(0, Param0, Param1) || unk_0x8FE34BF4165F5104(2, Param0, Param1)) || unk_0xA1C6623FC1047DAD(Param0, Param1, joaat("weapon_grenadelauncher"), 1))
		{
			Global_94997 = 5;
		}
	}
}

void func_9(struct<3> Param0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_molotov") || iVar0 == joaat("weapon_petrolcan"))
		{
			if (unk_0x8FE34BF4165F5104(3, Param0, Param1))
			{
				Global_94997 = 2;
			}
		}
	}
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		iVar1 = func_11(iVar0);
		if (iVar1 == 145)
		{
		}
		else if (iVar1 == func_22())
		{
		}
		else if (!func_33(uParam0, func_30(iVar1)))
		{
		}
		else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("bagger"))
		{
			Global_94997 = 6;
		}
		else
		{
			Global_94997 = 4;
		}
		if (Global_94997 != 4)
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (iVar0 == (*uParam1)[iVar2])
				{
					iVar3 = unk_0x15CAA6D7B11F1A7C(iVar0);
					if (iVar3 == joaat("issi2"))
					{
						Global_94997 = 7;
					}
					if (iVar3 == joaat("sentinel2"))
					{
						Global_94997 = 6;
					}
				}
				iVar2++;
			}
		}
	}
}

int func_11(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97305[iVar0]))
		{
			if (Global_97305[iVar0] == iParam0)
			{
				return Global_97315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_12(struct<3> Param0, struct<3> Param1, var uParam2)
{
	if ((unk_0xFF45C7CD7F890B51(unk_0xE2D3D51028F0428A()) || unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0)) || unk_0x6ABFD2A0B56D6940(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB950B5D01E8A4868(unk_0xE2D3D51028F0428A(), Param0, Param1, 0, 1, 0))
		{
			if (*uParam2 < 0)
			{
				*uParam2 = unk_0x320D1840B6DAA1CC();
			}
			else if (unk_0x320D1840B6DAA1CC() > *uParam2 + 10000)
			{
				Global_94997 = 1;
			}
		}
		else
		{
			*uParam2 = -1;
		}
	}
	else
	{
		*uParam2 = -1;
	}
}

void func_13(struct<3> Param0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_rpg"))
		{
			if (unk_0xA1C6623FC1047DAD(Param0, Param1, iVar0, 1))
			{
				Global_94997 = 0;
			}
		}
	}
}

bool func_14(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_21();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_19(iParam0);
	iVar2 = func_19(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_18(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_17(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_95830[iParam0 /*2*/];
	}
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_19(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_21())
	{
		return func_20(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_21())
	{
		return 6;
	}
	if (iParam0 == 180)
	{
		return 6;
	}
	return 6;
}

var func_20(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_11;
}

int func_21()
{
	if (Global_31505 == 0 || Global_31505 == 2)
	{
		return 179;
	}
	return 161;
}

int func_22()
{
	func_23();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_26(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_25(unk_0xE2D3D51028F0428A());
			if (func_29(iVar0) && (!func_24(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_29(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

int func_28(int iParam0)
{
	if (func_29(iParam0))
	{
		if ((Global_112915.f_9085 || Global_3) || func_5(0))
		{
			return Global_112915.f_2363.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_31(int iParam0)
{
	func_23();
	return iParam0 == Global_112915.f_2363.f_539.f_4321;
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_34()
{
	func_23();
	switch (Global_112915.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_35()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	
	if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	iLocal_91 = 0;
	bVar0 = false;
	func_640(&iLocal_91, &uLocal_92, &uLocal_95, &uLocal_96, Local_75, "v_trailer");
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_367(iVar1))
		{
			iVar2 = func_366(iVar1);
			iVar3 = 0;
			iVar4 = func_365(iVar2, &iVar3);
			if (iVar4 == func_22())
			{
				if (Global_94980[iVar2] != 141)
				{
					Global_94980[iVar2] = 141;
					if (unk_0xE5965CDF24F93A9F(uLocal_59[iVar1]))
					{
						if (unk_0x099CAD293190F449(uLocal_59[iVar1], unk_0xE2D3D51028F0428A()))
						{
							unk_0xE6451C2F193342C7(uLocal_59[iVar1], 1, 1);
						}
						else
						{
							unk_0xA5D8BA53953077C8(uLocal_59[iVar1], -8f, 1);
						}
						if (unk_0xE5965CDF24F93A9F(uLocal_59[iVar1]))
						{
							unk_0x5C65DDDC219B3AA5(uLocal_59[iVar1], 0);
							unk_0x4536AE3DABDE0C44(uLocal_59[iVar1], 1);
							unk_0x959E1626CBC7D38A(uLocal_59[iVar1], 1, 0);
							unk_0x3F6DE6DBA9A99FEA(uLocal_59[iVar1], 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						}
						iLocal_60[iVar1] = 0;
					}
					if (unk_0xE5965CDF24F93A9F(uLocal_64[iVar1]))
					{
						if (unk_0x099CAD293190F449(uLocal_64[iVar1], unk_0xE2D3D51028F0428A()))
						{
							unk_0xE6451C2F193342C7(uLocal_64[iVar1], 1, 1);
						}
						else
						{
							unk_0xA5D8BA53953077C8(uLocal_64[iVar1], -8f, 1);
						}
						if (unk_0xE5965CDF24F93A9F(uLocal_64[iVar1]))
						{
							unk_0x5C65DDDC219B3AA5(uLocal_64[iVar1], 0);
							unk_0x4536AE3DABDE0C44(uLocal_64[iVar1], 1);
							unk_0x959E1626CBC7D38A(uLocal_64[iVar1], 1, 0);
							unk_0x3F6DE6DBA9A99FEA(uLocal_64[iVar1], 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						}
						iLocal_65[iVar1] = 0;
					}
					if (iVar4 == 2)
					{
						iVar5 = unk_0x5355BAA621C153CF(unk_0xE2D3D51028F0428A(), 4);
						if (iVar5 == 25)
						{
							while (((!func_249(unk_0xE2D3D51028F0428A(), 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(unk_0xE2D3D51028F0428A(), 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(unk_0xE2D3D51028F0428A(), 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(unk_0xE2D3D51028F0428A(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								wait(0);
							}
						}
					}
				}
			}
			func_95(iVar1);
			if (!bVar0)
			{
				if (!Global_112915.f_18514.f_18)
				{
					if (func_94(14) && func_31(2))
					{
						iVar6 = 0;
						if (func_52(uLocal_55[iVar1], Global_94980[iVar2], &uLocal_105, "FMTAUD", &Local_87, &uLocal_98, &iVar6, 8f, "FMT_COUNTRY", 0))
						{
							bVar0 = true;
							Global_112915.f_18514.f_18 = 1;
						}
					}
				}
				if (iVar1 == 3)
				{
					if (!iLocal_53)
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(uLocal_55[iVar1]))
						{
							bVar7 = true;
							Var8 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
							Var9 = { unk_0x6B62510F212526DC(uLocal_55[iVar1], 1) };
							if (unk_0x987A5F1E1A67E3C0(Var8, Var9, 0) > 5f)
							{
								bVar7 = false;
							}
							if (bVar7)
							{
								func_50(uLocal_55[iVar1], "GENERIC_HI", 3);
								func_48(&uLocal_98);
								iLocal_53 = 1;
							}
						}
					}
				}
				if (!func_46(uLocal_55[iVar1], Local_85[iVar1 /*16*/], Local_86[iVar1 /*16*/], iLocal_272[iVar1], &uLocal_98))
				{
					if (func_52(uLocal_55[iVar1], Global_94980[iVar2], &uLocal_105, "FMTAUD", &Local_87, &uLocal_98, &(uLocal_104[iVar1]), 3f, 0, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		else
		{
			func_640(&iLocal_91, &uLocal_92, &uLocal_95, &uLocal_96, Local_75, "v_trailer");
			iLocal_91 = 1;
		}
		iVar1++;
	}
	func_36(&uLocal_55, &uLocal_101);
	return 1;
}

int func_36(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	return 0;
	if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	if (!func_45(uParam1))
	{
		func_44(uParam1);
		return 0;
	}
	if ((func_38(uParam1, 1f) || unk_0xF09A4F413B0D30EB(0, 47)) || func_37())
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (unk_0xE5965CDF24F93A9F((*uParam0)[iVar0]))
			{
				Var1 = { unk_0x6B62510F212526DC((*uParam0)[iVar0], 0) };
				fVar2 = 5f;
				unk_0x85050CAC8798CDD0(Var1, fVar2);
				unk_0x917F631782A9CB32(Var1, fVar2, 0);
				iVar3 = joaat("weapon_stickybomb");
				if (unk_0xEDF30C9168B336D8(Var1, iVar3, fVar2, 0))
				{
					unk_0x7653D561C9574763(0, 47, 1);
				}
			}
			iVar0++;
		}
		func_48(uParam1);
		return 1;
	}
	return 0;
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x65141CCB0A6F7EA4(unk_0xE2D3D51028F0428A());
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = unk_0x7F4CB90BCA531A70(iVar0);
	if (iVar1 == joaat("GROUP_THROWN"))
	{
		return 1;
	}
	return 0;
}

int func_38(var uParam0, float fParam1)
{
	if (func_40(uParam0, fParam1))
	{
		func_39(uParam0);
		return 1;
	}
	return 0;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_40(var uParam0, float fParam1)
{
	if (func_45(uParam0))
	{
		if (func_41(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_42(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_42(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_43(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

void func_44(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_48(uParam0);
	}
}

bool func_45(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

int func_46(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0xACC32B78196FBC2A(&uParam1) && !unk_0xACC32B78196FBC2A(&uParam17))
	{
		if (unk_0xF68107C40359970C(iParam0))
		{
			return 0;
		}
		if (!unk_0xFCF559C8631ABED7(iParam0, &uParam1, &uParam17, 3))
		{
			return 0;
		}
		if (unk_0x0AF1DAD2F59B2C3C(&uParam1, &uParam17, "drinking", &fVar0, &fVar1))
		{
			if (unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
			{
				fVar0 = 0.05f;
				fVar1 = 0.75f;
			}
		}
		else if (unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
		{
			fVar0 = 0.05f;
			fVar1 = 0.75f;
		}
		else if (unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@RON@MOONSHINE_IG_5") || ((unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_A") || unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_B")) || unk_0x3C57C2F07FEE34D2(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_C")))
		{
			fVar0 = 0.25f;
			fVar1 = 0.75f;
		}
		else
		{
			fVar0 = -1f;
			fVar1 = -1f;
			return 0;
		}
		fVar2 = -1f;
		if (unk_0xFCF559C8631ABED7(iParam0, &uParam1, &uParam17, 1))
		{
			fVar2 = unk_0xD01FAFCE275C94F3(iParam0, &uParam1, &uParam17);
		}
		else if (unk_0xFCF559C8631ABED7(iParam0, &uParam1, &uParam17, 2))
		{
			fVar2 = unk_0x54DE1614490C2A83(uParam33);
		}
		if (fVar2 > fVar0 && fVar2 < fVar1)
		{
			if (func_45(uParam34))
			{
				if (!func_43(uParam34))
				{
					func_47(uParam34);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_47(var uParam0)
{
	if (func_45(uParam0))
	{
		if (!func_43(uParam0))
		{
			uParam0->f_2 = (func_42(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
			unk_0xCED9E32812D6C7C7(uParam0, 2);
		}
	}
}

void func_48(var uParam0)
{
	func_49(uParam0, 0f);
}

void func_49(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_42(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_50(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_51(iParam2), 1);
}

int func_51(int iParam0)
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

int func_52(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6, float fParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	var uVar4;
	var uVar5;
	char* sVar6;
	float fVar7;
	int iVar8;
	struct<2> Var9;
	struct<2> Var10;
	int iVar11;
	struct<3> Var12;
	struct<2> Var13;
	
	iVar0 = 3;
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (unk_0xF68107C40359970C(iParam0))
	{
		return 0;
	}
	if (!unk_0x2B5F4FBAF644BEC8(iParam0))
	{
		return 0;
	}
	if (func_92(iParam0))
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	if ((func_91() || func_90(8, -1)) || Global_78112)
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	if (unk_0x04458B4E5D9E466A() || func_89())
	{
		if (func_45(uParam5))
		{
			if (!func_43(uParam5))
			{
				func_47(uParam5);
			}
		}
		return 0;
	}
	Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	Var2 = { unk_0x6B62510F212526DC(iParam0, 1) };
	if (func_87(iParam0, iParam1, uParam2, sParam3, uParam4, uParam5, iVar0))
	{
		return 1;
	}
	func_86();
	sVar6 = func_83(iParam1, &iVar3, &uVar4, &uVar5);
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		sVar6 = sParam8;
	}
	if (unk_0xACC32B78196FBC2A(sVar6))
	{
		return 0;
	}
	if (func_82(uVar4, 2))
	{
		if (!func_81(iParam0, iParam1))
		{
			return 0;
		}
	}
	else
	{
		if (func_82(uVar4, 1))
		{
			if (unk_0x987A5F1E1A67E3C0(Var1, Var2, 0) > fParam7)
			{
				return 0;
			}
		}
		if (func_82(uVar4, 4))
		{
			if (unk_0x48053974ED6F63CE((Var1.f_2 - Var2.f_2)) > 2f)
			{
				return 0;
			}
		}
		if (func_82(uVar4, 8))
		{
			if (!unk_0xBC7D3EDF3455BC35(iParam0))
			{
				return 0;
			}
		}
	}
	if (func_82(uVar4, 16))
	{
		fVar7 = 10f;
		if (*iParam6 >= iVar3)
		{
			return 0;
		}
		fVar7 = (fVar7 + ((to_float(*iParam6) / to_float((iVar3 - 1))) * 10f));
		if (iParam1 == 29 || iParam1 == 30)
		{
			fVar7 = (fVar7 * 1.5f);
		}
		if (func_45(uParam5))
		{
			if (func_43(uParam5))
			{
				func_80(uParam5);
			}
			if (!func_40(uParam5, fVar7))
			{
				return 0;
			}
		}
	}
	if (!func_33(uVar5, func_34()))
	{
		iVar8 = func_22();
		StringCopy(&Var9, "", 16);
		switch (func_78(iParam0))
		{
			case 0:
				StringCopy(&Var9, "FMM_0", 16);
				break;
			
			case 1:
				StringCopy(&Var9, "FMM_1", 16);
				break;
			
			case 2:
				StringCopy(&Var9, "FMM_2", 16);
				break;
			
			case 3:
				StringCopy(&Var9, "FMM_3_FT", 16);
				break;
			
			case 5:
				StringCopy(&Var9, "FMF_0", 16);
				if (iVar8 == 0 || iVar8 == 2)
				{
					StringCopy(&Var9, "", 16);
				}
				break;
		}
		if (!unk_0xACC32B78196FBC2A(&Var9))
		{
			if (!unk_0x3C57C2F07FEE34D2(&Var9, "FMM_3_FT"))
			{
				switch (iVar8)
				{
					case 0:
						StringConCat(&Var9, "_MIC", 16);
						break;
					
					case 1:
						StringConCat(&Var9, "_FRA", 16);
						if (unk_0x3C57C2F07FEE34D2(&Var9, "FMM_2_FRA"))
						{
							if (!func_94(17))
							{
								StringConCat(&Var9, "1", 16);
							}
							else
							{
								StringConCat(&Var9, "2", 16);
							}
						}
						break;
					
					case 2:
						StringConCat(&Var9, "_TRV", 16);
						break;
					}
			}
			if (func_61(sParam3, &Var9, uParam2, iVar0, uParam4, sParam9))
			{
				func_48(uParam5);
				*iParam6 = 99;
				return 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	StringCopy(&Var10, "", 16);
	switch (func_22())
	{
		case 0:
			StringCopy(&Var10, "MICHAEL", 16);
			break;
		
		case 1:
			StringCopy(&Var10, "FRANKLIN", 16);
			break;
		
		case 2:
			StringCopy(&Var10, "TREVOR", 16);
			break;
	}
	iVar11 = -1;
	Var12 = { 0f, 0f, 0f };
	if (func_82(uVar4, 128))
	{
		iVar11 = 1;
		Var12 = { -14.3293f, -1443.635f, 29.9f };
	}
	if (unk_0x3C57C2F07FEE34D2("TRA_IG_MD", sVar6))
	{
		if (func_82(uVar4, 64))
		{
		}
		else
		{
			func_59(&uVar4, 64);
		}
	}
	if (unk_0x3C57C2F07FEE34D2("FMT_COUNTRY", sVar6))
	{
		if (func_82(uVar4, 64))
		{
		}
		else
		{
			func_59(&uVar4, 64);
		}
	}
	if (func_82(uVar4, 64))
	{
		if (!unk_0xACC32B78196FBC2A(sVar6))
		{
			if (func_82(uVar4, 32))
			{
				if (!func_58(uParam2, sParam3, sVar6))
				{
					return 0;
				}
			}
			func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), &Var10, 0, 1);
			if (func_82(uVar4, 128))
			{
				func_57(uParam2, iVar11, 0, "DENISE", 0, 1);
				func_56(uParam2, iVar11, Var12);
			}
			if (func_61(sParam3, sVar6, uParam2, iVar0, uParam4, sParam9))
			{
				func_48(uParam5);
				*iParam6++;
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
		StringCopy(&Var13, sVar6, 16);
		if (func_53(sParam3, &Var13, uParam4))
		{
			if (!unk_0xACC32B78196FBC2A(&Var13))
			{
				if (func_82(uVar4, 32))
				{
					if (!func_58(uParam2, sParam3, &Var13))
					{
						return 0;
					}
				}
				func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), &Var10, 0, 1);
				if (func_82(uVar4, 128))
				{
					func_57(uParam2, iVar11, 0, "DENISE", 0, 1);
					func_56(uParam2, iVar11, Var12);
				}
				if (func_61(sParam3, &Var13, uParam2, iVar0, uParam4, sParam9))
				{
					func_48(uParam5);
					*iParam6++;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_53(char* sParam0, char* sParam1, var uParam2)
{
	char cVar0[16];
	char cVar1[16];
	int iVar2;
	struct<4> Var3[15];
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (func_54(sParam0, 7))
	{
		cVar0 = { *sParam1 };
		StringCopy(&cVar1, "", 16);
		iVar2 = -1;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar1, 16);
		StringConCat(&cVar0, "1", 16);
		if (unk_0xE73671E3D37CF79E(&cVar0))
		{
			StringCopy(&cVar1, "", 16);
		}
		else
		{
			StringCopy(&cVar1, "0", 16);
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar4 = true;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar1, 16);
		StringConCat(&cVar0, "1", 16);
		if (unk_0xE73671E3D37CF79E(&cVar0))
		{
			iVar2++;
			Var3[iVar2 /*4*/] = { *sParam1 };
			StringConCat(&(Var3[iVar2 /*4*/]), "a", 16);
			bVar4 = false;
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "b", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "c", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "d", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "e", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "f", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "g", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "h", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "i", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "j", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "k", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "JJJ", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "m", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "n", 16);
				bVar4 = false;
			}
		}
		if (!bVar4)
		{
			bVar4 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar1, 16);
			StringConCat(&cVar0, "1", 16);
			if (unk_0xE73671E3D37CF79E(&cVar0))
			{
				iVar2++;
				Var3[iVar2 /*4*/] = { *sParam1 };
				StringConCat(&(Var3[iVar2 /*4*/]), "o", 16);
				bVar4 = false;
			}
		}
		iVar5 = iVar2;
		iVar6 = 0;
		while (iVar6 < *uParam2)
		{
			if (!unk_0xACC32B78196FBC2A(uParam2[iVar6 /*4*/]))
			{
				iVar7 = 0;
				while (iVar7 < Var3)
				{
					if (!unk_0xACC32B78196FBC2A(&(Var3[iVar7 /*4*/])))
					{
						if (unk_0x3C57C2F07FEE34D2(uParam2[iVar6 /*4*/], &(Var3[iVar7 /*4*/])))
						{
							iVar8 = iVar7;
							while (iVar8 <= (Var3 - 1))
							{
								if (iVar8 + 1 < Var3)
								{
									Var3[iVar8 /*4*/] = { Var3[iVar8 + 1 /*4*/] };
								}
								else
								{
									StringCopy(&(Var3[iVar8 /*4*/]), "", 16);
								}
								iVar8++;
							}
							iVar5 = (iVar5 - 1);
						}
					}
					iVar7++;
				}
			}
			iVar6++;
		}
		iVar9 = unk_0x5853B15F78E1A265(0, iVar5 + 1);
		*sParam1 = { Var3[iVar9 /*4*/] };
		if (unk_0xACC32B78196FBC2A(sParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_54(var uParam0, int iParam1)
{
	if (unk_0x5FABFB823FD821D4(uParam0, iParam1))
	{
		return 1;
	}
	else if (!func_55() && !unk_0xA3329B7A7520670E())
	{
		if (!unk_0xF00D2317EC791D94(iParam1))
		{
			unk_0x249A0D3C5714BCF4(uParam0, iParam1);
		}
	}
	return 0;
}

int func_55()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_56(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

int func_58(var uParam0, char* sParam1, char* sParam2)
{
	char cVar0[16];
	char* sVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar5;
	int iVar6;
	char cVar7[16];
	int iVar8;
	int iVar9;
	
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam2, 16);
	StringConCat(&cVar0, "SL", 16);
	if (func_54(sParam1, 7))
	{
		if (unk_0xE73671E3D37CF79E(&cVar0))
		{
			sVar1 = unk_0xAEF70623D03F7B02(&cVar0);
			if (unk_0xE8F6C1F695B25B91(sVar1))
			{
				return 0;
			}
			else
			{
				iVar2 = 0;
				iVar3 = 1;
				StringCopy(&cVar4, unk_0x6ABF9C6F18308B78(sVar1, iVar2, iVar3), 16);
				iVar5 = 1;
				iVar6 = 2;
				StringCopy(&cVar7, unk_0x6ABF9C6F18308B78(sVar1, iVar5, iVar6), 16);
				if (unk_0xA8581FB9086C10C4(&cVar4, &iVar8))
				{
					if (unk_0xE5965CDF24F93A9F((*uParam0)[iVar8 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
				if (unk_0xA8581FB9086C10C4(&cVar7, &iVar9))
				{
					if (unk_0xE5965CDF24F93A9F((*uParam0)[iVar9 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
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
	return 1;
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (func_54(sParam0, 7))
	{
		sVar0 = "";
		switch (func_22())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (unk_0xACC32B78196FBC2A(sParam5))
		{
			func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), sVar0, 0, 1);
			if (func_63(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), sVar0, 0, 1);
			if (func_63(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				func_62(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	Global_22296 = iParam0;
}

bool func_63(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_64(sParam2, iParam3, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_76();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_75();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam2)
			{
				func_74();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_73())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77852)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_72())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 9))
				{
					return 0;
				}
			}
			func_71();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_70();
		func_65();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_76();
	}
	return 0;
}

void func_65()
{
	if (!func_66())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973333.f_1), {Global_20904}, 4);
		Global_1973333 = Global_7139;
		Global_1973333.f_6 = Global_21295;
	}
}

int func_66()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_69())
	{
		return 0;
	}
	if (func_67(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0)
{
	return func_68(iParam0, 20);
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_69()
{
	return -1;
}

void func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21285 = 1;
}

void func_71()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	unk_0xB0550BC91B0159D6(&Global_7825, 16);
}

int func_72()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	int iVar0;
	int iVar1;
	
	if (Global_77852)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_74()
{
	if (func_24(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
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
		Global_19954 = func_22();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

void func_76()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	if (iVar0 == func_79(14))
	{
		return 0;
	}
	if (iVar0 == func_79(15))
	{
		return 1;
	}
	if (iVar0 == func_79(17))
	{
		return 2;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("s_m_m_gardener_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("ig_denise"))
	{
		return 5;
	}
	if (iVar0 == func_79(19))
	{
		return 6;
	}
	if (iVar0 == func_79(37))
	{
		return 7;
	}
	if (iVar0 == func_26(0))
	{
		return 8;
	}
	if (iVar0 == func_26(2))
	{
		return 9;
	}
	if (iVar0 == func_79(20))
	{
		return 10;
	}
	if (iVar0 == func_79(40))
	{
		return 11;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 12;
	}
	if (iVar0 == func_79(32))
	{
		return 13;
	}
	if (iVar0 == func_79(24))
	{
		return 14;
	}
	return 16;
}

int func_79(int iParam0)
{
	if (!func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_43(uParam0))
		{
			uParam0->f_1 = (func_42(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0xB0550BC91B0159D6(uParam0, 2);
		}
	}
}

int func_81(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var0 = { 0f, 0f, 0f };
	Var1 = { 5f, 5f, 2f };
	switch (iParam1)
	{
		case 5:
			Var0 = { 0f, 2f, 0f };
			Var1 = { 5f, 7f, 2f };
			break;
		
		case 17:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		
		case 8:
			Var0 = { 0f, 3.9f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		
		case 6:
			Var0 = { 1f, -2f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		
		case 12:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		
		case 13:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		
		case 14:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		
		case 15:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		
		case 26:
			Var0 = { -1f, -0.5f, 0f };
			Var1 = { 6.5f, 3.5f, 2f };
			break;
		
		case 46:
			func_81(iParam0, 26);
			break;
		
		case 31:
			Var0 = { 1f, -2f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		
		case 32:
			Var0 = { -1.5f, 0.5f, 0f };
			Var1 = { 5f, 6.5f, 2f };
			break;
		
		case 29:
			Var0 = { -2.1f, 4.1f, 0f };
			Var1 = { 5.5f, 5.5f, 2f };
			break;
		
		case 30:
			func_81(iParam0, 29);
			break;
		
		case 38:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		
		case 93:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 2f, 2f, 2f };
			break;
		
		case 98:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 10f, 10f, 2f };
			break;
		
		default:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
	}
	Var2 = { unk_0x6B62510F212526DC(iParam0, 1) };
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Var2 + Var0, Var1, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_83(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_59(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 1:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		
		case 2:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		
		case 3:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		
		case 4:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		
		case 5:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		
		case 6:
			func_59(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 8:
			func_59(uParam2, 2);
			func_84(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		
		case 10:
			func_84(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		
		case 11:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		
		case 12:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 13:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 14:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 15:
			func_59(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		
		case 17:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		
		case 25:
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		
		case 26:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		
		case 32:
			if (!Global_3)
			{
				func_59(uParam2, 2);
				func_84(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				func_59(uParam2, 2);
				func_84(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		
		case 33:
			func_84(uParam2, 16);
			func_59(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 38:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		
		case 29:
			func_84(uParam2, 64);
			func_59(uParam2, 8);
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		
		case 30:
			return func_83(29, uParam1, uParam2, uParam3);
			break;
		
		case 31:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		
		case 37:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		
		case 36:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		
		case 28:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		
		case 46:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 48:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		
		case 68:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		
		case 49:
			return func_83(140, uParam1, uParam2, uParam3);
			break;
		
		case 50:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		
		case 69:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 52:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 67:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		
		case 54:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		
		case 70:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 58:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 59:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		
		case 72:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		
		case 60:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 74:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		
		case 76:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case 77:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case 78:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		
		case 93:
			func_59(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		
		case 98:
			func_84(uParam2, 64);
			func_59(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		
		case 102:
			func_84(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		
		case 103:
			return func_83(102, uParam1, uParam2, uParam3);
			break;
		
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 111:
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 116:
			func_84(uParam2, 64);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		
		case 117:
			func_84(uParam2, 64);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			func_84(uParam2, 64);
			func_84(uParam2, 16);
			func_59(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		
		case 124:
			func_59(uParam2, 32);
			func_84(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			func_84(uParam2, 64);
			return "";
			break;
		
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 133:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		
		case 134:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

void func_84(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

void func_85(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_86()
{
	return 0;
}

int func_87(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	int iVar8;
	
	Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	iVar2 = func_22();
	iVar3 = func_78(iParam0);
	StringCopy(&Var4, "", 16);
	switch (iVar3)
	{
		case 0:
			if (Global_94980[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var4, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_94980[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var4, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_94980[2] == 65 || Global_94980[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var4, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar2 == 1 || iVar2 == 2)
			{
				return 0;
			}
			StringCopy(&Var4, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar2 == 1 || iVar2 == 2)
			{
				return 0;
			}
			StringCopy(&Var4, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar2 == 0 || iVar2 == 2)
			{
				return 0;
			}
			StringCopy(&Var4, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar2 == 0)
			{
				return 0;
			}
			StringCopy(&Var4, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar2 == 1)
			{
				return 0;
			}
			StringCopy(&Var4, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar2 == 1 || iVar2 == 0)
			{
				return 0;
			}
			StringCopy(&Var4, "FMT_3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	switch (iVar2)
	{
		case 0:
			if (((iVar3 == 0 || iVar3 == 1) || iVar3 == 3) || iVar3 == 4)
			{
				StringConCat(&Var4, "_M0", 16);
			}
			else if (!func_88(131))
			{
				StringConCat(&Var4, "_M0", 16);
			}
			else
			{
				StringConCat(&Var4, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var4, "_F", 16);
			break;
		
		case 2:
			if (iVar3 == 11)
			{
				StringConCat(&Var4, "_T0", 16);
			}
			else if (!func_88(130))
			{
				StringConCat(&Var4, "_T0", 16);
			}
			else
			{
				StringConCat(&Var4, "_T1", 16);
			}
			break;
	}
	if (vdist2(Var0, Var1) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (unk_0x48053974ED6F63CE((Var1.f_2 - Var0.f_2)) > 2f)
		{
			return 0;
		}
	}
	else if (!unk_0xBC7D3EDF3455BC35(iParam0) || !unk_0x2B5F4FBAF644BEC8(iParam0))
	{
		return 0;
	}
	bVar5 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar5 = true;
			break;
	}
	if (!unk_0xF09A4F413B0D30EB(0, 46) && !unk_0xF01464D7AF0B7347(0, 46))
	{
		return 0;
	}
	if (!bVar5)
	{
		iVar6 = unk_0x782B98242B6BBB25(iParam0);
		if (Global_100026.f_374 != iVar6)
		{
			return 0;
		}
	}
	cVar7 = { Var4 };
	StringConCat(&cVar7, "_01", 16);
	if (unk_0xE73671E3D37CF79E(&cVar7))
	{
		iVar8 = 1;
	}
	else
	{
		iVar8 = 0;
	}
	if (iVar8 || func_53(sParam3, &Var4, uParam4))
	{
		if (iVar3 == 5)
		{
			if (iVar2 == 0)
			{
				func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
			}
			else if (iVar2 == 1)
			{
				func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
			}
			else if (iVar2 == 2)
			{
				func_57(uParam2, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
			}
		}
		if (func_61(sParam3, &Var4, uParam2, iParam6, uParam4, 0))
		{
			func_48(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112915.f_9085.f_99.f_58[iParam0];
}

int func_89()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

var func_91()
{
	return Global_1575046;
}

int func_92(int iParam0)
{
	if (unk_0x4239F34C6EE6A3E9(unk_0xE2D3D51028F0428A()))
	{
		return 1;
	}
	if (unk_0x4239F34C6EE6A3E9(iParam0))
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112915.f_9085.f_330[iParam0 /*6*/];
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = func_366(iParam0);
	func_96(iParam0, Global_94980[iVar0]);
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	
	iVar0 = func_366(iParam0);
	switch (iParam1)
	{
		case 100:
			if (unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
			{
				if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_MONITORING_POLICE_FREQUENCY", "AFT_RON_MONITORING_POLICE_FREQUENCY_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_242(uLocal_55[iParam0], iVar0, iParam1);
			}
			if (Global_31551 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 101:
		case 119:
			if (iParam1 == 101)
			{
				if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_LISTENS_TO_RADIO_BROADCAST", "AFT_RON_LISTENS_TO_RADIO_BROADCAST_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			else if (iParam1 == 119)
			{
				if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_EX_TRYING_TO_PICK_UP_SIGNALS", "AFT_RON_EX_TRYING_TO_PICK_UP_SIGNALS_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0);
			if (Global_31551 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 102:
			func_232(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_57[iParam0]), &(iLocal_272[iParam0]), &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 103, "", "", "", &Local_87, &uLocal_105, &uLocal_98, 0, 4);
			break;
		
		case 103:
			func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1000f, -1000f);
			break;
		
		case 104:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_SMOKING_CRYSTAL", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_230(uLocal_55[iParam0], iVar0, iParam1, Local_75 + Vector(1f, 0f, 0f), fLocal_76, 1090519040, -1056964608);
				if ((!unk_0x4239F34C6EE6A3E9(uLocal_55[iParam0]) && !func_55()) && !unk_0x559C03F53E6937FC())
				{
					func_83(iParam1, &iVar1, &uVar2, &uVar3);
					if (uLocal_104[iParam0] >= iVar1)
					{
						unk_0x33021F68EDB8F06E(uLocal_55[iParam0], 25000, 30000, 0, 1, 1, 0);
						if (unk_0xE5965CDF24F93A9F(uLocal_59[iParam0]))
						{
							unk_0xE6451C2F193342C7(uLocal_59[iParam0], 1, 1);
						}
						if (unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
						{
							unk_0xE6451C2F193342C7(uLocal_64[iParam0], 1, 1);
						}
						func_226(uLocal_55[iParam0], 90000, 0);
						func_239(iVar0, 138);
					}
				}
			}
			func_223(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_sparks", &(uLocal_80[iParam0]), &(uLocal_79[iParam0]), Local_85[iParam0 /*16*/], Local_86[iParam0 /*16*/], &(iLocal_272[iParam0]), "spark", 4f, 0, uLocal_59[iParam0]);
			func_223(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_flame", &uLocal_81, &(uLocal_79[iParam0]), Local_85[iParam0 /*16*/], Local_86[iParam0 /*16*/], &(iLocal_272[iParam0]), "flame", 5f, 0, uLocal_59[iParam0]);
			break;
		
		case 105:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_DRINKING_MOONSHINE_FROM_A_JAR", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		
		case 106:
			if (func_220(uLocal_55[iParam0], iVar0, iParam1, Local_75 + Vector(1f, 0f, 0f), fLocal_76, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), &(iLocal_272[iParam0]), uLocal_59[iParam0], uLocal_64[iParam0], uLocal_270))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			}
			break;
		
		case 107:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1);
			break;
		
		case 108:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1);
			break;
		
		case 109:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "MICHAEL_DRINKING_BEER", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		
		case 110:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			func_219(uLocal_55[iParam0], iVar0, 111, "FMTAUD", "MIC_IG_4", &Local_87, &uLocal_105, &uLocal_98, &iParam1, 4);
			if (Global_94980[iVar0] == 111)
			{
				iParam1 = 111;
			}
			break;
		
		case 111:
			func_217(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), &(iLocal_57[iParam0]), &(uLocal_59[iParam0]), &(iLocal_60[iParam0]), 1);
			break;
		
		case 116:
			if (iParam0 == 2)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[2]), 1, 0);
			}
			else
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[2 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[2 /*16*/], "_TREVOR", &(iLocal_272[2]));
				if (Global_94980[9] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			func_207(1);
			break;
		
		case 117:
			if (iParam0 == 2)
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[2]), 1, 0))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_58[iParam0]), &uLocal_271))
					{
					}
				}
			}
			else
			{
				if (func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[2 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[2 /*16*/], "_TREVOR", &(iLocal_272[2])))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_58[iParam0]), &uLocal_271))
					{
					}
				}
				if (Global_94980[9] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			if (Global_31551 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 112:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_SMOKING_CRYSTAL", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			func_204(uLocal_55[iParam0], iVar0, iParam1);
			break;
		
		case 113:
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			}
			func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_POO", "TREVORS_POO_FAIL", uLocal_55[iParam0], &(Local_84[iParam0 /*16*/]), 0);
			func_204(uLocal_55[iParam0], iVar0, iParam1);
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(uLocal_55[iParam0], 0)) < (35f * 35f))
			{
				unk_0x584B286572B48431();
			}
			break;
		
		case 114:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_BLOWING_SHIT_UP", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1090519040, -1056964608);
			if (unk_0xCE2C78E9FC0B01E3(iLocal_272[iParam0]))
			{
				fVar4 = unk_0x54DE1614490C2A83(iLocal_272[iParam0]);
				if (!unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
				{
					if (iLocal_65[iParam0] == 0)
					{
						if (fVar4 < 0.6f)
						{
							iLocal_65[iParam0] = unk_0xB8DEE91181C30E65(joaat("weapon_grenade"));
						}
					}
				}
				else
				{
					if (func_203(&(uLocal_64[iParam0]), &(Local_85[iParam0 /*16*/]), "", "", "GRENADE_THROWING_grenade", &(iLocal_272[iParam0]), 12))
					{
					}
					if (fVar4 > 0.6f)
					{
						unk_0x45B4BDAA12353E7D(unk_0x6B62510F212526DC(uLocal_64[iParam0], 1), 0, 1056964608, 1, 0, 1065353216, 0);
						unk_0x4BDA5AFD88C085EB(&(uLocal_64[iParam0]));
						iLocal_65[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		
		case 115:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0);
			break;
		
		case 118:
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			func_207(1);
			break;
		
		case 120:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_WORKING_A_MOONSHINE_SILL", "AFT_RON_EX_MOONSHINE_SILL_LOOP_MASTER", iLocal_69, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_232(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_57[iParam0]), &(iLocal_272[iParam0]), &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 138, "FMTAUD", "", "RONEX_IG_3", &Local_87, &uLocal_105, &uLocal_98, 0, 4);
			if (unk_0xCE2C78E9FC0B01E3(iLocal_272[iParam0]) && unk_0xE5965CDF24F93A9F(uLocal_59[iParam0]))
			{
				bVar5 = true;
				if (iLocal_57[iParam0] == 3)
				{
					if (!unk_0x67596C52BC17FB9C(iLocal_272[iParam0]) && unk_0x099CAD293190F449(uLocal_59[iParam0], uLocal_55[iParam0]))
					{
						if (unk_0x54DE1614490C2A83(iLocal_272[iParam0]) >= 0.3f)
						{
							bVar5 = false;
						}
						if (unk_0x54DE1614490C2A83(iLocal_272[iParam0]) >= 0.6f)
						{
							unk_0xE6451C2F193342C7(uLocal_59[iParam0], 1, 1);
						}
					}
				}
				if (bVar5)
				{
					func_202(uLocal_64[iParam0], iParam1, "scr_fam_moonshine_pour", &(uLocal_80[iParam0]), 0f);
				}
				else if (unk_0x6B8F21F773404988(uLocal_80[iParam0]))
				{
					unk_0x0F53BC871BA89C94(uLocal_80[iParam0], 0);
				}
			}
			func_207(1);
			break;
		
		case 121:
			if (unk_0xE5965CDF24F93A9F(uLocal_59[iParam0]))
			{
				Var7 = { unk_0x6B62510F212526DC(uLocal_59[iParam0], 1) };
			}
			else if (unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
			{
				Var7 = { unk_0x6B62510F212526DC(uLocal_64[iParam0], 1) };
			}
			else
			{
				Var7 = { unk_0x6B62510F212526DC(uLocal_55[iParam0], 1) };
			}
			Var6 = { unk_0x6B62510F212526DC(uLocal_55[iParam0], 1) + Var7 / Vector(2f, 2f, 2f) };
			fVar8 = (vdist(Var6, unk_0x6B62510F212526DC(uLocal_55[iParam0], 1)) - 0.1f);
			if (!unk_0x90BD7EB173E1CFD6(Var6, fVar8, 0, 1, 1, 0, 0, uLocal_55[iParam0], 0))
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0))
				{
				}
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1.5f, -1.5f);
			}
			if (!unk_0xCE2C78E9FC0B01E3(iLocal_272[iParam0]))
			{
			}
			else
			{
				if (unk_0x32DCDA1B2F8A0694(uLocal_55[iParam0]))
				{
					unk_0x03A927199A2DFE46(uLocal_55[iParam0]);
					iLocal_57[iParam0] = 0;
					func_239(iVar0, 137);
				}
				if (!unk_0x8FEA2E94638F9767(uLocal_55[iParam0], joaat("weapon_pistol"), 0))
				{
					unk_0x9521FB98DB6DDF50(uLocal_55[iParam0], joaat("weapon_pistol"), -1, 1, 1);
				}
				else
				{
					fVar9 = unk_0x54DE1614490C2A83(iLocal_272[iParam0]);
					bVar10 = false;
					if (unk_0xE5965CDF24F93A9F(uLocal_59[iParam0]))
					{
						if (!unk_0x0747E45CFF1F74AA(uLocal_59[iParam0], unk_0xE2D3D51028F0428A(), 1))
						{
							bVar10 = true;
						}
						else
						{
							unk_0x5C65DDDC219B3AA5(uLocal_59[iParam0], 0);
						}
					}
					else
					{
						bVar10 = true;
					}
					if (unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
					{
						if (!unk_0x0747E45CFF1F74AA(uLocal_64[iParam0], unk_0xE2D3D51028F0428A(), 1))
						{
							bVar10 = true;
						}
						else
						{
							unk_0x5C65DDDC219B3AA5(uLocal_64[iParam0], 0);
						}
					}
					else
					{
						bVar10 = true;
					}
					if (!bVar10)
					{
						iLocal_57[iParam0] = 0;
						func_239(iVar0, 138);
					}
					fVar11 = -1f;
					fVar12 = -1f;
					if (unk_0x0AF1DAD2F59B2C3C(&(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), "shoot", &fVar11, &fVar12))
					{
						if (fVar11 > 0f && fVar12 > 0f)
						{
							if (fVar9 >= fVar11 && fVar9 <= (fVar12 + 0.1f))
							{
								if (iLocal_57[iParam0] == 0)
								{
									Var13 = { 0.1f, 0f, 0.043f };
									if (unk_0xE5965CDF24F93A9F(uLocal_59[iParam0]))
									{
										Var14 = { unk_0xCACAD935C0BEE14F(uLocal_59[iParam0], Var13 + Vector(0f, 0f, 2f)) };
										unk_0x5C65DDDC219B3AA5(uLocal_59[iParam0], 0);
									}
									else if (unk_0xE5965CDF24F93A9F(uLocal_64[iParam0]))
									{
										Var14 = { unk_0xCACAD935C0BEE14F(uLocal_64[iParam0], Var13 + Vector(0f, 0f, 2f)) };
										unk_0x5C65DDDC219B3AA5(uLocal_64[iParam0], 0);
									}
									else
									{
										iLocal_57[iParam0] = 0;
										func_239(iVar0, 138);
									}
									unk_0x3E3D339BAD67F6F2(uLocal_55[iParam0], 62, 1);
									unk_0x53AF46D2EF908A45(uLocal_55[iParam0], Var14, 0);
									iLocal_57[iParam0]++;
								}
							}
							else
							{
								iLocal_57[iParam0] = 0;
							}
						}
						else
						{
							iLocal_57[iParam0] = 0;
						}
					}
					else
					{
						iLocal_57[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		
		case 122:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "KIDNAPPED_WIFE_CLEANING", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		
		case 123:
			if (func_246(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "KIDNAPPED_WIFE_DOES_GARDEN_WORK", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			func_207(1);
			break;
		
		case 124:
			if (iParam0 == 3)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[3]), 1, 1);
				if (Global_94980[8] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					func_239(iVar0, 138);
				}
			}
			else if (unk_0xE5965CDF24F93A9F(uLocal_55[iParam0]))
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[3 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[3 /*16*/], "_PATRICIA", &(iLocal_272[3]));
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1090519040, -1056964608);
			}
			if (Global_31551 == 4)
			{
				func_239(iVar0, 138);
			}
			break;
		
		case 125:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			func_189(51, 4);
			if (unk_0xACC32B78196FBC2A(&cLocal_88))
			{
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_105, "FMTAUD", &Local_87, &uLocal_98, &(uLocal_104[iParam0]), 7.5f, "FMT_5_1", 0))
				{
					cLocal_88 = { Local_87[0 /*4*/] };
				}
			}
			else
			{
				iVar15 = (uLocal_104[iParam0] - 1);
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_105, "FMTAUD", &Local_87, &uLocal_98, &iVar15, 7.5f, &cLocal_88, 0))
				{
					StringCopy(&cLocal_88, "", 16);
				}
			}
			break;
		
		case 137:
			func_108(uLocal_55[iParam0], iVar0, Local_75, 1082130432, 1);
			break;
		
		case 138:
			func_105(uLocal_55[iParam0], iVar0, &(iLocal_57[iParam0]), &(uLocal_59[iParam0]), &(iLocal_60[iParam0]), &(uLocal_64[iParam0]), &(iLocal_65[iParam0]), &(uLocal_58[iParam0]), &(iLocal_272[iParam0]));
			break;
		
		case 140:
		case 141:
			break;
		
		default:
			break;
	}
	if (Global_94980[iVar0] != iParam1)
	{
		func_104(iVar0, Global_94980[iVar0], &(Local_77[iParam0 /*3*/]), &(uLocal_78[iParam0]));
		func_98(uLocal_55[iParam0], iVar0, Global_94979, 1);
		func_97(iParam0);
		iLocal_83[iParam0] = -1;
	}
}

void func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = func_366(iParam0);
	iLocal_60[iParam0] = 0;
	iLocal_61[iParam0] = -1;
	Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
	iLocal_65[iParam0] = 0;
	iLocal_66[iParam0] = -1;
	Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
	switch (Global_94980[iVar0])
	{
		case 100:
		case 101:
		case 119:
			iLocal_65[iParam0] = joaat("prop_cs_hand_radio");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 106:
			iLocal_60[iParam0] = joaat("prop_binoc_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 105:
		case 120:
			iLocal_60[iParam0] = joaat("prop_ceramic_jug_cork");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = joaat("prop_ceramic_jug_01");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			if (Global_94980[iVar0] == 120)
			{
				iLocal_70 = joaat("prop_still");
				iLocal_71 = -1;
				Local_72 = { -0.12f, -0.954f, -0.772f };
				Local_73 = { 0f, 0f, -6f };
			}
			break;
		
		case 121:
			iLocal_60[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_61[iParam0] = -1;
			Local_62[iParam0 /*3*/] = { -6.463f, 6.136f, 0.324f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, -42f };
			iLocal_65[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_66[iParam0] = -1;
			Local_67[iParam0 /*3*/] = { -6.644f, 5.982f, 0.324f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, -3f };
			break;
		
		case 114:
			iLocal_60[iParam0] = joaat("prop_whiskey_bottle");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = unk_0xB8DEE91181C30E65(joaat("weapon_grenade"));
			iLocal_66[iParam0] = -1;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 109:
			iLocal_60[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 110:
		case 111:
			iLocal_60[iParam0] = joaat("prop_phone_ing");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 104:
		case 112:
			iLocal_60[iParam0] = joaat("p_cs_lighter_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = joaat("prop_cs_crackpipe");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 123:
			iLocal_65[iParam0] = joaat("prop_cs_trowel");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 122:
			iLocal_65[iParam0] = joaat("prop_scourer_01");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		default:
			break;
	}
}

int func_98(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0xE2D3D51028F0428A())
	{
		return 0;
	}
	if (((iParam1 != 3 && Global_94980[iParam1] != 47) && Global_94980[iParam1] != 137) && Global_94980[iParam1] != 138)
	{
		unk_0x03A927199A2DFE46(iParam0);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	unk_0x3E3D339BAD67F6F2(iParam0, 60, 1);
	unk_0xD6A76BAB45A4B460(iParam0, 104, 1);
	unk_0xCACF57AD414ACC75(iParam0, 0);
	iVar0 = 1;
	unk_0x3E3D339BAD67F6F2(iParam0, 62, 1);
	unk_0xD6A76BAB45A4B460(iParam0, 294, 1);
	if (Global_94980[iParam1] == 121 || Global_94980[iParam1] == 118)
	{
	}
	else
	{
		unk_0xD07E491BDA082CED(iParam0, 2);
		iVar0 = 1;
	}
	if (Global_94980[iParam1] == 108)
	{
		unk_0xD07E491BDA082CED(iParam0, 64);
		iVar0 = 1;
	}
	if (func_103(iParam1, &uVar3))
	{
		unk_0x54E818A233B540D4(iParam0, uVar3);
		iVar1 = 1;
	}
	if (!bParam3)
	{
		if (func_101(iParam0, iParam1))
		{
			iVar2 = 1;
		}
	}
	func_100(&iParam0, iParam2);
	if (Global_94980[iParam1] == 116)
	{
		unk_0x2BC29BBCB216BA16(iParam0, 1, 20, 0);
		iVar0 = 1;
	}
	else if (Global_94980[iParam1] == 41)
	{
	}
	else
	{
		unk_0x2BC29BBCB216BA16(iParam0, 1, 0, 1);
		iVar0 = 1;
	}
	if (func_99(Global_94980[iParam1]))
	{
		unk_0x4EE98FB70F8A09DE(iParam0, "mood_sleeping_1", 0);
		iVar0 = 1;
	}
	else
	{
		unk_0x12FAE55D27F5BC42(iParam0);
	}
	if ((iVar0 || iVar1) || iVar2)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 42:
		case 43:
		case 65:
		case 66:
		case 135:
			return 1;
			break;
	}
	return 0;
}

void func_100(int iParam0, int iParam1)
{
	unk_0xA7266A50941DBAEA(*iParam0, 0);
	unk_0xD6A76BAB45A4B460(*iParam0, 20, 1);
	unk_0xD07E491BDA082CED(*iParam0, 16);
	if (iParam1 != -86095805)
	{
		unk_0xFF4BEB6CFF55A013(*iParam0, iParam1);
	}
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	sVar1 = "";
	iVar2 = 0;
	switch (Global_94980[iParam1])
	{
		case 52:
		case 67:
		case 74:
			sVar1 = "V_Michael_G_Hall";
			iVar2 = unk_0x63AC7EFB770FCB6F(-812.6f, 179.4f, 72.2f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x2E87280918B16506(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 56:
		case 57:
			if (iParam1 == 0)
			{
				sVar1 = "V_Michael_1_Hall";
				iVar2 = unk_0x63AC7EFB770FCB6F(-812.2079f, 181.3398f, 71.153f, "v_michael");
				if (func_102(iParam0, iVar2, unk_0x2E87280918B16506(sVar1)))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!Global_3)
				{
					unk_0x3C46BE5CFF0F7003(iParam0);
				}
				iVar0 = 0;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			sVar1 = "V_Michael_1_Hall";
			iVar2 = unk_0x63AC7EFB770FCB6F(-812.2079f, 181.3398f, 71.153f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x2E87280918B16506(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 47:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = unk_0x63AC7EFB770FCB6F(-803.4384f, 182.9567f, 73.2608f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x2E87280918B16506(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 75:
		case 84:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = unk_0x63AC7EFB770FCB6F(-803.4384f, 182.9567f, 73.2608f, "v_michael");
			if (func_102(iParam0, iVar2, unk_0x2E87280918B16506(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		default:
			if (!Global_3)
			{
			}
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_102(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xBCC73B466E2B2350(iParam1))
	{
		if (unk_0xEA02B859DE237081(iParam1))
		{
			unk_0x9EE5DF347F5D97CA(uParam0, iParam1, iParam2);
			return 1;
		}
		else
		{
			unk_0xEE4B783969C74BA1(uParam0, iParam1);
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0, var uParam1)
{
	switch (Global_94980[iParam0])
	{
		case 11:
			*uParam1 = 0.4f;
			return 1;
			break;
		
		case 12:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 13:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 14:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 15:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 20:
			*uParam1 = 0.5f;
			return 1;
			break;
		
		case 37:
			*uParam1 = 1.25f;
			return 1;
			break;
		
		case 33:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
			*uParam1 = 0.5f;
			return 1;
			break;
		
		case 81:
			*uParam1 = 0.5f;
			return 1;
			break;
		
		case 50:
		case 69:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 90:
			*uParam1 = 1f;
			return 1;
			break;
		
		case 107:
			*uParam1 = 0.5f;
			return 1;
			break;
		
		case 108:
			*uParam1 = 0.8f;
			return 1;
			break;
		
		case 121:
			*uParam1 = 0.75f;
			return 1;
			break;
		
		case 112:
			*uParam1 = 1.5f;
			return 1;
			break;
		
		case 113:
			*uParam1 = 1.25f;
			return 1;
			break;
		
		case 123:
			*uParam1 = 0.8f;
			return 1;
			break;
		
		case 126:
			*uParam1 = 0.5f;
			return 1;
			break;
		
		case 137:
		case 138:
			if (iParam0 == 13 || iParam0 == 13)
			{
				*uParam1 = 0.3f;
				return 1;
			}
			break;
	}
	*uParam1 = 0f;
	return 0;
}

int func_104(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*fParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_104(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*fParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, unk_0xC4EAB25A108C2429(-0.5f, 0.5f), unk_0xC4EAB25A108C2429(-0.5f, 0.5f)) };
					*fParam3 = (306f + unk_0xC4EAB25A108C2429(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = unk_0xD12EFCAB87804BED(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*fParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*fParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_104(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*fParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*fParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*fParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*fParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*fParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*fParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*fParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*fParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*fParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*fParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*fParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*fParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_104(iParam0, 26, uParam2, fParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*fParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*fParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*fParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*fParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*fParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*fParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*fParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*fParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*fParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*fParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*fParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*fParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_104(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f)) };
				*fParam3 = (*fParam3 + unk_0xC4EAB25A108C2429(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*fParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*fParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*fParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*fParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*fParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_104(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return 1;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*fParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*fParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*fParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*fParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*fParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*fParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*fParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*fParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*fParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*fParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*fParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*fParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*fParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*fParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*fParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*fParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*fParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*fParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*fParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*fParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*fParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*fParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*fParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*fParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*fParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*fParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*fParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*fParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*fParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*fParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*fParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*fParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*fParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*fParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_112915.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_112915.f_18533[2] == 300 || Global_112915.f_18533[2] == 301) || Global_112915.f_18533[2] == 302) || Global_112915.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return 1;
					}
					if (func_7())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*fParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_104(iParam0, 130, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f)) };
						*fParam3 = (*fParam3 + unk_0xC4EAB25A108C2429(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*fParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = unk_0xC4EAB25A108C2429(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*fParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*fParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*fParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*fParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0xC4EAB25A108C2429(-10f, 10f), unk_0xC4EAB25A108C2429(-10f, 10f), 0f };
			*fParam3 = unk_0xC4EAB25A108C2429(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0xC4EAB25A108C2429(-10f, 10f), unk_0xC4EAB25A108C2429(-10f, 10f), 0f };
	*fParam3 = unk_0xC4EAB25A108C2429(0f, 360f);
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	char* sVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	struct<3> Var22;
	struct<3> Var23;
	int iVar24;
	float fVar25;
	int iVar26;
	
	if (unk_0xCE2C78E9FC0B01E3(*uParam8))
	{
		unk_0x7FF9609F5D8471AF(*uParam8);
	}
	if (*uParam8 != -1)
	{
		*uParam8 = -1;
	}
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, 1805844857) != 1)
		{
			iVar1 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar0, -1);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (unk_0xE5965CDF24F93A9F(uVar0[iVar2]) && !unk_0xF68107C40359970C(uVar0[iVar2]))
				{
					if (unk_0xBE07513D5933D805(uVar0[iVar2]) == 6)
					{
						unk_0x7734082B0EDB0BE0(iParam0, uVar0[iVar2], 75f, -1, 1, 0);
						*uParam2 = 0;
						return 0;
					}
				}
				iVar2++;
			}
			if (unk_0x174CED88B97C78D9(iParam0, -251125078) != 1)
			{
				unk_0x84918839A90C954C(iParam0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 75f, -1, 1, 0);
				*uParam2 = 0;
				return 0;
			}
		}
		if (unk_0xE5965CDF24F93A9F(*uParam3))
		{
			if (unk_0x099CAD293190F449(*uParam3, iParam0))
			{
				unk_0xE6451C2F193342C7(*uParam3, 1, 1);
				if (unk_0x099CAD293190F449(*uParam3, iParam0))
				{
					unk_0xE6451C2F193342C7(iParam0, 1, 1);
				}
				*uParam4 = 0;
				*uParam3 = 0;
			}
		}
		if (unk_0xE5965CDF24F93A9F(*uParam5))
		{
			if (unk_0x099CAD293190F449(*uParam5, iParam0))
			{
				unk_0xE6451C2F193342C7(*uParam5, 1, 1);
				if (unk_0x099CAD293190F449(*uParam5, iParam0))
				{
					unk_0xE6451C2F193342C7(iParam0, 1, 1);
				}
				*uParam6 = 0;
				*uParam5 = 0;
			}
		}
		if (unk_0xE5965CDF24F93A9F(*uParam7))
		{
			if (unk_0x099CAD293190F449(*uParam7, iParam0))
			{
				unk_0xE6451C2F193342C7(*uParam7, 1, 1);
				if (unk_0x099CAD293190F449(*uParam7, iParam0))
				{
					unk_0xE6451C2F193342C7(iParam0, 1, 1);
				}
				*uParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_108(iParam0, iParam1, unk_0x6B62510F212526DC(iParam0, 0), 40f, 1))
			{
				unk_0xD07E491BDA082CED(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (unk_0xE5965CDF24F93A9F(*uParam3))
			{
				if (unk_0x099CAD293190F449(*uParam3, iParam0))
				{
					unk_0xE6451C2F193342C7(*uParam3, 1, 1);
					*uParam3 = 0;
				}
			}
			if (unk_0xE5965CDF24F93A9F(*uParam5))
			{
				if (unk_0x099CAD293190F449(*uParam5, iParam0))
				{
					unk_0xE6451C2F193342C7(*uParam5, 1, 1);
					*uParam3 = 0;
				}
			}
			if (unk_0xE5965CDF24F93A9F(*uParam7))
			{
				if (unk_0x099CAD293190F449(*uParam7, iParam0))
				{
					unk_0xE6451C2F193342C7(*uParam7, 1, 1);
					*uParam7 = 0;
				}
			}
			if (unk_0x174CED88B97C78D9(iParam0, 713668775) != 1)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
				{
					unk_0x7D1424753688EE7A(iParam0, func_107(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
					return 0;
				}
			}
			else
			{
				wait(5);
				if (unk_0xF68107C40359970C(iParam0))
				{
					return 0;
				}
				iVar3 = unk_0x9FA616DF1EF7172A(iParam0, &uVar4, &uVar5);
				if (iVar3 != 2)
				{
					*uParam2 = 1;
					return 0;
				}
				else
				{
					unk_0x03A927199A2DFE46(iParam0);
					unk_0x7D1424753688EE7A(iParam0, func_107(iParam0, iParam1, 0), 1f, -1, 0.25f, 0, 40000f);
					wait(0);
					if (!unk_0xF68107C40359970C(iParam0) && unk_0x174CED88B97C78D9(iParam0, 713668775) == 1)
					{
						iVar3 = unk_0x9FA616DF1EF7172A(iParam0, &uVar4, &uVar5);
						if (iVar3 != 2)
						{
							*uParam2 = 1;
							return 0;
						}
					}
				}
			}
			sVar6 = "PROP_HUMAN_SEAT_CHAIR";
			bVar7 = true;
			if (func_106(69, &iVar8, &iVar9, &iVar10, &iVar11))
			{
				if (iParam1 == iVar8)
				{
					if (unk_0x5355BAA621C153CF(iParam0, iVar9) == iVar10 && unk_0xF1050E548C37F4A5(iParam0, iVar9) == iVar11)
					{
						if (unk_0xAEC3FB024079CF27(sVar6))
						{
							unk_0x247F21B1803F0EC4(sVar6, 0);
							bVar7 = false;
						}
					}
				}
			}
			if (unk_0x15616E8442D3D1E8(unk_0x6B62510F212526DC(iParam0, 0)))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
				{
					unk_0xF8A35AC94BEA4275(iParam0, 16);
					unk_0xF8A35AC94BEA4275(iParam0, 8192);
					unk_0xD86A0BC9CC0A625A(iParam0, 1193033728, 0);
					*uParam2 = 1;
					return 0;
				}
			}
			break;
		
		case 1:
			if (func_108(iParam0, iParam1, unk_0x6B62510F212526DC(iParam0, 0), 40f, 1))
			{
				unk_0xD07E491BDA082CED(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (!unk_0x5B138084858689AC(unk_0x6B62510F212526DC(iParam0, 1), 5f, 1))
			{
			}
			else if (unk_0xC85B76C87214BD87(unk_0x6B62510F212526DC(iParam0, 1), 5f, 1))
			{
			}
			else
			{
				if (bVar7)
				{
				}
				if (Global_31551 == 3)
				{
					if (!unk_0xACC32B78196FBC2A(sVar6) && unk_0xAEC3FB024079CF27(sVar6))
					{
						unk_0x247F21B1803F0EC4(sVar6, 0);
						return 0;
					}
				}
				if (!unk_0x174CED88B97C78D9(iParam0, 1647992574) != 1)
				{
					unk_0x1D698ECDFF42AC58(iParam0, unk_0x6B62510F212526DC(iParam0, 1), 5f, 0);
				}
				else
				{
					unk_0xD07E491BDA082CED(iParam0, 8208);
					*uParam2 = 2;
					return 0;
				}
			}
			if (unk_0x174CED88B97C78D9(iParam0, 713668775) == 1)
			{
				iVar12 = unk_0x9FA616DF1EF7172A(iParam0, &uVar13, &uVar14);
				if (iVar12 == 2)
				{
					Var15 = { func_107(iParam0, iParam1, 0) };
					unk_0x03A927199A2DFE46(iParam0);
					unk_0x7D1424753688EE7A(iParam0, Var15, 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
				return 0;
			}
			if (unk_0x174CED88B97C78D9(iParam0, 923520851) == 1 || unk_0x174CED88B97C78D9(iParam0, -1146898486) == 1)
			{
				iVar16 = unk_0x9FA616DF1EF7172A(iParam0, &uVar17, &uVar18);
				if (iVar16 == 2)
				{
					unk_0x7D1424753688EE7A(iParam0, func_107(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
			}
			if (unk_0x32DCDA1B2F8A0694(iParam0))
			{
				unk_0xD07E491BDA082CED(iParam0, 8208);
				*uParam2 = 0;
				return 0;
			}
			if (((unk_0x174CED88B97C78D9(iParam0, 923520851) == 1 || unk_0x174CED88B97C78D9(iParam0, -1146898486) == 1) || unk_0x174CED88B97C78D9(iParam0, 713668775) == 1) || unk_0x174CED88B97C78D9(iParam0, -1146898486) == 1)
			{
			}
			else
			{
				*uParam2 = 0;
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (unk_0x174CED88B97C78D9(iParam0, 1647992574) != 1)
			{
				if (!Global_31551 == 3)
				{
					if (unk_0x5B138084858689AC(unk_0x6B62510F212526DC(iParam0, 1), 5f, 1))
					{
						unk_0x1D698ECDFF42AC58(iParam0, unk_0x6B62510F212526DC(iParam0, 1), 5f, 0);
						iVar19 = unk_0x9FA616DF1EF7172A(iParam0, &uVar20, &uVar21);
						if (iVar19 == 2 || iVar19 == 0)
						{
							Var22 = { func_107(iParam0, iParam1, 1) };
							unk_0x7D1424753688EE7A(iParam0, Var22, 1f, -1, 0.25f, 0, 40000f);
							*uParam2 = 0;
							return 0;
						}
					}
					else
					{
						*uParam2 = 1;
						return 0;
					}
				}
				else
				{
					Var23 = { func_107(iParam0, iParam1, 1) };
					unk_0x7D1424753688EE7A(iParam0, Var23, 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
			}
			if (!unk_0x23BF8ABBC9594609(iParam0))
			{
			}
			else
			{
				iVar24 = unk_0x9FA616DF1EF7172A(iParam0, &fVar25, &iVar26);
				if (func_108(iParam0, iParam1, unk_0x6B62510F212526DC(iParam0, 0), 40f, 1))
				{
					return 1;
				}
				if (iVar26 > 0)
				{
					if (unk_0xC85B76C87214BD87(unk_0x6B62510F212526DC(iParam0, 1), (fVar25 + 0.5f), 1))
					{
						iVar24 = iVar24;
						unk_0x03A927199A2DFE46(iParam0);
						*uParam2 = 1;
						return 0;
					}
				}
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	return 0;
}

int func_106(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 1:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 3:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 4:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 5:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 6:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 7:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 8:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 9:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 10:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 11:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 12:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 13:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 14:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 15:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 16:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 17:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 18:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 19:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 20:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 21:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 22:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 23:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 25:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 26:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 27:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 28:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 24:
			*uParam1 = 1;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 29:
			*uParam1 = 1;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 31:
			*uParam1 = 1;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 30:
			*uParam1 = 1;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 32:
			*uParam1 = 1;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 33:
			*uParam1 = 1;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			*uParam1 = 1;
			*iParam2 = 12;
			return 0;
			break;
		
		case 44:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 45:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 46:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 47:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 48:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 49:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 50:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 51:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 52:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 53:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 54:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 55:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 57:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 58:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 59:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 60:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 61:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 62:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 7;
			*iParam4 = 0;
			return 1;
			break;
		
		case 63:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 64:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 65:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 66:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 67:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 68:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 69:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 70:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 71:
			*uParam1 = 2;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 72:
			*uParam1 = 2;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 74:
			*uParam1 = 2;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 75:
			*uParam1 = 2;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 76:
			*uParam1 = 2;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 77:
			*uParam1 = 2;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 78:
			*uParam1 = 2;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
			*uParam1 = 2;
			*iParam2 = 12;
			return 0;
			break;
		
		case 89:
			*uParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 90:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 91:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 92:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 93:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 94:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 2;
			return 1;
			break;
		
		case 96:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 97:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 98:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 99:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 100:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 101:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 102:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 103:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 104:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 105:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 106:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 107:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 108:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 109:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 110:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 111:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 112:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 113:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 114:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 115:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 116:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 117:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 2;
			return 1;
			break;
		
		case 118:
			*uParam1 = 0;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 119:
			*uParam1 = 0;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 120:
			*uParam1 = 0;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 121:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 122:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 123:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 124:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 125:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 126:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 127:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 128:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 129:
			*uParam1 = 0;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 130:
			*uParam1 = 0;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			*uParam1 = 0;
			*iParam2 = 12;
			return 0;
			break;
		
		case 136:
			*uParam1 = 13;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 137:
			*uParam1 = 13;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 138:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 139:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 140:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 141:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 142:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 143:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 144:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 145:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 146:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 147:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 148:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 149:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 150:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 151:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 152:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 153:
			*uParam1 = 13;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 154:
			*uParam1 = 13;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 155:
			*uParam1 = 13;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 156:
			*uParam1 = 13;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 157:
			*uParam1 = 13;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 158:
		case 159:
		case 160:
		case 161:
			*uParam1 = 13;
			*iParam2 = 12;
			return 0;
			break;
	}
	*uParam1 = 16;
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	return 0;
}

Vector3 func_107(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0[10];
	struct<3> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	
	Var1 = { unk_0xCACAD935C0BEE14F(iParam0, unk_0xC4EAB25A108C2429(-5f, 5f), unk_0xC4EAB25A108C2429(10f, 50f), 0f) };
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Var0[0 /*3*/] = { -821.1343f, 155.6063f, 69.2348f };
			Var0[1 /*3*/] = { -793.1925f, 165.5698f, 70.3529f };
			Var0[2 /*3*/] = { -802.1196f, 191.1686f, 71.835f };
			Var0[3 /*3*/] = { -779.3063f, 184.1423f, 71.8354f };
			Var0[4 /*3*/] = { -781.6624f, 155.8212f, 66.4745f };
			Var0[5 /*3*/] = { -815.5585f, 179.7955f, 71.1531f };
			Var0[6 /*3*/] = { -806.1222f, 169.9548f, 71.8347f };
			Var0[7 /*3*/] = { -794.8763f, 179.0604f, 71.8347f };
			Var0[8 /*3*/] = { -798.2634f, 185.71f, 71.6055f };
			if (iParam1 == 0)
			{
				Var0[9 /*3*/] = { -808.704f, 169.7271f, 75.7504f };
			}
			else if (iParam1 == 1)
			{
				Var0[9 /*3*/] = { -800.1566f, 172.8743f, 75.7504f };
			}
			else if (iParam1 == 2)
			{
				Var0[9 /*3*/] = { -815.927f, 179.6694f, 75.7407f };
			}
			else
			{
				Var0[9 /*3*/] = { -802.9651f, 178.5574f, 75.7483f };
			}
			break;
		
		case 5:
		case 6:
		case 7:
			Var0[0 /*3*/] = { -38.2037f, -1459.511f, 30.3994f };
			Var0[1 /*3*/] = { -86.7261f, -1471.741f, 31.5351f };
			break;
		
		case 10:
		case 11:
		case 8:
		case 9:
			Var0[0 /*3*/] = { 1980.718f, 3819.236f, 31.4324f };
			Var0[1 /*3*/] = { 1974.146f, 3825.482f, 31.3671f };
			Var0[2 /*3*/] = { 1989.261f, 3820.536f, 31.3665f };
			Var0[3 /*3*/] = { 1971.335f, 3837.562f, 30.9977f };
			Var0[4 /*3*/] = { 1975.625f, 3820.181f, 32.4501f };
			Var0[5 /*3*/] = { 1969.577f, 3815.766f, 32.4287f };
			break;
		
		case 13:
			Var0[0 /*3*/] = { -1148.791f, -1522.923f, 9.633f };
			Var0[1 /*3*/] = { -1151.635f, -1521.531f, 3.3567f };
			Var0[2 /*3*/] = { -1145.883f, -1542.178f, 3.3772f };
			Var0[3 /*3*/] = { -1167.146f, -1505.143f, 3.3794f };
			Var0[4 /*3*/] = { -1187.058f, -1532.172f, 3.3795f };
			Var0[5 /*3*/] = { -1156.815f, -1517.506f, 9.6327f };
			Var0[6 /*3*/] = { -1157.309f, -1525.37f, 9.6321f };
			Var0[7 /*3*/] = { -1148.621f, -1519.622f, 9.6327f };
			Var0[8 /*3*/] = { -1149.495f, -1513.108f, 9.6327f };
			if (Global_31551 == 4 || Global_31551 == 6)
			{
				Var0[8 /*3*/] = { 0f, 0f, 0f };
			}
			else
			{
				Var0[8 /*3*/] = { -1153.397f, -1522.325f, 9.6475f };
			}
			Var1 = { unk_0xCACAD935C0BEE14F(iParam0, unk_0xC4EAB25A108C2429(-2.5f, 2.5f), unk_0xC4EAB25A108C2429(5f, 10f), 0f) };
			break;
	}
	fVar3 = 1E+07f;
	iVar4 = 99;
	iVar5 = 0;
	iVar2 = 0;
	while (iVar2 < Var0.x)
	{
		if (!func_14(Var0[iVar2 /*3*/], 0f, 0f, 0f, 0))
		{
			fVar6 = unk_0x987A5F1E1A67E3C0(Var1, Var0[iVar2 /*3*/], 1);
			if (fVar6 < fVar3)
			{
				fVar3 = fVar6;
				iVar4 = iVar2;
			}
			iVar5++;
		}
		iVar2++;
	}
	iVar7 = iVar4;
	if (bParam2)
	{
		fVar3 = 1E+07f;
		iVar2 = 0;
		while (iVar2 < Var0.x)
		{
			if (!func_14(Var0[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar8 = unk_0x987A5F1E1A67E3C0(Var1, Var0[iVar2 /*3*/], 1);
				if (fVar8 < fVar3 && iVar2 != iVar4)
				{
					fVar3 = fVar8;
					iVar7 = iVar2;
				}
			}
			iVar2++;
		}
	}
	else
	{
		if (iVar5 == 0)
		{
			Var9 = { IntToFloat(unk_0x5853B15F78E1A265(-40, 40)), IntToFloat(unk_0x5853B15F78E1A265(-40, 40)), 0f };
			if (unk_0x1555F0FA7BA4FE0F(Var9, 0, &Var10, 0))
			{
				Var9 = { Var10 };
			}
			return Var9;
		}
		iVar7 = unk_0x5853B15F78E1A265(0, (iVar5 - 1));
	}
	Var11 = { Var0[iVar7 /*3*/] };
	if (unk_0x1555F0FA7BA4FE0F(Var0[iVar7 /*3*/], 0, &Var12, 0))
	{
		Var11 = { Var12 };
	}
	if (func_14(Var11, 0f, 0f, 0f, 0))
	{
		return Var1;
	}
	return Var11;
}

int func_108(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (vdist2(Param2, unk_0x6B62510F212526DC(iParam0, 1)) > (fParam3 * fParam3))
	{
		if (unk_0x174CED88B97C78D9(iParam0, 713668775) != 1)
		{
			iVar0 = -1;
			fVar1 = 0.25f;
			unk_0x7D1424753688EE7A(iParam0, Param2, 1f, iVar0, fVar1, 0, 40000f);
		}
	}
	else
	{
		if (unk_0xD8F9DF94CD871327(iParam0))
		{
			return 0;
		}
		if (func_110(iParam1, &iVar2, 1))
		{
			if (func_109(iParam1, iVar2))
			{
				func_239(iParam1, iVar2);
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (unk_0xD8F9DF94CD871327(iParam0))
		{
			return 0;
		}
		func_239(iParam1, 138);
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 20:
					if (func_22() == 0)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 29:
				case 41:
				case 44:
				case 45:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 53:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 75:
				case 84:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 92:
				case 93:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 6:
		case 7:
			switch (iParam1)
			{
				case 99:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 106:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 11:
			return 0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 126:
					return 1;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (Global_3)
	{
		switch (iParam0)
		{
			case 1:
				*uParam1 = 32;
				return 1;
				break;
			
			case 3:
				*uParam1 = 79;
				return 1;
				break;
			
			case 2:
				*uParam1 = 51;
				return 1;
				break;
		}
		*uParam1 = 141;
		return 0;
	}
	if (!bParam2)
	{
		if (func_185(iParam0, uParam1, &uVar0))
		{
			return 1;
		}
	}
	if (iParam0 == 2)
	{
		if (unk_0x04458B4E5D9E466A() && Global_98084 == 161)
		{
			return 0;
		}
		if (func_184() == 161)
		{
			return 0;
		}
	}
	if (*uParam1 != 141)
	{
		if (func_182(iParam0, *uParam1))
		{
			return 0;
		}
	}
	switch (unk_0x09FC827691DACE59())
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_176(iParam0, uParam1);
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return func_170(iParam0, uParam1);
			break;
		
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return func_166(iParam0, uParam1);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return func_111(iParam0, uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_165(uParam1);
			break;
		
		case 1:
			return func_164(uParam1);
			break;
		
		case 2:
			return func_162(uParam1);
			break;
		
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_112(var uParam0)
{
	int iVar0[8];
	float fVar1[8];
	
	if (!func_94(64))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_94(65))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_78116 == 71)
	{
		if (!func_131(60f))
		{
			*uParam0 = 136;
			return 1;
		}
	}
	if (Global_78116 == 64)
	{
		*uParam0 = 140;
		return 0;
	}
	if ((func_130(71) || func_130(74)) || func_130(65))
	{
		*uParam0 = 140;
		return 0;
	}
	if (func_129(136) != 1)
	{
		iVar0[0] = 126;
		fVar1[0] = 20f;
	}
	else
	{
		iVar0[0] = 141;
		fVar1[0] = 0f;
	}
	if (func_94(20))
	{
		iVar0[1] = 127;
		fVar1[1] = 20f;
	}
	else
	{
		iVar0[1] = 141;
		fVar1[1] = 0f;
	}
	iVar0[2] = 130;
	fVar1[2] = 20f;
	iVar0[3] = 132;
	fVar1[3] = (20f / 3f);
	iVar0[4] = 133;
	fVar1[4] = (20f / 3f);
	iVar0[5] = 134;
	fVar1[5] = (20f / 3f);
	iVar0[6] = 135;
	fVar1[6] = 20f;
	iVar0[7] = 141;
	fVar1[7] = 20f;
	return func_113(13, &iVar0, &fVar1, uParam0);
}

int func_113(int iParam0, int iParam1, float fParam2, var uParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			fVar0 = (fVar0 + (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	fVar2 = unk_0xC4EAB25A108C2429(0f, fVar0);
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			if (fVar2 < (*fParam2)[iVar1])
			{
				*uParam3 = (*iParam1)[iVar1];
				return 1;
			}
			fVar2 = (fVar2 - (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	*uParam3 = 141;
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (!func_94(20))
	{
		if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
		{
			if (func_31(2))
			{
				return 0;
			}
		}
	}
	if (iParam1 == Global_112915.f_18514[iParam0])
	{
		return 0;
	}
	if (func_119(iParam0, iParam1))
	{
		return 0;
	}
	if (func_118(iParam0, iParam1))
	{
		return 0;
	}
	if (func_117(iParam1))
	{
		return 0;
	}
	if (func_116(iParam0, iParam1))
	{
		return 0;
	}
	if (func_115(iParam1))
	{
		return 0;
	}
	if (func_184() == 161)
	{
		if ((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
		{
			return 0;
		}
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 26:
		case 46:
		case 54:
		case 70:
		case 108:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
			iVar0 = unk_0x0831C76F5BF9595E();
			iVar1 = unk_0xB1D36FA656F76888();
			iVar2 = 0;
			iVar3 = 0;
			if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar0 == -273223690)
			{
				iVar2 = 1;
			}
			if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -273223690)
			{
				iVar2 = 1;
			}
			if (iVar2 || iVar3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	
	if (Global_94980[iParam0] == 138)
	{
		return 0;
	}
	if (func_104(iParam0, iParam1, &Var0, &uVar1))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				Var0 = { Var0 + Vector(71.1531f, 179.5117f, -812.0607f) };
				break;
			
			case 5:
			case 6:
			case 7:
				Var0 = { Var0 + Vector(30.116f, -1435.997f, -14.3064f) };
				break;
			
			case 10:
			case 8:
			case 9:
			case 11:
			case 12:
				Var0 = { Var0 + Vector(32.4374f, 3819.144f, 1974.613f) };
				break;
			
			case 13:
				Var0 = { Var0 + Vector(9.6346f, -1517.601f, -1152.571f) };
				break;
		}
		Var2 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if (vdist2(Var0, Var2) < (5f * 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			if (Global_94980[1] != 141 || Global_94980[2] != 141)
			{
				return 1;
			}
			break;
		
		case 19:
			if (Global_94980[1] != 141)
			{
				return 1;
			}
			break;
		
		case 56:
		case 57:
			if (Global_94980[0] != 141)
			{
				return 1;
			}
			break;
		
		case 58:
		case 74:
			if (Global_94980[1] != 141)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	switch (Global_78116)
	{
		case 19:
			if ((iParam1 == 7 || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			if (iParam0 == 4)
			{
				return 1;
			}
			break;
		
		case 49:
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case 52:
			if (((iParam1 == 7 || iParam1 == 23) || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			break;
	}
	if (iParam1 == 5)
	{
		if (func_94(18) && !func_94(20))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			return func_128(iParam0);
			break;
		
		case 31:
			return func_128(iParam0);
			break;
		
		case 7:
		case 22:
		case 23:
			return func_127(iParam0);
			break;
		
		case 27:
			return func_127(iParam0);
			break;
		
		case 51:
			return func_127(iParam0);
			break;
		
		case 36:
			return func_125(iParam0);
			break;
		
		case 55:
		case 71:
			return func_125(iParam0);
			break;
		
		case 34:
		case 35:
		case 19:
		case 25:
		case 32:
		case 33:
		case 4:
			if (func_125(iParam0) || func_124(iParam0))
			{
				return 1;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return func_123(iParam0);
			break;
		
		case 37:
			return func_123(iParam0);
			break;
		
		case 56:
			return func_123(iParam0);
			break;
		
		case 57:
			return func_123(iParam0);
			break;
		
		case 58:
			return func_123(iParam0);
			break;
		
		case 53:
			if (Global_94980[3] == 82 || Global_94980[3] == 83)
			{
				return 1;
			}
			break;
		
		case 5:
		case 21:
			return func_124(iParam0);
			break;
		
		case 26:
		case 46:
		case 54:
		case 70:
			return func_122(iParam0);
			break;
		
		case 82:
		case 83:
			return func_125(iParam0);
			break;
		
		case 124:
			if (Global_94980[8] == 140)
			{
				return 1;
			}
			break;
		
		case 119:
		case 107:
		case 110:
			return func_121(iParam0);
			break;
		
		case 118:
		case 121:
		case 108:
		case 114:
		case 116:
		case 123:
			return func_120(iParam0);
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != 10)
	{
		if (Global_94980[10] == 118 || Global_94980[10] == 121)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_94980[8] == 108)
		{
			return 1;
		}
	}
	if (iParam0 != 9)
	{
		if (Global_94980[9] == 114 || Global_94980[9] == 116)
		{
			return 1;
		}
	}
	if (iParam0 != 11)
	{
		if (Global_94980[11] == 123 || Global_94980[11] == 116)
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != 10)
	{
		if (Global_94980[10] == 119)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_94980[8] == 107 || Global_94980[8] == 110)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != 1)
	{
		if (Global_94980[1] == 26 || Global_94980[1] == 46)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_94980[2] == 54 || Global_94980[2] == 70)
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != 0)
	{
		if (((((Global_94980[0] == 12 || Global_94980[0] == 13) || Global_94980[0] == 14) || Global_94980[0] == 15) || Global_94980[0] == 56) || Global_94980[0] == 57)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (((((Global_94980[1] == 37 || Global_94980[1] == 12) || Global_94980[1] == 13) || Global_94980[1] == 14) || Global_94980[1] == 15) || Global_94980[1] == 58)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if ((Global_94980[2] == 58 || Global_94980[2] == 56) || Global_94980[2] == 57)
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != 0)
	{
		if ((((Global_94980[0] == 5 || Global_94980[0] == 21) || Global_94980[0] == 19) || Global_94980[0] == 25) || Global_94980[0] == 4)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if ((((Global_94980[1] == 4 || Global_94980[1] == 35) || Global_94980[1] == 34) || Global_94980[1] == 33) || Global_94980[1] == 32)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_94980[2] == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	if (iParam0 != 0)
	{
		if (func_126(0))
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (func_126(1))
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_78116 == 50)
		{
			if (!func_131(60f))
			{
				return 1;
			}
		}
		if (((func_126(2) || Global_94980[2] == 59) || Global_94980[2] == 72) || Global_94980[2] == 60)
		{
			return 1;
		}
	}
	if (iParam0 != 3)
	{
		if ((func_126(3) || Global_94980[3] == 82) || Global_94980[3] == 83)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (func_130(62))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_94980[0] == 19 || Global_94980[0] == 25)
			{
				return 1;
			}
			break;
		
		case 1:
			if ((((((Global_94980[1] == 32 || Global_94980[1] == 41) || Global_94980[1] == 33) || Global_94980[1] == 34) || Global_94980[1] == 35) || Global_94980[1] == 36) || Global_94980[1] == 25)
			{
				return 1;
			}
			break;
		
		case 2:
			if (((Global_94980[2] == 48 || Global_94980[2] == 68) || Global_94980[2] == 55) || Global_94980[2] == 71)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (Global_78116 == 52)
	{
		if (!func_131(60f))
		{
			return 1;
		}
	}
	if (func_184() == 89)
	{
		return 1;
	}
	if (iParam0 != 0)
	{
		if (Global_94980[0] == 7)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_94980[1] == 27)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_94980[2] == 51)
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (iParam0 != 1)
	{
		if (Global_94980[1] == 31)
		{
			return 1;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_94980[0] == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 != 198)
	{
		if (Global_77852)
		{
			return Global_42130.f_227[iParam0];
		}
		else
		{
			return Global_112915.f_7261.f_227[iParam0];
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_93959[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_90726)
	{
		if (Global_90726[iVar0 /*5*/] != -1)
		{
			if (Global_78121.f_109[Global_90726[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(float fParam0)
{
	int iVar0;
	
	if (Global_78117 < 0)
	{
		return 0;
	}
	iVar0 = unk_0x320D1840B6DAA1CC();
	if (iVar0 < (Global_78117 + round((fParam0 * 1000f))))
	{
		return 0;
	}
	return 1;
}

int func_132(var uParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[35 /*6*/], 3) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 125;
		return 1;
	}
	*uParam0 = 141;
	return 0;
}

int func_133(var uParam0)
{
	int iVar0[3];
	float fVar1[3];
	
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[35 /*6*/], 3) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_94(39))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_130(15))
	{
		*uParam0 = 122;
		return 1;
	}
	iVar0[0] = 122;
	fVar1[0] = 25f;
	iVar0[1] = 123;
	fVar1[1] = 25f;
	if (!func_88(131))
	{
		if (func_134(0))
		{
			iVar0[2] = 124;
			fVar1[2] = 25f;
		}
		else
		{
			iVar0[2] = 141;
			fVar1[2] = 0f;
		}
	}
	else
	{
		iVar0[2] = 141;
		fVar1[2] = 0f;
	}
	return func_113(11, &iVar0, &fVar1, uParam0);
}

int func_134(int iParam0)
{
	int iVar0;
	
	if (func_31(iParam0))
	{
		return 0;
	}
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	if (func_157(iVar0))
	{
		if (!func_135(iParam0))
		{
			return 0;
		}
	}
	if (!func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_136(iVar0);
}

int func_136(int iParam0)
{
	return func_137(iParam0, 1);
}

int func_137(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_138(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_139(func_150(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_139(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_149(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_145(iParam0) - func_145(iParam1));
		iVar5 = (func_144(iParam0) - func_144(iParam1));
		iVar6 = (func_143(iParam0) - func_143(iParam1));
		iVar7 = (func_142(iParam0) - func_142(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_145(iParam1) - func_145(iParam0));
		iVar5 = (func_144(iParam1) - func_144(iParam0));
		iVar6 = (func_143(iParam1) - func_143(iParam0));
		iVar7 = (func_142(iParam1) - func_142(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_141(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_140(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_140(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_141(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_146(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_147(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 15;
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	var uVar0;
	
	func_156(&uVar0, unk_0xAA2844CAD88768B5());
	func_155(&uVar0, unk_0x80F97D7D29800A1A());
	func_154(&uVar0, unk_0x09FC827691DACE59());
	func_153(&uVar0, unk_0xD52BD97E61483713());
	func_152(&uVar0, unk_0x771485043FDC55DE());
	func_151(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_141(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_144(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_145(iParam0);
	if (iVar5 < 1 || iVar5 > func_141(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(var uParam0)
{
	int iVar0[7];
	float fVar1[7];
	
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[35 /*6*/], 3) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_134(2))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_94(39))
	{
		iVar0[0] = 116;
		fVar1[0] = 15f;
		iVar0[1] = 117;
		fVar1[1] = 12.5f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
	}
	else
	{
		iVar0[0] = 141;
		fVar1[0] = 0f;
		iVar0[1] = 141;
		fVar1[1] = 0f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
	}
	iVar0[2] = 112;
	fVar1[2] = 15f;
	iVar0[3] = 113;
	fVar1[3] = 15f;
	iVar0[5] = 114;
	fVar1[5] = 15f;
	iVar0[6] = 115;
	fVar1[6] = 15f;
	return func_113(9, &iVar0, &fVar1, uParam0);
}

int func_159(var uParam0)
{
	int iVar0[4];
	float fVar1[4];
	
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[35 /*6*/], 3) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_134(0))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!func_88(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!func_94(14))
	{
		*uParam0 = 141;
		return 0;
	}
	if (func_88(131))
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0[0] = 107;
	fVar1[0] = 25f;
	iVar0[1] = 108;
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3816[0 /*166*/][12 /*11*/][(32 / 32)], (32 % 32)))
	{
		fVar1[1] = (25f * 2f);
	}
	else
	{
		fVar1[1] = 25f;
	}
	iVar0[2] = 109;
	fVar1[2] = 25f;
	iVar0[3] = 110;
	fVar1[3] = 25f;
	return func_113(8, &iVar0, &fVar1, uParam0);
}

int func_160(var uParam0)
{
	int iVar0[6];
	float fVar1[6];
	int iVar2;
	int iVar3;
	
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[35 /*6*/], 3) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_78116 == 62)
	{
		if (func_131(60f))
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (!func_88(130))
	{
		if (!func_31(2))
		{
			*uParam0 = 141;
			return 0;
		}
		iVar0[0] = 100;
		fVar1[0] = 16.6f;
		iVar0[1] = 101;
		fVar1[1] = 16.6f;
		iVar0[2] = 102;
		fVar1[2] = 16.6f;
		iVar0[3] = 104;
		fVar1[3] = 16.6f;
		iVar0[4] = 105;
		fVar1[4] = 16.6f;
		iVar2 = unk_0x09FC827691DACE59();
		if (iVar2 > 20 || iVar2 < 6)
		{
			iVar0[5] = 106;
			fVar1[5] = 16.6f;
		}
		else
		{
			iVar0[5] = 141;
			fVar1[5] = 0f;
		}
	}
	else
	{
		if (!func_31(2))
		{
			if (func_130(15))
			{
				*uParam0 = 118;
				return 1;
			}
			iVar0[0] = 118;
			fVar1[0] = 20f;
		}
		else
		{
			iVar3 = unk_0x09FC827691DACE59();
			if (iVar3 > 20 || iVar3 < 6)
			{
				iVar0[0] = 106;
				fVar1[0] = 16.6f;
			}
			else
			{
				iVar0[0] = 141;
				fVar1[0] = 0f;
			}
		}
		iVar0[1] = 119;
		fVar1[1] = 20f;
		iVar0[2] = 120;
		fVar1[2] = 20f;
		iVar0[3] = 121;
		fVar1[3] = 20f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
		iVar0[5] = 141;
		fVar1[5] = 0f;
	}
	return func_113(10, &iVar0, &fVar1, uParam0);
}

int func_161(var uParam0)
{
	int iVar0[4];
	float fVar1[4];
	
	if (func_130(0) || Global_78116 == 0)
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_98084 == 196)
	{
		if (unk_0x04458B4E5D9E466A() || func_89())
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (func_88(126))
	{
		*uParam0 = 98;
		return 1;
	}
	iVar0[0] = 94;
	fVar1[0] = 25f;
	iVar0[1] = 95;
	fVar1[1] = 25f;
	iVar0[2] = 96;
	fVar1[2] = 25f;
	iVar0[3] = 97;
	fVar1[3] = 25f;
	return func_113(5, &iVar0, &fVar1, uParam0);
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[6];
	float fVar4[6];
	
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 61;
		fVar2[0] = 10f;
		iVar1[1] = 64;
		fVar2[1] = 10f;
		iVar1[2] = 65;
		fVar2[2] = 70f;
		iVar1[3] = 141;
		fVar2[3] = 10f;
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 63;
		fVar4[4] = 10f;
		iVar3[5] = 66;
		fVar4[5] = 20f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_163()
{
	if (Global_39534[11] == 1)
	{
		return 4;
	}
	if (!func_94(21))
	{
		return 0;
	}
	if (!func_88(130))
	{
		return 1;
	}
	if (!func_88(131))
	{
		return 2;
	}
	if (!func_94(22))
	{
		return 1;
	}
	if (!func_94(49))
	{
		return 3;
	}
	if (!func_94(28))
	{
		return 1;
	}
	return 3;
}

int func_164(var uParam0)
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[4];
	float fVar4[4];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 40;
		fVar2[0] = 10f;
		iVar1[1] = 36;
		fVar2[1] = 10f;
		iVar1[2] = 28;
		fVar2[2] = 30f;
		iVar1[3] = 42;
		fVar2[3] = 30f;
		iVar1[4] = 141;
		fVar2[4] = 20f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 30f;
		iVar3[1] = 45;
		fVar4[1] = 30f;
		iVar3[2] = 42;
		fVar4[2] = 30f;
		iVar3[3] = 141;
		fVar4[3] = 10f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[9];
	float fVar4[9];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 17;
		fVar2[0] = 30f;
		iVar1[1] = 10;
		fVar2[1] = 30f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		iVar1[3] = 5;
		fVar2[3] = 30f;
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_166(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_169(uParam1);
			break;
		
		case 1:
			return func_168(uParam1);
			break;
		
		case 2:
			return func_167(uParam1);
			break;
		
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_167(var uParam0)
{
	int iVar0;
	int iVar1[8];
	float fVar2[8];
	int iVar3[7];
	float fVar4[7];
	
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 48;
		fVar2[0] = 20f;
		iVar1[1] = 55;
		fVar2[1] = 20f;
		iVar1[2] = 141;
		fVar2[2] = 25f;
		iVar1[3] = 141;
		fVar2[3] = 0f;
		iVar1[4] = 56;
		fVar2[4] = (7.5f / 3f);
		iVar1[5] = 57;
		fVar2[5] = (7.5f / 3f);
		if (!func_94(20))
		{
			iVar1[6] = 58;
			fVar2[6] = 7.5f;
		}
		else
		{
			iVar1[6] = 141;
			fVar2[6] = 0f;
		}
		iVar1[7] = 59;
		fVar2[7] = 10f;
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 68;
		fVar4[4] = 20f;
		iVar3[5] = 71;
		fVar4[5] = 20f;
		iVar3[6] = 72;
		fVar4[6] = 10f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1[7];
	float fVar2[7];
	int iVar3[4];
	float fVar4[4];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 38;
		fVar2[0] = 10f;
		iVar1[1] = 37;
		fVar2[1] = 10f;
		iVar1[2] = 39;
		fVar2[2] = 10f;
		iVar1[3] = 40;
		fVar2[3] = 10f;
		iVar1[4] = 29;
		fVar2[4] = 10f;
		iVar1[5] = 36;
		fVar2[5] = 10f;
		if (!func_130(52))
		{
			iVar1[6] = 27;
			fVar2[6] = 10f;
		}
		else
		{
			iVar1[6] = 141;
			fVar2[6] = 0f;
		}
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 30f;
		iVar3[1] = 45;
		fVar4[1] = 30f;
		iVar3[2] = 29;
		fVar4[2] = 30f;
		iVar3[3] = 141;
		fVar4[3] = 10f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_169(var uParam0)
{
	int iVar0;
	int iVar1[9];
	float fVar2[9];
	int iVar3[9];
	float fVar4[9];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 9;
		fVar2[0] = 10f;
		iVar1[1] = 10;
		fVar2[1] = 10f;
		iVar1[2] = 11;
		fVar2[2] = 15f;
		iVar1[3] = 16;
		fVar2[3] = 40f;
		if (!func_94(20))
		{
			iVar1[4] = 0;
			fVar2[4] = 10f;
			iVar1[5] = 12;
			fVar2[5] = (15f / 4f);
			iVar1[6] = 13;
			fVar2[6] = (15f / 4f);
			iVar1[7] = 14;
			fVar2[7] = (15f / 4f);
			iVar1[8] = 15;
			fVar2[8] = (15f / 4f);
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
			iVar1[5] = 141;
			fVar2[5] = 0f;
			iVar1[6] = 141;
			fVar2[6] = 0f;
			iVar1[7] = 141;
			fVar2[7] = 0f;
			iVar1[8] = 141;
			fVar2[8] = 0f;
		}
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_175(uParam1);
			break;
		
		case 1:
			return func_174(uParam1);
			break;
		
		case 2:
			return func_172(uParam1);
			break;
		
		case 3:
			return func_171(uParam1);
			break;
		
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[3];
	float fVar4[3];
	
	if (Global_78116 == 49)
	{
		if (!func_131((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar2[0] = 25f;
		if (!func_130(20))
		{
			iVar1[1] = 82;
			fVar2[1] = 25f;
		}
		else
		{
			iVar1[1] = 141;
			fVar2[1] = 0f;
		}
		iVar1[2] = 141;
		fVar2[2] = 12.5f;
		return func_113(3, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 84;
		fVar4[0] = 25f;
		if (!func_130(20))
		{
			iVar3[1] = 82;
			fVar4[1] = 25f;
		}
		else
		{
			iVar3[1] = 141;
			fVar4[1] = 0f;
		}
		iVar3[2] = 141;
		fVar4[2] = 12.5f;
		return func_113(3, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_172(var uParam0)
{
	int iVar0;
	int iVar1[7];
	float fVar2[7];
	int iVar3[8];
	float fVar4[8];
	
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar2[0] = 10f;
		iVar1[1] = 52;
		fVar2[1] = 10f;
		iVar1[2] = 53;
		fVar2[2] = 10f;
		iVar1[3] = 54;
		fVar2[3] = 20f;
		iVar1[4] = 55;
		fVar2[4] = 15f;
		iVar1[5] = 141;
		fVar2[5] = 10f;
		if (!func_94(19))
		{
			if (func_173())
			{
				iVar1[6] = 49;
				fVar2[6] = 10f;
			}
			else
			{
				iVar1[6] = 141;
				fVar2[6] = 0f;
			}
		}
		else
		{
			iVar1[6] = 50;
			fVar2[6] = 10f;
		}
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 69;
		fVar4[5] = 10f;
		iVar3[5] = 71;
		fVar4[5] = 15f;
		iVar3[6] = 70;
		fVar4[6] = 20f;
		iVar3[7] = 67;
		fVar4[7] = 10f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_173()
{
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -773.7231f, 168.8327f, 65f, -772.2901f, 136.8156f, 68f, 22f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_174(var uParam0)
{
	int iVar0;
	int iVar1[10];
	float fVar2[10];
	int iVar3[3];
	float fVar4[3];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar2[0] = 15f;
		iVar1[1] = 38;
		fVar2[1] = 10f;
		iVar1[2] = 29;
		fVar2[2] = 10f;
		if (!func_130(52))
		{
			iVar1[3] = 27;
			fVar2[3] = 10f;
		}
		else
		{
			iVar1[3] = 141;
			fVar2[3] = 0f;
		}
		iVar1[4] = 31;
		fVar2[4] = 10f;
		iVar1[5] = 33;
		fVar2[5] = 20f;
		iVar1[6] = 34;
		fVar2[6] = (10f / 2f);
		iVar1[7] = 35;
		fVar2[7] = (10f / 2f);
		iVar1[8] = 43;
		fVar2[8] = 10f;
		iVar1[9] = 141;
		fVar2[9] = 5f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 33.33333f;
		iVar3[1] = 45;
		fVar4[1] = 33.33333f;
		iVar3[2] = 46;
		fVar4[2] = 33.33333f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_175(var uParam0)
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[9];
	float fVar4[9];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		if (!func_94(20))
		{
			if (!func_130(52))
			{
				iVar1[0] = 7;
				fVar2[0] = 20f;
			}
			else
			{
				iVar1[0] = 141;
				fVar2[0] = 0f;
			}
			iVar1[1] = 0;
			fVar2[1] = 10f;
		}
		else
		{
			iVar1[0] = 141;
			fVar2[0] = 0f;
			iVar1[1] = 141;
			fVar2[1] = 0f;
		}
		iVar1[2] = 141;
		fVar2[2] = 20f;
		iVar1[3] = 5;
		fVar2[3] = 40f;
		iVar1[4] = 8;
		fVar2[4] = 10f;
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_176(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_181(uParam1);
			break;
		
		case 1:
			return func_180(uParam1);
			break;
		
		case 2:
			return func_179(uParam1);
			break;
		
		case 3:
			return func_178(uParam1);
			break;
		
		case 4:
			return func_177(uParam1);
			break;
		
		case 5:
			return func_161(uParam1);
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 0;
			break;
		
		case 10:
			return func_160(uParam1);
			break;
		
		case 8:
			return func_159(uParam1);
			break;
		
		case 9:
			return func_158(uParam1);
			break;
		
		case 11:
			return func_133(uParam1);
			break;
		
		case 12:
			return func_132(uParam1);
			break;
		
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_177(var uParam0)
{
	int iVar0;
	int iVar1[8];
	float fVar2[8];
	int iVar3[8];
	float fVar4[8];
	
	if (Global_78116 == 19)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 87;
		fVar2[0] = 12.5f;
		iVar1[1] = 88;
		fVar2[1] = 12.5f;
		iVar1[2] = 90;
		fVar2[2] = 12.5f;
		iVar1[3] = 91;
		fVar2[3] = 12.5f;
		if (!func_130(17))
		{
			iVar1[4] = 89;
			fVar2[4] = 12.5f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		iVar1[5] = 92;
		fVar2[5] = 12.5f;
		iVar1[6] = 93;
		fVar2[6] = 12f;
		iVar1[7] = 141;
		fVar2[7] = 0.5f;
		return func_113(4, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 87;
		fVar4[0] = 12.5f;
		iVar3[1] = 88;
		fVar4[1] = 12.5f;
		iVar3[2] = 90;
		fVar4[2] = 12.5f;
		iVar3[3] = 91;
		fVar4[3] = 12.5f;
		iVar3[4] = 89;
		fVar4[4] = 12.5f;
		iVar3[5] = 92;
		fVar4[5] = 12.5f;
		iVar3[6] = 93;
		fVar4[6] = 12f;
		iVar3[7] = 141;
		fVar4[7] = 0.5f;
		return func_113(4, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_178(var uParam0)
{
	int iVar0;
	int iVar1[3];
	float fVar2[3];
	int iVar3[4];
	float fVar4[4];
	
	if (Global_78116 == 49)
	{
		if (!func_131((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar2[0] = 20f;
		iVar1[1] = 81;
		fVar2[1] = 20f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		return func_113(3, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 84;
		fVar4[0] = 20f;
		iVar3[1] = 81;
		fVar4[1] = 20f;
		iVar3[2] = 141;
		fVar4[2] = 20f;
		return func_113(3, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_179(var uParam0)
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[6];
	float fVar4[6];
	
	if (func_184() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar2[0] = 10f;
		iVar1[1] = 48;
		fVar2[1] = 20f;
		if (!func_94(19))
		{
			if (func_173())
			{
				iVar1[2] = 49;
				fVar2[2] = 20f;
			}
			else
			{
				iVar1[2] = 141;
				fVar2[2] = 0f;
			}
		}
		else
		{
			iVar1[2] = 50;
			fVar2[2] = 20f;
		}
		iVar1[3] = 141;
		fVar2[3] = 10f;
		if (!func_130(21))
		{
			iVar1[4] = 51;
			fVar2[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 68;
		fVar4[4] = 20f;
		iVar3[5] = 69;
		fVar4[5] = 20f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_180(var uParam0)
{
	int iVar0;
	int iVar1[6];
	float fVar2[6];
	int iVar3[3];
	float fVar4[3];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar2[0] = 15f;
		iVar1[1] = 32;
		fVar2[1] = 15f;
		if (!func_130(52))
		{
			iVar1[2] = 27;
			fVar2[2] = 15f;
		}
		else
		{
			iVar1[2] = 141;
			fVar2[2] = 0f;
		}
		iVar1[3] = 41;
		fVar2[3] = 10f;
		iVar1[4] = 141;
		fVar2[4] = 20f;
		iVar1[5] = 33;
		fVar2[5] = 15f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 33.33333f;
		iVar3[1] = 45;
		fVar4[1] = 33.33333f;
		iVar3[2] = 46;
		fVar4[2] = 33.33333f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_181(var uParam0)
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[9];
	float fVar4[9];
	
	iVar0 = func_163();
	if (iVar0 == 0)
	{
		iVar1[0] = 18;
		fVar2[0] = 60f;
		iVar1[1] = 5;
		fVar2[1] = 10f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		iVar1[3] = 6;
		fVar2[3] = 10f;
		if (!func_94(20))
		{
			iVar1[4] = 0;
			fVar2[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78116 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	
	iVar1 = 145;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Var0 = { Var0 + Vector(71.1531f, 179.5117f, -812.0607f) };
			break;
		
		case 5:
		case 6:
		case 7:
			Var0 = { Var0 + Vector(30.116f, -1435.997f, -14.3064f) };
			break;
		
		case 10:
		case 8:
		case 9:
		case 11:
		case 12:
			Var0 = { Var0 + Vector(32.4374f, 3819.144f, 1974.613f) };
			if (iParam0 == 8)
			{
				iVar1 = 0;
			}
			else if (iParam0 == 9)
			{
				iVar1 = 2;
			}
			else if (iParam1 == 124)
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 13:
			Var0 = { Var0 + Vector(9.6346f, -1517.601f, -1152.571f) };
			break;
	}
	if (iVar1 == 145)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_96907[iVar2 /*17*/])
		{
			iVar3 = Global_96907[iVar2 /*17*/].f_5;
			fVar4 = Global_96907[iVar2 /*17*/].f_10.f_4;
			uVar5 = Global_96907[iVar2 /*17*/].f_10.f_6;
			iVar6 = Global_90762[iVar3 /*34*/].f_10;
			Var7 = { func_183(iVar6, 0) };
			fVar8 = vdist2(Var0, Var7);
			if (!unk_0xE2D0C323A1AE5D85(uVar5, iVar1))
			{
				if (fVar8 < (fVar4 * fVar4))
				{
					return 1;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31884[iVar0 /*23*/][iParam1 /*3*/];
}

int func_184()
{
	if (unk_0x04458B4E5D9E466A())
	{
		return Global_98084;
	}
	if (func_89())
	{
		return Global_98084;
	}
	return 318;
}

int func_185(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = -1;
	switch (iParam0)
	{
		case 0:
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78116 == 44)
			{
				if (func_131(60f))
				{
					*uParam2 = 44;
					*uParam1 = 141;
					return 1;
				}
			}
			break;
		
		case 1:
			if (func_163() == 0)
			{
				if (func_94(20))
				{
					*uParam2 = 20;
					*uParam1 = 141;
					return 1;
				}
			}
			if (func_130(18))
			{
				*uParam2 = 18;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 34;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78116 == 44)
			{
				if (func_131(60f))
				{
					*uParam2 = 44;
					*uParam1 = 29;
					return 1;
				}
			}
			break;
		
		case 2:
			if (func_130(17))
			{
				*uParam2 = 17;
				*uParam1 = 53;
				return 1;
			}
			if (func_130(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78116 == 50)
			{
				if (func_131(60f))
				{
					*uParam2 = 50;
					*uParam1 = 53;
					return 1;
				}
			}
			break;
		
		case 3:
			if (Global_78116 == 44)
			{
				*uParam2 = 44;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 5:
			if (Global_78116 == 0)
			{
				if (!func_131(60f))
				{
					*uParam2 = 0;
					*uParam1 = 96;
					return 1;
				}
			}
			if (func_130(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 6:
		case 7:
			if (Global_78116 == 43)
			{
				if (func_131(60f))
				{
					if (Global_112915.f_18514[7] != 99 && Global_112915.f_18514[6] != 99)
					{
						*uParam2 = 43;
						*uParam1 = 99;
						return 1;
					}
				}
			}
			if (!func_94(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			if (func_94(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 10:
			if (Global_78116 == 62)
			{
				if (func_131(60f))
				{
					*uParam2 = 62;
					*uParam1 = 141;
					return 1;
				}
			}
			if (Global_78116 == 14)
			{
				if (func_131(60f))
				{
					*uParam2 = 14;
					*uParam1 = 141;
					return 1;
				}
			}
			if (func_130(63))
			{
				*uParam2 = 63;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(64))
			{
				*uParam2 = 64;
				*uParam1 = 141;
				return 1;
			}
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 9:
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 11:
			if (func_130(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		
		case 13:
			if (func_130(71))
			{
				*uParam2 = 71;
				*uParam1 = 140;
				return 1;
			}
			break;
	}
	if (func_186(iParam0))
	{
		*uParam2 = 94;
		*uParam1 = 140;
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam0 != 16 && iParam0 != 15)
	{
		iVar0 = 145;
		iVar1 = 0;
		switch (iParam0)
		{
			case 6:
			case 7:
				iVar0 = 19;
				iVar1 = 8;
				break;
			
			case 0:
				iVar0 = 14;
				iVar1 = 16;
				break;
			
			case 2:
				iVar0 = 17;
				iVar1 = 32;
				break;
			
			case 1:
				iVar0 = 15;
				iVar1 = 0;
				break;
			
			default:
				return 0;
				break;
		}
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_90726)
			{
				if (Global_90726[iVar2 /*5*/] != -1)
				{
					uVar3 = Global_78121.f_109[Global_90726[iVar2 /*5*/] /*4*/];
					iVar4 = uVar3;
					if (func_33(Global_90762[iVar4 /*34*/].f_12, iVar1))
					{
						return 1;
					}
				}
				iVar2++;
			}
			if (func_18(func_19(func_22()), func_19(iVar0)) < 9)
			{
				fVar5 = func_188(func_22(), iVar0);
				switch (func_187(func_22(), iVar0))
				{
					case 0:
						if (fVar5 <= (1f * 60f))
						{
							return 1;
						}
						break;
					
					case 1:
						if (fVar5 <= (5f * 60f))
						{
							return 1;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar6 = unk_0x320D1840B6DAA1CC();
		iVar7 = 0;
		while (iVar7 < Global_112915.f_7688.f_136)
		{
			if (Global_112915.f_7688[iVar7 /*15*/].f_6 == iVar0)
			{
				iVar8 = (Global_112915.f_7688[iVar7 /*15*/].f_4 - iVar6);
				if (iVar8 < 150000)
				{
					return 1;
				}
			}
			iVar7++;
		}
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	iVar2 = func_18(iVar0, iVar1);
	if (iVar2 < 9)
	{
		return Global_112915.f_18103.f_175[iVar2 /*19*/].f_8;
	}
	return 1;
}

float func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	iVar2 = func_18(iVar0, iVar1);
	if (iVar2 < 9)
	{
		if (func_45(&(Global_112915.f_18103.f_175[iVar2 /*19*/].f_5)))
		{
			return func_41(&(Global_112915.f_18103.f_175[iVar2 /*19*/].f_5));
		}
	}
	return 0f;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_77852)
		{
			iVar0 = Global_42130[iParam0];
		}
		else
		{
			iVar0 = Global_112915.f_7261[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
				Global_38428[iParam0] = iParam1;
			}
			else if (Global_77852)
			{
				Global_42130[iParam0] = iParam1;
			}
			else
			{
				Global_112915.f_7261[iParam0] = iParam1;
			}
			unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
			func_191(iParam0);
			if (unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_190(iParam0);
			}
		}
	}
}

void func_190(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Global_38899.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xCED9E32812D6C7C7(&(Global_38899.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38899[Global_38899.f_227] = iParam0;
		Global_38899.f_227++;
	}
}

void func_191(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_199())
	{
		return;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	Var0 = { func_198(iParam0) };
	if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 2))
	{
		func_196(iParam0, &Var0);
	}
	if (!unk_0xEC32121F2E3875C8(Var0.f_5))
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0x987A5F1E1A67E3C0(Var0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1);
	if ((unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) && Global_38428[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0xB0550BC91B0159D6(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
		Global_37974[iParam0] = 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("startup_positioning")) == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_38201[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100026.f_373 == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						Global_100026.f_373 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
					}
				}
				iVar5 = Global_100026.f_373;
				iVar6 = unk_0xA0F62C1038208492(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0xCED9E32812D6C7C7(&(Global_37965[(iParam0 / 32)]), (iParam0 % 32));
					Global_38428[iParam0] = 3;
					unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xB0550BC91B0159D6(&(Global_38201[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38428[iParam0];
	}
	else if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 0))
	{
		if (Global_112915.f_9085)
		{
			iVar3 = func_193(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_24(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 1) && unk_0xB4C854DD86E40FDA(joaat("ambient_solomon")) == 0)
	{
		if (func_192())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_112915.f_7261[iParam0];
	}
	if (Global_38655[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37956[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) || (Global_37974[iParam0] == 0 && Global_38428[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_37955)
		{
		}
		else
		{
			if (!unk_0xEC32121F2E3875C8(Var0.f_5))
			{
				unk_0x5DD86AC785D8E188(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (unk_0xE2D0C323A1AE5D85(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
						iVar9 = unk_0xA0F62C1038208492(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0xB0550BC91B0159D6(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
			Global_38655[iParam0] = iVar3;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_37965[(iParam0 / 32)], (iParam0 % 32)) && Global_38428[iParam0] != 2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_37956[(iParam0 / 32)]), (iParam0 % 32));
		func_190(iParam0);
		if (Global_37974[iParam0] < 2)
		{
			Global_37974[iParam0]++;
		}
	}
}

int func_192()
{
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 0;
	}
	switch (func_22())
	{
		case 0:
			if (Global_112915.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_112915.f_9085.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_112915.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22();
	if (func_194(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[5], 0) || unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[6], 0))
			{
				return 0;
			}
		}
		if (func_29(iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_95001[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[0], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[5], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[6], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[2], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_95001[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[1], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_95001[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[3], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_95001[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_194(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				iVar0 = unk_0x15CAA6D7B11F1A7C(func_195(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_195(var uParam0)
{
	return uParam0;
}

void func_196(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_150();
	iVar1 = func_144(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_197(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_197(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_197(iParam0))
			{
				if ((unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0) && !Global_112915.f_9085.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_112915.f_7261[iParam0] = 0;
							unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_112915.f_9085.f_99.f_58[4])
				{
					Global_112915.f_7261[iParam0] = 0;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (Global_112915.f_9085.f_99.f_58[4])
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112915.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112915.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_197(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_112915.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_197(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) > 0)
			{
				Global_112915.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0xB4C854DD86E40FDA(Global_90762[70 /*34*/].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0xB4C854DD86E40FDA(joaat("omega2")) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_197(iParam0) && unk_0xB4C854DD86E40FDA(Global_90762[26 /*34*/].f_6) == 0)
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_197(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[43 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_197(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[93 /*34*/].f_6) > 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_197(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[8 /*34*/].f_6) == 0 && unk_0xB4C854DD86E40FDA(Global_90762[10 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_197(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90762[47 /*34*/].f_6) == 0)
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0xB4C854DD86E40FDA(Global_90762[70 /*34*/].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0xB4C854DD86E40FDA(Global_90762[48 /*34*/].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0xB4C854DD86E40FDA(Global_90762[39 /*34*/].f_6) == 0)
			{
				if (!func_197(iParam0))
				{
					Global_112915.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_197(iParam0))
			{
				Global_112915.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112915.f_7261[iParam0], 1, 1);
			}
			break;
	}
}

bool func_197(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_198(iParam0) };
	iVar1 = unk_0xA570D693C4A2B421(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

struct<7> func_198(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_199()
{
	if ((func_201() == -1 || func_201() == 999) && !func_200() == 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	return Global_31506;
}

int func_201()
{
	return Global_31505;
}

int func_202(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	switch (iParam1)
	{
		case 16:
			if (*uParam3 == 0)
			{
				unk_0x9E63031C188793E1();
				if (!unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x9E63031C188793E1();
				}
				else if (!unk_0x3C57C2F07FEE34D2(sParam2, "scr_fam_door_smoke"))
				{
					if (unk_0x9044EDB8A7BF67B4(iParam0))
					{
					}
					else
					{
						if (!unk_0xE5965CDF24F93A9F(iParam0))
						{
							return 0;
						}
						Var0 = { 0f, 0f, 0.05f };
						Var1 = { 0f, 0f, 0f };
						*uParam3 = unk_0x2D649DA6DC187D35(sParam2, iParam0, Var0, Var1, 1f, 0, 0, 0);
					}
				}
				else
				{
					Var0 = { -806.8f, 174f, 76.9f };
					Var1 = { 0f, 0f, 0f };
					*uParam3 = unk_0xE1DF0021F629F1D2(sParam2, Var0, Var1, 1f, 0, 0, 0, 0);
				}
				return 0;
			}
			else
			{
				if (unk_0x6B8F21F773404988(*uParam3))
				{
				}
				return 1;
			}
			break;
			return 0;
			break;
		
		case 91:
			if (*uParam3 == 0)
			{
				unk_0x9E63031C188793E1();
				if (!unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x9E63031C188793E1();
				}
				else
				{
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 0f };
					*uParam3 = unk_0xE4562F4F41C8B515(sParam2, unk_0x28AA31872A651BC7(iParam0), Var2, Var3, 60309, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
		
		case 120:
			if (*uParam3 == 0)
			{
				unk_0x9E63031C188793E1();
				if (!unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x9E63031C188793E1();
				}
				else
				{
					if (!unk_0xE5965CDF24F93A9F(iParam0))
					{
						return 0;
					}
					Var4 = { 0f, 0f, 0f };
					Var5 = { 0f, 0f, 0f };
					*uParam3 = unk_0x2D649DA6DC187D35(sParam2, iParam0, Var4, Var5, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
	}
	fParam4 = fParam4;
	*uParam3 = 0;
	return 0;
}

int func_203(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar4[64];
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xACC32B78196FBC2A(sParam1))
		{
			iVar0 = 0;
			if (!unk_0xACC32B78196FBC2A(sParam2))
			{
				iVar0 = unk_0xEE91150B7F06C500(sParam2);
			}
			iVar1 = unk_0xEE91150B7F06C500(sParam3);
			iVar2 = (iVar0 - iVar1);
			StringCopy(&Var3, "", 64);
			if (!unk_0xACC32B78196FBC2A(sParam2))
			{
				StringCopy(&Var3, unk_0x6ABF9C6F18308B78(sParam2, 0, iVar2), 64);
			}
			cVar4 = { Var3 };
			StringConCat(&cVar4, sParam4, 64);
			if (unk_0x8DEF8D80C66C34D4(*uParam0))
			{
				if (!unk_0x6F940C2636C076AD(sParam1))
				{
					unk_0x8FB472886552D737(sParam1);
					return 0;
				}
				if (!unk_0xFCF559C8631ABED7(*uParam0, sParam1, &cVar4, 3))
				{
					if (!unk_0xCE2C78E9FC0B01E3(*uParam5))
					{
						return 0;
					}
					if (iParam6 < 11)
					{
					}
					if (unk_0x508CDC652F5361B5(*uParam0))
					{
						unk_0xE6451C2F193342C7(*uParam0, 1, 1);
					}
					fVar5 = 8f;
					fVar6 = -8f;
					iVar7 = 5;
					fVar8 = 1000f;
					if (((unk_0x15CAA6D7B11F1A7C(*uParam0) == joaat("s_prop_hdphones") || unk_0x15CAA6D7B11F1A7C(*uParam0) == joaat("v_res_fa_chair02")) || unk_0x15CAA6D7B11F1A7C(*uParam0) == joaat("p_novel_01_s")) || unk_0x15CAA6D7B11F1A7C(*uParam0) == joaat("p_whiskey_bottle_s"))
					{
						fVar5 = 1000f;
						fVar6 = -1000f;
					}
					unk_0xAA8557AFE4A4A184(*uParam0, *uParam5, &cVar4, sParam1, fVar5, fVar6, iVar7, fVar8);
					if (fVar5 == 1000f)
					{
						unk_0xEC5CB2A3F2052039(*uParam0);
					}
					return 1;
				}
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
		unk_0x59E393B344098656(uParam0);
		return 0;
	}
	return 0;
}

void func_204(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	
	fVar0 = 0f;
	fVar1 = 0f;
	Var2 = { 0f, 0f, 0f };
	fVar3 = 0.938f;
	fVar4 = -0.24f;
	Var5 = { -0.09f, -0.45f, -0.069f };
	fVar6 = 0.998f;
	fVar7 = -1f;
	Var8 = { -0.33f, -0.54f, -0.09f };
	fVar9 = 0.818f;
	fVar10 = -0.03f;
	Var11 = { -0.18f, -0.42f, -0.229f };
	switch (iParam2)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					fVar0 = fVar3;
					fVar1 = fVar4;
					Var2 = { Var5 };
					break;
				
				case 1:
					fVar0 = fVar6;
					fVar1 = fVar7;
					Var2 = { Var8 };
					break;
				
				case 2:
					fVar0 = fVar9;
					fVar1 = fVar10;
					Var2 = { Var11 };
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					fVar0 = 1.118f;
					fVar1 = 0.39f;
					Var2 = { 0.425f, -0.28f, 0.2f };
					break;
				
				case 1:
					fVar0 = (3.141593f * 0.3464f);
					fVar1 = -0.15f;
					Var2 = { -0.06f, -0.6f, 0.2f };
					break;
			}
			break;
		
		case 18:
			fVar0 = (3.141593f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0.25f };
			break;
		
		case 20:
			fVar0 = 0f;
			fVar1 = 0.1f;
			Var2 = { 0.1f, 0.1f, 0f };
			break;
		
		case 26:
		case 46:
			fVar0 = (3.141593f * -0.4163f);
			fVar1 = 0f;
			Var2 = { 0f, -0.6f, 0.7f };
			break;
		
		case 42:
		case 43:
			fVar0 = (3.141593f * 0.5f);
			fVar1 = (3.141593f * -0.5f);
			Var2 = { 0.39f, 0f, -0.75f };
			break;
		
		case 29:
		case 30:
		case 44:
			fVar0 = (3.141593f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0.15f, 0f };
			break;
		
		case 54:
		case 70:
			fVar0 = (3.141593f * 0.4332f);
			fVar1 = 0f;
			Var2 = { 0f, -1f, -0.3f };
			break;
		
		case 64:
		case 55:
		case 71:
			fVar0 = (3.141593f * 0.4132f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
		
		case 94:
			fVar0 = (3.141593f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, -0.6f };
			break;
		
		case 95:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
		
		case 112:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, -0.4f, 0f };
			break;
		
		case 113:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { -0.25f, -0.5f, 0f };
			break;
		
		default:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
	}
	unk_0x6F5829203CB3B0AA(uParam0, fVar0, fVar1, Var2);
}

int func_205(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, 0f };
	iVar5 = 0;
	Var6 = { 0f, 0f, 0f };
	Var7 = { 0f, 0f, 0f };
	iVar8 = 0;
	iVar9 = 0;
	if (Var2.x == Var6.x)
	{
		if (Var7.x == Var6.x)
		{
		}
	}
	switch (iParam2)
	{
		case 0:
		case 24:
			if (iParam2 == 0)
			{
				iVar9 = 1;
			}
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.77f, 180.96f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 0;
					break;
				
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.46f, 179.88f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 0;
					break;
				
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.65f, 181.23f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			iVar9 = 1;
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.774f, 180.96f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
				
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.655f, 181.225f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
				
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.461f, 179.875f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			iVar8 = 1;
			break;
		
		case 26:
		case 46:
		case 54:
		case 70:
			iVar9 = 1;
			iVar0 = joaat("prop_patio_lounger1");
			Var1 = { -784f, 188.2f, 71.8f };
			Var2 = { 0f, 0f, 0f };
			if (iParam2 == 54 || iParam2 == 70)
			{
				Var3 = { -0.09f, -1.57f, 1f };
				Var4 = { 0f, 0f, 180f };
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 9:
					return 0;
					break;
				
				case 11:
					iVar0 = joaat("prop_chair_06");
					Var1 = { 1977.433f, 3819.045f, 32.453f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0.05f, 0f, -0.6f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (!unk_0xE5965CDF24F93A9F(*uParam3))
	{
		*uParam3 = unk_0x87A467676BDF8C35(Var1, 10f, iVar0, 1, 0, 1);
	}
	else if (unk_0x15CAA6D7B11F1A7C(*uParam3) != iVar0)
	{
		if (unk_0x099CAD293190F449(iParam0, *uParam3))
		{
			unk_0xE6451C2F193342C7(iParam0, 1, 1);
		}
		if (unk_0x099CAD293190F449(*uParam3, iParam0))
		{
			unk_0xE6451C2F193342C7(*uParam3, 1, 1);
		}
		*uParam3 = 0;
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(*uParam3))
	{
		return 0;
	}
	else
	{
		if (iVar8 == 0)
		{
			if (!unk_0x099CAD293190F449(iParam0, *uParam3))
			{
				iVar10 = 0;
				iVar11 = 1;
				iVar12 = 0;
				unk_0x9A97DC6DBC7B223D(iParam0, *uParam3, iVar5, Var3, Var4, iVar9, iVar10, iVar11, iVar12, 2, 1);
				unk_0x5C65DDDC219B3AA5(iParam0, 0);
				if (func_206(*uParam3))
				{
					unk_0x5C65DDDC219B3AA5(*uParam3, 1);
				}
				unk_0x14AD86219FE1AC08(*uParam3, iParam0, 0);
				return 0;
			}
		}
		else if (iVar8 == 1)
		{
			Var13 = { unk_0x6B62510F212526DC(*uParam3, 1) };
			Var14 = { unk_0x63A8BF5E6C2BF85C(*uParam3, 2) };
			Var15 = { unk_0x6B62510F212526DC(iParam0, 1) + Var3 };
			Var16 = { unk_0x63A8BF5E6C2BF85C(iParam0, 2) + Var4 };
			if (vdist(Var13, Var15) > 0.1f || (vdist(Var14, Var16) > 0.1f && vdist(Var14, Var16) < 360f))
			{
				unk_0xC64B6E13A6A7F517(*uParam3, unk_0x6B62510F212526DC(iParam0, 1) + Var3, 1, 0, 0, 1);
				unk_0x8CE3D365F064F69E(*uParam3, unk_0x63A8BF5E6C2BF85C(iParam0, 2) + Var4, 2, 1);
				if (func_206(*uParam3))
				{
					unk_0x5C65DDDC219B3AA5(*uParam3, 1);
				}
				unk_0x4536AE3DABDE0C44(*uParam3, 0);
				unk_0x959E1626CBC7D38A(*uParam3, 0, 0);
				unk_0x14AD86219FE1AC08(*uParam3, iParam0, 0);
				unk_0x14AD86219FE1AC08(iParam0, *uParam3, 0);
			}
			else if (iParam2 == 2 || iParam2 == 3)
			{
				if (iParam1 == 2)
				{
					iLocal_43 = 1;
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(uParam0) == joaat("v_ilev_m_sofa") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("v_ilev_m_dinechair"))
	{
		return 0;
	}
	return 1;
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		if (!iLocal_54)
		{
			unk_0xE87A5B1B96B0EC6F(Local_75, 25f, joaat("prop_barrel_01a"), 0);
			iLocal_54 = 1;
		}
	}
	else if (iLocal_54)
	{
		unk_0xA1F6E5EF42ACDB8C(Local_75, 25f, joaat("prop_barrel_01a"), 1);
		iLocal_54 = 0;
	}
}

int func_208(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<16> Param5, char* sParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	
	uVar0 = 6;
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar1, &iVar2, &fVar3, &fVar4, &iVar5) && func_104(iParam1, iParam2, &uVar6, &fVar7))
	{
		iVar8 = 1;
		iVar9 = 16;
		fVar10 = 1000f;
		iVar11 = 0;
		func_212(iParam1, iParam2, &iVar11);
		if (func_211(iVar5, 8))
		{
			func_210(&iVar8, 4);
		}
		if (!unk_0xCE2C78E9FC0B01E3(*uParam7))
		{
			return 0;
		}
		if (!unk_0xFCF559C8631ABED7(iParam0, sParam3, sParam4, 2) || unk_0x54DE1614490C2A83(*uParam7) <= 0.001f)
		{
			func_209(iParam0, *uParam7, &uVar0, &uVar1, iVar2, sParam3, sParam4, Param5, sParam6, fVar3, fVar4, iVar8, iVar9, fVar10, iVar11);
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_209(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, char* sParam23, float fParam24, float fParam25, int iParam26, int iParam27, float fParam28, int iParam29)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[64];
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = -1;
	if (!unk_0xACC32B78196FBC2A(&uParam7))
	{
		iVar1 = unk_0xEE91150B7F06C500(&uParam7);
		iVar2 = unk_0xEE91150B7F06C500(sParam23);
		iVar3 = (iVar1 - iVar2);
		StringCopy(&cVar4, unk_0x6ABF9C6F18308B78(&uParam7, 0, iVar3), 64);
		iVar5 = 0;
		while (iVar5 < iParam4 + 1)
		{
			iVar6 = iVar3;
			iVar7 = unk_0xEE91150B7F06C500(uParam3[iVar5 /*16*/]);
			if (iVar6 > iVar7)
			{
				iVar6 = iVar7;
			}
			StringCopy(&cVar8, unk_0x6ABF9C6F18308B78(uParam3[iVar5 /*16*/], 0, iVar6), 64);
			if (unk_0x3C57C2F07FEE34D2(&cVar4, &cVar8))
			{
				iVar0 = iVar5;
			}
			iVar5++;
		}
	}
	else
	{
		return;
	}
	if (iVar0 == -1)
	{
		return;
	}
	Var9 = { *(uParam2[iVar0 /*16*/]) };
	Var10 = { *(uParam3[iVar0 /*16*/]) };
	if (!unk_0xACC32B78196FBC2A(&Var9))
	{
		unk_0x8FB472886552D737(&Var9);
		if (!unk_0x6F940C2636C076AD(&Var9))
		{
			unk_0x8FB472886552D737(&Var9);
		}
		else
		{
			if (func_211(iParam27, 1))
			{
				unk_0xD07E491BDA082CED(iParam0, 16);
				unk_0xB83D9F54C7F8C2BE(iParam0, 0);
				unk_0x50274A7EACA3133A(iParam0, 1);
			}
			if (!func_211(iParam27, 64))
			{
				func_210(&iParam27, 64);
			}
			unk_0x950B26F4C891073F(iParam0, uParam1, &Var9, &Var10, fParam24, fParam25, iParam26, iParam27, fParam28, iParam29);
			unk_0x66136F80D9C9251E(iParam0, 1);
			unk_0x50274A7EACA3133A(iParam0, 1);
			*sParam5 = { Var9 };
			*sParam6 = { Var10 };
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 18:
		case 16:
			switch (iParam0)
			{
				case 0:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 38:
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 56:
		case 57:
			switch (iParam0)
			{
				case 0:
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
		case 60:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
		case 95:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 256;
					return 1;
					break;
			}
			break;
		
		case 122:
		case 123:
			switch (iParam0)
			{
				case 11:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					*iParam2 = 4;
					return 1;
					break;
				
				case 11:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		
		case 128:
		case 130:
			switch (iParam0)
			{
				case 13:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
	}
	*iParam2 = 0;
	return 0;
}

int func_213(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	struct<16> Var0;
	struct<16> Var1;
	var uVar2;
	
	*uParam5 = 4f;
	*uParam6 = -4f;
	if (func_214(iParam0, iParam1, &Var0, &Var1, uParam7, &uVar2))
	{
		switch (iParam1)
		{
			case 0:
			case 24:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam2[2 /*16*/]) = { Var0 };
				if (iParam0 != 2)
				{
					*(uParam3[0 /*16*/]) = { Var1 };
					StringConCat(uParam3[0 /*16*/], "base", 64);
					*(uParam3[1 /*16*/]) = { Var1 };
					StringConCat(uParam3[1 /*16*/], "idle_a", 64);
					*(uParam3[2 /*16*/]) = { Var1 };
					StringConCat(uParam3[2 /*16*/], "idle_b", 64);
				}
				else
				{
					StringCopy(uParam3[0 /*16*/], "base", 64);
					StringConCat(uParam3[0 /*16*/], &Var1, 64);
					StringCopy(uParam3[1 /*16*/], "idle_a", 64);
					StringConCat(uParam3[1 /*16*/], &Var1, 64);
					StringCopy(uParam3[2 /*16*/], "idle_b", 64);
					StringConCat(uParam3[2 /*16*/], &Var1, 64);
				}
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 2:
			case 3:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "eat_takeout", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "eating_disorder", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "getting_fit", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "your_boyfriend", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 4:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IsThisTheBest", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "ShouldntYouGuys", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "watching_this", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 18:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@SLEEPING", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@BASE", 64);
				StringCopy(uParam3[1 /*16*/], "Base", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_b", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 16:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@JIMMY@IG_1@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				StringCopy(uParam2[1 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Thats_Some_Good_Shit", 64);
				StringCopy(uParam2[2 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Whole_Chamber_Dog", 64);
				StringCopy(uParam2[3 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Hydrotropic_Bud_Or_Something", 64);
				StringCopy(uParam2[4 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[4 /*16*/], "Dont_Dudge_Me_Dad", 64);
				*uParam4 = 4;
				break;
			
			case 9:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Body_High2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Grow_This_Strain", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Helps_My_Glands", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Bring_Me_Some_Food", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 25:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "MICS3_15_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IDLE_A", 64);
				switch (iParam0)
				{
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 32:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 33:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 34:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 35:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 42:
			case 43:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 38:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 50:
			case 69:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 52:
			case 67:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 74:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@REUNITED@IG_7", 64);
				StringCopy(uParam3[0 /*16*/], "AmandaBase_Amanda", 64);
				*uParam4 = 0;
				StringCopy(uParam2[1 /*16*/], "", 64);
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 53:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "amanda_gets_drunk_loop1", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "amanda_gets_drunk_loop2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "amanda_gets_drunk_loop3", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 59:
			case 72:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_11_IDLE_OhReallyWow", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_11_IDLE_UhHuh", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_11_IDLE_UmHumYesIKnow", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "IG_11_IDLE_YouRSoBad", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 76:
			case 78:
			case 85:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 77:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_9_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_9_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_9_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case joaat("mpsv_lp0_31"):
			case 86:
			case 80:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				if (!Global_3)
				{
					*(uParam2[4 /*16*/]) = { Var0 };
					StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[4 /*16*/], "idle_d", 64);
					*(uParam2[5 /*16*/]) = { Var0 };
					StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[5 /*16*/], "idle_e", 64);
					*uParam4 = 5;
				}
				break;
			
			case 81:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_2_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 82:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_8_BASE", 64);
				*uParam4 = 0;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 89:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "idle_a_gardener", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_b_gardener", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_c_gardener", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 93:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_Cough", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Smoke_Idle", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 94:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 96:
			case 98:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 97:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 107:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 108:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CLUBCHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CLUBCHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CLUBCHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CLUBCHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CLUBCHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CLUBCHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 109:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				*(uParam3[4 /*16*/]) = { Var1 };
				StringConCat(uParam3[4 /*16*/], "_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_B", 64);
				*(uParam3[5 /*16*/]) = { Var1 };
				StringConCat(uParam3[5 /*16*/], "_E", 64);
				*uParam4 = 5;
				break;
			
			case 118:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_1_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_1_IDLE_A", 64);
				*uParam4 = 1;
				*uParam5 = 1.5f;
				*uParam6 = -1.5f;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 101:
			case 119:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 121:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_4_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_4_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 105:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 106:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_6_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_6_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_6_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_6_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 112:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 113:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "BaseLoop", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "StruggleLoop", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 115:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "_IDLE_01", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "_IDLE_02", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "_IDLE_03", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 122:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Clean_Up", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 123:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "IDLE_B", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 135:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 17:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 28:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_14_BASE_TRACY", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_14_IDLE_A_WhatRUDoingHere_TRACY", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_14_IDLE_B_ReallyLoveUDad_TRACY", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_14_IDLE_C_YouGotAnyBlowDad_TRACY", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 29:
			case 30:
			case 44:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_a", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_b", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_c", 64);
				*uParam4 = 2;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 45:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "FAMR_IG_5_IAmAboutToCrackThis", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "FAMR_IG_5_IAmTotallyOnTop", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "FAMR_IG_5_IAmTryingtoConcentrate", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "FAMR_IG_5_ThisCollegeStuff", 64);
				*uParam4 = 4;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 90:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 116:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "TheDesertIsSoBeautiful", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "TheDontKnowWhy", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "ThereAreJustSomeMoments", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 117:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "Making_Me_Blush", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "Met_You_20_Years_Ago", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "You_Blinked", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 124:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "PAT_IG_3", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "BASE", 64);
				StringCopy(uParam3[1 /*16*/], "BASE", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "ALT_1", 64);
				StringCopy(uParam3[2 /*16*/], "ALT_1", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "ALT_2", 64);
				StringCopy(uParam3[3 /*16*/], "ALT_2", 64);
				switch (iParam0)
				{
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
					
					case 8:
						StringConCat(uParam3[0 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[1 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[2 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[3 /*16*/], "_MICHAEL", 64);
						break;
				}
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 126:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 127:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			default:
				*uParam4 = -1;
				return 0;
				break;
			}
	}
	return 1;
}

int func_214(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*uParam4 |= 262146;
			*uParam4 = (*uParam4 - 1);
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam3, "jimmy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam3, "tracy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 2:
					StringCopy(sParam3, "_amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 2:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			*uParam4 |= 262146;
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 5:
		case 21:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 7:
		case 22:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 33816576;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 34340864;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 42:
			return func_214(iParam0, 43, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 44:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_214(iParam0, 26, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 3:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262146;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 49:
			return func_214(iParam0, 140, sParam2, sParam3, uParam4, uParam5);
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*uParam4 |= 1;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 786434;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*uParam4 |= 266240;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 62:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 1;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					if (iParam1 == 82)
					{
						*uParam5 = 3;
					}
					if (iParam1 == 83)
					{
						*uParam5 = 2;
					}
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*uParam4 |= 262144;
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262146;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_215(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
				
				case 7:
					func_215(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 101:
		case 119:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam4 = 263176;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*uParam5 = 3;
					*uParam4 |= 33816576;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*uParam4 |= 266240;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 = 267272;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*uParam4 |= 786434;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				
				case 8:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 266240;
					return 1;
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				
				case 14:
					func_216(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		
		case 138:
		case 137:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		
		case 140:
		case 141:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*uParam4 = -1;
	*uParam5 = 5;
	return 0;
}

int func_215(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)
{
	if (iParam0 != 141)
	{
	}
	StringCopy(sParam1, sParam2, 64);
	StringCopy(sParam3, sParam4, 64);
	*uParam5 = 1;
	return 1;
}

int func_216(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	return func_215(iParam0, sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@BASE", sParam2, "BASE", uParam3);
}

int func_217(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, char* sParam5, char* sParam6, var uParam7, var uParam8, var uParam9, bool bParam10)
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	float fVar6;
	var uVar7;
	
	switch (*uParam7)
	{
		case 0:
			StringCopy(sParam5, "", 64);
			StringCopy(sParam5, "", 64);
			if (func_214(iParam1, iParam2, &Var0, &Var1, &iVar2, &iVar3))
			{
			}
			if (iVar3 != 2)
			{
				unk_0x8FB472886552D737(&Var0);
				if (!unk_0x6F940C2636C076AD(&Var0))
				{
					return 0;
				}
				if (func_211(iVar2, 1))
				{
					func_218(&iVar2, 1);
				}
				unk_0x49D97B076E3590AC(iParam0, &Var0, &Var1, 8f, -1.5f, -1, iVar2, 0f, 0, 0, 0);
				*sParam5 = { Var0 };
				*sParam6 = { Var1 };
				*uParam7 = 1;
			}
			else if (func_243(iParam0, iParam1, iParam2, sParam5, sParam6, Param3, fParam4))
			{
				*uParam7 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFCF559C8631ABED7(iParam0, sParam5, sParam6, 3))
			{
				fVar4 = unk_0xD01FAFCE275C94F3(iParam0, sParam5, sParam6);
				if (fVar4 >= 1f)
				{
					unk_0x03A927199A2DFE46(iParam0);
				}
				if (unk_0xE5965CDF24F93A9F(*uParam8))
				{
					sVar5 = "hangup";
					if (unk_0x0AF1DAD2F59B2C3C(sParam5, sParam6, sVar5, &fVar6, &uVar7))
					{
					}
					else
					{
						fVar6 = -1f;
						if (unk_0x3C57C2F07FEE34D2(sParam5, "TIMETABLE@MAID@IG_8@"))
						{
							if (unk_0x3C57C2F07FEE34D2(sParam6, "IG_8_IDLE_A"))
							{
								fVar6 = 0.85f;
							}
						}
						if (fVar6 < 0f)
						{
							fVar6 = 0.5f;
						}
					}
					if (fVar4 < fVar6)
					{
					}
					else
					{
						if (unk_0xE85F749F6D5C809E(*uParam8))
						{
							unk_0xE6451C2F193342C7(*uParam8, 1, 1);
						}
						if (bParam10)
						{
							*uParam9 = 0;
							unk_0x4BDA5AFD88C085EB(uParam8);
						}
					}
				}
			}
			else
			{
				if (unk_0xE5965CDF24F93A9F(*uParam8))
				{
					if (unk_0xE85F749F6D5C809E(*uParam8))
					{
						unk_0xE6451C2F193342C7(*uParam8, 1, 1);
					}
					if (bParam10)
					{
						*uParam9 = 0;
						unk_0x4BDA5AFD88C085EB(uParam8);
					}
				}
				StringCopy(sParam5, "", 64);
				StringCopy(sParam6, "", 64);
				*uParam7 = 2;
			}
			break;
		
		case 2:
			if (bParam10)
			{
				if (unk_0xE5965CDF24F93A9F(*uParam8))
				{
				}
			}
			func_239(iParam1, 138);
			*uParam7 = 0;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_219(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	
	if (Global_94980[iParam1] != iParam2)
	{
		if (!unk_0xBC7D3EDF3455BC35(iParam0))
		{
			return 0;
		}
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) > (7f * 7f))
		{
			return 0;
		}
		if (unk_0x4239F34C6EE6A3E9(iParam0))
		{
			return 0;
		}
		if (!unk_0xACC32B78196FBC2A(sParam4))
		{
			func_83(iParam2, &uVar0, &uVar1, &uVar2);
			if (!func_33(uVar2, func_34()))
			{
				return 0;
			}
			if (func_82(uVar1, 64))
			{
				if (!unk_0xACC32B78196FBC2A(sParam4))
				{
					if (func_61(sParam3, sParam4, uParam6, iParam9, uParam5, 0))
					{
						func_48(uParam7);
						Global_94980[iParam1] = iParam2;
						return 1;
					}
				}
			}
			else
			{
				StringCopy(&Var3, sParam4, 16);
				if (func_53(sParam3, &Var3, uParam5))
				{
					if (!unk_0xACC32B78196FBC2A(&Var3))
					{
						if (func_61(sParam3, &Var3, uParam6, iParam9, uParam5, 0))
						{
							func_48(uParam7);
							Global_94980[iParam1] = iParam2;
							return 1;
						}
					}
				}
			}
			return 0;
		}
		Global_94980[iParam1] = iParam2;
		*iParam8 = Global_94980[iParam1];
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, char* sParam5, char* sParam6, var uParam7, int iParam8, int iParam9, var uParam10)
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	
	if (func_104(iParam1, iParam2, &Var0, &fVar1))
	{
		if (vdist2(unk_0x6B62510F212526DC(iParam0, 1), Param3 + Var0) > (4f * 4f))
		{
			if (!unk_0x174CED88B97C78D9(iParam0, 713668775) == 1)
			{
				unk_0x7D1424753688EE7A(iParam0, Param3 + Var0, 1f, -1, 0.25f, 0, (fParam4 + fVar1));
				if (!unk_0xACC32B78196FBC2A(sParam5))
				{
					StringCopy(sParam5, "", 64);
				}
				if (!unk_0xACC32B78196FBC2A(sParam6))
				{
					StringCopy(sParam6, "", 64);
				}
				if (unk_0xCE2C78E9FC0B01E3(*uParam7))
				{
					unk_0x7FF9609F5D8471AF(*uParam7);
				}
				*uParam7 = -1;
			}
		}
		else if (!unk_0x174CED88B97C78D9(iParam0, 713668775) == 1)
		{
			if (unk_0xE5965CDF24F93A9F(iParam8))
			{
				if (unk_0x099CAD293190F449(iParam8, iParam0))
				{
					if (!unk_0x2B5F4FBAF644BEC8(iParam8))
					{
						unk_0x1C2ED929474DC6FE(iParam8, 1, 0);
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(iParam9))
			{
				if (unk_0x099CAD293190F449(iParam9, iParam0))
				{
					if (!unk_0x2B5F4FBAF644BEC8(iParam9))
					{
						unk_0x1C2ED929474DC6FE(iParam9, 1, 0);
					}
				}
			}
			if (func_103(iParam1, &uVar2))
			{
				unk_0x54E818A233B540D4(iParam0, uVar2);
			}
			return 1;
		}
		if (unk_0xE5965CDF24F93A9F(iParam8))
		{
			if (unk_0x099CAD293190F449(iParam8, iParam0))
			{
				if (unk_0x2B5F4FBAF644BEC8(iParam8))
				{
					unk_0x1C2ED929474DC6FE(iParam8, 0, 0);
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(iParam9))
		{
			if (unk_0x099CAD293190F449(iParam9, iParam0))
			{
				if (unk_0x2B5F4FBAF644BEC8(iParam9))
				{
					unk_0x1C2ED929474DC6FE(iParam9, 0, 0);
				}
			}
		}
		unk_0x54E818A233B540D4(iParam0, 0.3f);
		return 0;
	}
	uParam10 = uParam10;
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	bool bVar9;
	float fVar10;
	
	uVar0 = 6;
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar1, &iVar2, &uVar3, &uVar4, &iVar5))
	{
		if (func_104(iParam1, iParam2, &Var6, &fVar7))
		{
			func_212(iParam1, iParam2, &iVar8);
			bVar9 = false;
			if (!bVar9)
			{
				if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					if (unk_0xFCF559C8631ABED7(iParam0, sParam3, sParam4, 1))
					{
						fVar10 = unk_0xD01FAFCE275C94F3(iParam0, sParam3, sParam4);
						if (fVar10 >= 0.99f)
						{
							func_222(iParam0, &uVar0, &uVar1, iVar2, Param5 + Var6, 0f, 0f, (fParam6 + fVar7), sParam3, sParam4, uVar3, uVar4, -1, iVar5, 0, 2, iVar8);
						}
						bVar9 = true;
					}
				}
			}
			if (!bVar9)
			{
				func_222(iParam0, &uVar0, &uVar1, iVar2, Param5 + Var6, 0f, 0f, (fParam6 + fVar7), sParam3, sParam4, uVar3, uVar4, -1, iVar5, 0, 2, iVar8);
			}
		}
		if (!unk_0xACC32B78196FBC2A(sParam3))
		{
			return unk_0xFCF559C8631ABED7(iParam0, sParam3, sParam4, 3);
		}
		return 0;
	}
	StringCopy(sParam3, "", 64);
	StringCopy(sParam4, "", 64);
	return 0;
}

void func_222(int iParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, struct<3> Param5, char* sParam6, char* sParam7, var uParam8, var uParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var5;
	
	iVar0 = iParam3;
	if (!unk_0xACC32B78196FBC2A(sParam6) && !unk_0xACC32B78196FBC2A(sParam7))
	{
		iVar1 = 0;
		while (iVar1 < iParam3 + 1)
		{
			if (unk_0x3C57C2F07FEE34D2(sParam6, uParam1[iVar1 /*16*/]) && unk_0x3C57C2F07FEE34D2(sParam7, uParam2[iVar1 /*16*/]))
			{
				if (iVar1 != 0)
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam1 - 1))
					{
						if (iVar2 + 1 < *uParam1)
						{
							*(uParam1[iVar2 /*16*/]) = { *(uParam1[iVar2 + 1 /*16*/]) };
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam1[iVar2 /*16*/], "", 64);
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
			}
			iVar1++;
		}
	}
	iVar3 = unk_0x5853B15F78E1A265(0, iVar0 + 1);
	Var4 = { *(uParam1[iVar3 /*16*/]) };
	Var5 = { *(uParam2[iVar3 /*16*/]) };
	if (!unk_0xACC32B78196FBC2A(&Var4))
	{
		unk_0x8FB472886552D737(&Var4);
		if (!unk_0x6F940C2636C076AD(&Var4))
		{
			unk_0x8FB472886552D737(&Var4);
		}
		else
		{
			if (func_211(iParam11, 1))
			{
				func_218(&iParam11, 1);
			}
			if (func_211(iParam11, 2))
			{
			}
			else
			{
				func_210(&iParam11, 2);
			}
			if (func_211(iParam11, 262144))
			{
				unk_0xD07E491BDA082CED(iParam0, 16);
				unk_0xB83D9F54C7F8C2BE(iParam0, 0);
				unk_0x50274A7EACA3133A(iParam0, 1);
			}
			unk_0x246C656F8E525DC7(iParam0, &Var4, &Var5, Param4, Param5, uParam8, uParam9, iParam10, iParam11, fParam12, iParam13, iParam14);
			unk_0x66136F80D9C9251E(iParam0, 1);
			unk_0x50274A7EACA3133A(iParam0, 1);
			*sParam6 = { Var4 };
			*sParam7 = { Var5 };
		}
	}
}

int func_223(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, char* sParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, char[4] cParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, char[4] cParam38, float fParam39, bool bParam40, int iParam41)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (iParam41 == 0)
	{
		iParam41 = iParam0;
	}
	if (vdist2(unk_0x6B62510F212526DC(iParam41, 0), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 100f)
	{
		return 1;
	}
	if (!unk_0xACC32B78196FBC2A(&sParam5))
	{
		fVar0 = -1f;
		if (unk_0xFCF559C8631ABED7(iParam0, &sParam5, &cParam21, 1))
		{
			fVar0 = unk_0xD01FAFCE275C94F3(iParam0, &sParam5, &cParam21);
		}
		else if (unk_0xFCF559C8631ABED7(iParam0, &sParam5, &cParam21, 2))
		{
			if (unk_0xCE2C78E9FC0B01E3(*uParam37))
			{
				fVar0 = unk_0x54DE1614490C2A83(*uParam37);
			}
		}
		if (fVar0 >= 0f)
		{
			if (func_225(&sParam5, &cParam21, cParam38, &fVar1, &fVar2))
			{
				if (fVar0 >= fVar1 && fVar0 <= fVar2)
				{
					if (bParam40)
					{
						if (func_202(iParam41, iParam1, sParam2, uParam3, fParam39))
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (func_224(iParam41, iParam1, sParam2, uParam4, fParam39))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (bParam40 && unk_0x6B8F21F773404988(*uParam3))
				{
					unk_0x0F53BC871BA89C94(*uParam3, 0);
				}
			}
		}
	}
	*uParam4 = 0;
	*uParam3 = 0;
	return 0;
}

int func_224(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	switch (iParam1)
	{
		case 16:
			if (!*uParam3)
			{
				unk_0x9E63031C188793E1();
				if (!unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x9E63031C188793E1();
				}
				else if (!unk_0x3C57C2F07FEE34D2(sParam2, "scr_fam_door_smoke"))
				{
					if (unk_0x9044EDB8A7BF67B4(iParam0))
					{
						Var0 = { 0f, 0f, 0f };
						Var1 = { 0f, 0f, 0f };
						if (unk_0xE4084DC6AF8BE020(sParam2, unk_0x28AA31872A651BC7(iParam0), Var0, Var1, 31086, 1f, 0, 0, 0))
						{
							*uParam3 = 1;
						}
					}
				}
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 38:
			if (!*uParam3)
			{
				unk_0x9E63031C188793E1();
				if (!unk_0x51B6C2EF8DBE2E1A())
				{
					unk_0x9E63031C188793E1();
				}
				else
				{
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 0f };
					fVar4 = 1f;
					if (unk_0xE4084DC6AF8BE020(sParam2, unk_0x28AA31872A651BC7(iParam0), Var2, Var3, 31086, fVar4, 0, 0, 0))
					{
						*uParam3 = 1;
						return 1;
					}
				}
			}
			return 0;
			break;
	}
	uParam4 = uParam4;
	return 0;
}

int func_225(char* sParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	if (unk_0x0AF1DAD2F59B2C3C(sParam0, sParam1, sParam2, uParam3, uParam4))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(sParam2, "exhale"))
	{
		if (unk_0x3C57C2F07FEE34D2(sParam0, "TIMETABLE@TRACY@IG_7@BASE") && unk_0x3C57C2F07FEE34D2(sParam1, "BASE"))
		{
			*uParam3 = -1f;
			*uParam4 = -1f;
			return 0;
		}
		if (unk_0x3C57C2F07FEE34D2(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x3C57C2F07FEE34D2(sParam1, "IDLE_A"))
		{
			*uParam3 = 0.058f;
			*uParam4 = 0.195f;
			return 1;
		}
		if (unk_0x3C57C2F07FEE34D2(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x3C57C2F07FEE34D2(sParam1, "IDLE_B"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (unk_0x3C57C2F07FEE34D2(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && unk_0x3C57C2F07FEE34D2(sParam1, "IDLE_C"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (unk_0x3C57C2F07FEE34D2(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_B") && unk_0x3C57C2F07FEE34D2(sParam1, "IDLE_D"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_229(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_228(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_227();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43534[iVar2 /*5*/] = 0;
	Global_43534[iVar2 /*5*/].f_1 = iParam0;
	Global_43534[iVar2 /*5*/].f_2 = iParam1;
	Global_43534[iVar2 /*5*/].f_3 = iParam1;
	Global_43534[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xE2D3D51028F0428A())
	{
		Global_43772 = 1;
	}
	Global_43532++;
	return 1;
}

int func_227()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43534[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43534[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43560[iVar0 /*5*/].f_1)
		{
			return Global_43560[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_230(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	
	if (func_214(iParam1, iParam2, &sVar0, &cVar1, &iVar2, &uVar3) && func_104(iParam1, iParam2, &Var4, &fVar5))
	{
		unk_0x8FB472886552D737(&sVar0);
		if (!unk_0x6F940C2636C076AD(&sVar0))
		{
			unk_0x8FB472886552D737(&sVar0);
			return 0;
		}
		else
		{
			if (!unk_0xFCF559C8631ABED7(iParam0, &sVar0, &cVar1, 3))
			{
				func_212(iParam1, iParam2, &iVar6);
				if (func_211(iVar2, 262144))
				{
					unk_0xD07E491BDA082CED(iParam0, 8208);
					unk_0xB83D9F54C7F8C2BE(iParam0, 0);
					unk_0x50274A7EACA3133A(iParam0, 1);
				}
				unk_0x246C656F8E525DC7(iParam0, &sVar0, &cVar1, Param3 + Var4, 0f, 0f, (fParam4 + fVar5), iParam5, iParam6, -1, iVar2, 0f, 2, iVar6);
				unk_0x66136F80D9C9251E(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, var uParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	struct<16> Var0;
	struct<16> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	
	if (func_214(iParam1, iParam2, &Var0, &Var1, &uVar2, &uVar3) && func_104(iParam1, iParam2, &Var4, &fVar5))
	{
		unk_0x8FB472886552D737(&Var0);
		if (!unk_0x6F940C2636C076AD(&Var0))
		{
			unk_0x8FB472886552D737(&Var0);
			StringCopy(sParam8, "", 64);
			StringCopy(sParam9, "", 64);
			return 0;
		}
		else
		{
			iVar6 = 5;
			iVar7 = 16;
			fVar8 = 1000f;
			iVar9 = 0;
			func_212(iParam1, iParam2, &iVar9);
			if (!unk_0xCE2C78E9FC0B01E3(*uParam5))
			{
				*uParam5 = unk_0x8F5F4164BF5FB513(Param3 + Var4, 0f, 0f, (fParam4 + fVar5), 2);
				unk_0xFE1CD80C2F7CBCFB(*uParam5, iParam6);
				unk_0x0BA4916484503B63(*uParam5, iParam7);
				unk_0x7541CCCB5B62C54D(*uParam5, 1f);
				if (func_211(iVar7, 1))
				{
					unk_0xD07E491BDA082CED(iParam0, 8208);
					unk_0xB83D9F54C7F8C2BE(iParam0, 0);
					unk_0x50274A7EACA3133A(iParam0, 1);
				}
				unk_0x950B26F4C891073F(iParam0, *uParam5, &Var0, &Var1, iParam10, iParam11, iVar6, iVar7, fVar8, iVar9);
				unk_0x66136F80D9C9251E(iParam0, 1);
				*sParam8 = { Var0 };
				*sParam9 = { Var1 };
				return 0;
			}
			if (!unk_0xFCF559C8631ABED7(iParam0, &Var0, &Var1, 2))
			{
				if (func_211(iVar7, 1))
				{
					unk_0xD07E491BDA082CED(iParam0, 8208);
					unk_0xB83D9F54C7F8C2BE(iParam0, 0);
					unk_0x50274A7EACA3133A(iParam0, 1);
				}
				unk_0x950B26F4C891073F(iParam0, *uParam5, &Var0, &Var1, iParam10, iParam11, iVar6, iVar7, fVar8, iVar9);
				unk_0x66136F80D9C9251E(iParam0, 1);
				unk_0xFE1CD80C2F7CBCFB(*uParam5, iParam6);
				unk_0x0BA4916484503B63(*uParam5, iParam7);
				*sParam8 = { Var0 };
				*sParam9 = { Var1 };
				return 0;
			}
			return 1;
		}
	}
	StringCopy(sParam8, "", 64);
	StringCopy(sParam9, "", 64);
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, var uParam5, var uParam6, char* sParam7, char* sParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, var uParam13, var uParam14, var uParam15, float fParam16, int iParam17)
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	struct<2> Var4;
	struct<2> Var5;
	var uVar6;
	int iVar7;
	int iVar8;
	char* sVar9;
	var uVar10;
	var uVar11;
	struct<3> Var12;
	float fVar13;
	char* sVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	char cVar20[64];
	var uVar21;
	var uVar22;
	float fVar23;
	float fVar24;
	
	switch (*uParam5)
	{
		case 0:
			if (unk_0xCE2C78E9FC0B01E3(*uParam6))
			{
				if (func_234(iParam0, iParam2, Param3, fParam4))
				{
					if (unk_0xACC32B78196FBC2A(sParam7))
					{
						func_231(iParam0, iParam1, iParam2, Param3, fParam4, uParam6, 1, 0, sParam7, sParam8, 1090519040, -1056964608);
						return 0;
					}
					if (unk_0xACC32B78196FBC2A(sParam10) && unk_0xACC32B78196FBC2A(sParam12))
					{
						unk_0xFE1CD80C2F7CBCFB(*uParam6, 0);
						unk_0x0BA4916484503B63(*uParam6, 1);
						*uParam5 = 1;
						return 0;
					}
					func_83(iParam2, &uVar0, &uVar1, &uVar2);
					if (!func_33(uVar2, func_34()))
					{
					}
					else if (func_82(uVar1, 64))
					{
						bVar3 = false;
						if (!unk_0xACC32B78196FBC2A(sParam12))
						{
							if (func_61(sParam10, sParam12, uParam14, iParam17, uParam13, 0))
							{
								func_48(uParam15);
								bVar3 = true;
							}
						}
						else if (iParam2 == 129)
						{
							bVar3 = true;
						}
						if (fParam16 != 0f)
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							unk_0xFE1CD80C2F7CBCFB(*uParam6, 0);
							unk_0x0BA4916484503B63(*uParam6, 1);
							*uParam5 = 1;
							return 0;
						}
					}
					else
					{
						StringCopy(&Var4, sParam12, 16);
						if (func_53(sParam10, &Var4, uParam13))
						{
							if (!unk_0xACC32B78196FBC2A(&Var4))
							{
								if (func_61(sParam10, &Var4, uParam14, iParam17, uParam13, 0))
								{
									func_48(uParam15);
									unk_0xFE1CD80C2F7CBCFB(*uParam6, 0);
									unk_0x0BA4916484503B63(*uParam6, 1);
									*uParam5 = 1;
									return 0;
								}
							}
						}
					}
				}
				if (!unk_0x67596C52BC17FB9C(*uParam6))
				{
					*uParam5 = 1;
					return 0;
				}
				if (!unk_0xACC32B78196FBC2A(sParam11))
				{
					if (!func_45(uParam15))
					{
						func_44(uParam15);
					}
					StringCopy(&Var5, sParam11, 16);
					if (func_53(sParam10, &Var5, uParam13))
					{
						func_52(iParam0, iParam2, uParam14, sParam10, uParam13, uParam15, &uVar6, 10f, &Var5, 0);
					}
				}
			}
			iVar7 = 8f;
			iVar8 = -8f;
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				iVar7 = 8f;
				iVar8 = -4f;
			}
			if (!func_231(iParam0, iParam1, iParam2, Param3, fParam4, uParam6, 1, 0, sParam7, sParam8, iVar7, iVar8))
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xACC32B78196FBC2A(sParam7))
			{
				func_214(iParam1, iParam2, sParam7, &sVar9, &uVar10, &uVar11);
				unk_0x8FB472886552D737(sParam7);
				if (!unk_0x6F940C2636C076AD(sParam7))
				{
					return 0;
				}
			}
			if (!unk_0xCE2C78E9FC0B01E3(*uParam6))
			{
				Var12 = { 0f, 0f, 0f };
				fVar13 = 0f;
				if (func_104(iParam1, iParam2, &Var12, &fVar13))
				{
					*uParam6 = unk_0x8F5F4164BF5FB513(Param3 + Var12, 0f, 0f, (fParam4 + fVar13), 2);
				}
			}
			sVar14 = func_233(iParam0, iParam1, iParam2);
			fVar15 = 8f;
			fVar16 = -1.5f;
			iVar17 = 1;
			iVar18 = 16;
			if (iParam2 == 47)
			{
				fVar15 = 1000f;
			}
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				fVar15 = 4f;
			}
			if (iParam9 == 141)
			{
				iVar17 |= 2;
			}
			else if (((((iParam2 == 132 || iParam2 == 133) || iParam2 == 134) || iParam2 == 73) || iParam2 == 120) || iParam2 == 129)
			{
				fVar16 = -1.5f;
			}
			else
			{
				fVar16 = -1000f;
			}
			if (iParam2 == 56)
			{
				if (iParam1 == 2)
				{
					fVar16 = -1.5f;
				}
			}
			else if (iParam2 == 57)
			{
				if (iParam1 == 2)
				{
					fVar16 = -1.5f;
				}
			}
			else if (iParam2 == 58)
			{
				if (iParam1 == 2)
				{
					fVar16 = -1.5f;
				}
			}
			unk_0x950B26F4C891073F(iParam0, *uParam6, sParam7, sVar14, fVar15, fVar16, iVar17, iVar18, 1000f, 0);
			unk_0x66136F80D9C9251E(iParam0, 1);
			unk_0xE0F81EAEB49D39EF(*uParam6, 0f);
			unk_0xFE1CD80C2F7CBCFB(*uParam6, 0);
			if (iParam2 == 73)
			{
				unk_0x0BA4916484503B63(*uParam6, 0);
			}
			else
			{
				unk_0x0BA4916484503B63(*uParam6, 1);
			}
			StringCopy(sParam8, sVar14, 64);
			unk_0xD6A76BAB45A4B460(iParam0, 185, 1);
			*uParam5 = 2;
			return 0;
			break;
		
		case 2:
			if (unk_0x174CED88B97C78D9(iParam0, 1785177548) == 1)
			{
				*uParam5 = 3;
				if (fParam16 != 0f)
				{
					*uParam5 = 33;
				}
			}
			break;
		
		case 3:
		case 33:
			if (func_214(iParam1, iParam2, &sVar19, &cVar20, &uVar21, &uVar22))
			{
				StringCopy(&cVar20, func_233(iParam0, iParam1, iParam2), 64);
			}
			if (fParam16 != 0f && *uParam5 != 3)
			{
				if (unk_0xCE2C78E9FC0B01E3(*uParam6) && unk_0x54DE1614490C2A83(*uParam6) >= fParam16)
				{
					if (!unk_0xACC32B78196FBC2A(sParam12))
					{
						if (func_61(sParam10, sParam12, uParam14, iParam17, uParam13, 0))
						{
							func_48(uParam15);
							*uParam5 = 3;
						}
					}
				}
			}
			if (unk_0x0AF1DAD2F59B2C3C(&sVar19, &cVar20, "WalkInterruptible", &fVar23, &fVar24))
			{
			}
			else
			{
				fVar23 = 0.95f;
				fVar24 = 1f;
				if (iParam2 == 21)
				{
					fVar23 = 0.44f;
					fVar24 = 1f;
				}
				if (iParam2 == 56)
				{
					if (iParam1 == 2)
					{
						fVar23 = 0.78f;
						fVar24 = 1f;
					}
				}
				else if (iParam2 == 57)
				{
					if (iParam1 == 2)
					{
						fVar23 = 0.73f;
						fVar24 = 1f;
					}
				}
				else if (iParam2 == 58)
				{
					if (iParam1 == 2)
					{
						fVar23 = 0.8f;
						fVar24 = 1f;
					}
				}
				if (iParam2 == 120)
				{
					fVar23 = 0.8f;
					fVar24 = 1f;
				}
				if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
				{
					fVar23 = 0.75f;
					fVar24 = 1f;
				}
				if (iParam2 == 73)
				{
					fVar23 = 5f;
					fVar24 = 1f;
				}
			}
			if (!unk_0xCE2C78E9FC0B01E3(*uParam6) || (unk_0xCE2C78E9FC0B01E3(*uParam6) && unk_0x54DE1614490C2A83(*uParam6) >= fVar23))
			{
				func_48(uParam15);
				if (iParam9 == 141)
				{
					unk_0x13C3030981EA7C3B(iParam0, unk_0xCACAD935C0BEE14F(iParam0, 0f, 1.5f, 0f), 1f, 20000, 1193033728, 1056964608);
					unk_0xA8685678DDA27FC3(iParam0, -668482597, 0, 0, 0);
					unk_0xEB087B19F63AB053(iParam0, 0, 0);
					*uParam5 = 4;
				}
				else
				{
					if (iParam9 == 137 || iParam9 == 138)
					{
						if (unk_0xCE2C78E9FC0B01E3(*uParam6))
						{
							unk_0x7FF9609F5D8471AF(*uParam6);
						}
						*uParam6 = -1;
					}
					func_48(uParam15);
					*uParam5 = 0;
					func_239(iParam1, iParam9);
					return 0;
				}
			}
			break;
		
		case 4:
			*uParam5 = 0;
			func_239(iParam1, 138);
			break;
		
		case 5:
			if (iParam9 == 137 || iParam9 == 138)
			{
				if (unk_0xCE2C78E9FC0B01E3(*uParam6))
				{
					unk_0x7FF9609F5D8471AF(*uParam6);
				}
				*uParam6 = -1;
			}
			func_48(uParam15);
			*uParam5 = 0;
			func_239(iParam1, iParam9);
			return 0;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam2)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return "JIM_IG_2_P2_Lagging";
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return "IG_2_Exit";
					break;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					return "EXIT_JIMMY";
					break;
				
				case 1:
					return "EXIT_TRACY";
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 2:
					return "IG_2_P2_ItsNotWastingTime_AMANDA";
					break;
				
				case 0:
					return "IG_2_P2_ItsNotWastingTime_JIMMY";
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 2:
					return "IG2_P3_ItsNotABigDeal_AMANDA";
					break;
				
				case 0:
					return "IG2_P3_ItsNotABigDeal_JIMMY";
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 2:
					return "IG_3_WhenURPregnant_AMANDA";
					break;
				
				case 1:
					return "IG_3_WhenURPregnant_TRACY";
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					return "IG_9_IAmOnToYou_AMANDA";
					break;
				
				case 3:
					return "IG_9_IAmOnToYou_MAID";
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam1)
			{
				case 2:
					return "IG_7_EXIT";
					break;
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 2:
					return "Ugh_kale_Amanda";
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 13:
					return "Pineapple_EXIT_LOOP_FLOYD";
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam1)
			{
				case 2:
					return "IG_6_EXIT";
					break;
			}
			break;
		
		case 37:
			if (iParam2 == 37)
			{
				iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
				if (iVar0 == func_79(15))
				{
					return "EXIT_TRACY";
				}
				else if (iVar0 == joaat("a_m_y_hipster_01"))
				{
					return "EXIT_BOY";
				}
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 10:
					return "ENTER";
					break;
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 10:
					return "IG_3_IDLE_A";
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam1)
			{
				case 13:
					return "base";
					break;
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	iParam2 = iParam2;
	return "null";
}

int func_234(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<7> Var6;
	struct<7> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	char[] cVar17[8];
	int iVar18;
	float fVar19;
	struct<3> Var20;
	struct<3> Var21;
	float fVar22;
	
	switch (iParam1)
	{
		case 5:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (15f * 15f))
				{
					return 1;
				}
			}
			else if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (7.5f * 7.5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 37:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (8.5f * 8.5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 56:
		case 57:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (5f * 5f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 58:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (5f * 5f))
			{
				return 1;
			}
			Var0 = { -0.42f, 0.68f, 1f };
			Var1 = { 4.5f, 2.75f, 1f };
			fVar2 = -22f;
			if (func_236(unk_0xE2D3D51028F0428A(), Param2 + Var0, Var1, (fParam3 + fVar2), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 47:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (3f * 3f))
			{
				return 1;
			}
			Var3 = { 10.8751f, 2.6168f, 1.47f };
			Var4 = { 7.5f, 3f, 1.5f };
			fVar5 = -21f;
			if (func_236(unk_0xE2D3D51028F0428A(), Param2 + Var3, Var4, (fParam3 + fVar5), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 52:
		case 67:
		case 74:
			Var6 = { func_198(38) };
			Var7 = { func_198(39) };
			if (!unk_0xEC32121F2E3875C8(Var6.f_5) || !unk_0xEC32121F2E3875C8(Var7.f_5))
			{
				return 0;
			}
			else
			{
				fVar8 = unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(Var6.f_5));
				fVar9 = unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(Var7.f_5));
				if (fVar8 >= 0.1f || fVar9 >= 0.1f)
				{
					return 0;
				}
			}
			Var10 = { -0.72f, 0.52f, 1f };
			Var11 = { 3f, 3f, 1f };
			fVar12 = -22f;
			if (func_236(unk_0xE2D3D51028F0428A(), Param2 + Var10, Var11, (fParam3 + fVar12), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 73:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 129:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 61:
		case 63:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			func_235(3, &iVar13, &Var14, &iVar15, &iVar16, &cVar17, &iVar18);
			if (iVar15 != 226)
			{
			}
			else if (!unk_0xEC32121F2E3875C8(iVar16))
			{
				unk_0x5DD86AC785D8E188(iVar16, iVar13, Var14, 1, 1, 0);
			}
			else
			{
				fVar19 = unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(iVar16));
				if (fVar19 >= 0.5f)
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 102:
		case 120:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 132:
		case 134:
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1)) < (4f * 4f))
			{
				return 1;
			}
			return 0;
			break;
		
		case 133:
			Var20 = { 0f, 0f, 1f };
			Var21 = { 2f, 2f, 1f };
			fVar22 = 0f;
			if (func_236(unk_0xE2D3D51028F0428A(), Param2 + Var20, Var21, (fParam3 + fVar22), 0, 1, 0))
			{
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_235(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("v_ilev_mm_doorson");
			*uParam2 = { -806.8f, 174f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Son", 64);
			*iParam3 = 226;
			*iParam4 = 1850241841;
			*iParam6 = 0;
			break;
		
		case 1:
			*iParam1 = joaat("v_ilev_mm_doordaughter");
			*uParam2 = { -802.7f, 176.2f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Daught", 64);
			*iParam3 = 226;
			*iParam4 = -378388578;
			*iParam6 = 0;
			break;
		
		case 2:
			*iParam1 = joaat("v_ilev_mm_doorw");
			*uParam2 = { -805f, 171.9f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = -1223666875;
			*iParam6 = 0;
			break;
		
		case 3:
			*iParam1 = joaat("v_ilev_mm_doorw");
			*uParam2 = { -809.281f, 177.855f, 76.89f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = 1893421006;
			*iParam6 = 0;
			break;
		
		case 4:
			*iParam1 = joaat("v_ilev_mm_fridge_l");
			*uParam2 = { -804.1f, 185.8f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 5:
			*iParam1 = joaat("v_ilev_mm_fridge_r");
			*uParam2 = { -802.8f, 186.3f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 6:
			*iParam1 = joaat("prop_bh1_48_backdoor_l");
			*uParam2 = { -796.5657f, 177.2214f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 41;
			*iParam4 = 776026812;
			*iParam6 = 1;
			break;
		
		case 7:
			*iParam1 = joaat("prop_bh1_48_backdoor_r");
			*uParam2 = { -794.5051f, 178.0124f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 42;
			*iParam4 = 698422331;
			*iParam6 = 1;
			break;
		
		case 8:
			*iParam1 = joaat("v_ilev_mm_doorm_l");
			*uParam2 = { -817f, 179f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 38;
			*iParam4 = -2097039789;
			*iParam6 = 1;
			break;
		
		case 9:
			*iParam1 = joaat("v_ilev_mm_doorm_r");
			*uParam2 = { -816f, 178f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 39;
			*iParam4 = -2127416656;
			*iParam6 = 1;
			break;
		
		case 10:
			*iParam1 = joaat("v_ilev_trev_doorbath");
			*uParam2 = { -1150.158f, -1518.768f, 10.781f };
			StringCopy(sParam5, "rm_bathroom", 64);
			*iParam3 = 226;
			*iParam4 = 2007032394;
			*iParam6 = 0;
			break;
		
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			StringCopy(sParam5, "NULL", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 0;
			break;
	}
}

int func_236(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0.x = (Param1.x - (cos(fParam3) * Param2.x));
	Var0.f_1 = (Param1.f_1 - (sin(fParam3) * Param2.x));
	Var0.f_2 = (Param1.f_2 - Param2.f_2);
	Var1.x = (Param1.x + (cos(fParam3) * Param2.x));
	Var1.f_1 = (Param1.f_1 + (sin(fParam3) * Param2.x));
	Var1.f_2 = (Param1.f_2 + Param2.f_2);
	if (unk_0xD132EDDA78FF4A51(iParam0, Var0, Var1, (Param2.f_1 * 2f), iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6, var uParam7, int iParam8, bool bParam9)
{
	struct<16> Var0[6];
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &Var0, &uVar1, &iVar2, &fVar4, &fVar5, &uVar6) && func_104(iParam1, iParam2, &Var7, &fVar8))
	{
		iVar9 = 1;
		iVar10 = 16;
		fVar11 = 1000f;
		iVar12 = 0;
		func_212(iParam1, iParam2, &iVar12);
		if (func_211(uVar6, 8))
		{
			func_210(&iVar9, 4);
		}
		if (!unk_0xCE2C78E9FC0B01E3(*uParam7))
		{
			if (iParam2 == 127)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
			}
			else if (iParam2 == 53)
			{
				fVar4 = 2f;
				fVar11 = fVar4;
			}
			else if (iParam2 == 18)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else if (iParam2 == 117)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else if (iParam2 == 115)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else
			{
				fVar4 = 4f;
				fVar11 = 1000f;
			}
			unk_0x8FB472886552D737(&(Var0[0 /*16*/]));
			if (!unk_0x6F940C2636C076AD(&(Var0[0 /*16*/])))
			{
				return 0;
			}
			if (*uParam7 > 0)
			{
				*uParam7 = -1;
			}
			*uParam7 = unk_0x8F5F4164BF5FB513(Param5 + Var7, 0f, 0f, (fParam6 + fVar8), 2);
			unk_0xFE1CD80C2F7CBCFB(*uParam7, iParam8);
			unk_0x0BA4916484503B63(*uParam7, bParam9);
			uVar3 = func_238(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, fVar4, fVar5, iVar9, iVar10, fVar11, iVar12);
			return uVar3;
		}
		if (!unk_0xFCF559C8631ABED7(iParam0, sParam3, sParam4, 2))
		{
			if (!func_238(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, fVar4, -1000f, iVar9, iVar10, fVar11, iVar12))
			{
				unk_0x0BA4916484503B63(*uParam7, true);
				return 0;
			}
			unk_0xFE1CD80C2F7CBCFB(*uParam7, iParam8);
			unk_0x0BA4916484503B63(*uParam7, bParam9);
		}
		if (bParam9)
		{
			if (unk_0x54DE1614490C2A83(*uParam7) >= 0.999f)
			{
				func_238(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, 1000f, -1000f, iVar9, iVar10, 1000f, iVar12);
			}
		}
		return 1;
	}
	return 0;
}

int func_238(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, float fParam7, float fParam8, int iParam9, int iParam10, float fParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var5;
	
	iVar0 = iParam4;
	if (!unk_0xACC32B78196FBC2A(sParam5) && !unk_0xACC32B78196FBC2A(sParam6))
	{
		if (iVar0 <= 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < iParam4 + 1)
			{
				if (unk_0x3C57C2F07FEE34D2(sParam5, uParam2[iVar1 /*16*/]) && unk_0x3C57C2F07FEE34D2(sParam6, uParam3[iVar1 /*16*/]))
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam2 - 1))
					{
						if (iVar2 + 1 < *uParam2)
						{
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
							*(uParam3[iVar2 /*16*/]) = { *(uParam3[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
							StringCopy(uParam3[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
				iVar1++;
			}
		}
	}
	iVar3 = unk_0x5853B15F78E1A265(0, iVar0 + 1);
	Var4 = { *(uParam2[iVar3 /*16*/]) };
	Var5 = { *(uParam3[iVar3 /*16*/]) };
	if (!unk_0xACC32B78196FBC2A(&Var4))
	{
		unk_0x8FB472886552D737(&Var4);
		if (!unk_0x6F940C2636C076AD(&Var4))
		{
			unk_0x8FB472886552D737(&Var4);
		}
		else
		{
			if (func_211(iParam9, 1))
			{
				unk_0xD07E491BDA082CED(iParam0, 16);
				unk_0xB83D9F54C7F8C2BE(iParam0, 0);
				unk_0x50274A7EACA3133A(iParam0, 1);
			}
			unk_0xE0F81EAEB49D39EF(uParam1, 0f);
			unk_0x950B26F4C891073F(iParam0, uParam1, &Var4, &Var5, fParam7, fParam8, iParam9, iParam10, fParam11, iParam12);
			unk_0x66136F80D9C9251E(iParam0, 1);
			unk_0x50274A7EACA3133A(iParam0, 1);
			unk_0xFE1CD80C2F7CBCFB(uParam1, 0);
			*sParam5 = { Var4 };
			*sParam6 = { Var5 };
			return 1;
		}
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	func_241(iParam0);
	Global_94980[iParam0] = iParam1;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					func_240(2, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					func_240(2, iParam1);
					break;
				
				case 2:
					func_240(0, iParam1);
					func_240(1, iParam1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(0, iParam1);
					break;
			}
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					func_240(3, iParam1);
					break;
				
				case 3:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					func_240(0, iParam1);
					break;
				
				case 0:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					func_240(0, iParam1);
					break;
				
				case 0:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					func_240(1, iParam1);
					break;
				
				case 1:
					func_240(2, iParam1);
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_240(7, iParam1);
					break;
				
				case 7:
					func_240(6, iParam1);
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					func_240(11, iParam1);
					break;
				
				case 11:
					func_240(9, iParam1);
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					func_240(11, iParam1);
					break;
				
				case 11:
					func_240(9, iParam1);
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					func_240(8, iParam1);
					break;
				
				case 8:
					func_240(11, iParam1);
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_240(14, iParam1);
					break;
				
				case 14:
					func_240(13, iParam1);
					break;
			}
			break;
	}
}

void func_240(int iParam0, int iParam1)
{
	func_241(iParam0);
	Global_94980[iParam0] = iParam1;
}

void func_241(int iParam0)
{
	switch (Global_94980[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		
		default:
			Global_112915.f_18514[iParam0] = Global_94980[iParam0];
			break;
	}
}

int func_242(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char[] cVar1[8];
	var uVar2;
	var uVar3;
	
	if (func_214(iParam1, iParam2, &sVar0, &cVar1, &uVar2, &uVar3))
	{
		unk_0x8FB472886552D737(&sVar0);
		if (!unk_0x6F940C2636C076AD(&sVar0))
		{
			unk_0x8FB472886552D737(&sVar0);
			return 0;
		}
		else
		{
			if (!unk_0xFCF559C8631ABED7(iParam0, &sVar0, &cVar1, 3))
			{
				unk_0x49D97B076E3590AC(iParam0, &sVar0, &cVar1, 8f, -8f, -1, uVar2, 0f, 0, 0, 0);
				unk_0x66136F80D9C9251E(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6)
{
	float fVar0;
	struct<16> Var1;
	struct<16> Var2;
	char* sVar3;
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	
	Param5 = { Param5 };
	fParam6 = fParam6;
	if (!unk_0xACC32B78196FBC2A(sParam3) && !unk_0xACC32B78196FBC2A(sParam4))
	{
		if (unk_0xFCF559C8631ABED7(iParam0, sParam3, sParam4, 3))
		{
			fVar0 = unk_0xD01FAFCE275C94F3(iParam0, sParam3, sParam4);
			if (fVar0 <= 0.99f)
			{
				return 1;
			}
		}
		StringCopy(sParam3, "", 64);
		StringCopy(sParam4, "", 64);
	}
	if (unk_0x4239F34C6EE6A3E9(iParam0))
	{
		if (func_244(iParam1, iParam2, &Var1, &Var2, -1))
		{
			unk_0x8FB472886552D737(&Var1);
			if (unk_0x6F940C2636C076AD(&Var1))
			{
				if (!unk_0xFCF559C8631ABED7(iParam0, &Var1, &Var2, 3))
				{
					if (func_214(iParam1, iParam2, &sVar3, &cVar4, &uVar5, &uVar6))
					{
						if (func_211(uVar5, 1))
						{
							func_218(&uVar5, 1);
						}
						if (func_211(uVar5, 262144))
						{
							unk_0xD07E491BDA082CED(iParam0, 16);
							unk_0xB83D9F54C7F8C2BE(iParam0, 0);
						}
						func_212(iParam1, iParam2, &uVar7);
						fVar8 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar8 = -1.5f;
						}
						if (iParam2 == 60)
						{
							if (func_211(uVar5, 33554432))
							{
							}
							else
							{
								func_210(&uVar5, 33554432);
							}
							fVar8 = -4f;
						}
						unk_0x49D97B076E3590AC(iParam0, &Var1, &Var2, 8f, fVar8, -1, uVar5, 0f, 0, uVar7, 0);
						*sParam3 = { Var1 };
						*sParam4 = { Var2 };
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		return 0;
	}
	return 0;
}

int func_244(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	char* sVar4;
	
	StringCopy(sParam2, "null", 64);
	StringCopy(sParam3, "null", 64);
	StringCopy(&Var0, "", 16);
	if (iParam4 == -1)
	{
		iParam4 = func_245(iParam1, &Var0);
		if (iParam4 == -1)
		{
			sVar4 = func_83(iParam1, &uVar1, &uVar2, &uVar3);
			if (!unk_0x3C57C2F07FEE34D2(&Var0, sVar4))
			{
				return 0;
			}
		}
	}
	switch (iParam1)
	{
		case 100:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_A_FascistPricks", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_B_RoutineProcedureMyAss", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_C_ThoseFederalChumps", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorDidYouHearAbout", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorTrevorYouWouldnt", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorYouAreReallyGonnaWant", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "ChefIsCookingUp", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "IfYouWantToBorrow", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "OneMoreHit", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_Midwife", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_ComeHere", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_BackedUp", 64);
							break;
						
						case 4:
							return 0;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Thats_Some_Good_Shit", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Whole_Chamber_Dog", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Hydrotropic_Bud_Or_Something", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Dont_Dudge_Me_Dad", 64);
							break;
						
						case 5:
							return 0;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
						case 4:
						case 7:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_Masterbation", 64);
							break;
						
						case 2:
						case 5:
						case 8:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_RollsFlapping", 64);
							break;
						
						case 3:
						case 6:
						case 9:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_GetKnocked", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Body_High2", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Grow_This_Strain", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Helps_My_Glands", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Bring_Me_Some_Food", 64);
							break;
						
						case 5:
							StringCopy(sParam2, "", 64);
							StringCopy(sParam3, "", 64);
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Good_To_See_You", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "I_Dont_Tell_You", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Its_The_Big_Man", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_worry_lines", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_old_hag", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_years_wasted", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_buzzed", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_only_you", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_pinot", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_YouRCreepingMeOut", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_NotNowMichael", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_IWasTryingToForget", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_OhShit", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_A", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_B", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_D", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_C", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_F", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_D", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_I", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Im_Youre_Daughter", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Get_Out_Of_The", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Fucking_Old_Geezer", 64);
							break;
						
						case 4:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Youll_Melt_Out_Here", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Of_Course_I_Go", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Go_Stick_Youre_Head", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Youre_All_The_Fucking", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							return 1;
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_ParentingAtItsFinest", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_IWishAll_A", 64);
							break;
						
						case 4:
							return 1;
							break;
						
						case 5:
							return 1;
							break;
						
						case 6:
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 83:
			switch (iParam0)
			{
				case 3:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_A_WhenWasYourLastTime", 64);
							break;
						
						case 2:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_B_BoyU", 64);
							break;
						
						case 3:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_C_ImSoStressedOut", 64);
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_ThatsJustTheTv", 64);
							break;
						
						case 2:
							return 1;
							break;
						
						case 3:
							return 1;
							break;
						
						case 4:
							return 1;
							break;
						
						case 5:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_NoTheCondoIsFine", 64);
							break;
						
						case 6:
							return 1;
							break;
						
						case 7:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_IAmNotBeingJealous", 64);
							break;
						
						case 8:
							return 1;
							break;
						
						case 9:
							return 1;
							break;
						
						case 10:
							return 1;
							break;
						
						case 11:
							return 1;
							break;
						
						case 12:
							return 1;
							break;
						
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, char* sParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	char cVar4[16];
	
	MemCopy(sParam1, {Global_20904}, 4);
	func_83(iParam0, &uVar0, &uVar1, &uVar2);
	if (func_82(uVar1, 64))
	{
		StringConCat(sParam1, "A", 16);
		return unk_0xF278A9E1BF1BF431(sParam1);
	}
	iVar3 = unk_0xEE91150B7F06C500(sParam1);
	if (iVar3 <= 0)
	{
		return -1;
	}
	StringCopy(&cVar4, unk_0x6ABF9C6F18308B78(sParam1, (iVar3 - 1), iVar3), 16);
	StringConCat(sParam1, "_1A", 16);
	switch (unk_0x2E87280918B16506(&cVar4))
	{
		case -902917054:
			return 1;
			break;
		
		case 14385563:
			return 2;
			break;
		
		case -289776295:
			return 3;
			break;
		
		case 592496261:
			return 4;
			break;
	}
	return unk_0xF278A9E1BF1BF431(sParam1);
}

int func_246(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 21:
		case 24:
		case 16:
		case 38:
		case 40:
		case 36:
		case 39:
		case 33:
		case 45:
		case 61:
		case 63:
		case 53:
		case 52:
		case 67:
		case 81:
		case 76:
		case 77:
		case 78:
		case 85:
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
		case 87:
		case 89:
		case 90:
		case 91:
		case 104:
		case 105:
		case 101:
		case 100:
		case 119:
		case 120:
		case 113:
		case 114:
		case 112:
		case 109:
		case 123:
		case 122:
		case 126:
		case 136:
			if (func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 0, sParam6))
			{
				func_247(iParam0, *uParam2, iParam7);
				return 1;
			}
			return 0;
			break;
		
		case 6:
		case 31:
			if (func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 1, sParam6))
			{
				func_247(iParam0, *uParam2, iParam7);
				return 1;
			}
			return 0;
			break;
	}
	return func_248(uParam1, uParam2, sParam3, sParam4, iParam5, 0, sParam6);
}

int func_247(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0x78D9ADD511FEAD8B(uParam1))
	{
		switch (iParam0)
		{
			case 61:
			case 63:
				unk_0x57973ADDF2BFAA90(uParam1, "MichaelInRoom", uParam2);
				return 1;
				break;
			
			case 87:
				unk_0x57973ADDF2BFAA90(uParam1, "Blow", uParam2);
				return 1;
				break;
			}
	}
	return 1;
}

int func_248(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, char* sParam6)
{
	var uVar0;
	var uVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != -1)
			{
				unk_0xF889BDFCC181BA9F(*uParam1);
				unk_0xCDBCC1BC1184B002(*uParam1);
				*uParam1 = -1;
			}
			if (!unk_0xACC32B78196FBC2A(sParam2))
			{
				if (unk_0x8133A5F807883BC6(sParam2, 0, -1))
				{
					StringCopy(sParam6, sParam2, 64);
					*uParam0 = 1;
				}
			}
			else
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xE5965CDF24F93A9F(iParam4))
			{
				if (unk_0xACC32B78196FBC2A(sParam3))
				{
					*uParam0 = 4;
					return 0;
				}
				return 0;
			}
			switch (iParam5)
			{
				case 0:
					*uParam1 = unk_0xA9ADCC8D104AA552();
					unk_0x979FC7400A5D0CD2(*uParam1, sParam3, iParam4, 0, 0, 0);
					break;
				
				case 1:
					*uParam1 = unk_0xA9ADCC8D104AA552();
					unk_0xD336F8D9637B963F(*uParam1, sParam3, unk_0x6B62510F212526DC(iParam4, 1), 0, 0, 0, 0);
					break;
				
				default:
					return 0;
					break;
			}
			*uParam0 = 2;
			break;
		
		case 2:
			if (*uParam1 != -1)
			{
				if (!unk_0x78D9ADD511FEAD8B(*uParam1))
				{
				}
				else
				{
					*uParam0 = 0;
					return 1;
				}
			}
			else
			{
				*uParam0 = 0;
				return 1;
			}
			if (iParam5 != 1)
			{
				if (unk_0x9044EDB8A7BF67B4(iParam4))
				{
					uVar0 = unk_0x28AA31872A651BC7(iParam4);
					if (unk_0x4239F34C6EE6A3E9(uVar0))
					{
						*uParam0 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x9044EDB8A7BF67B4(iParam4))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam4);
				if (!unk_0x4239F34C6EE6A3E9(uVar1))
				{
					*uParam0 = 0;
				}
			}
			break;
		
		case 4:
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xF68107C40359970C(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_77661++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x15CAA6D7B11F1A7C(iParam0);
	if (iParam5 == 0)
	{
		Global_77663[1 /*14*/] = { func_301(iVar10, iParam1, iParam2, -1) };
		if (!func_300(iParam3))
		{
			Global_77661 = (Global_77661 - 1);
			return 0;
		}
		func_292(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_290(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_290(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_289(iParam0, 1);
			if (!func_288(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_289(iParam0, 0);
			if (!func_287(iVar10, 14, iVar8, -1) && !func_286(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_289(iParam0, 2);
			}
		}
		unk_0x9C726995FD3F93EB(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_77706 };
		}
		else
		{
			uVar11 = { func_282(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_77663[1 /*14*/] = { func_301(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_77723 };
						}
						else
						{
							uVar12 = { func_279(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_77663[1 /*14*/] = { func_301(iVar10, 14, uVar12[iVar1], -1) };
							func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
							func_292(14);
							if (Global_77661 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_262(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_261(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_260(iVar0)));
						}
						else
						{
							unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
						}
						func_292(iVar0);
						if (Global_77661 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_262(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77663[1 /*14*/] = { func_301(iVar10, iVar0, func_259(iParam0, iVar0, -1), -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_258(iParam0, iVar10, &iVar4, 1))
							{
								func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_282(iVar10, 0) };
						func_249(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_301(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_256(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_249(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_256(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_249(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_256(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_279(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77663[1 /*14*/] = { func_301(iVar10, 14, uVar15[iVar1], -1) };
			func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
			func_292(14);
			if (Global_77661 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_262(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
		func_292(iParam1);
		if (Global_77661 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_262(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0xE3752B10DC995E95(iParam0, func_260(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_260(iParam1)));
		}
		else
		{
			unk_0xE3752B10DC995E95(iParam0, func_260(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
		}
		if (Global_77661 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_262(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_253(iVar10, iParam1, iParam2);
		}
	}
	if (Global_77661 == 1)
	{
		if (func_258(iParam0, iVar10, &iVar4, 0))
		{
			func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_250(iParam0, iVar10, &iVar4))
		{
			func_249(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_77661 = (Global_77661 - 1);
	return 1;
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_252(iParam1);
	if (Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_251(iParam0, Global_112915.f_2363.f_539[iVar0 /*65*/].f_64, Global_112915.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xF68107C40359970C(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	Global_77663[1 /*14*/] = { func_301(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_282(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_251(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_279(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_251(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_77663[2 /*14*/] = { func_301(iVar0, 14, iVar4, -1) };
									if (Global_77663[2 /*14*/].f_12 == iVar3)
									{
										if (func_251(iParam0, 14, iVar4))
										{
											if (!func_256(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_77663[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_290(iParam0, iVar2);
						Global_77663[2 /*14*/] = { func_301(iVar0, iVar2, iVar1, -1) };
						if (!func_256(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_77663[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_279(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_251(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xF2BC143F97765619(iParam0, Global_77663[1 /*14*/].f_12) == Global_77663[1 /*14*/].f_3 && (unk_0x7252A84ECED5E1D4(iParam0, Global_77663[1 /*14*/].f_12) == Global_77663[1 /*14*/].f_4 || Global_77663[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_77663[1 /*14*/].f_3 == unk_0x5355BAA621C153CF(iParam0, func_260(iParam1)) && Global_77663[1 /*14*/].f_4 == unk_0xF1050E548C37F4A5(iParam0, func_260(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_253(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_255(iParam0, 12, iVar0))
	{
		if (func_254(iParam0, iParam1, iParam2))
		{
			iVar1 = func_252(iParam0);
			if (iParam1 == 3)
			{
				Global_112915.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_112915.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_255(int iParam0, int iParam1, int iParam2)
{
	Global_77663[1 /*14*/] = { func_301(iParam0, iParam1, iParam2, -1) };
	return unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2);
}

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_279(iParam0, (*uParam4)[13]) };
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
	if (func_257(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
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
		else if (func_286(iParam0, iParam2, iParam3, -1))
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
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
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
		else if (func_286(iParam0, iParam2, iParam3, -1))
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
		if (func_288(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_287(iParam0, iParam2, iParam3, -1))
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
		else if (func_286(iParam0, iParam2, iParam3, -1))
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

int func_257(int iParam0, int iParam1, int iParam2)
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

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_252(iParam1);
	if (Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_251(iParam0, Global_112915.f_2363.f_539[iVar0 /*65*/].f_61, Global_112915.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_251(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_251(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_289(iParam0, iParam2);
			}
		}
		else
		{
			return func_290(iParam0, iParam1);
		}
	}
	return -99;
}

int func_260(int iParam0)
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

int func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_252(iParam0);
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_290(iParam0, 1);
				iVar0 = func_269(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_290(iParam0, 2);
				iVar0 = func_269(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_261(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_268(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_267(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_266(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_266(iParam0, 3, 135, 150))
									{
										iVar0 = func_265(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_266(iParam0, 3, 209, 222))
									{
										iVar0 = func_265(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_266(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_265(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_265(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_265(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_265(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_266(iParam0, 3, 176, 191) && !func_266(iParam0, 3, 227, 242))
									{
										iVar0 = func_265(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_290(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_290(iParam0, 11);
								iVar5 = func_264(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_290(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_263(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_290(iParam0, 8);
								iVar8 = func_290(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_264(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_264(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_290(iParam0, 11);
								iVar0 = func_264(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_264(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_265(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_265(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_255(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_290(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_252(iParam0);
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x920BB8B58BB3563A(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0xD6A76BAB45A4B460(iParam0, 34, 0);
			unk_0xD6A76BAB45A4B460(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xD9D122A54FFE62B8(iParam0, iParam1, iParam2, iParam3, unk_0x9315DBF7D972F07A());
		if (iParam1 == 0)
		{
			iVar0 = func_275(iParam0, iParam2, iParam3, iParam1);
			if (func_271(unk_0x15CAA6D7B11F1A7C(iParam0), 14, iVar0, unk_0x7ABBACADFB201C3A(iParam0, 0, iParam2, iParam3)))
			{
				unk_0xD6A76BAB45A4B460(iParam0, 34, 1);
				unk_0xD6A76BAB45A4B460(iParam0, 36, 1);
			}
			else
			{
				unk_0xD6A76BAB45A4B460(iParam0, 34, 0);
				unk_0xD6A76BAB45A4B460(iParam0, 36, 0);
			}
		}
	}
}

int func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x036D1EA7243F2CCC(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_272(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x036D1EA7243F2CCC(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var0);
		iVar1 = (iParam1 - func_274(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0xA188D1127A77C942(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0xC99CE91134872039(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var3);
		iVar4 = (iParam1 - func_273(iParam0, func_260(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77785.f_26[iParam2] && iParam1 == Global_77785[iParam2]) && Global_77785.f_13[iParam2] != 0)
		{
			return Global_77785.f_13[iParam2];
		}
		iVar5 = unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_260(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xEA030AC498B5F181(iVar4, &Var3);
		Global_77785.f_13[iParam2] = Var3.f_1;
		Global_77785[iParam2] = iParam1;
		Global_77785.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_273(int iParam0, int iParam1)
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

int func_274(int iParam0)
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

int func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_278(iParam3);
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar1 = unk_0x7ABBACADFB201C3A(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_277(unk_0x15CAA6D7B11F1A7C(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_277(unk_0x15CAA6D7B11F1A7C(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x83174885C2F9E9D2(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x7827F3E641387AB3(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_276(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_278(iParam3);
}

int func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA188D1127A77C942(iParam3, 10, -1, 1, -1, -1);
		iVar0 = unk_0x971016887DC14CED(iParam1);
		if (iVar0 != -1)
		{
			return (func_274(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_260(iParam2));
		iVar1 = unk_0x8F3F503BADA161ED(iParam1);
		if (iVar1 != -1)
		{
			return (func_273(iParam0, func_260(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
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
	}
	return 0;
}

struct<10> func_279(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_281(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_281(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_281(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_281(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_281(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_281(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_281(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_281(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_281(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_281(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_281(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_281(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_281(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_281(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_281(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_281(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_281(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_281(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_281(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_281(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_281(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_281(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_281(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_281(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_281(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_281(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_281(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_281(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_281(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_281(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_281(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_281(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_281(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_281(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_281(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_281(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_281(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_281(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_280(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x24DFBA133538EAEC(iParam2, &Var1);
		if (!unk_0x1B5C8EE302FC0D1E(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xE0A9B7F977EBD7AF(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_277(iParam1, Var2.x, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_282(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_112915.f_9085.f_99.f_58[120])
					{
						func_285(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_285(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[0], Global_112915.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_285(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_285(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_285(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_285(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_285(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_285(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[1], Global_112915.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[2], Global_112915.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_285(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_285(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_285(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_285(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_285(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_285(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_285(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_285(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_285(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_285(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_285(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_285(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_285(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_285(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_285(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_285(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_285(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_285(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_285(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_285(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_285(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_285(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_285(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_285(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_285(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_285(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_285(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_285(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_285(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_285(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_285(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_285(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_285(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_285(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_285(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_285(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_285(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_285(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_285(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_285(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_285(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_285(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_285(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_285(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_285(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_285(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_285(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_285(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_283(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_283(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x30264A1C9ADAAE62(iVar0, 0);
	unk_0x43FFB630E515D7A1((iParam2 - iParam3), &Var1);
	if (!unk_0x1B5C8EE302FC0D1E(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xA5404CDF63BADF48(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0xB5ABDB2FA64E87F2(&Var3);
						unk_0x37E8462BC2A63393(Var2.x, &Var3);
						if (Var2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_284(Var2.f_2)] = Var2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_284(Var2.f_2)] = func_277(iParam1, Var2.x, func_284(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_284(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_284(int iParam0)
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

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_286(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_272(iParam0, iParam2, 14, 3);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 1) || unk_0x036D1EA7243F2CCC(func_272(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 1, 3);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(func_272(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_272(iParam0, iParam2, 14, 4);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 1) || unk_0x036D1EA7243F2CCC(func_272(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_272(iParam0, iParam2, 1, 4);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(func_272(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_272(iParam0, iParam2, 1, 3);
					}
					if (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(iParam3, joaat("HAIR_SHRINK"), 0))
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
						iParam3 = func_272(iParam0, iParam2, 1, 4);
					}
					if (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_288(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_272(iParam0, iParam2, 14, 3);
					}
					return unk_0x036D1EA7243F2CCC(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_272(iParam0, iParam2, 14, 4);
					}
					return unk_0x036D1EA7243F2CCC(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF68107C40359970C(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xF2BC143F97765619(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_278(iParam1);
	}
	iVar1 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
	return func_275(iParam0, iVar0, iVar1, iParam1);
}

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xF68107C40359970C(iParam0))
	{
		return -99;
	}
	iVar0 = func_260(iParam1);
	iVar1 = unk_0x5355BAA621C153CF(iParam0, iVar0);
	iVar2 = unk_0xF1050E548C37F4A5(iParam0, iVar0);
	return func_291(iParam0, iVar1, iVar2, iParam1);
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_260(iParam3);
	iVar1 = unk_0x37684F94E628D1AC(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x91E7DA9EAFFB9499(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_292(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1) && !unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6))
	{
		func_299(iParam0, Global_77663[1 /*14*/].f_5, Global_77663[1 /*14*/].f_2, 2, Global_77663[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1) && unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_293(Global_2883588, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_293(Global_2883588, 2, 1, 1, -1);
		}
		else
		{
			func_293(Global_2883588, 2, 1, 1, -1);
		}
	}
}

void func_293(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_298(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_297(iVar2, iVar0, 0);
		unk_0xCED9E32812D6C7C7(&iVar3, iVar1);
		func_294(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_295(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_295(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_296();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_296()
{
	return Global_1574907;
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_295(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_298(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12597;
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
			iVar0 = unk_0xA713D1504E921B62(iParam0);
		}
		else
		{
			iVar0 = unk_0x033025C1430DD8E8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA713D1504E921B62(iParam0);
	}
	else
	{
		iVar0 = unk_0x033025C1430DD8E8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
			switch (floor((to_float(iVar0) / 32f)))
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
	return *uParam2 != 12597;
}

int func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_300(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_301(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_364();
	if (iParam0 == joaat("player_zero"))
	{
		func_346(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_327(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_302(iParam1, iParam2);
	}
	return Global_77663[0 /*14*/];
}

void func_302(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_326(iParam1);
			break;
		
		case 2:
			func_325(iParam1);
			break;
		
		case 3:
			func_322(iParam1);
			break;
		
		case 4:
			func_321(iParam1);
			break;
		
		case 6:
			func_320(iParam1);
			break;
		
		case 5:
			func_319(iParam1);
			break;
		
		case 8:
			func_318(iParam1);
			break;
		
		case 9:
			func_317(iParam1);
			break;
		
		case 10:
			func_316(iParam1);
			break;
		
		case 1:
			func_315(iParam1);
			break;
		
		case 7:
			func_314(iParam1);
			break;
		
		case 11:
			func_313(iParam1);
			break;
		
		case 12:
			func_312(iParam1);
			break;
		
		case 13:
			func_311(iParam1);
			break;
		
		case 14:
			func_303(iParam1);
			break;
	}
}

void func_303(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_304(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_309(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x2E87280918B16506(sParam3) != unk_0x2E87280918B16506("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 6);
		if (func_24(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("REBREATHER"), 0))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_308(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_308(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_308(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_308(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		if (func_299(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		}
		if (func_299(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
		if (!func_299(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_24(14))
			{
				return;
			}
			iVar0 = func_297(func_307(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			}
			iVar0 = func_297(func_306(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
			}
			if (func_305(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_297(iVar1, Global_77660, 0);
				if (!unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
}

bool func_305(int iParam0, int iParam1, var uParam2)
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

int func_306(int iParam0, int iParam1)
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

int func_307(int iParam0, int iParam1)
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

int func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_298(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_297(iVar2, iVar0, 0);
		return unk_0xE2D0C323A1AE5D85(iVar3, iVar1);
	}
	return 0;
}

int func_309(int iParam0)
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

void func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_77663[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0x30264A1C9ADAAE62(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x43FFB630E515D7A1(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2;
				func_304(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_304(&(Global_77663[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0xA188D1127A77C942(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0xC99CE91134872039(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5;
				func_304(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x036D1EA7243F2CCC(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var9);
		if (iParam3 != -1 && Global_77833)
		{
			unk_0x37E8462BC2A63393(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9;
			func_304(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0xA188D1127A77C942(iVar1, 10, -1, 0, -1, func_260(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xEA030AC498B5F181(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9;
				func_304(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_311(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_312(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_313(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_314(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_315(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_316(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_310(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_317(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_310(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_318(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_319(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_320(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_310(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_321(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_310(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_322(int iParam0)
{
	if (iParam0 < 136)
	{
		func_324(iParam0);
	}
	else
	{
		func_323(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_310(3, iParam0, 242, -1);
	}
}

void func_323(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_324(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_325(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_326(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_310(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_345(iParam1);
			break;
		
		case 2:
			func_344(iParam1);
			break;
		
		case 3:
			func_340(iParam1);
			break;
		
		case 4:
			func_339(iParam1);
			break;
		
		case 6:
			func_338(iParam1);
			break;
		
		case 5:
			func_337(iParam1);
			break;
		
		case 8:
			func_336(iParam1);
			break;
		
		case 9:
			func_335(iParam1);
			break;
		
		case 10:
			func_334(iParam1);
			break;
		
		case 1:
			func_333(iParam1);
			break;
		
		case 7:
			func_332(iParam1);
			break;
		
		case 11:
			func_331(iParam1);
			break;
		
		case 12:
			func_330(iParam1);
			break;
		
		case 13:
			func_329(iParam1);
			break;
		
		case 14:
			func_328(iParam1);
			break;
	}
}

void func_328(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_329(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_330(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_331(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_310(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_332(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_333(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_334(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_335(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_336(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_337(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_338(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_310(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_339(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_310(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_340(int iParam0)
{
	if (iParam0 < 107)
	{
		func_343(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_342(iParam0);
	}
	else
	{
		func_341(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_310(3, iParam0, 318, -1);
	}
}

void func_341(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_342(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_343(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_344(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_345(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_310(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_363(iParam1);
			break;
		
		case 2:
			func_362(iParam1);
			break;
		
		case 3:
			func_359(iParam1);
			break;
		
		case 4:
			func_358(iParam1);
			break;
		
		case 6:
			func_357(iParam1);
			break;
		
		case 5:
			func_356(iParam1);
			break;
		
		case 8:
			func_355(iParam1);
			break;
		
		case 9:
			func_354(iParam1);
			break;
		
		case 10:
			func_353(iParam1);
			break;
		
		case 1:
			func_352(iParam1);
			break;
		
		case 7:
			func_351(iParam1);
			break;
		
		case 11:
			func_350(iParam1);
			break;
		
		case 12:
			func_349(iParam1);
			break;
		
		case 13:
			func_348(iParam1);
			break;
		
		case 14:
			func_347(iParam1);
			break;
	}
}

void func_347(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_310(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_348(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_349(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_350(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_351(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_352(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_353(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_310(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_354(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_355(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_356(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_310(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_357(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_310(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_358(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_359(int iParam0)
{
	if (iParam0 < 60)
	{
		func_361(iParam0);
	}
	else
	{
		func_360(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_310(3, iParam0, 181, -1);
	}
}

void func_360(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_361(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_362(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_310(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_363(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_310(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_304(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_364()
{
	Global_77663[0 /*14*/].f_1 = -1;
	Global_77663[0 /*14*/].f_2 = -1;
	Global_77663[0 /*14*/].f_5 = -1;
	Global_77663[0 /*14*/].f_3 = -1;
	Global_77663[0 /*14*/].f_4 = -1;
	Global_77663[0 /*14*/].f_7 = 0;
	Global_77663[0 /*14*/].f_6 = 0;
	Global_77663[0 /*14*/].f_13 = -1;
	Global_77663[0 /*14*/].f_12 = 0;
	Global_77663[0 /*14*/] = 0;
	StringCopy(&(Global_77663[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_365(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			return 14;
			break;
		
		case 1:
			return 15;
			break;
		
		case 2:
			return 17;
			break;
		
		case 5:
			return 44;
			break;
		
		case 6:
			return 19;
			break;
		
		case 7:
			return 37;
			break;
		
		case 10:
			return 20;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 2;
			break;
		
		case 11:
			return 40;
			break;
		
		case 12:
			*iParam1 = joaat("s_f_m_maid_01");
			return 145;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 24;
			break;
		
		case 3:
			*iParam1 = joaat("s_f_m_maid_01");
			return 145;
			break;
		
		case 4:
			*iParam1 = joaat("s_m_m_gardener_01");
			return 145;
			break;
		
		case 15:
			return func_21();
			break;
	}
	return 145;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 11;
			break;
		
		case 4:
			return 12;
			break;
		
		case 5:
			return 15;
			break;
	}
	return 16;
}

int func_367(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_366(iParam0);
	if (func_387(&(uLocal_55[iParam0]), iVar0, Local_75 + Local_77[iParam0 /*3*/], func_140((fLocal_76 + uLocal_78[iParam0]), 0f, 360f), &uLocal_95, &(iLocal_97[iParam0]), &uLocal_105, iParam0 + 1, Global_94979))
	{
		func_370(iParam0, &uVar1);
		func_369(iParam0);
		if (iVar0 == 10)
		{
			if (Global_94980[iVar0] == 120)
			{
				func_368(&iLocal_69, uLocal_55[iParam0], iVar0, Global_94980[iVar0], Local_75, fLocal_76, iLocal_70, iLocal_71, &Local_72, &Local_73);
			}
			else if (Global_112915.f_18514[iVar0] == 120)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_69))
				{
				}
			}
			else if (unk_0xE5965CDF24F93A9F(iLocal_69))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_69);
			}
		}
		if (Global_94980[iVar0] == 141 || Global_94980[iVar0] == 140)
		{
			return 0;
		}
		if (!unk_0xF68107C40359970C(uLocal_55[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		iLocal_91 = 1;
	}
	return 0;
}

void func_368(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, float fParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iParam6 != 0)
	{
		if (!unk_0xE5965CDF24F93A9F(*uParam0))
		{
			Var0 = { unk_0x6B62510F212526DC(iParam1, 1) };
			unk_0xD69A0C3662175E68(iParam6);
			if (unk_0x0152AA00FA3130F1(iParam6))
			{
				if (iParam6 == joaat("prop_bong_01"))
				{
					*uParam0 = unk_0x87A467676BDF8C35(Var0, 2.5f, iParam6, 1, 0, 1);
				}
				else
				{
					if (unk_0xF68107C40359970C(iParam1))
					{
						return;
					}
					if (iParam6 == joaat("prop_bong_01") || iParam6 == joaat("p_cs_lighter_01"))
					{
						unk_0xE87A5B1B96B0EC6F(Var0, 1.5f, iParam6, 0);
					}
					*uParam0 = unk_0x0E536D72AB30F4C8(iParam6, Var0, 1, 1, 0);
					unk_0x82B0E749922635BC(*uParam0, 0);
				}
				if (!unk_0xE5965CDF24F93A9F(*uParam0))
				{
					return;
				}
				if (iParam7 != -1)
				{
					if (!unk_0xF68107C40359970C(iParam1))
					{
						if (iParam6 != unk_0xB8DEE91181C30E65(joaat("weapon_pistol")))
						{
							unk_0x9A97DC6DBC7B223D(*uParam0, iParam1, unk_0xB897FCFCFA664B38(iParam1, iParam7), *uParam8, *uParam9, 1, 0, 1, 0, 2, 1);
						}
						else
						{
							unk_0xD1DFCB46F41425EB(*uParam0, iParam1, unk_0xB897FCFCFA664B38(iParam1, iParam7), unk_0x7F0054A115D66F44(*uParam0, "Gun_GripR"), *uParam8, 0f, 0f, 0f, *uParam9, -1f, 1, 1, 0, 1, 2);
						}
					}
				}
				else
				{
					if (func_104(iParam2, iParam3, &Var1, &fVar2))
					{
						unk_0xC64B6E13A6A7F517(*uParam0, Var1 + Param4 + *uParam8, 1, 0, 0, 1);
						unk_0x8CE3D365F064F69E(*uParam0, Vector((fVar2 + fParam5), 0f, 0f) + *uParam9, 2, 1);
					}
					unk_0x5C65DDDC219B3AA5(*uParam0, 1);
				}
				unk_0xF1A23B343DFEDFD0(iParam6);
			}
		}
	}
	else if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			if (unk_0xE85F749F6D5C809E(*uParam0))
			{
				unk_0xE6451C2F193342C7(*uParam0, 1, 1);
			}
		}
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
}

void func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = func_366(iParam0);
	func_368(&(uLocal_59[iParam0]), uLocal_55[iParam0], iVar0, Global_94980[iVar0], Local_75, fLocal_76, iLocal_60[iParam0], iLocal_61[iParam0], &(Local_62[iParam0 /*3*/]), &(Local_63[iParam0 /*3*/]));
	func_368(&(uLocal_64[iParam0]), uLocal_55[iParam0], iVar0, Global_94980[iVar0], Local_75, fLocal_76, iLocal_65[iParam0], iLocal_66[iParam0], &(Local_67[iParam0 /*3*/]), &(Local_68[iParam0 /*3*/]));
}

void func_370(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = func_386(iParam0);
	if (*uParam1 < 1)
	{
		iVar0 = func_366(iParam0);
		func_371(&(uLocal_56[*uParam1]), iVar0, Local_75, fLocal_76, 0);
	}
}

void func_371(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<82> Var6;
	int iVar7;
	int iVar8;
	
	if (!unk_0xE5965CDF24F93A9F(*uParam0))
	{
		iVar0 = Global_94980[iParam1];
		if (func_385(iParam1, iVar0, &Var1, &fVar2, &iVar3, &iVar4, bParam4))
		{
			if (!Global_3)
			{
				fVar5 = vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Param2 + Var1);
				if (fVar5 < (15f * 15f) && !unk_0x15616E8442D3D1E8(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return;
				}
				Var6.f_11 = 12;
				Var6.f_31 = 49;
				Var6.f_81 = 2;
				if (iVar3 != 3)
				{
					func_384(iVar3, &Var6, 1);
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iVar7 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x15CAA6D7B11F1A7C(iVar7) == Var6)
					{
						*uParam0 = iVar7;
						unk_0x398C962F550CF3B4(*uParam0, 1);
						return;
					}
				}
				if (fVar5 < (35f * 35f))
				{
					if (unk_0x0318E2EE6FB4563F(Param2 + Var1, 10f))
					{
						if (unk_0x91194F9AB8BA4E66(Var6, Param2 + Var1, 0))
						{
							if (!unk_0x15616E8442D3D1E8(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)))
							{
								return;
							}
						}
					}
				}
				else if (unk_0x0318E2EE6FB4563F(Param2 + Var1, 4f))
				{
					if (unk_0x91194F9AB8BA4E66(Var6, Param2 + Var1, 0))
					{
						if (!unk_0x15616E8442D3D1E8(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)))
						{
							return;
						}
					}
				}
				if (func_383(Param2 + Var1, 6f))
				{
					return;
				}
				if (unk_0x15C2370F75B1B388(Param2 + Var1 - Vector(4f, 4f, 4f), Param2 + Var1 + Vector(4f, 4f, 4f), 0, 1, 0, 0, 0, 0, 0))
				{
					return;
				}
			}
			if (iVar3 != 145)
			{
				if (!func_381(uParam0, iVar3, Param2 + Var1, iVar4))
				{
					if (func_372(uParam0, iVar3, Param2 + Var1, func_140((fParam3 + fVar2), 0f, 360f), 1, iVar4))
					{
						unk_0x6B9A9289F29F4166(unk_0x15CAA6D7B11F1A7C(*uParam0), 15);
						unk_0x398C962F550CF3B4(*uParam0, 1);
						if (iParam1 == 2)
						{
							unk_0x47B16F33DD2893CF(*uParam0, 1);
						}
						if (Global_3)
						{
							unk_0x3B2646B62E7BBE11(*uParam0, 3);
						}
					}
				}
				else
				{
					unk_0x6B9A9289F29F4166(unk_0x15CAA6D7B11F1A7C(*uParam0), 15);
					unk_0x398C962F550CF3B4(*uParam0, 1);
					if (iParam1 == 2)
					{
						unk_0x47B16F33DD2893CF(*uParam0, 1);
					}
					if (Global_3)
					{
						unk_0x3B2646B62E7BBE11(*uParam0, 3);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (iVar8 != 0)
				{
					unk_0xD69A0C3662175E68(iVar8);
					if (unk_0x0152AA00FA3130F1(iVar8))
					{
						if (unk_0x0318E2EE6FB4563F(Param2 + Var1, 2.5f))
						{
							return;
						}
						if (func_383(Param2 + Var1, 6f))
						{
							return;
						}
						if (unk_0xE5965CDF24F93A9F(*uParam0))
						{
							unk_0xD59CC8123FD1A789(uParam0);
						}
						*uParam0 = unk_0xBA715A7BEBA5A1F9(iVar8, Param2 + Var1, func_140((fParam3 + fVar2), 0f, 360f), 0, 0, 0);
						unk_0x9F65B3BAFA302A65(*uParam0, 1084227584);
						unk_0x6B9A9289F29F4166(unk_0x15CAA6D7B11F1A7C(*uParam0), 15);
						unk_0x398C962F550CF3B4(*uParam0, 1);
						if (iVar8 == joaat("police"))
						{
							unk_0x84934728F6567814(*uParam0, 0);
							unk_0x0BAE77E76EBD33D2(*uParam0, 1);
							unk_0x1B3814E11B085F5E(*uParam0, 1);
						}
						unk_0xF1A23B343DFEDFD0(iVar8);
					}
				}
			}
		}
	}
}

int func_372(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4, int iParam5)
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_29(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_384(iParam1, &Var0, iParam5);
		if (unk_0xE5965CDF24F93A9F(*uParam0))
		{
			if (unk_0x15CAA6D7B11F1A7C(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			unk_0xD69A0C3662175E68(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (unk_0x0152AA00FA3130F1(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*uParam0 = unk_0xBA715A7BEBA5A1F9(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, uParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*uParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*uParam0, 0);
				unk_0x0FCB0A306FF51ECA(*uParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*uParam0, 1);
				unk_0xF160248D9083ED0C(*uParam0, 1250, 0);
				unk_0x2EE80CD0EAEB9B5B(*uParam0, 1250f);
				unk_0x448AD51B3157C957(*uParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0x58DAFDEB2F46A5EA(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				unk_0x952B5201CC721090(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				unk_0x2EC6505629D78CCE(*uParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					unk_0x45A6EA15139A0C54(*uParam0, iVar2 + 1, !Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (unk_0x351E83123EFC0A15(*uParam0, 0))
					{
						if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							unk_0xA36A3AB3D2350CCD(*uParam0, 1);
						}
						else
						{
							unk_0x47B16F33DD2893CF(*uParam0, 1);
						}
					}
				}
				unk_0x2C2F2F6BEE7AC7E7(*uParam0, &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < unk_0xACF41D856B7CCB39())
				{
					unk_0xE56B65C6B89CFCF2(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				unk_0xFEF0C9A733C7B609(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				unk_0xAFE1B52F0DE91595(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				unk_0x2EB7787881686751(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				unk_0x74FCADE93B81FD35(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				unk_0xBE69E921963A86B7(*uParam0, 2, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				unk_0xBE69E921963A86B7(*uParam0, 3, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				unk_0xBE69E921963A86B7(*uParam0, 0, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				unk_0xBE69E921963A86B7(*uParam0, 1, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (unk_0x8F0BC830FFCF7F2A(*uParam0) > 1 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					unk_0xE1F8DBCF9A6E205E(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*uParam0)))
					{
						if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*uParam0)))
						{
							if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								unk_0xE19D99912C7661C6(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE19D99912C7661C6(*uParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				func_376(uParam0, &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				unk_0x6DF92DB1542A3E0D(*uParam0, Var0.f_96);
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				func_375(*uParam0);
				return 1;
			}
		}
		else
		{
			unk_0xD69A0C3662175E68(Var0);
			if (unk_0x0152AA00FA3130F1(Var0))
			{
				*uParam0 = unk_0xBA715A7BEBA5A1F9(Var0, Param2, uParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*uParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*uParam0, 0);
				unk_0x0FCB0A306FF51ECA(*uParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*uParam0, 1);
				func_373(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_375(*uParam0);
				}
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_373(var uParam0, struct<98> Param1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0xD584204572DF0440(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0x58DAFDEB2F46A5EA(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x952B5201CC721090(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0x2EC6505629D78CCE(*uParam0, Param1.f_2);
	unk_0xF160248D9083ED0C(*uParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0x45A6EA15139A0C54(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0x351E83123EFC0A15(*uParam0, 0))
		{
			unk_0xA36A3AB3D2350CCD(*uParam0, 1);
		}
	}
	if (func_374(&uVar2, &uVar1) && Param1.f_97)
	{
		unk_0x2C2F2F6BEE7AC7E7(*uParam0, &uVar2);
		unk_0xE56B65C6B89CFCF2(*uParam0, uVar1);
	}
	else if (!unk_0xACC32B78196FBC2A(&(Param1.f_27)))
	{
		unk_0x2C2F2F6BEE7AC7E7(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xACF41D856B7CCB39())
		{
			unk_0xE56B65C6B89CFCF2(*uParam0, Param1.f_26);
		}
	}
	unk_0xFEF0C9A733C7B609(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0xAFE1B52F0DE91595(*uParam0, Param1.f_88);
	unk_0x2EB7787881686751(*uParam0, Param1.f_87);
	unk_0x74FCADE93B81FD35(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0xBE69E921963A86B7(*uParam0, 2, unk_0xE2D0C323A1AE5D85(Param1.f_92, 28));
	unk_0xBE69E921963A86B7(*uParam0, 3, unk_0xE2D0C323A1AE5D85(Param1.f_92, 29));
	unk_0xBE69E921963A86B7(*uParam0, 0, unk_0xE2D0C323A1AE5D85(Param1.f_92, 30));
	unk_0xBE69E921963A86B7(*uParam0, 1, unk_0xE2D0C323A1AE5D85(Param1.f_92, 31));
	if (unk_0x8F0BC830FFCF7F2A(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0xE1F8DBCF9A6E205E(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*uParam0)))
		{
			if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0xE19D99912C7661C6(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0xE19D99912C7661C6(*uParam0, Param1.f_90);
			}
		}
	}
	func_376(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0x6DF92DB1542A3E0D(*uParam0, Param1.f_96);
}

int func_374(var uParam0, var uParam1)
{
	if (unk_0x9315DBF7D972F07A())
	{
	}
	else if (Global_112915.f_20118.f_261)
	{
		*uParam0 = { Global_112915.f_20118.f_267 };
		*uParam1 = Global_112915.f_20118.f_271;
		return 1;
	}
	return 0;
}

void func_375(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97335[iVar0]))
		{
			Global_97335[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_376(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_380(unk_0x15CAA6D7B11F1A7C(*uParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*uParam0, 24) != func_379(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*uParam0, 24, func_379(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_378(uParam0);
	if (func_377(*uParam0))
	{
		unk_0xFF74DEC3F62D3654(*uParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*uParam0, 1);
	}
	return 1;
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAC1327F86AC1314A(iParam0, iVar1, unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1)), 32);
				iVar2 = unk_0x2E87280918B16506(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x2E87280918B16506("MNU_CAGE") || iVar2 == unk_0x2E87280918B16506("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_378(var uParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x0DD0BC46C4CFD6AD(*uParam0, 4) == 0)
			{
				unk_0x0061B7C9351B41ED(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x0CF999545677298A(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x0061B7C9351B41ED(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x6B83F5AE0478286F(iParam0, 38);
		iVar1 = unk_0x6B83F5AE0478286F(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14483)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14484)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14482)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14485)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14487)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14486)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18935)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18937)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18941)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18938)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18945)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18943)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20893)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20894)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_381(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_384(iParam1, &Var0, iParam3);
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_382(iVar1, Var0))
		{
			*uParam0 = iVar1;
			return 1;
		}
	}
	iVar2 = unk_0x9993EF7FDBCDB632();
	if (func_382(iVar2, Var0))
	{
		*uParam0 = iVar2;
		return 1;
	}
	iVar3 = unk_0x8AA54390E994CE1B(Param2, 20f, Var0, 6);
	if (func_382(iVar3, Var0))
	{
		*uParam0 = iVar3;
		return 1;
	}
	return 0;
}

int func_382(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (unk_0x15CAA6D7B11F1A7C(iParam0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_383(struct<3> Param0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	
	if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x9993EF7FDBCDB632();
	if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
	{
		if (unk_0xBC7D3EDF3455BC35(iVar0))
		{
			return 1;
		}
		Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
		fVar2 = vdist2(Param0, Var1);
		if (fVar2 < (fParam1 * fParam1))
		{
			uVar3 = unk_0x5853B15F78E1A265(1, 10);
			Var4 = { 0f, 0f, 0f };
			fVar5 = 0f;
			iVar6 = 0;
			iVar7 = 1;
			if (unk_0x15CEDAB46D800682(Param0, uVar3, &Var4, &fVar5, &iVar6, iVar7, 1077936128, 0))
			{
				Var8 = { 2f, 2f, 2f };
				if (unk_0x0318E2EE6FB4563F(Var4, vmag(Var8)))
				{
					return 1;
				}
				if (unk_0x15C2370F75B1B388(Var4 - Var8, Var4 + Var8, 0, 1, 1, 0, 0, 0, 0))
				{
					return 1;
				}
				unk_0xC64B6E13A6A7F517(iVar0, Var4, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(iVar0, fVar5);
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_384(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_385(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Var0 = { -812.0607f, 179.5117f, 71.1531f };
	fVar1 = 222.8314f;
	*uParam5 = 0;
	if (bParam6)
	{
		switch (iParam0)
		{
			case 1:
				*uParam2 = { Vector(68.3336f, 156.3374f, -826.3746f) - Var0 };
				*uParam3 = (81.6041f - fVar1);
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
				break;
			
			case 2:
				*uParam2 = { Vector(69.9654f, 159.461f, -816.9271f) - Var0 };
				*uParam3 = (105.9127f - fVar1);
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
				break;
			}
	}
	switch (iParam1)
	{
		case 7:
		case 27:
			iVar2 = unk_0x5853B15F78E1A265(0, 100);
			if (iVar2 < 5)
			{
				*uParam2 = { -44.279f, -1.958f, -0.5f };
				*uParam3 = 135.72f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			else if (iVar2 < 35)
			{
				*uParam2 = { -16.8f, -21.3f, -0.5f };
				*uParam3 = -130.944f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			*uParam2 = { -3.779f, -18.458f, -0.5f };
			*uParam3 = -100.944f;
			*uParam5 = 1;
			*uParam4 = 15;
			return 1;
			break;
		
		case 22:
			iVar3 = unk_0x5853B15F78E1A265(0, 100);
			if (iVar3 < 5)
			{
				*uParam2 = { -44.279f, -1.958f, -0.5f };
				*uParam3 = 135.72f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			else if (iVar3 < 35)
			{
				*uParam2 = { -16.8f, -21.3f, -0.5f };
				*uParam3 = -130.944f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			*uParam2 = { -3.779f, -18.458f, -0.5f };
			*uParam3 = -100.944f;
			*uParam5 = 2;
			*uParam4 = 14;
			return 1;
			break;
		
		case 23:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			break;
		
		case 51:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				iVar4 = unk_0x5853B15F78E1A265(0, 100);
				if (iVar4 < 5)
				{
					*uParam2 = { Vector(65.8745f, 167.3424f, -857.7297f) - Var0 };
					*uParam3 = (354.6213f - fVar1);
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				else if (iVar4 < 35)
				{
					*uParam2 = { *uParam2 + Vector(0f, -9.4f, -3.4f) };
					*uParam3 = (*uParam3 + (-65f + unk_0xC4EAB25A108C2429(-1f, 1f)));
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				*uParam2 = { *uParam2 + Vector(0f, -0.3f, -8.5541f) - Vector(1.2923f, 2.834f, 2.3978f) - Vector(0f, -1.3721f, -5.6492f) };
				*uParam3 = (*uParam3 + (((42f + unk_0xC4EAB25A108C2429(-1f, 1f)) - (259.72f - 242.5119f)) + 90f));
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
			}
			break;
		
		default:
			*uParam4 = 145;
			return 0;
			break;
	}
	*uParam4 = 145;
	return 0;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
			break;
	}
	return 2;
}

int func_387(int iParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	var uVar12;
	
	if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((((func_637(0) || func_637(0)) || func_637(2)) || (unk_0xE3BBDB1C36703410() && Global_112905)) || func_636())
	{
		if (Global_94980[iParam1] != 141)
		{
			func_241(iParam1);
			Global_94980[iParam1] = 141;
		}
	}
	iVar0 = 0;
	iVar1 = func_365(iParam1, &iVar0);
	if (!unk_0xE5965CDF24F93A9F(*iParam0))
	{
		if (Global_94980[iParam1] == 141 || Global_94980[iParam1] == 140)
		{
			if (func_635(iParam0, iParam1, uParam6, iParam7, iParam8))
			{
				return 0;
			}
			return 0;
		}
		bVar2 = false;
		if (Global_94980[iParam1] != 123)
		{
			if (!func_630(iParam1, Param2, *uParam4, uParam5))
			{
				wait(0);
				return 0;
			}
		}
		if (Global_78116 == 0 && (iVar1 == 44 && Global_94980[5] == 96))
		{
		}
		else if (func_383(Param2, 4f))
		{
			wait(0);
			return 0;
		}
		if (func_629(Global_94980[iParam1], &sVar3))
		{
			unk_0x8FB472886552D737(&sVar3);
			if (!unk_0x6F940C2636C076AD(&sVar3))
			{
				bVar2 = true;
			}
		}
		if (iVar1 != 145)
		{
			bVar4 = false;
			if (func_29(iVar1))
			{
				func_628(iVar1);
				if (!func_627(iVar1))
				{
					bVar4 = true;
				}
			}
			else
			{
				func_626(iVar1);
				if (!func_625(iVar1))
				{
					bVar4 = true;
				}
			}
			if ((!bVar2 && !bVar4) && !func_624())
			{
				if (func_29(iVar1))
				{
					if (func_415(iParam0, iVar1, Param2, uParam3, 1, 0, 0))
					{
						func_100(iParam0, iParam8);
						func_411(*iParam0, iParam1, Global_94980[iParam1]);
						func_98(*iParam0, iParam1, iParam8, 0);
						unk_0x398C962F550CF3B4(*iParam0, 1);
						func_57(uParam6, iParam7, *iParam0, func_410(iParam1), 0, 1);
						iVar5 = func_409(iVar1);
						Global_97452[iVar5] = *iParam0;
						func_395(*iParam0, 0);
						Global_112915.f_2363.f_539.f_2300[iVar1 /*3*/] = { unk_0x6B62510F212526DC(*iParam0, 1) };
						Global_112915.f_2363.f_539.f_2310[iVar1] = unk_0x82FE2343F8BDFF0B(*iParam0);
						*uParam5 = unk_0x6D7EE245AD1E10B0(*iParam0);
					}
				}
				else if (func_393(iParam0, iVar1, Param2, uParam3, 1))
				{
					func_100(iParam0, iParam8);
					func_411(*iParam0, iParam1, Global_94980[iParam1]);
					func_98(*iParam0, iParam1, iParam8, 0);
					unk_0x398C962F550CF3B4(*iParam0, 1);
					func_57(uParam6, iParam7, *iParam0, func_410(iParam1), 0, 1);
					*uParam5 = unk_0x6D7EE245AD1E10B0(*iParam0);
				}
			}
		}
		else if (iVar0 != 0)
		{
			unk_0xD69A0C3662175E68(iVar0);
			if (unk_0x0152AA00FA3130F1(iVar0) && !bVar2)
			{
				*iParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, uParam3, 0, 0);
				unk_0xF1A23B343DFEDFD0(iVar0);
				func_100(iParam0, iParam8);
				func_411(*iParam0, iParam1, Global_94980[iParam1]);
				func_98(*iParam0, iParam1, iParam8, 0);
				unk_0x398C962F550CF3B4(*iParam0, 1);
				func_57(uParam6, iParam7, *iParam0, func_410(iParam1), 0, 1);
			}
		}
	}
	else
	{
		if (!unk_0xF68107C40359970C(*iParam0))
		{
			fVar6 = (unk_0x0B9CD460E6A37693() + 5f);
			switch (Global_94980[iParam1])
			{
				case 6:
				case 8:
				case 38:
				case 39:
				case 40:
				case 30:
				case 1:
				case 136:
				case 125:
					if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(*iParam0, 1)) < (fVar6 * fVar6))
					{
						unk_0x584B286572B48431();
					}
					break;
				
				default:
					break;
				}
		}
		if (iParam1 == 12)
		{
			if (!unk_0x15616E8442D3D1E8(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)))
			{
				unk_0x1C2ED929474DC6FE(*iParam0, 0, 0);
				return 0;
			}
		}
		if (!unk_0x55B23FE400FCEA6B(*iParam0, 0))
		{
			if (!unk_0x5E34706DEBC06639(*iParam0))
			{
				return 0;
			}
		}
		else if (Global_94980[iParam1] != 141)
		{
			iVar7 = -1;
			switch (iParam1)
			{
				case 0:
					iVar7 = 24;
					break;
				
				case 1:
					iVar7 = 25;
					break;
				
				case 2:
					iVar7 = 26;
					break;
				
				case 5:
					iVar7 = 29;
					break;
				
				case 10:
					iVar7 = 30;
					break;
				
				case 11:
					iVar7 = 31;
					break;
				
				case 13:
					iVar7 = 32;
					break;
			}
			if ((iVar1 != 145 && iVar7 != -1) && unk_0x0747E45CFF1F74AA(*iParam0, unk_0xE2D3D51028F0428A(), 1))
			{
				iVar8 = func_391(*iParam0);
				if (iVar8 != 0)
				{
					if (!func_390(-1789721694))
					{
						func_389(75, unk_0x6B62510F212526DC(*iParam0, 0), 250f, -1);
						if (func_6(-1789721694, iVar7, -1, 6, func_34(), iVar1, 60000, 10000, 75, iVar8, -1, 262208, 1))
						{
							func_241(iParam1);
							Global_94980[iParam1] = 141;
							return 0;
						}
					}
				}
			}
			else
			{
				func_241(iParam1);
				Global_94980[iParam1] = 141;
				return 0;
			}
		}
		if (iVar1 != 145)
		{
			Global_43148[iVar1] = unk_0x320D1840B6DAA1CC() + 20000;
		}
		fVar9 = (100f * 1.25f);
		fVar10 = vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(*iParam0, 0));
		if (fVar10 > (fVar9 * fVar9))
		{
			if (Global_94980[iParam1] != 141)
			{
				func_241(iParam1);
				Global_94980[iParam1] = 141;
			}
		}
		if (fVar10 < 100f && !func_388(*iParam0, unk_0xE2D3D51028F0428A()))
		{
			if (Global_94980[iParam1] != 138)
			{
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 1))
				{
					if (iVar1 == 2)
					{
						iVar11 = unk_0x5355BAA621C153CF(*iParam0, 4);
						if (iVar11 == 25)
						{
							while (((!func_249(*iParam0, 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(*iParam0, 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								wait(0);
							}
						}
					}
					func_241(iParam1);
					Global_94980[iParam1] = 138;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(*iParam0, 0))
		{
			unk_0x3E3D339BAD67F6F2(*iParam0, 124, 1);
			unk_0x3E3D339BAD67F6F2(*iParam0, 62, 1);
			if (unk_0x174CED88B97C78D9(*iParam0, 713668775) != 0 || unk_0x174CED88B97C78D9(*iParam0, 713668775) != 1)
			{
				if (func_103(iParam1, &uVar12))
				{
					unk_0x54E818A233B540D4(*iParam0, uVar12);
				}
			}
			*uParam5 = unk_0x6D7EE245AD1E10B0(*iParam0);
			if (Global_99695 == *iParam0)
			{
				if (Global_94980[iParam1] != 140)
				{
					if (!func_89())
					{
						Global_99695 = 0;
					}
				}
			}
		}
		if (!unk_0xF68107C40359970C(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0xE5965CDF24F93A9F(iParam1))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0) && !unk_0x55B23FE400FCEA6B(iParam1, 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0) && unk_0xD5C6B5E3B93A5EDC(iParam1, 0))
			{
				iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
				iVar1 = unk_0xB3FF0049C1FD38EC(iParam1, 0);
				if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0xE5965CDF24F93A9F(iVar1))
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

void func_389(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (iParam0 == iParam3)
	{
		return;
	}
	if (iParam0 == 76)
	{
		return;
	}
	if (iParam3 == 76)
	{
		return;
	}
	Global_42597[iParam0 /*5*/] = { Param1 };
	Global_42597[iParam0 /*5*/].f_3 = fParam2;
	Global_42597[iParam0 /*5*/].f_4 = iParam3;
}

int func_390(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112915.f_7688.f_764)
	{
		if (Global_112915.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
		if (!unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) || unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
		{
			switch (func_392(Var0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}

int func_392(struct<3> Param0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_95177[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam1 || unk_0xE2D0C323A1AE5D85(Global_112915.f_7229.f_11[iVar0], 0))
			{
				fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Global_95177[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_393(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_29(iParam1))
	{
		iVar0 = func_79(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, uParam3, 0, 0);
			unk_0xDCB52C614B3660EC(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*uParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*uParam0, 5, 2, 0, 0);
				}
			}
			func_394(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_394(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_95808[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_395(int iParam0, bool bParam1)
{
	func_408(iParam0);
	func_401(iParam0, bParam1);
	func_400(iParam0);
	func_399(iParam0);
	func_398(iParam0);
	func_397(iParam0);
	func_396(iParam0);
}

void func_396(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (iParam0 == unk_0xE2D3D51028F0428A())
		{
			Global_112915.f_2363.f_539.f_2328[iVar0] = unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9());
		}
	}
}

void func_397(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_112915.f_2363.f_539.f_2318[iVar0 /*3*/] = { unk_0xC35FBD95659582C4(iParam0) };
	}
}

void func_398(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3)
		{
			if (unk_0xEEFB36B938654045() == 8)
			{
				return;
			}
		}
		Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/] = { unk_0x6B62510F212526DC(iParam0, 1) };
		Global_112915.f_2363.f_539.f_2310[iVar0] = unk_0x82FE2343F8BDFF0B(iParam0);
		Global_112915.f_2363.f_539.f_2314[iVar0] = unk_0x782B98242B6BBB25(iParam0);
		if (Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/] >= 8000f)
		{
			Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/] = 7500f;
		}
		else if (Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/] <= -8000f)
		{
			Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/] = -7500f;
		}
		if (Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_112915.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_112915.f_2363.f_539.f_294[iVar0] = unk_0x28E4040BE8C027EF(iParam0);
	}
}

void func_400(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_112915.f_2363.f_539.f_290[iVar0] = (((to_float(unk_0x0CF63873D754B965(iParam0)) - 100f) / (to_float(unk_0x3C739E920862F79E(iParam0)) - 100f)) * 100f);
	}
}

void func_401(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (iParam0 == unk_0xE2D3D51028F0428A())
		{
			func_402(iParam0, &(Global_112915.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_112915.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x48EE6C0E28668C6B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xC965A5495F599392();
					if (Global_112915.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_112915.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x5A52EDE69663AB67(unk_0x9E2D6C50374FCFA9(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_402(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_407(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xCB497F652ACB2DD3(iParam0, func_407(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4);
					Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_405(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x54B42DEC4CAB3D41(iParam0, Var4, iVar2))
						{
							unk_0xCED9E32812D6C7C7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_405(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xEFF3ECB899FC93AC();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x75BACF95335672B8(iVar5, &Var7) && !func_404(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x1B5C8EE302FC0D1E(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4);
					if (unk_0x8FEA2E94638F9767(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4);
						Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xA67AEA8BBDC78F33(iVar5))
					{
						if (unk_0xD6677A8863DC6340(iVar5, iVar1, &Var8))
						{
							if (!func_403(Var8.f_3))
							{
								if (unk_0x54B42DEC4CAB3D41(iParam0, Var4, Var8.f_3))
								{
									unk_0xCED9E32812D6C7C7(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x8FEA2E94638F9767(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_404(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case -618237638:
			case 406929569:
			case 1171102963:
				return 1;
				break;
			}
	}
	return 0;
}

int func_405(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = 1657753414;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = 2012362801;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = -242322891;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_406(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x8C780BEF2D6DB238(iVar1))
					{
						if (unk_0x45F755B731A742D2(iVar1, iVar2, &Var5))
						{
							if (!func_403(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_406(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x501053EBAB36DB66();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4CD88D794E108BEC(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_407(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_29(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_112915.f_2363.f_539.f_2296[iVar0] = func_150();
	}
}

int func_409(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		
		case 1:
			return "TRACEY";
			break;
		
		case 2:
			return "AMANDA";
			break;
		
		case 3:
			return "MAID";
			break;
		
		case 4:
			return "GARDENER";
			break;
		
		case 5:
			return "DENISE";
			break;
		
		case 6:
			return "LAMAR";
			break;
		
		case 7:
			return "STRETCH";
			break;
		
		case 10:
			return "NERVOUSRON";
			break;
		
		case 8:
			return "MICHAEL";
			break;
		
		case 9:
			return "TREVOR";
			break;
		
		case 11:
			return "PATRICIA";
			break;
		
		case 12:
			return "TREVORMOM";
			break;
		
		case 13:
			return "FLOYD";
			break;
		
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 138:
		case 140:
			return 0;
			break;
		
		case 0:
		case 2:
		case 3:
		case 1:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 85);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 41);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
			}
			break;
		
		case 5:
		case 8:
		case 10:
			func_412(iParam0, 131);
			return 1;
			break;
		
		case 21:
			func_412(iParam0, 133);
			return 1;
			break;
		
		case 18:
		case 6:
		case 16:
		case 9:
		case 17:
		case 11:
		case 24:
			func_412(iParam0, 131);
			return 1;
			break;
		
		case 7:
		case 22:
		case 23:
		case 20:
			func_412(iParam0, 132);
			return 1;
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 28:
			func_412(iParam0, 37);
			return 1;
			break;
		
		case 43:
		case 42:
		case 34:
		case 38:
			func_412(iParam0, 42);
			return 1;
			break;
		
		case 29:
		case 30:
		case 35:
		case 44:
		case 45:
			func_412(iParam0, 40);
			return 1;
			break;
		
		case 39:
		case 40:
			func_412(iParam0, 38);
			return 1;
			break;
		
		case 31:
			func_412(iParam0, 43);
			return 1;
			break;
		
		case 26:
		case 46:
			func_412(iParam0, 39);
			return 1;
			break;
		
		case 41:
		case 37:
		case 27:
		case 36:
			func_412(iParam0, 34);
			return 1;
			break;
		
		case 33:
		case 32:
			func_412(iParam0, 41);
			return 1;
			break;
		
		case 54:
		case 70:
			func_412(iParam0, 87);
			return 1;
			break;
		
		case 48:
		case 68:
			func_412(iParam0, 84);
			return 1;
			break;
		
		case 65:
		case 64:
			func_412(iParam0, 85);
			return 1;
			break;
		
		case 66:
			func_412(iParam0, 86);
			return 1;
			break;
		
		case 49:
		case 59:
		case 72:
		case 60:
		case 73:
			func_412(iParam0, 80);
			return 1;
			break;
		
		case 47:
		case 58:
			switch (iParam1)
			{
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 51:
		case 52:
		case 67:
			func_412(iParam0, 82);
			return 1;
			break;
		
		case 53:
			func_412(iParam0, 83);
			return 1;
			break;
		
		case 61:
		case 62:
		case 55:
			func_412(iParam0, 85);
			return 1;
			break;
		
		case 63:
		case 71:
			func_412(iParam0, 86);
			return 1;
			break;
		
		case 50:
		case 69:
		case 57:
		case 56:
			switch (iParam1)
			{
				case 0:
					unk_0xDCB52C614B3660EC(iParam0);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 37);
					return 1;
					break;
				
				case 2:
					func_412(iParam0, 79);
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 2:
					func_412(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 35);
					return 1;
					break;
				
				case 0:
					func_412(iParam0, 131);
					return 1;
					break;
			}
			break;
		
		case 19:
			func_412(iParam0, 134);
			return 1;
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					func_412(iParam0, 134);
					return 1;
					break;
				
				case 1:
					func_412(iParam0, 42);
					return 1;
					break;
			}
			break;
		
		case 95:
			unk_0xDCB52C614B3660EC(iParam0);
			unk_0xE3752B10DC995E95(iParam0, 0, 0, 1, 0);
			unk_0xD9D122A54FFE62B8(iParam0, 1, 0, 0, false);
			return 1;
			break;
		
		case 97:
		case 94:
		case 96:
		case 98:
			unk_0xDCB52C614B3660EC(iParam0);
			unk_0x920BB8B58BB3563A(iParam0, 1);
			return 1;
			break;
		
		case 113:
			func_249(iParam0, 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		
		case 115:
			func_249(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		
		case 126:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 128:
		case 129:
			func_412(iParam0, 159);
			return 1;
			break;
		
		case 127:
		case 135:
			func_412(iParam0, 161);
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 4:
			unk_0xE3752B10DC995E95(iParam0, 0, 0, 1, 0);
			unk_0xE3752B10DC995E95(iParam0, 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(iParam0, 4, 1, 1, 0);
			unk_0xE3752B10DC995E95(iParam0, 8, 1, 0, 0);
			unk_0xD9D122A54FFE62B8(iParam0, 0, 0, 1, false);
			return 1;
			break;
		
		case 10:
			unk_0xDCB52C614B3660EC(iParam0);
			unk_0xD9D122A54FFE62B8(iParam0, 0, 0, 0, false);
			unk_0xD9D122A54FFE62B8(iParam0, 1, 0, 0, false);
			if (iParam2 != 101)
			{
				unk_0x920BB8B58BB3563A(iParam0, 2);
			}
			else
			{
				unk_0xD9D122A54FFE62B8(iParam0, 2, 0, 0, false);
			}
			return 1;
			break;
		
		case 8:
		case 9:
			if (iParam2 == 108)
			{
				iVar0 = 12;
				iVar1 = 32;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3816[0 /*166*/][iVar0 /*11*/][(iVar1 / 32)], (iVar1 % 32)))
				{
					func_249(iParam0, 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			return 1;
			break;
		
		case 6:
			return 1;
			break;
	}
	unk_0xDCB52C614B3660EC(iParam0);
	return 0;
}

void func_412(int iParam0, int iParam1)
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
	var uVar12;
	
	if (func_414(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_413(iParam0, iVar0);
		func_413(iParam0, iVar1);
		func_413(iParam0, iVar2);
		func_413(iParam0, iVar3);
		func_413(iParam0, iVar4);
		func_413(iParam0, iVar5);
		func_413(iParam0, iVar6);
		func_413(iParam0, iVar7);
		func_413(iParam0, iVar8);
		func_413(iParam0, iVar9);
		func_413(iParam0, iVar10);
		func_413(iParam0, iVar11);
		if (func_211(uVar12, 1))
		{
			unk_0x9C726995FD3F93EB(iParam0);
		}
		if (func_211(uVar12, 2))
		{
			unk_0x9C726995FD3F93EB(iParam0);
			unk_0xD9D122A54FFE62B8(iParam0, 1, 0, 0, false);
		}
		if (func_211(uVar12, 4))
		{
			unk_0x9C726995FD3F93EB(iParam0);
			unk_0xD9D122A54FFE62B8(iParam0, 1, 1, 0, false);
		}
	}
}

void func_413(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (func_106(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		unk_0xE3752B10DC995E95(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

int func_414(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 4);
			return 1;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 2);
			return 1;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 4);
			return 1;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 2);
			return 1;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_210(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

int func_415(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_29(iParam1))
	{
		iVar0 = func_26(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, uParam3, 0, 0);
			func_623(*uParam0, iParam1, bParam5);
			unk_0x9B78B16AC295162F(*uParam0, 0, 0);
			func_616(*uParam0);
			func_605(*uParam0, 1, 0);
			func_604(*uParam0);
			func_601(*uParam0);
			func_417(*uParam0, bParam6);
			func_416(*uParam0);
			if (bParam4)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_416(int iParam0)
{
	int iVar0;
	
	if (unk_0xF68107C40359970C(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97343[iVar0]) && Global_97343[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97343[iVar0]))
		{
			Global_97343[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_417(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_25(iParam0);
	if (func_600(iVar0))
	{
		func_599(iVar0, 0);
		func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_421(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_419(iParam0))
		{
			func_599(iVar0, 0);
			func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_421(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_112915.f_9085.f_99.f_58[120] && !Global_112915.f_9085.f_99.f_58[122])
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_112915.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_112915.f_9085.f_99.f_58[123])
			{
				Global_112915.f_9085.f_99.f_58[123] = 0;
				if (!unk_0xF68107C40359970C(iParam0))
				{
					if (func_251(iParam0, 3, 169))
					{
						func_249(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 20))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 20))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 21))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 21))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 22))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 22))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 10))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 50))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 59))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 22))
			{
				func_249(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 14))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_251(iParam0, 12, 13))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 13))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 14))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 14))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 15))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 15))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 4))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 3))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 82))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 76))
			{
				func_249(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 1))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 15))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_251(iParam0, 3, 71))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 18))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 18))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 19))
			{
				if (!func_418(unk_0x15CAA6D7B11F1A7C(iParam0), 12, 19))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 7))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 88))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 17))
			{
				func_249(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_418(int iParam0, int iParam1, int iParam2)
{
	Global_77663[1 /*14*/] = { func_301(iParam0, iParam1, iParam2, -1) };
	return unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1);
}

bool func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar0 = func_290(iParam0, 4);
	return func_420(iVar1, 4, iVar0);
}

int func_420(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = func_25(iParam0);
		if (func_29(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_259(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_598(iVar0);
					func_432(iParam0, &(Global_112915.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_428(iParam0, &Var2, 1, -1);
			Global_99699[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0xE2D3D51028F0428A())
			{
				func_423();
			}
			if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) != unk_0x2E87280918B16506("clothes_shop_sp") || (unk_0xB4C854DD86E40FDA(joaat("lester1")) == 0 && unk_0xB4C854DD86E40FDA(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_24(0) && !func_24(1)) && !func_24(2)) && !func_24(3)) && !func_24(4)) && !func_24(9)) && !func_24(10)))
				{
					Global_112915.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_112915.f_2363.f_539.f_2391[iVar0] = func_422(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_112915.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = func_290(iParam0, func_284(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_112915.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = func_290(iParam0, func_284(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_112915.f_9085.f_99.f_58[121])
						{
							Global_112915.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_422(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0x37684F94E628D1AC(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x91E7DA9EAFFB9499(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x83174885C2F9E9D2(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x7827F3E641387AB3(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_423()
{
	struct<50> Var0;
	
	if ((unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) || !func_29(func_22())) || !func_425())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_428(unk_0xE2D3D51028F0428A(), &Var0, 1, -1);
	func_424(1306, Var0[0], -1);
	func_424(1307, Var0[1], -1);
	func_424(1308, Var0[2], -1);
	func_424(1309, Var0[3], -1);
	func_424(1310, Var0[4], -1);
	func_424(1311, Var0[5], -1);
	func_424(1312, Var0[6], -1);
	func_424(1313, Var0[7], -1);
	func_424(1314, Var0[8], -1);
	func_424(1315, Var0[9], -1);
	func_424(1316, Var0[10], -1);
	func_424(1317, Var0[11], -1);
	func_424(1318, Var0.f_13[0], -1);
	func_424(1319, Var0.f_13[1], -1);
	func_424(1320, Var0.f_13[2], -1);
	func_424(1321, Var0.f_13[3], -1);
	func_424(1322, Var0.f_13[4], -1);
	func_424(1323, Var0.f_13[5], -1);
	func_424(1324, Var0.f_13[6], -1);
	func_424(1325, Var0.f_13[7], -1);
	func_424(1326, Var0.f_13[8], -1);
	func_424(1327, Var0.f_13[9], -1);
	func_424(1328, Var0.f_13[10], -1);
	func_424(1329, Var0.f_13[11], -1);
	func_424(1330, Var0.f_26[0], -1);
	func_424(1331, Var0.f_26[1], -1);
	func_424(1332, Var0.f_26[2], -1);
	func_424(1333, Var0.f_26[3], -1);
	func_424(1334, Var0.f_26[4], -1);
	func_424(1335, Var0.f_26[5], -1);
	func_424(1336, Var0.f_26[6], -1);
	func_424(1337, Var0.f_26[7], -1);
	func_424(1338, Var0.f_26[8], -1);
	func_424(1339, Var0.f_26[9], -1);
	func_424(1340, Var0.f_26[10], -1);
	func_424(1341, Var0.f_26[11], -1);
	func_424(1342, Var0.f_39[0], -1);
	func_424(1343, Var0.f_39[1], -1);
	func_424(1344, Var0.f_39[2], -1);
	func_424(1345, Var0.f_39[3], -1);
	func_424(1346, Var0.f_39[4], -1);
	func_424(1347, Var0.f_39[5], -1);
	func_424(1348, Var0.f_39[6], -1);
	func_424(1349, Var0.f_39[7], -1);
	func_424(1350, Var0.f_39[8], -1);
	func_424(1351, Var0.f_49[0], -1);
	func_424(1352, Var0.f_49[1], -1);
	func_424(1353, Var0.f_49[2], -1);
	func_424(1354, Var0.f_49[3], -1);
	func_424(1355, Var0.f_49[4], -1);
	func_424(1356, Var0.f_49[5], -1);
	func_424(1357, Var0.f_49[6], -1);
	func_424(1358, Var0.f_49[7], -1);
	func_424(1359, Var0.f_49[8], -1);
	func_424(1360, func_22(), -1);
	unk_0x41483427EFBC0047(joaat("clo_stored_initial"), 1, 1);
	Global_112915.f_2363.f_539.f_4315 = 1;
}

void func_424(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_296();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

int func_425()
{
	if (func_427() && func_426(0))
	{
		return 1;
	}
	return 0;
}

var func_426(int iParam0)
{
	return Global_1574536[iParam0];
}

var func_427()
{
	return func_426(func_296() + 1);
}

void func_428(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_431(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_430(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_29(iVar0))
		{
			uParam1->f_59 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x9315DBF7D972F07A() && unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			if (func_429(161, iParam3))
			{
				uParam1->f_59 = func_297(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_297(753, iParam3, 0);
			}
			uParam1->f_60 = func_297(754, iParam3, 0);
			uParam1->f_61 = func_297(755, iParam3, 0);
		}
		if (unk_0x9315DBF7D972F07A() && iParam0 == unk_0xE2D3D51028F0428A())
		{
			if (func_429(161, iParam3))
			{
				uParam1->f_59 = func_297(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_297(753, iParam3, 0);
			}
		}
	}
}

int func_429(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_295(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_430(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xF2BC143F97765619(iParam0, iParam1);
		*uParam3 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x5540488889EC816A(iParam0) && unk_0x88FED828C9DFBE76(iParam0) != -1)
				{
					*uParam2 = unk_0x88FED828C9DFBE76(iParam0);
					*uParam3 = unk_0x2FB3EE2B80255AFD(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_431(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x5355BAA621C153CF(iParam0, iParam1);
		*uParam3 = unk_0xF1050E548C37F4A5(iParam0, iParam1);
		*uParam4 = unk_0x272AB65A4E7277B4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_432(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0xF68107C40359970C(iParam0) || iParam5)
	{
		iVar0 = func_25(iParam0);
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x37684F94E628D1AC(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x91E7DA9EAFFB9499(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0xE3752B10DC995E95(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x83174885C2F9E9D2(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x7827F3E641387AB3(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0xD9D122A54FFE62B8(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x920BB8B58BB3563A(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_29(iVar0))
		{
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_258(iParam0, iVar1, &iVar2, 0))
			{
				func_249(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_250(iParam0, iVar1, &iVar2))
			{
				func_249(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x9315DBF7D972F07A() && unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			bVar4 = func_596(iParam0);
			func_294(754, uParam1->f_60, Global_77660, 1, 0);
			func_294(755, uParam1->f_61, Global_77660, 1, 0);
			iVar5 = func_291(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_594(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_592(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_435(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_77660, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_291(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_435(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_77660, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_275(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_435(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_77660, bVar4, 0, 0);
			}
		}
		if (unk_0x9315DBF7D972F07A() && iParam0 == unk_0xE2D3D51028F0428A())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_594(iVar9);
			}
			else
			{
				iVar9 = func_592(iVar9);
			}
			func_294(753, iVar9, Global_77660, 1, 0);
			func_294(2053, iVar9, Global_77660, 1, 0);
			func_433(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x748EF68A43BBBC6C(iParam0, 1, unk_0x5355BAA621C153CF(iParam0, 1), unk_0xF1050E548C37F4A5(iParam0, 1));
			iVar11 = unk_0x7ABBACADFB201C3A(iParam0, 1, unk_0xF2BC143F97765619(iParam0, 1), unk_0x7252A84ECED5E1D4(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!unk_0x036D1EA7243F2CCC(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					unk_0x1CF199D23D4DFAE4(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						unk_0xC99CE91134872039(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						unk_0xC99CE91134872039(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					unk_0xD9D122A54FFE62B8(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x036D1EA7243F2CCC(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				unk_0x920BB8B58BB3563A(iParam0, 1);
			}
		}
	}
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_434())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_295(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_434()
{
	return 1;
	return 0;
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	var uVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	var uVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	var uVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		if ((Global_1574979 != 4 && Global_1574979 != 5) && Global_1574979 != 7)
		{
			return 0;
		}
	}
	if (unk_0xF68107C40359970C(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0xE2D3D51028F0428A() && Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77660;
	}
	Global_77661++;
	iVar5 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77663[1 /*14*/] = { func_559(iVar5, iParam1, iParam2, -1) };
		if (!func_300(iParam3))
		{
			Global_77661 = (Global_77661 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77661 > 1)
		{
		}
		else
		{
			func_557(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2883588;
		uVar14 = Global_2883589;
		unk_0x9C726995FD3F93EB(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77706 };
		}
		else
		{
			uVar15 = { func_282(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77663[1 /*14*/] = { func_559(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_260(iVar0)));
					}
					else
					{
						unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
					{
						func_557(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77663[1 /*14*/] = { func_559(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_77723 };
							}
							else
							{
								uVar16 = { func_279(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77663[1 /*14*/] = { func_559(iVar5, 14, uVar16[iVar1], -1) };
								func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
								if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
								{
									func_557(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_260(iVar0)));
								}
								else
								{
									unk_0xE3752B10DC995E95(iParam0, func_260(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_435(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
							{
								func_557(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77663[1 /*14*/] = { func_559(iVar5, iVar0, func_556(iParam0, iVar0, -1), -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_282(iVar5, 0) };
					func_435(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xE3752B10DC995E95(iParam0, 1, unk_0x5355BAA621C153CF(iParam0, 1), unk_0xF1050E548C37F4A5(iParam0, 1), 0);
		Global_2883588 = uVar13;
		Global_2883589 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_555();
			if (iVar18 != -1)
			{
				func_552(iVar18, 0, iParam10);
			}
			func_550(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_279(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77663[1 /*14*/] = { func_559(iVar5, 14, uVar19[iVar1], -1) };
			func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
			if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
			{
				func_557(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77661 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_548(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_435(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_270(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
		if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
		{
			func_557(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77663[1 /*14*/].f_12 == 0)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6) && unk_0x036D1EA7243F2CCC(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar20 = unk_0x748EF68A43BBBC6C(iParam0, 1, unk_0x5355BAA621C153CF(iParam0, 1), unk_0xF1050E548C37F4A5(iParam0, 1));
				if (unk_0x036D1EA7243F2CCC(iVar20, joaat("HAIR_SHRINK"), 0))
				{
					func_435(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77663[1 /*14*/] = { func_559(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77663[1 /*14*/].f_12 == 0)
		{
			func_542(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77661 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_548(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
					}
					iVar2++;
				}
				if (iVar3 != -99)
				{
		}